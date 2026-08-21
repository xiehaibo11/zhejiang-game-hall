
void FUN_00d90408(long param_1)

{
  long in_x4;
  uint *in_x5;
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 600);
  (**(code **)(*(long *)(param_1 + 0x280) + 8))();
  (**(code **)(*(long *)(param_1 + 0x290) + 8))
            (param_1,*(undefined8 *)(lVar1 + 0x18),in_x4 + (ulong)*in_x5 * 8,0);
  *in_x5 = *in_x5;
  return;
}

