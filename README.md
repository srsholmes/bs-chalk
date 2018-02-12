# bs-chalk

Bucklescript bindings for [Chalk](https://github.com/chalk/chalk). The API is not fully supported yet, contributions welcome.

## API

```reasonml
let log = Js.log;
let blueString = Chalk.blue("This string will be blue");
log(blueString);
```

## Composing styles

```reasonml
let log = Js.log;

let (<<) = Chalk.compose;

let (>>) = Chalk.pipe;

let composedStyle = Chalk.bold << Chalk.bgRed << Chalk.underline;

log(composedStyle("This string will be bold, underlined with a red background"));

let error = Chalk.red << Chalk.bold << Chalk.underline;

log(error("This is my error"));
```

### TODO

* ES2015 tagged template literal
* rbg
* hex
* keyword
* chalk enabled
* chalk level
* chalk supportsColor
