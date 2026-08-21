
bool FUN_00c22c7c(undefined8 param_1,uint *param_2,ulong *param_3)

{
  uint uVar1;
  bool bVar2;
  uint *puVar3;
  int iVar4;
  
  uVar1 = *param_2;
  if (((uVar1 & 0xfc000000) == 0x30000000) || (bVar2 = false, uVar1 >> 0x1c == 1)) {
    iVar4 = (int)((long)*param_3 >> 0x2f);
    if (iVar4 == -0xc) {
      return false;
    }
    if (iVar4 == -5) {
      return uVar1 >> 0x1c == 1;
    }
    bVar2 = true;
    if (iVar4 == -0xb) {
      puVar3 = (uint *)FUN_00c0eb40(param_1,*(undefined2 *)((*param_3 & 0x7fffffffffff) + 10));
      bVar2 = param_2 != puVar3;
    }
  }
  return bVar2;
}

