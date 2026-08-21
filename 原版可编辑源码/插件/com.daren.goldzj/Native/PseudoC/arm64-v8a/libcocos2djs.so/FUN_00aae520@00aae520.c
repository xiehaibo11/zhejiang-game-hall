
void FUN_00aae520(long param_1)

{
  long lVar1;
  byte bVar2;
  uint uVar3;
  ulong uVar4;
  ulong __n;
  
  lVar1 = param_1 + 0x20;
  *(undefined1 *)(lVar1 + ((ulong)*(byte *)(param_1 + 0x60) & 0x3f)) = 0x80;
  uVar3 = *(byte *)(param_1 + 0x60) + 1 & 0x3f;
  uVar4 = (ulong)uVar3;
  *(char *)(param_1 + 0x60) = (char)uVar3;
  if (uVar3 == 0) {
    FUN_00aae74c(param_1);
    uVar4 = (ulong)*(byte *)(param_1 + 0x60);
  }
  uVar4 = uVar4 & 0x3f;
  __n = 0x40 - uVar4;
  if (__n < 8) {
    memset((void *)(lVar1 + uVar4),0,__n);
    *(byte *)(param_1 + 0x60) = *(char *)(param_1 + 0x60) + (char)__n & 0x3f;
    FUN_00aae74c(param_1);
    uVar4 = (ulong)*(byte *)(param_1 + 0x60) & 0x3f;
    __n = 0x40 - uVar4;
  }
  memset((void *)(lVar1 + uVar4),0,__n - 8);
  uVar3 = (int)__n + (uint)*(byte *)(param_1 + 0x60) + 0x38 & 0x3f;
  *(char *)(param_1 + 0x60) = (char)uVar3;
  *(undefined1 *)(lVar1 + (ulong)uVar3) = *(undefined1 *)(param_1 + 0x1f);
  uVar3 = *(byte *)(param_1 + 0x60) + 1 & 0x3f;
  uVar4 = (ulong)uVar3;
  *(char *)(param_1 + 0x60) = (char)uVar3;
  if (uVar3 == 0) {
    FUN_00aae74c(param_1);
    uVar4 = (ulong)*(byte *)(param_1 + 0x60);
  }
  *(undefined1 *)(lVar1 + (uVar4 & 0x3f)) = *(undefined1 *)(param_1 + 0x1e);
  uVar3 = *(byte *)(param_1 + 0x60) + 1 & 0x3f;
  uVar4 = (ulong)uVar3;
  *(char *)(param_1 + 0x60) = (char)uVar3;
  if (uVar3 == 0) {
    FUN_00aae74c(param_1);
    uVar4 = (ulong)*(byte *)(param_1 + 0x60);
  }
  *(undefined1 *)(lVar1 + (uVar4 & 0x3f)) = *(undefined1 *)(param_1 + 0x1d);
  uVar3 = *(byte *)(param_1 + 0x60) + 1 & 0x3f;
  uVar4 = (ulong)uVar3;
  *(char *)(param_1 + 0x60) = (char)uVar3;
  if (uVar3 == 0) {
    FUN_00aae74c(param_1);
    uVar4 = (ulong)*(byte *)(param_1 + 0x60);
  }
  *(undefined1 *)(lVar1 + (uVar4 & 0x3f)) = *(undefined1 *)(param_1 + 0x1c);
  uVar3 = *(byte *)(param_1 + 0x60) + 1 & 0x3f;
  uVar4 = (ulong)uVar3;
  *(char *)(param_1 + 0x60) = (char)uVar3;
  if (uVar3 == 0) {
    FUN_00aae74c(param_1);
    uVar4 = (ulong)*(byte *)(param_1 + 0x60);
  }
  *(undefined1 *)(lVar1 + (uVar4 & 0x3f)) = *(undefined1 *)(param_1 + 0x1b);
  uVar3 = *(byte *)(param_1 + 0x60) + 1 & 0x3f;
  uVar4 = (ulong)uVar3;
  *(char *)(param_1 + 0x60) = (char)uVar3;
  if (uVar3 == 0) {
    FUN_00aae74c(param_1);
    uVar4 = (ulong)*(byte *)(param_1 + 0x60);
  }
  *(undefined1 *)(lVar1 + (uVar4 & 0x3f)) = *(undefined1 *)(param_1 + 0x1a);
  uVar3 = *(byte *)(param_1 + 0x60) + 1 & 0x3f;
  uVar4 = (ulong)uVar3;
  *(char *)(param_1 + 0x60) = (char)uVar3;
  if (uVar3 == 0) {
    FUN_00aae74c(param_1);
    uVar4 = (ulong)*(byte *)(param_1 + 0x60);
  }
  *(undefined1 *)(lVar1 + (uVar4 & 0x3f)) = *(undefined1 *)(param_1 + 0x19);
  uVar3 = *(byte *)(param_1 + 0x60) + 1 & 0x3f;
  uVar4 = (ulong)uVar3;
  *(char *)(param_1 + 0x60) = (char)uVar3;
  if (uVar3 == 0) {
    FUN_00aae74c(param_1);
    uVar4 = (ulong)*(byte *)(param_1 + 0x60);
  }
  *(undefined1 *)(lVar1 + (uVar4 & 0x3f)) = *(undefined1 *)(param_1 + 0x18);
  bVar2 = *(char *)(param_1 + 0x60) + 1U & 0x3f;
  *(byte *)(param_1 + 0x60) = bVar2;
  if (bVar2 != 0) {
    return;
  }
  FUN_00aae74c(param_1);
  return;
}

