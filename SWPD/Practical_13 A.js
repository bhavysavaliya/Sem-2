let a = parseInt(prompt(`Enter value of a`))
let b = parseInt(prompt(`Enter value of b`))
let c = parseInt(prompt(`Enter value of c`))

console.log(`your quadratic equation is ${a}x^2 + (${b})x + (${c})`);
let D = (b * b) - 4 * a * c;

console.log(`Your discriminant is ${D}`);

if (D > 0) {
    console.log(`The root of D will be real and diffrent.`);
    let r1 = (-b + Math.sqrt(D)) / (2 * a);
    let r2 = (-b - Math.sqrt(D)) / (2 * a);
    console.log(`Root 1: ${r1.toFixed(2)},Root 2: ${r2.toFixed(2)}`);
}
else if (D == 0) {
    console.log(`The root of D will be real and equal`);
    let r = -b / (2 * a);
    console.log(`Root 1 = Root 2: ${r.toFixed}`);
}
else {
    console.log(`The root of D will be complex and diffrent`);
    let real = -b / (2 * a);
    let imag = math.sqrt(-D) / (2 * a);
    console.log(`Root 1: ${real.toFixed(2)} + ${imag.toFixed(2)}i`);
    console.log(`Root 2: ${real.toFixed(2)} - ${imag.toFixed(2)}i`);
}
