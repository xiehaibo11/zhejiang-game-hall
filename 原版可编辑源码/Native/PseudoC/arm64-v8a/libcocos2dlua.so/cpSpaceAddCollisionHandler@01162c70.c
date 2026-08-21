
void cpSpaceAddCollisionHandler(long param_1,long param_2,long param_3)

{
  long local_48;
  long lStack_40;
  code *local_38;
  code *pcStack_30;
  code *local_28;
  code *pcStack_20;
  undefined8 local_18;
  
  pcStack_30 = FUN_01162d44;
  local_38 = FUN_01162cf4;
  pcStack_20 = FUN_01162dc0;
  local_28 = FUN_01162d94;
  local_18 = 0;
  local_48 = param_2;
  lStack_40 = param_3;
  cpHashSetInsert(*(undefined8 *)(param_1 + 0xa8),param_3 * 0xc75f71e1 ^ param_2 * 0xc75f71e1,
                  &local_48,FUN_01162dec,0);
  return;
}

