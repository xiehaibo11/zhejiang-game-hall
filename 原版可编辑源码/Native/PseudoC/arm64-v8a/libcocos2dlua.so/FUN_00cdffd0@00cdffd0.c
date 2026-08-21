
bool FUN_00cdffd0(long param_1)

{
  int iVar1;
  long *plVar2;
  
  plVar2 = *(long **)(*(long *)(param_1 + 8) + 0x60);
  if (plVar2 != (long *)0x0) {
    iVar1 = (**(code **)(*plVar2 + 0x30))();
    return iVar1 == 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_009d64e4();
}

