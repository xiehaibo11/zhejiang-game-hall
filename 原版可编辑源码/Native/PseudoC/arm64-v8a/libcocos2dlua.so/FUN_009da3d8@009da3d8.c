
bool FUN_009da3d8(undefined8 param_1)

{
  int *piVar1;
  dirent *pdVar2;
  
                    /* try { // try from 009da3dc to 00ada433 has its CatchHandler @ 009da364 */
  piVar1 = (int *)luaL_checkudata(param_1,1,"directory metatable");
  if (*piVar1 != 0) {
    luaL_argerror(param_1,1,"closed directory");
  }
  pdVar2 = readdir(*(DIR **)(piVar1 + 2));
  if (pdVar2 == (dirent *)0x0) {
    closedir(*(DIR **)(piVar1 + 2));
                    /* try { // try from 009da448 to 00ada46b has its CatchHandler @ 009da364 */
    *piVar1 = 1;
  }
  else {
    lua_pushstring(param_1,pdVar2->d_name);
                    /* try { // try from 009da434 to 00ada447 has its CatchHandler @ 009da450 */
  }
                    /* catch() { ... } // from try @ 009da3b4 with catch @ 009da450
                       catch() { ... } // from try @ 009da434 with catch @ 009da450 */
  return pdVar2 != (dirent *)0x0;
}

