
void cpSpaceAddWildcardHandler(long param_1,long param_2)

{
  long local_48 [2];
  code *local_38;
  code *pcStack_30;
  code *local_28;
  code *pcStack_20;
  undefined8 local_18;
  
  if (*(char *)(param_1 + 0xa4) == '\0') {
    *(undefined1 *)(param_1 + 0xa4) = 1;
    *(undefined8 *)(param_1 + 0xe0) = 0;
    *(code **)(param_1 + 200) = FUN_01162d44;
    *(code **)(param_1 + 0xc0) = FUN_01162cf4;
    *(code **)(param_1 + 0xd8) = FUN_01162dc0;
    *(code **)(param_1 + 0xd0) = FUN_01162d94;
    *(undefined8 *)(param_1 + 0xb8) = 0xffffffffffffffff;
    *(undefined8 *)(param_1 + 0xb0) = 0xffffffffffffffff;
  }
  local_48[1] = 0xffffffffffffffff;
  pcStack_30 = FUN_01162538;
  local_38 = FUN_01162538;
  pcStack_20 = FUN_01162540;
  local_28 = FUN_01162540;
  local_18 = 0;
  local_48[0] = param_2;
  cpHashSetInsert(*(undefined8 *)(param_1 + 0xa8),param_2 * 0xc75f71e1 ^ 0xffffffff38a08e1f,local_48
                  ,FUN_01162dec,0);
  return;
}

