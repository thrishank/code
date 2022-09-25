let elem1 = document.getElementsByTagName('button')
let number = 0
for (let i = 0; i < 10; i++) {
    elem1[i].addEventListener("click", function () {
        num.innerHTML = i;
    })
}

let elem2 = document.getElementsByClassName("clear")
elem2[0].addEventListener("click", function () {
    num.innerHTML = "___";
})
