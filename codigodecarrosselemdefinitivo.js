*{
  
  margin: 0;
  padding: 0;
  box-sizing: border-box;
  
}
body{
  display: flex;
  align-items: center;
  justify-content: center;
  min-height: 100vh;
  background: black;
}
.wrapper{
  max-width:1200px ;
 
}
.wrapper .carrossel{
  display: flex ;
  gap: 10px;
  cursor: pointer;
  overflow:hidden;
  
}
.carrossel img{
  height: 340px;
  width: calc(100% / 3);
  object-fit: cover;
  
}
.carrossel img:first-child{
  
}
.arrow{
  width: 100%;
  display: flex;
  justify-content:space-between;
  align-items: center;
  position: absolute;
  padding: 0 160px;
}
 .arrow i{
  color: #f2f2f2;
  font-size: 50px;
  cursor:pointer;
}

@media (max-width:900px){
  .carrossel img{
  
  width: calc(100% / 2);
  
  
}
.arrow{
 
  padding: 0 ;
}
}

@media (max-width:550px){
  .carrossel img{
  
  width: calc(100% / 1);
  
  
}
.arrow{
 
  padding: 0 ;
}
}



































const carrossel = document.querySelector(".carrossel");
const firstimg = carrossel.querySelectorAll("img")[0];
const arrow  = document.querySelectorAll(".arrowbox");


let firstimgwidth = firstimg.clientWidth + 14;

arrow.forEach(item => {
    item.addEventListener("click", () =>{
      console.log("clicado")
      carrossel.scrollLeft += firstimgwidth;
    
    } );
});




















