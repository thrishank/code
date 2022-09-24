const increase = document.getElementsByClassName('1')
var reset = document.getElementsByClassName('2')
var decrease = document.getElementsByClassName('3')

let sum = 0;
increase[0].addEventListener("click", function () {
    sum = sum + 1;
    num.innerHTML = sum;
    // console.log("Hello Thrishank");
});

decrease[0].addEventListener("click", function () {
    sum = sum - 1;
    num.innerHTML = sum;

});
reset[0].addEventListener("click", function () {
    sum = 0;
    num.innerHTML = sum;
});
