
long __frame_state_for(long param_1,long param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  undefined8 *puVar4;
  long lVar5;
  char *pcVar6;
  undefined1 auStack_a40 [792];
  long local_728;
  undefined8 local_700;
  undefined8 local_6f0;
  undefined8 local_680;
  char local_678 [1568];
  undefined8 local_58;
  undefined2 local_50;
  int local_40;
  undefined2 local_18;
  undefined8 local_8;
  
  memset(auStack_a40,0,0x3c0);
  local_700 = 0x4000000000000000;
  local_728 = param_1 + 1;
  iVar2 = FUN_012713c0(auStack_a40,&local_680);
  lVar5 = 0;
  if ((iVar2 == 0) && (local_40 != 2)) {
    pcVar3 = local_678;
    pcVar6 = (char *)(param_2 + 0x334);
    puVar4 = (undefined8 *)(param_2 + 0x20);
    do {
      cVar1 = *pcVar3;
      *pcVar6 = cVar1;
      if ((cVar1 == '\x01') || (cVar1 == '\x02')) {
        *puVar4 = *(undefined8 *)(pcVar3 + -8);
      }
      else {
        *puVar4 = 0;
      }
      pcVar3 = pcVar3 + 0x10;
      pcVar6 = pcVar6 + 1;
      puVar4 = puVar4 + 1;
    } while (pcVar3 != (char *)&local_58);
    *(undefined8 *)(param_2 + 0x10) = local_58;
    *(undefined2 *)(param_2 + 0x330) = local_50;
    *(undefined2 *)(param_2 + 0x332) = local_18;
    *(undefined8 *)(param_2 + 0x18) = local_6f0;
    *(undefined8 *)(param_2 + 8) = local_8;
    lVar5 = param_2;
  }
  return lVar5;
}

