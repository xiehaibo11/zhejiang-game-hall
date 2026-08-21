
/* void v8::internal::StringToIntHelper::ParseInternal<unsigned short const*>(unsigned short const*)
    */

void __thiscall
v8::internal::StringToIntHelper::ParseInternal<unsigned_short_const*>
          (StringToIntHelper *this,ushort *param_1)

{
  uint uVar1;
  ushort *puVar2;
  int iVar3;
  ushort uVar4;
  bool bVar5;
  ulong uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  int iVar12;
  ushort *puVar13;
  
  iVar3 = *(int *)(this + 0x20);
  puVar13 = param_1 + *(int *)(this + 0x24);
  puVar2 = param_1 + *(int *)(this + 0x28);
  uVar1 = iVar3 + 0x30;
  iVar8 = 0;
  uVar7 = 1;
  if (9 < iVar3) {
    uVar1 = 0x3a;
  }
LAB_01062978:
  do {
    uVar4 = *puVar13;
    uVar9 = (uint)uVar4;
    if ((uVar4 < 0x30) || (uVar1 == uVar9 || (int)uVar1 < (int)(uint)uVar4)) {
      uVar10 = (uint)uVar4;
      if ((0x60 < uVar9) && ((int)uVar10 < iVar3 + 0x57)) {
        iVar12 = -0x57;
        goto LAB_010629c4;
      }
      bVar5 = true;
      if ((0x40 < uVar10) && (iVar3 + 0x37U != uVar9 && (int)uVar10 <= (int)(iVar3 + 0x37U))) {
        iVar12 = -0x37;
        goto LAB_010629c4;
      }
    }
    else {
      iVar12 = -0x30;
LAB_010629c4:
      uVar10 = *(int *)(this + 0x20) * uVar7;
      if (uVar10 < 0x71c71c8) {
        puVar13 = puVar13 + 1;
        iVar8 = iVar12 + uVar9 + *(int *)(this + 0x20) * iVar8;
        uVar7 = uVar10;
        if (puVar13 != puVar2) goto LAB_01062978;
        bVar5 = true;
        puVar13 = puVar2;
      }
      else {
        bVar5 = false;
      }
    }
    (**(code **)(*(long *)this + 0x18))(this,uVar7,iVar8);
    iVar8 = 0;
    uVar7 = 1;
  } while (!bVar5);
  uVar11 = 5;
  if ((puVar13 != puVar2) && (this[0x32] == (StringToIntHelper)0x0)) {
    do {
      uVar4 = *puVar13;
      if (uVar4 < 0x80) {
        if (((byte)(&DAT_019d520f)[uVar4] >> 3 & 1) == 0) goto LAB_01062a58;
      }
      else {
        uVar6 = unibrow::WhiteSpace::Is((uint)uVar4);
        if (((uVar4 & 0xfffe) != 0x2028) && ((uVar6 & 1) == 0)) {
LAB_01062a58:
          uVar11 = 2;
          goto LAB_01062a64;
        }
      }
      puVar13 = puVar13 + 1;
    } while (puVar2 != puVar13);
    uVar11 = 5;
  }
LAB_01062a64:
  *(undefined4 *)(this + 0x34) = uVar11;
  return;
}

