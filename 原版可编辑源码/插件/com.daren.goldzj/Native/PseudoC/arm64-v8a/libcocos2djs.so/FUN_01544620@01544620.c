
void FUN_01544620(long param_1,long param_2)

{
  long *plVar1;
  byte bVar2;
  byte bVar3;
  ulong uVar4;
  long *plVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  plVar5 = *(long **)(param_2 + 0x38);
  if (0 < *(int *)((long)plVar5 + 0xc)) {
    lVar9 = 0;
    lVar10 = 0;
    do {
      lVar11 = *(long *)(param_1 + 8);
      plVar5 = *(long **)(*plVar5 + lVar9);
      uVar4 = v8::internal::GetCurrentStackPosition();
      if (uVar4 < *(ulong *)(lVar11 + 0x58)) {
        *(char **)(param_1 + 0x18) = "Stack overflow";
        return;
      }
      if ((*(byte *)((long)plVar5 + 0x19) & 3) == 0) {
        *(byte *)((long)plVar5 + 0x19) = *(byte *)((long)plVar5 + 0x19) | 1;
        (**(code **)(*plVar5 + 0x10))(plVar5,param_1);
        *(byte *)((long)plVar5 + 0x19) = *(byte *)((long)plVar5 + 0x19) & 0xfc | 2;
      }
      if (*(long *)(param_1 + 0x18) != 0) {
        return;
      }
      plVar5 = *(long **)(param_2 + 0x38);
      bVar3 = *(byte *)(param_2 + 0x19);
      lVar11 = *(long *)(*plVar5 + lVar9);
      bVar2 = *(byte *)(lVar11 + 0x19) & 4;
      *(byte *)(param_2 + 0x19) = bVar2 | bVar3;
      bVar2 = bVar2 | bVar3 & 7 | ((*(byte *)(lVar11 + 0x19) | bVar3) >> 3 & 1) << 3;
      *(byte *)(param_2 + 0x19) = bVar3 & 0xf0 | bVar2;
      *(byte *)(param_2 + 0x19) = bVar3 & 0xe0 | bVar2 | (*(byte *)(lVar11 + 0x19) | bVar3) & 0x10;
      if (lVar10 == 0) {
        uVar6 = 0xff;
        uVar7 = 0xff;
      }
      else {
        uVar7 = *(ushort *)(param_2 + 0x1a);
        uVar6 = uVar7 >> 8;
      }
      lVar10 = lVar10 + 1;
      plVar1 = (long *)(*plVar5 + lVar9);
      lVar9 = lVar9 + 0x10;
      uVar8 = (ushort)*(byte *)(*plVar1 + 0x1a);
      if ((uVar7 & 0xff) <= uVar8) {
        uVar8 = uVar7;
      }
      uVar7 = (ushort)*(byte *)(*plVar1 + 0x1b);
      if (uVar6 <= uVar7) {
        uVar7 = uVar6;
      }
      *(ushort *)(param_2 + 0x1a) = uVar8 & 0xff | uVar7 << 8;
    } while (lVar10 < *(int *)((long)plVar5 + 0xc));
  }
  return;
}

