
void lws_rx_flow_allow_all_protocol(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  
  iVar4 = (int)*(short *)(param_1 + 0xca6);
  if (*(short *)(param_1 + 0xca6) != 0) {
    plVar5 = (long *)(param_1 + 0xe0);
    do {
      iVar4 = iVar4 + -1;
      if ((int)plVar5[0xdd] != 0) {
        lVar6 = 0;
        uVar7 = 0;
        do {
          lVar3 = *(long *)(*(long *)(param_1 + 0x828) + (long)*(int *)(*plVar5 + lVar6) * 8);
          if ((lVar3 != 0) && (*(long *)(lVar3 + 0x248) == param_2)) {
            uVar1 = *(uint *)(lVar3 + 0x2f4);
            uVar2 = (*(byte *)(lVar3 + 0x307) & 0xfe) == 0 | 2;
            *(byte *)(lVar3 + 0x307) = *(byte *)(lVar3 + 0x307) & 0xfe;
            if ((uVar2 != (uVar1 >> 7 & 3)) &&
               (*(uint *)(lVar3 + 0x2f4) = uVar1 & 0xfffffe7f | uVar2 << 7, (uVar1 >> 0x18 & 1) == 0
               )) {
              FUN_01042eb8();
            }
          }
          uVar7 = uVar7 + 1;
          lVar6 = lVar6 + 8;
        } while (uVar7 < *(uint *)(plVar5 + 0xdd));
      }
      plVar5 = plVar5 + 0xdf;
    } while (iVar4 != 0);
  }
  return;
}

