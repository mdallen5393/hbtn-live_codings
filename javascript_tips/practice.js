#!/usr/bin/node

// JAVASCRIPT WARMUP
// Task 0:
  let myVar = "JavaScript is amazing";
  // TODO: Show template literal strings
  console.log("Task 0:");
  console.log('\t' + myVar);

// Task 2:
  console.log("\nTask 2:");
  if (process.argv.length === 2) {
    console.log('\t' + "No argument");
  }
  if (process.argv.length === 3) {
    console.log('\t' + "Argument found");
  }
  if (process.argv.length > 3) {
    console.log('\t' + "Arguments found");
  }
  // TODO: show w3schools comparison operator table
  // TODO: Mention why argv starts at 2

// Task 3:
  console.log("\nTask 3:");
  console.log('\tPrint first argument');
  if (process.argv[2]) {
    console.log('\t\t' + process.argv[2]);
  }

  // Make this a loop:
  console.log('\n\tPrint all arguments')
  let i = 2;
  while (process.argv[i]) {
    console.log('\t\t' + process.argv[i]);
    i++;
  }

  // Print all the arguments
  console.log('\n\tPrint all args a different way?');
  for (const arg in process.argv) {
    console.log('\t\t' + arg);
  }

  // foreach
  // Why didn't this work?  What did it print?
  console.log('\n\tPrint all args a different way');
  for (const arg of process.argv) {
    console.log('\t\t' + arg);
  }

// Task 5:
  console.log('\nTask 5:');
  const parsed = parseInt(process.argv[2]);
  if (parsed) {
    console.log('\tMy number:', parseInt(process.argv[2]));
  } else {
    console.log('\tNot a number');
  }


// Task 6:
  console.log('\nTask 6');
  const arr = ['Hello', 'world,', 'you suck!'];
  let str = '\t'
  for (let i = 0; i < arr.length; i++) {
    str += arr[i] + ' ';
  }
  console.log(str);

  // How else can we do this?
  str = '\t';
  for (let i in arr) {
    str += arr[i] + ' ';
  }
  console.log(str);

  // How else can we do this?
  str = '\t';
  for (let stuff of arr) {
    str += stuff + ' ';
  }
  console.log(str);

  console.log('\t' + arr.join(' '));

// Task 12
const myObject = {
  type: 'object',
  value: 12
};
console.log(myObject);
myObject.value = 89;
console.log(myObject);