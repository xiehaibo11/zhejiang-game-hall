
ulong FUN_0012872c(long param_1)

{
  char cVar1;
  ulong uVar2;
  
  cVar1 = *(char *)((long)*(undefined8 **)(param_1 + 0x18) + 9);
  if (cVar1 == '\x02') {
                    /* WARNING: Could not recover jumptable at 0x00128744. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)**(undefined8 **)(param_1 + 0x18))();
    return uVar2;
  }
  return (ulong)(cVar1 == '\0');
}

