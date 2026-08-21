
uint FUN_00fdb2ac(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = param_2 - (param_2 & 0xfffffffffffc0000);
  return *(uint *)(*(long *)((param_2 & 0xfffffffffffc0000) + 0x10) + (uVar1 >> 7 & 0x1ffffff) * 4)
         >> (ulong)((uint)(uVar1 >> 2) & 0x1f) & 1;
}

