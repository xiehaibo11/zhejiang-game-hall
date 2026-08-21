
/* v8::internal::QuickCheckDetails::Merge(v8::internal::QuickCheckDetails*, int) */

void __thiscall
v8::internal::QuickCheckDetails::Merge
          (QuickCheckDetails *this,QuickCheckDetails *param_1,int param_2)

{
  ushort uVar1;
  ushort uVar2;
  long lVar3;
  long lVar4;
  QuickCheckDetails *pQVar5;
  QuickCheckDetails *pQVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  if (param_1[0x24] == (QuickCheckDetails)0x0) {
    if (this[0x24] != (QuickCheckDetails)0x0) {
      uVar10 = *(undefined8 *)(param_1 + 8);
      uVar9 = *(undefined8 *)param_1;
      uVar8 = *(undefined8 *)(param_1 + 0x18);
      uVar7 = *(undefined8 *)(param_1 + 0x10);
      *(undefined8 *)(this + 0x1d) = *(undefined8 *)(param_1 + 0x1d);
      *(undefined8 *)(this + 8) = uVar10;
      *(undefined8 *)this = uVar9;
      *(undefined8 *)(this + 0x18) = uVar8;
      *(undefined8 *)(this + 0x10) = uVar7;
      return;
    }
    if (param_2 < *(int *)this) {
      lVar3 = (long)param_2;
      lVar4 = (lVar3 + (long)param_2 * 2) * 2;
      pQVar5 = this + lVar4 + 4;
      pQVar6 = param_1 + lVar4 + 8;
      do {
        uVar1 = *(ushort *)pQVar5;
        if (((uVar1 != *(ushort *)(pQVar6 + -4)) ||
            (*(ushort *)(pQVar5 + 2) != *(ushort *)(pQVar6 + -2))) ||
           (uVar2 = uVar1, *pQVar6 == (QuickCheckDetails)0x0)) {
          pQVar5[4] = (QuickCheckDetails)0x0;
          uVar2 = *(ushort *)(pQVar6 + -4);
        }
        uVar2 = uVar2 & uVar1;
        *(ushort *)pQVar5 = uVar2;
        *(ushort *)(pQVar5 + 2) = *(ushort *)(pQVar5 + 2) & uVar2;
        uVar1 = *(ushort *)(pQVar6 + -2);
        lVar3 = lVar3 + 1;
        *(ushort *)(pQVar6 + -2) = uVar1 & uVar2;
        pQVar6 = pQVar6 + 6;
        uVar1 = *(ushort *)pQVar5 & (uVar1 & uVar2 ^ *(ushort *)(pQVar5 + 2) ^ 0xffff);
        *(ushort *)pQVar5 = uVar1;
        *(ushort *)(pQVar5 + 2) = uVar1 & *(ushort *)(pQVar5 + 2);
        pQVar5 = pQVar5 + 6;
      } while (lVar3 < *(int *)this);
    }
  }
  return;
}

