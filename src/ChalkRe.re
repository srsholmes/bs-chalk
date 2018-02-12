[@bs.module "chalk"] external chalkBlue : string => string = "blue";

[@bs.module "chalk"] external chalkBlack : string => string = "black";

[@bs.module "chalk"] external chalkRed : string => string = "red";

[@bs.module "chalk"] external chalkGreen : string => string = "green";

[@bs.module "chalk"] external chalkYellow : string => string = "yellow";

[@bs.module "chalk"] external chalkBlue : string => string = "blue";

[@bs.module "chalk"] external chalkMagenta : string => string = "magenta";

[@bs.module "chalk"] external chalkCyan : string => string = "cyan";

[@bs.module "chalk"] external chalkWhite : string => string = "white";

[@bs.module "chalk"] external chalkGray : string => string = "gray";

[@bs.module "chalk"] external chalkRedBright : string => string = "redBright";

[@bs.module "chalk"]
external chalkGreenBright : string => string = "greenBright";

[@bs.module "chalk"]
external chalkYellowBright : string => string = "yellowBright";

[@bs.module "chalk"]
external chalkBlueBright : string => string = "blueBright";

[@bs.module "chalk"]
external chalkMagentaBright : string => string = "magentaBright";

[@bs.module "chalk"]
external chalkCyanBright : string => string = "cyanBright";

[@bs.module "chalk"]
external chalkWhiteBright : string => string = "whiteBright";

let log = Js.log;

module Chalk = {
  type t;
  let black = str => chalkBlack(str);
  let red = str => chalkRed(str);
  let green = str => chalkGreen(str);
  let yellow = str => chalkYellow(str);
  let blue = str => chalkBlue(str);
  let magenta = str => chalkMagenta(str);
  let cyan = str => chalkCyan(str);
  let white = str => chalkWhite(str);
  let gray = str => chalkGray(str);
  let redBright = str => chalkRedBright(str);
  let greenBright = str => chalkGreenBright(str);
  let yellowBright = str => chalkYellowBright(str);
  let blueBright = str => chalkBlueBright(str);
  let magentaBright = str => chalkMagentaBright(str);
  let cyanBright = str => chalkCyanBright(str);
  let whiteBright = str => chalkWhiteBright(str);
};

let hello = Chalk.cyanBright("hello");

let concat = Chalk.magenta("there");

log(hello ++ concat);