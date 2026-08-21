
void FUN_00c087c4(long *param_1,ulong param_2,ulong param_3)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  byte bVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  
  plVar1 = (long *)(param_1[0x12] + (param_2 & 0xffffffff) * 0x18);
  plVar2 = (long *)(param_1[0x12] + (param_3 & 0xffffffff) * 0x18);
  do {
    while( true ) {
      if (plVar2 <= plVar1) {
        return;
      }
      lVar5 = *plVar1;
      if ((lVar5 == *plVar2) && ((*(byte *)((long)plVar1 + 0x11) >> 1 & 1) != 0)) break;
LAB_00c08804:
      plVar1 = plVar1 + 3;
    }
    bVar4 = *(byte *)(plVar2 + 2);
    if ((uint)*(byte *)(plVar1 + 2) < (uint)bVar4) {
      lVar7 = *(long *)(param_1[0x12] +
                       (ulong)*(ushort *)
                               (*param_1 + (long)(int)(uint)*(byte *)(plVar1 + 2) * 2 + 0x5c) * 0x18
                       );
      *(undefined4 *)(param_1 + 0xe) =
           *(undefined4 *)(*(long *)(*param_1 + 0x48) + (ulong)*(uint *)(plVar1 + 1) * 8 + 4);
                    /* WARNING: Subroutine does not return */
      FUN_00c064c4(param_1,0,0xb15,lVar5 + 0x18,lVar7 + 0x18);
    }
    lVar5 = *param_1;
    *plVar1 = 0;
    uVar6 = (ulong)*(uint *)(plVar1 + 1);
    *(byte *)(*(long *)(lVar5 + 0x48) + uVar6 * 8 + 1) = bVar4;
    iVar3 = (int)plVar2[1];
    if (iVar3 == *(int *)(lVar5 + 0x28)) {
      *(int *)(lVar5 + 0x2c) = iVar3;
      FUN_00c07bd8(lVar5,lVar5 + 0x30,uVar6);
      goto LAB_00c08804;
    }
    plVar1 = plVar1 + 3;
    FUN_00c07d88(lVar5,uVar6,iVar3,0xff,iVar3);
  } while( true );
}

