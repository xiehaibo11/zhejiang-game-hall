
void FUN_00c20f88(long param_1,ulong param_2,ulong param_3,long param_4)

{
  ulong *puVar1;
  long lVar2;
  long lVar3;
  ulong local_8;
  
  lVar3 = *(long *)(param_1 + 0x10);
  lVar2 = *(long *)(*(long *)(lVar3 + 0x168) + 0x20);
  if (*(long *)(lVar2 + 0x20) != 0) {
    local_8 = param_2 | 0xfffa800000000000;
    if ((*(byte *)(lVar2 + 8) >> 2 & 1) != 0) {
      *(byte *)(lVar2 + 8) = *(byte *)(lVar2 + 8) & 0xfb;
      *(undefined8 *)(lVar2 + 0x18) = *(undefined8 *)(lVar3 + 0x50);
      *(long *)(lVar3 + 0x50) = lVar2;
    }
    puVar1 = (ulong *)FUN_00c1bdd4(param_1,lVar2,&local_8);
    param_3 = param_3 | param_4 << 0x2f;
    *puVar1 = param_3;
    if (param_3 == 0xffffffffffffffff) {
      *(byte *)(param_2 + 8) = *(byte *)(param_2 + 8) & 0xef;
    }
    else {
      *(byte *)(param_2 + 8) = *(byte *)(param_2 + 8) | 0x10;
    }
  }
  return;
}

