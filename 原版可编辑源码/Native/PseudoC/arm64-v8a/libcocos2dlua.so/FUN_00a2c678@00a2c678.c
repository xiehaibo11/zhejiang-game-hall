
int FUN_00a2c678(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
                    /* catch() { ... } // from try @ 00a2c58c with catch @ 00a2c68c */
  uVar2 = fcntl(param_1,3,0);
  uVar1 = uVar2 & 0xfffff7ff;
  if (param_2 != 0) {
    uVar1 = uVar2 | 0x800;
  }
  iVar3 = fcntl(param_1,4,(ulong)uVar1);
  return iVar3;
}

