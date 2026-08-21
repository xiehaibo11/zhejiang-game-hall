
ulong FUN_0109e558(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long local_60;
  uint local_54;
  
  uVar5 = *(undefined8 *)(param_2 + 0x38);
  *(long *)(param_1 + 0x250) = param_2;
  uVar2 = (**(code **)(param_1 + 0x330))(param_1,0x6e616d65,param_2,&local_60);
  local_54 = (uint)uVar2;
  if (local_54 == 0) {
    lVar3 = FT_Stream_Pos(param_2);
    uVar2 = FT_Stream_ReadFields(param_2,&DAT_01460488,param_1 + 0x238);
    local_54 = (uint)uVar2;
    if (local_54 == 0) {
      iVar4 = *(int *)(param_1 + 0x23c);
      uVar1 = lVar3 + (ulong)(uint)(iVar4 * 0xc) + 6;
      if ((ulong)(local_60 + lVar3) < uVar1) {
        uVar2 = 0x91;
      }
      else {
        *(undefined4 *)(param_1 + 0x23c) = 0;
        uVar5 = ft_mem_realloc(uVar5,0x20,0,iVar4,0,&local_54);
        *(undefined8 *)(param_1 + 0x248) = uVar5;
        uVar2 = (ulong)local_54;
        if ((local_54 == 0) &&
           (uVar2 = FT_Stream_EnterFrame(param_2,(ulong)(uint)(iVar4 * 0xc)), (int)uVar2 == 0)) {
          lVar6 = *(long *)(param_1 + 0x248);
          if (iVar4 == 0) {
            local_54 = 0;
            lVar7 = lVar6;
          }
          else {
            local_54 = 0;
            do {
              while ((local_54 = FT_Stream_ReadFields(param_2,&DAT_0146049c,lVar6), local_54 != 0 ||
                     ((ulong)*(ushort *)(lVar6 + 8) == 0))) {
LAB_0109e6a0:
                iVar4 = iVar4 + -1;
                lVar7 = lVar6;
                if (iVar4 == 0) goto LAB_0109e6b8;
              }
              uVar2 = lVar3 + (ulong)*(uint *)(param_1 + 0x240) + *(long *)(lVar6 + 0x10);
              *(ulong *)(lVar6 + 0x10) = uVar2;
              if ((uVar2 < uVar1) || ((ulong)(local_60 + lVar3) < uVar2 + *(ushort *)(lVar6 + 8))) {
                *(undefined8 *)(lVar6 + 0x10) = 0;
                *(undefined2 *)(lVar6 + 8) = 0;
                goto LAB_0109e6a0;
              }
              lVar6 = lVar6 + 0x20;
              iVar4 = iVar4 + -1;
              lVar7 = lVar6;
            } while (iVar4 != 0);
LAB_0109e6b8:
            lVar6 = *(long *)(param_1 + 0x248);
          }
          *(int *)(param_1 + 0x23c) = (int)((ulong)(lVar7 - lVar6) >> 5);
          FT_Stream_ExitFrame(param_2);
          *(short *)(param_1 + 0x230) = (short)*(undefined4 *)(param_1 + 0x23c);
          uVar2 = (ulong)local_54;
        }
      }
    }
  }
  return uVar2;
}

