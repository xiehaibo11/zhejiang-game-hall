
/* fairygui::FastSplitter::start(char const*, long, char) */

void __thiscall
fairygui::FastSplitter::start(FastSplitter *this,char *param_1,long param_2,char param_3)

{
  *(char **)this = param_1;
  *(long *)(this + 8) = param_2;
                    /* try { // try from 00ab7418 to 00bb741f has its CatchHandler @ 00ab7524 */
  this[0x18] = (FastSplitter)param_3;
  *(undefined8 *)(this + 0x10) = 0xffffffffffffffff;
                    /* try { // try from 00ab7420 to 00bb7457 has its CatchHandler @ 00ab7238 */
  return;
}

