let btn = document.querySelector("#btn");
let body = document.querySelector("body");

let isDark = false;

btn.addEventListener("click", () => {
    if (isDark) {
        body.style.backgroundColor = "white";
        isDark = false;
    } else {
        body.style.backgroundColor = "black";
        isDark = true;
    }
});