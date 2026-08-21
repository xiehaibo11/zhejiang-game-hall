
ulong FUN_012646ec(long param_1)

{
  char cVar1;
  ulong uVar2;
  
  cVar1 = *(char *)((long)*(long **)(param_1 + 0x10) + 10);
  if (cVar1 == '\x02') {
                    /* WARNING: Could not recover jumptable at 0x01264704. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(**(long **)(param_1 + 0x10) + 8))();
    return uVar2;
  }
  return (ulong)(cVar1 == '\0');
}

