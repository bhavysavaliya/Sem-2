    let a = parseInt(prompt("Enter a value of a"));
    let b = parseInt(prompt("Enter a value of b"));
    let c = parseInt(prompt("Enter a value of c"));


    console.log(`Value of a is :${a}`)
    console.log(`Value of b is :${b}`)
    console.log(`Value of c is :${c}`)

    if (a > b && a > c){
        console.log(`largest num is ${a}`);
    }else if(b > a && b > c){
        console.log(`largest num is ${b}`);
    }else {
        console.log(`largest num is ${c}`);
    }