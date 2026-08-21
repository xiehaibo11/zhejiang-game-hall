
undefined8
lws_callback_all_protocol_vhost_args
          (long param_1,long param_2,undefined4 param_3,undefined8 param_4,undefined8 param_5)

{
  bool bVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  
  lVar5 = *(long *)(param_1 + 0x150);
  if (*(short *)(lVar5 + 0xca6) != 0) {
    plVar6 = (long *)(lVar5 + 0xe0);
    iVar4 = *(short *)(lVar5 + 0xca6) + -1;
    if (param_2 == 0) {
      do {
        uVar3 = *(uint *)(plVar6 + 0xdd);
        if (uVar3 != 0) {
          lVar7 = 0;
          uVar8 = 0;
          do {
            while ((lVar2 = *(long *)(*(long *)(lVar5 + 0x828) + (long)*(int *)(*plVar6 + lVar7) * 8
                                     ), lVar2 != 0 && (*(long *)(lVar2 + 0x228) == param_1))) {
              (**(code **)(*(long *)(lVar2 + 0x248) + 8))
                        (lVar2,param_3,*(undefined8 *)(lVar2 + 0x270),param_4,param_5);
              uVar3 = *(uint *)(plVar6 + 0xdd);
              uVar8 = uVar8 + 1;
              lVar7 = lVar7 + 8;
              if (uVar3 <= uVar8) goto LAB_01042b60;
            }
            uVar8 = uVar8 + 1;
            lVar7 = lVar7 + 8;
          } while (uVar8 < uVar3);
        }
LAB_01042b60:
        plVar6 = plVar6 + 0xdf;
        bVar1 = iVar4 != 0;
        iVar4 = iVar4 + -1;
      } while (bVar1);
    }
    else {
      do {
        uVar3 = *(uint *)(plVar6 + 0xdd);
        if (uVar3 != 0) {
          lVar7 = 0;
          uVar8 = 0;
          do {
            lVar2 = *(long *)(*(long *)(lVar5 + 0x828) + (long)*(int *)(*plVar6 + lVar7) * 8);
            if (((lVar2 != 0) && (*(long *)(lVar2 + 0x228) == param_1)) &&
               (*(long *)(lVar2 + 0x248) == param_2)) {
              (**(code **)(param_2 + 8))
                        (lVar2,param_3,*(undefined8 *)(lVar2 + 0x270),param_4,param_5);
              uVar3 = *(uint *)(plVar6 + 0xdd);
            }
            uVar8 = uVar8 + 1;
            lVar7 = lVar7 + 8;
          } while (uVar8 < uVar3);
        }
        plVar6 = plVar6 + 0xdf;
        bVar1 = iVar4 != 0;
        iVar4 = iVar4 + -1;
      } while (bVar1);
    }
  }
  return 0;
}

