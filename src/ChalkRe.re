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

[@bs.module "chalk"] external chalkHex : (string, string) => string = "hex";

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

[@bs.module "chalk"] external chalkBold : string => string = "bold";

[@bs.module "chalk"] external chalkUnderline : string => string = "underline";

[@bs.module "chalk"] external chalkBgBlack : string => string = "bgBlack";

[@bs.module "chalk"] external chalkBgRed : string => string = "bgRed";

[@bs.module "chalk"] external chalkBgGreen : string => string = "bgGreen";

[@bs.module "chalk"] external chalkBgYellow : string => string = "bgYellow";

[@bs.module "chalk"] external chalkBgBlue : string => string = "bgBlue";

[@bs.module "chalk"] external chalkBgMagenta : string => string = "bgMagenta";

[@bs.module "chalk"] external chalkBgCyan : string => string = "bgCyan";

[@bs.module "chalk"]
external chalkKeyword : (string, string, string) => string = "keyword";

[@bs.module "chalk"] external chalkBgWhite : string => string = "bgWhite";

[@bs.module "chalk"]
external chalkBgBlackBright : string => string = "bgBlackBright";

[@bs.module "chalk"]
external chalkBgRedBright : string => string = "bgRedBright";

[@bs.module "chalk"]
external chalkBgGreenBright : string => string = "bgGreenBright";

[@bs.module "chalk"]
external chalkBgYellowBright : string => string = "bgYellowBright";

[@bs.module "chalk"]
external chalkBgBlueBright : string => string = "bgBlueBright";

[@bs.module "chalk"]
external chalkBgMagentaBright : string => string = "bgMagentaBright";

[@bs.module "chalk"]
external chalkBgCyanBright : string => string = "bgCyanBright";

[@bs.module "chalk"]
external chalkBgWhiteBright : string => string = "bgWhiteBright";

[@bs.module "chalk"] external chalkReset : string => string = "reset";

[@bs.module "chalk"] external chalkBold : string => string = "bold";

[@bs.module "chalk"] external chalkDim : string => string = "dim";

[@bs.module "chalk"] external chalkItalic : string => string = "italic";

[@bs.module "chalk"] external chalkUnderline : string => string = "underline";

[@bs.module "chalk"] external chalkInverse : string => string = "inverse";

[@bs.module "chalk"] external chalkHidden : string => string = "hidden";

[@bs.module "chalk"]
external chalkStrikethrough : string => string = "strikethrough";

[@bs.module "chalk"] external chalkVisible : string => string = "visible";

module Chalk = {
  type t;
  /* Colors */
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
  let underline = str => chalkUnderline(str);
  /* Backgrounds */
  let bgBlack = str => chalkBgBlack(str);
  let bgRed = str => chalkBgRed(str);
  let bgGreen = str => chalkBgGreen(str);
  let bgYellow = str => chalkBgYellow(str);
  let bgBlue = str => chalkBgBlue(str);
  let bgMagenta = str => chalkBgMagenta(str);
  let bgCyan = str => chalkBgCyan(str);
  let bgWhite = str => chalkBgWhite(str);
  let bgBlackBright = str => chalkBgBlackBright(str);
  let bgRedBright = str => chalkBgRedBright(str);
  let bgGreenBright = str => chalkBgGreenBright(str);
  let bgYellowBright = str => chalkBgYellowBright(str);
  let bgBlueBright = str => chalkBgBlueBright(str);
  let bgMagentaBright = str => chalkBgMagentaBright(str);
  let bgCyanBright = str => chalkBgCyanBright(str);
  let bgWhiteBright = str => chalkBgWhiteBright(str);
  /* Modifiers */
  let reset = str => chalkReset(str);
  let bold = str => chalkBold(str);
  let dim = str => chalkDim(str);
  let italic = str => chalkItalic(str);
  let underline = str => chalkUnderline(str);
  let inverse = str => chalkInverse(str);
  let hidden = str => chalkHidden(str);
  let strikethrough = str => chalkStrikethrough(str);
  let visible = str => chalkVisible(str);
  /* utils */
  let compose = (f, g, x) => f(g(x));
  let pipe = (f, g, x) => g(f(x));
  /* Truecolor support */
  let hex = (hex, str) => {
    let myHex = hex;
    chalkHex(myHex, str);
  };
};