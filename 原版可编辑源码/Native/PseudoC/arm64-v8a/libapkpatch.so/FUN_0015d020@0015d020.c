
ulong FUN_0015d020(long param_1)

{
  char cVar1;
  ulong uVar2;
  
  cVar1 = *(char *)((long)*(long **)(param_1 + 0x10) + 0xb);
  if (cVar1 == '\x02') {
                    /* WARNING: Could not recover jumptable at 0x0015d03c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(**(long **)(param_1 + 0x10) + 0x10))();
    return uVar2;
  }
  return (ulong)(cVar1 == '\0');
}

