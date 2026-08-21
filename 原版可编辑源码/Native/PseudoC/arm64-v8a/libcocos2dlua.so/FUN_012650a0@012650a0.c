
ulong FUN_012650a0(long param_1)

{
  char cVar1;
  ulong uVar2;
  
  cVar1 = *(char *)((long)*(undefined8 **)(param_1 + 0x10) + 9);
  if (cVar1 == '\x02') {
                    /* WARNING: Could not recover jumptable at 0x012650b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)**(undefined8 **)(param_1 + 0x10))();
    return uVar2;
  }
  return (ulong)(cVar1 == '\0');
}

