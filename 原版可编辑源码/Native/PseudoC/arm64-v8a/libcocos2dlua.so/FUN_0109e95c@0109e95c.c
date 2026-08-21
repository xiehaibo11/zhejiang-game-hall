
ulong FUN_0109e95c(long param_1,long param_2)

{
  ushort uVar1;
  undefined2 uVar2;
  ulong uVar3;
  undefined2 *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  uint local_34;
  
  uVar6 = *(undefined8 *)(param_2 + 0x38);
                    /* try { // try from 0109e988 to 0119e98f has its CatchHandler @ 0109e990 */
                    /* catch() { ... } // from try @ 0109e940 with catch @ 0109e990
                       catch() { ... } // from try @ 0109e988 with catch @ 0109e990
                       try { // try from 0109e990 to 0119e9af has its CatchHandler @ 0109e908 */
  uVar3 = (**(code **)(param_1 + 0x330))(param_1,0x67617370,param_2,0);
  local_34 = (uint)uVar3;
  if (local_34 == 0) {
    uVar3 = FT_Stream_EnterFrame(param_2,4);
    local_34 = (uint)uVar3;
    if (local_34 == 0) {
      uVar2 = FT_Stream_GetUShort(param_2);
      *(undefined2 *)(param_1 + 0x370) = uVar2;
      uVar2 = FT_Stream_GetUShort(param_2);
      *(undefined2 *)(param_1 + 0x372) = uVar2;
      FT_Stream_ExitFrame(param_2);
      if (*(ushort *)(param_1 + 0x370) < 2) {
        uVar1 = *(ushort *)(param_1 + 0x372);
        uVar5 = (ulong)uVar1;
        uVar6 = ft_mem_realloc(uVar6,4,0,uVar5,0,&local_34);
        *(undefined8 *)(param_1 + 0x378) = uVar6;
        uVar3 = (ulong)local_34;
        if (local_34 == 0) {
          uVar3 = FT_Stream_EnterFrame(param_2,uVar5 << 2);
          if ((int)uVar3 == 0) {
            local_34 = 0;
            if (uVar1 != 0) {
              puVar4 = (undefined2 *)(*(long *)(param_1 + 0x378) + 2);
              do {
                uVar2 = FT_Stream_GetUShort(param_2);
                puVar4[-1] = uVar2;
                uVar2 = FT_Stream_GetUShort(param_2);
                *puVar4 = uVar2;
                uVar5 = uVar5 - 1;
                puVar4 = puVar4 + 2;
              } while (uVar5 != 0);
            }
            FT_Stream_ExitFrame(param_2);
            uVar3 = (ulong)local_34;
          }
        }
      }
      else {
        uVar3 = 8;
        *(undefined2 *)(param_1 + 0x372) = 0;
      }
    }
  }
  return uVar3;
}

