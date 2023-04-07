#!/usr/bin/node

const letters = ['a', 'b', 'c', 'd', 'e', 'f', 'g'];
let str = '';

console.log('Method 1: C-style for loop')
for (let i = 0; i < letters.length; i++) {
  str += letters[i];
}
console.log('\t' + str);


str = '';
console.log('Method 2: for-in loop')
for (const i in letters) {
  str += letters[i];
}
console.log('\t' + str);

str = '';
console.log('Method 3: for-of loop')
for (const letter of letters) {
  str += letter;
}
console.log('\t' + str);


str = '';
console.log('Method 4: foreach method')
letters.forEach(function (letter) {
  str += letter;
})
console.log('\t' + str);


str = '';
console.log('BONUS: join method')
str = letters.join('');
console.log('\t' + str);