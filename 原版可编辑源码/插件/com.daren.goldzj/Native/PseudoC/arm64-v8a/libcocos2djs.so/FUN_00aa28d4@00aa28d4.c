
undefined8 FUN_00aa28d4(long param_1,int param_2)

{
  long *plVar1;
  long lVar2;
  ushort uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  
  lVar7 = param_1 + (long)param_2 * 0x6f8;
  lVar5 = *(long *)(lVar7 + 0xe8);
  lVar8 = (long)param_2;
  plVar1 = (long *)(lVar7 + 0xe0);
  if (lVar5 != 0) {
    lVar7 = *plVar1;
    do {
      lVar2 = lVar7 + (long)*(int *)(lVar5 + 0x2d4) * 8;
      uVar3 = *(ushort *)(lVar2 + 6);
      *(ushort *)(lVar2 + 6) = uVar3 | *(ushort *)(lVar2 + 4) & 1;
      if ((uVar3 & 1) != 0 || (*(ushort *)(lVar2 + 4) & 1) != 0) {
        uVar4 = 1;
        lVar5 = *(long *)(param_1 + lVar8 * 0x6f8 + 0x128);
        goto joined_r0x00aa29f4;
      }
      lVar5 = *(long *)(lVar5 + 0x48);
    } while (lVar5 != 0);
  }
  uVar4 = 0;
  lVar5 = *(long *)(param_1 + lVar8 * 0x6f8 + 0x128);
joined_r0x00aa29f4:
  while (lVar7 = lVar5, lVar7 != 0) {
    lVar5 = *(long *)(lVar7 + 0x2c8);
    lVar2 = *plVar1 + (long)*(int *)(lVar7 + 0x2d4) * 8;
    uVar3 = *(ushort *)(lVar2 + 6);
    *(ushort *)(lVar2 + 6) = uVar3 | *(ushort *)(lVar2 + 4) & 1;
    if ((uVar3 & 1) != 0 || (*(ushort *)(lVar2 + 4) & 1) != 0) {
      lws_ssl_remove_wsi_from_buffered_list(lVar7);
      uVar4 = 1;
    }
  }
  plVar6 = *(long **)(param_1 + lVar8 * 0x6f8 + 0x110);
  do {
    if (plVar6 == (long *)0x0) {
      return uVar4;
    }
    if ((*(short *)((long)plVar6 + 0xb5c) != *(short *)((long)plVar6 + 0xb5e)) &&
       ((*(byte *)(plVar6[1] + 0x2f4) & 1) == 0)) {
      lVar5 = *plVar1 + (long)*(int *)(plVar6[1] + 0x2d4) * 8;
      uVar3 = *(ushort *)(lVar5 + 6);
      *(ushort *)(lVar5 + 6) = uVar3 | *(ushort *)(lVar5 + 4) & 1;
      if ((uVar3 & 1) != 0 || (*(ushort *)(lVar5 + 4) & 1) != 0) {
        return 1;
      }
    }
    plVar6 = (long *)*plVar6;
  } while( true );
}

