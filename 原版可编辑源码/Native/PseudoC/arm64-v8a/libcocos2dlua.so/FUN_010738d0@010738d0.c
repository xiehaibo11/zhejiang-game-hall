
ulong FUN_010738d0(long param_1,long param_2)

{
  undefined2 uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  ulong local_40;
  uint local_34;
  
  uVar4 = *(undefined8 *)(param_2 + 0x38);
  local_34 = (**(code **)(param_1 + 0x330))(param_1,0x63767420,param_2,&local_40);
  if (local_34 == 0) {
    *(ulong *)(param_1 + 0x410) = local_40 >> 1;
    uVar4 = ft_mem_realloc(uVar4,2,0,local_40 >> 1,0,&local_34);
    *(undefined8 *)(param_1 + 0x418) = uVar4;
    uVar2 = (ulong)local_34;
    if (local_34 == 0) {
      uVar2 = FT_Stream_EnterFrame(param_2,*(long *)(param_1 + 0x410) << 1);
      if ((int)uVar2 == 0) {
        lVar3 = *(long *)(param_1 + 0x410);
        local_34 = 0;
        if (0 < lVar3) {
          puVar5 = *(undefined2 **)(param_1 + 0x418);
          puVar6 = puVar5;
          do {
            uVar1 = FT_Stream_GetUShort(param_2);
            puVar7 = puVar6 + 1;
            *puVar6 = uVar1;
            puVar6 = puVar7;
          } while (puVar7 < puVar5 + lVar3);
        }
        FT_Stream_ExitFrame(param_2);
        if (*(char *)(param_1 + 0x448) == '\0') {
          uVar2 = (ulong)local_34;
        }
        else {
          uVar2 = FUN_010739d0(param_1,param_2);
        }
      }
    }
  }
  else {
    uVar2 = 0;
    *(undefined8 *)(param_1 + 0x418) = 0;
    *(undefined8 *)(param_1 + 0x410) = 0;
  }
  return uVar2;
}

