
/* fairygui::RelationItem::internalAdd(fairygui::RelationType, bool) */

void __thiscall fairygui::RelationItem::internalAdd(RelationItem *this,uint param_2,byte param_3)

{
  ulong uVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  void *pvVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  byte *pbVar9;
  byte *pbVar10;
  uint uVar11;
  ulong uVar12;
  
  if (param_2 == 0x18) {
    internalAdd(this,0xe,param_3 & 1);
    param_2 = 0xf;
  }
  uVar11 = 0;
  if ((6 < (int)param_2) && (param_2 != 0xe)) {
    uVar11 = (uint)((param_2 & 0xfffffffc) != 0x10);
  }
  pbVar2 = *(byte **)(this + 0x18);
  if (pbVar2 != *(byte **)(this + 0x20)) {
    *pbVar2 = param_3 & 1;
    *(uint *)(pbVar2 + 4) = param_2;
    *(uint *)(pbVar2 + 8) = uVar11;
    *(byte **)(this + 0x18) = pbVar2 + 0xc;
    goto joined_r0x00ac38d0;
  }
  pbVar10 = *(byte **)(this + 0x10);
  lVar8 = (long)pbVar2 - (long)pbVar10 >> 2;
  uVar12 = 0x1555555555555555;
  uVar1 = lVar8 * -0x5555555555555555 + 1;
  if (0x1555555555555555 < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__vector_base_common<true>::__throw_length_error();
  }
  lVar6 = (long)*(byte **)(this + 0x20) - (long)pbVar10 >> 2;
  if ((ulong)(lVar6 * -0x5555555555555555) < 0xaaaaaaaaaaaaaaa) {
    uVar7 = lVar6 * 0x5555555555555556;
    uVar12 = uVar1;
    if (uVar1 <= uVar7) {
      uVar12 = uVar7;
    }
    if (uVar12 != 0) goto LAB_00ac3870;
    pvVar5 = (void *)0x0;
  }
  else {
LAB_00ac3870:
    pvVar5 = operator_new(uVar12 * 0xc);
  }
  pbVar9 = (byte *)((long)pvVar5 + lVar8 * 4);
  *pbVar9 = param_3 & 1;
  *(uint *)(pbVar9 + 4) = param_2;
  *(uint *)(pbVar9 + 8) = uVar11;
  pbVar3 = pbVar2;
  pbVar4 = pbVar9;
  while (pbVar3 != pbVar10) {
    pbVar4[-0xc] = pbVar3[-0xc];
    *(undefined8 *)(pbVar4 + -8) = *(undefined8 *)(pbVar3 + -8);
    pbVar2 = pbVar10;
    pbVar3 = pbVar3 + -0xc;
    pbVar4 = pbVar4 + -0xc;
  }
  *(byte **)(this + 0x10) = pbVar4;
  *(byte **)(this + 0x18) = pbVar9 + 0xc;
  *(void **)(this + 0x20) = (void *)((long)pvVar5 + uVar12 * 0xc);
  if (pbVar2 != (byte *)0x0) {
    operator_delete(pbVar2);
  }
joined_r0x00ac38d0:
  if (((param_3 & 1) == 0) && ((0xc < param_2 || ((1 << (ulong)(param_2 & 0x1f) & 0x152aU) == 0))))
  {
    return;
  }
  GObject::setPixelSnapping(*(GObject **)this,true);
  return;
}

