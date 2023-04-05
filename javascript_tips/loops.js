#!/usr/bin/node

const letters = ['a', 'b', 'c', 'd', 'e', 'f', 'g'];
let str = '';

// Standard for loop
console.log("standard for loop:");
for (let i = 0; i < letters.length; i++) {
  str += letters[i];
}
console.log(str);

// for..in loop
str = '';
console.log("\nfor..in loop:");
for (const letter in letters) {
  str += letter;
}
console.log(str + ' <-- WRONG'); // FIXME: Why does this print wrong?

str = '';
for (const i in letters) {
  str += letters[i];
}
console.log(str);

// for..of loop
str = '';
console.log("\nfor..of loop:");
for (const letter of letters) {
  str += letter;
}
console.log(str);

// foreach method
str = '';
console.log("\nforeach method")
letters.forEach(function (letter) {
  str += letter;
})
console.log(str);

// BONUS: join method
console.log("\nBONUS: join method")
str = letters.join('');
console.log(str);
