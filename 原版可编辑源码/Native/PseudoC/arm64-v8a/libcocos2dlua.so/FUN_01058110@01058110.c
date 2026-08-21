
ulong FUN_01058110(undefined8 param_1,long *param_2,long param_3)

{
  int iVar1;
  
                    /* try { // try from 01058118 to 01158127 has its CatchHandler @ 01058294 */
  param_2[2] = param_3;
  param_2[3] = 0;
  *(undefined4 *)(param_2 + 0x15) = 0;
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined1 *)((long)param_2 + 0xb6) = 0;
                    /* try { // try from 01058140 to 0115814b has its CatchHandler @ 01058274 */
  *(undefined2 *)((long)param_2 + 0xb4) = 0;
  *(undefined8 *)((long)param_2 + 0xac) = 5;
  iVar1 = lws_hdr_copy(param_1,param_2 + 5,0x80,0x1e);
  if (iVar1 < 1) {
    return 0;
  }
  *(undefined4 *)((long)param_2 + 0xac) = 1;
  iVar1 = FUN_01057f38(param_2);
                    /* try { // try from 01058164 to 0115816b has its CatchHandler @ 01058240 */
  while (iVar1 != 0) {
    *(char *)((long)param_2 + 0xb3) = *(char *)((long)param_2 + 0xb3) + '\x01';
    param_2[3] = ((param_2[1] + 1) - *param_2) + param_2[3];
    iVar1 = FUN_01057f38(param_2);
  }
  param_2[0x15] = 0x100000000;
  *(undefined1 *)((long)param_2 + 0xb2) = 0;
                    /* try { // try from 010581a8 to 011581cb has its CatchHandler @ 010582a8 */
  *(undefined2 *)(param_2 + 0x16) = 0;
  *param_2 = 0;
  param_2[1] = 0;
  if ((*(char *)((long)param_2 + 0xb4) != '\0') && (*(char *)((long)param_2 + 0xb3) == '\0')) {
    return 0xffffffff;
  }
  FUN_01057f38(param_2);
                    /* try { // try from 010581cc to 011582c3 has its CatchHandler @ 01058008 */
  return (ulong)*(byte *)((long)param_2 + 0xb3);
}

