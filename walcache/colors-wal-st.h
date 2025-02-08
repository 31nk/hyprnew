const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#0a0c0c", /* black   */
  [1] = "#302e33", /* red     */
  [2] = "#2c333f", /* green   */
  [3] = "#2c374b", /* yellow  */
  [4] = "#39393c", /* blue    */
  [5] = "#4b423f", /* magenta */
  [6] = "#3d404a", /* cyan    */
  [7] = "#8a9696", /* white   */

  /* 8 bright colors */
  [8]  = "#566969",  /* black   */
  [9]  = "#413E44",  /* red     */
  [10] = "#3B4455", /* green   */
  [11] = "#3B4A65", /* yellow  */
  [12] = "#4D4C51", /* blue    */
  [13] = "#645954", /* magenta */
  [14] = "#525663", /* cyan    */
  [15] = "#c1c2c2", /* white   */

  /* special colors */
  [256] = "#0a0c0c", /* background */
  [257] = "#c1c2c2", /* foreground */
  [258] = "#c1c2c2",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
