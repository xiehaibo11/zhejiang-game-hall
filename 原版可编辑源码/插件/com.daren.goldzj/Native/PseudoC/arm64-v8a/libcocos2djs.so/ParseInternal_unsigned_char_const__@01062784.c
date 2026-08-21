
/* void v8::internal::StringToIntHelper::ParseInternal<unsigned char const*>(unsigned char const*)
    */

void __thiscall
v8::internal::StringToIntHelper::ParseInternal<unsigned_char_const*>
          (StringToIntHelper *this,uchar *param_1)

{
  uint uVar1;
  byte *pbVar2;
  int iVar3;
  byte bVar4;
  bool bVar5;
  ulong uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  int iVar12;
  byte *pbVar13;
  
  iVar3 = *(int *)(this + 0x20);
  pbVar13 = param_1 + *(int *)(this + 0x24);
  pbVar2 = param_1 + *(int *)(this + 0x28);
  uVar1 = iVar3 + 0x30;
  iVar8 = 0;
  uVar7 = 1;
  if (9 < iVar3) {
    uVar1 = 0x3a;
  }
LAB_01062804:
  do {
    bVar4 = *pbVar13;
    uVar9 = (uint)bVar4;
    if ((bVar4 < 0x30) || (uVar1 == uVar9 || (int)uVar1 < (int)(uint)bVar4)) {
      uVar10 = (uint)bVar4;
      if ((0x60 < uVar9) && ((int)uVar10 < iVar3 + 0x57)) {
        iVar12 = -0x57;
        goto LAB_01062850;
      }
      bVar5 = true;
      if ((0x40 < uVar10) && (iVar3 + 0x37U != uVar9 && (int)uVar10 <= (int)(iVar3 + 0x37U))) {
        iVar12 = -0x37;
        goto LAB_01062850;
      }
    }
    else {
      iVar12 = -0x30;
LAB_01062850:
      uVar10 = *(int *)(this + 0x20) * uVar7;
      if (uVar10 < 0x71c71c8) {
        pbVar13 = pbVar13 + 1;
        iVar8 = iVar12 + uVar9 + *(int *)(this + 0x20) * iVar8;
        uVar7 = uVar10;
        if (pbVar13 != pbVar2) goto LAB_01062804;
        bVar5 = true;
        pbVar13 = pbVar2;
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
  if ((pbVar13 != pbVar2) && (this[0x32] == (StringToIntHelper)0x0)) {
    do {
      bVar4 = *pbVar13;
      if ((char)bVar4 < '\0') {
        uVar6 = unibrow::WhiteSpace::Is((uint)bVar4);
        if ((uVar6 & 1) == 0) goto LAB_010628d0;
      }
      else if (((byte)(&DAT_019d520f)[(uint)bVar4] >> 3 & 1) == 0) {
LAB_010628d0:
        uVar11 = 2;
        goto LAB_010628dc;
      }
      pbVar13 = pbVar13 + 1;
    } while (pbVar2 != pbVar13);
    uVar11 = 5;
  }
LAB_010628dc:
  *(undefined4 *)(this + 0x34) = uVar11;
  return;
}

