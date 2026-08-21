
void FUN_01050ca4(long param_1)

{
  long lVar1;
  byte bVar2;
  uint uVar3;
  ulong uVar4;
  ulong __n;
  
                    /* try { // try from 01050cb0 to 01150cd3 has its CatchHandler @ 01053948 */
  lVar1 = param_1 + 0x20;
  *(undefined1 *)(lVar1 + ((ulong)*(byte *)(param_1 + 0x60) & 0x3f)) = 0x80;
  uVar3 = *(byte *)(param_1 + 0x60) + 1 & 0x3f;
  uVar4 = (ulong)uVar3;
  *(char *)(param_1 + 0x60) = (char)uVar3;
  if (uVar3 == 0) {
    FUN_01050ed0(param_1);
    uVar4 = (ulong)*(byte *)(param_1 + 0x60);
  }
  uVar4 = uVar4 & 0x3f;
  __n = 0x40 - uVar4;
  if (__n < 8) {
    memset((void *)(lVar1 + uVar4),0,__n);
    *(byte *)(param_1 + 0x60) = *(char *)(param_1 + 0x60) + (char)__n & 0x3f;
    FUN_01050ed0(param_1);
    uVar4 = (ulong)*(byte *)(param_1 + 0x60) & 0x3f;
    __n = 0x40 - uVar4;
  }
  memset((void *)(lVar1 + uVar4),0,__n - 8);
                    /* try { // try from 01050d4c to 01150d5f has its CatchHandler @ 01053690 */
  uVar3 = (int)__n + (uint)*(byte *)(param_1 + 0x60) + 0x38 & 0x3f;
  *(char *)(param_1 + 0x60) = (char)uVar3;
  *(undefined1 *)(lVar1 + (ulong)uVar3) = *(undefined1 *)(param_1 + 0x1f);
                    /* try { // try from 01050d64 to 01150d8b has its CatchHandler @ 01053848 */
  uVar3 = *(byte *)(param_1 + 0x60) + 1 & 0x3f;
  uVar4 = (ulong)uVar3;
  *(char *)(param_1 + 0x60) = (char)uVar3;
  if (uVar3 == 0) {
    FUN_01050ed0(param_1);
    uVar4 = (ulong)*(byte *)(param_1 + 0x60);
  }
  *(undefined1 *)(lVar1 + (uVar4 & 0x3f)) = *(undefined1 *)(param_1 + 0x1e);
  uVar3 = *(byte *)(param_1 + 0x60) + 1 & 0x3f;
  uVar4 = (ulong)uVar3;
  *(char *)(param_1 + 0x60) = (char)uVar3;
  if (uVar3 == 0) {
    FUN_01050ed0(param_1);
    uVar4 = (ulong)*(byte *)(param_1 + 0x60);
  }
  *(undefined1 *)(lVar1 + (uVar4 & 0x3f)) = *(undefined1 *)(param_1 + 0x1d);
  uVar3 = *(byte *)(param_1 + 0x60) + 1 & 0x3f;
  uVar4 = (ulong)uVar3;
  *(char *)(param_1 + 0x60) = (char)uVar3;
                    /* try { // try from 01050dcc to 01150dcf has its CatchHandler @ 010535cc */
  if (uVar3 == 0) {
    FUN_01050ed0(param_1);
    uVar4 = (ulong)*(byte *)(param_1 + 0x60);
  }
  *(undefined1 *)(lVar1 + (uVar4 & 0x3f)) = *(undefined1 *)(param_1 + 0x1c);
  uVar3 = *(byte *)(param_1 + 0x60) + 1 & 0x3f;
  uVar4 = (ulong)uVar3;
  *(char *)(param_1 + 0x60) = (char)uVar3;
  if (uVar3 == 0) {
    FUN_01050ed0(param_1);
    uVar4 = (ulong)*(byte *)(param_1 + 0x60);
  }
  *(undefined1 *)(lVar1 + (uVar4 & 0x3f)) = *(undefined1 *)(param_1 + 0x1b);
  uVar3 = *(byte *)(param_1 + 0x60) + 1 & 0x3f;
  uVar4 = (ulong)uVar3;
  *(char *)(param_1 + 0x60) = (char)uVar3;
  if (uVar3 == 0) {
    FUN_01050ed0(param_1);
    uVar4 = (ulong)*(byte *)(param_1 + 0x60);
  }
                    /* try { // try from 01050e3c to 01150e43 has its CatchHandler @ 01053670 */
  *(undefined1 *)(lVar1 + (uVar4 & 0x3f)) = *(undefined1 *)(param_1 + 0x1a);
                    /* try { // try from 01050e44 to 01150e57 has its CatchHandler @ 0105381c */
  uVar3 = *(byte *)(param_1 + 0x60) + 1 & 0x3f;
  uVar4 = (ulong)uVar3;
  *(char *)(param_1 + 0x60) = (char)uVar3;
  if (uVar3 == 0) {
    FUN_01050ed0(param_1);
                    /* try { // try from 01050e5c to 01150e87 has its CatchHandler @ 01053938 */
    uVar4 = (ulong)*(byte *)(param_1 + 0x60);
  }
  *(undefined1 *)(lVar1 + (uVar4 & 0x3f)) = *(undefined1 *)(param_1 + 0x19);
  uVar3 = *(byte *)(param_1 + 0x60) + 1 & 0x3f;
  uVar4 = (ulong)uVar3;
  *(char *)(param_1 + 0x60) = (char)uVar3;
  if (uVar3 == 0) {
    FUN_01050ed0(param_1);
    uVar4 = (ulong)*(byte *)(param_1 + 0x60);
  }
  *(undefined1 *)(lVar1 + (uVar4 & 0x3f)) = *(undefined1 *)(param_1 + 0x18);
  bVar2 = *(char *)(param_1 + 0x60) + 1U & 0x3f;
  *(byte *)(param_1 + 0x60) = bVar2;
  if (bVar2 != 0) {
                    /* try { // try from 01050eb8 to 01150ebb has its CatchHandler @ 01053658 */
    return;
  }
  FUN_01050ed0(param_1);
  return;
}

