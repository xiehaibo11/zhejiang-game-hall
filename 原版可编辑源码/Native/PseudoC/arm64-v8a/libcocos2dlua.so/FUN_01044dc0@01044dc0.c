
void FUN_01044dc0(long param_1)

{
  undefined8 uVar1;
  
                    /* try { // try from 01044dc4 to 01144de3 has its CatchHandler @ 01045998 */
  uVar1 = 0x3d;
  switch(*(undefined1 *)(param_1 + 0x2fe)) {
  case 3:
    uVar1 = 0xb;
    break;
  case 4:
    uVar1 = 10;
                    /* try { // try from 01044df8 to 01144e07 has its CatchHandler @ 01045954 */
    break;
  default:
    uVar1 = 0x10;
    break;
  case 0xc:
    break;
  case 0xd:
    uVar1 = 0x41;
    break;
  case 0x26:
                    /* try { // try from 01044e0c to 01144e2b has its CatchHandler @ 010459a4 */
    uVar1 = 0x39;
  }
  FUN_01043028(*(undefined8 *)(*(long *)(param_1 + 0x248) + 8),param_1,uVar1,
               *(undefined8 *)(param_1 + 0x270),0,0);
  return;
}

