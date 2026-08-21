
void FUN_00c2b560(long param_1,long param_2)

{
  long lVar1;
  ulong *puVar2;
  ulong uVar3;
  
  lVar1 = *(long *)(param_2 + 0x28);
  *(long *)(param_2 + 0x28) = lVar1 + -8;
  uVar3 = *(ulong *)(lVar1 + -8);
  puVar2 = *(ulong **)(param_1 + 0x28);
  *puVar2 = uVar3;
  *(ulong **)(param_1 + 0x28) = puVar2 + 1;
  if ((int)((long)uVar3 >> 0x2f) != -5) {
    param_1 = FUN_00bfacdc();
  }
                    /* WARNING: Subroutine does not return */
  FUN_00bfb194(param_1,(uVar3 & 0x7fffffffffff) + 0x18);
}

