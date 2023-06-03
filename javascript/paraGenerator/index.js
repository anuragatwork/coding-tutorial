
let nums=0;
function generateWord(n){
   let sampleSet=['a','b','c','d','e','f','g','h','i','j','k','l','m',
   'n','o','p','q','r','s','t','u'
   ,'v','w','x','y','z'];
   let s="";
   for(let i=0;i<n;i++){
      let index=(Math.random()*25).toFixed(0);
      s=s+sampleSet[index];
   }
   return s;
}

function getInput(){
   let input = document.getElementById("noOfWords");
   let nums=( Number(input.value));
   changeData(nums);
     
}
function changeData(words){
   let cont=document.querySelector(".container");
   let ans=document.createElement("p");
   for( let i=0;i<words;i++){
      let s=generateWord(15);
      ans.innerHTML=ans.innerHTML+s;
      ans.innerHTML=ans.innerHTML+" ";
   }
   ans.classList.add("paras");
   cont.append(ans);
   
}