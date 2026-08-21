
void FUN_00a1a0fc(long param_1)

{
  undefined8 local_30;
  time_t tStack_28;
  time_t local_18;
  
  if ((*(long *)(param_1 + 0x5c8) != -1) && (*(long *)(param_1 + 0x50) != 0)) {
    if (*(long *)(param_1 + 0x70) != 0) {
      FUN_00a3557c(param_1,3,2);
    }
    time(&local_18);
    local_30 = *(undefined8 *)(param_1 + 0x5c8);
    tStack_28 = local_18;
    FUN_00a347e8(*(undefined8 *)(param_1 + 0x50),&local_30,FUN_00a1ac74);
    if (*(long *)(param_1 + 0x70) != 0) {
      FUN_00a355d4(param_1,3);
    }
  }
  return;
}

