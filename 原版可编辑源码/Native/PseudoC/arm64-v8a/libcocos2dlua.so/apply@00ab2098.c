
/* fairygui::GearDisplay2::apply() */

void __thiscall fairygui::GearDisplay2::apply(GearDisplay2 *this)

{
  size_t sVar1;
  size_t __n;
  byte *pbVar2;
  byte *__s2;
  byte bVar3;
  byte *pbVar4;
  byte *pbVar5;
  int iVar6;
  byte *pbVar7;
  uint uVar8;
  size_t sVar9;
  byte *pbVar10;
  byte *pbVar11;
  
  if (*(GController **)(this + 0x10) != (GController *)0x0) {
    pbVar10 = *(byte **)(this + 0x20);
    pbVar2 = *(byte **)(this + 0x28);
    if (pbVar2 != pbVar10) {
      pbVar7 = (byte *)GController::getSelectedPageId(*(GController **)(this + 0x10));
      pbVar11 = pbVar10;
      if (pbVar10 != pbVar2) {
        __n = *(size_t *)(pbVar7 + 8);
        __s2 = *(byte **)(pbVar7 + 0x10);
        if ((*pbVar7 & 1) == 0) {
          __s2 = pbVar7 + 1;
          __n = (ulong)(*pbVar7 >> 1);
        }
        do {
          bVar3 = *pbVar10;
          sVar9 = (size_t)(bVar3 >> 1);
          sVar1 = sVar9;
          if ((bVar3 & 1) != 0) {
            sVar1 = *(size_t *)(pbVar10 + 8);
          }
          if (sVar1 == __n) {
            pbVar7 = *(byte **)(pbVar10 + 0x10);
            if ((bVar3 & 1) == 0) {
              pbVar7 = pbVar10 + 1;
            }
            pbVar4 = pbVar10;
            pbVar5 = __s2;
            sVar1 = __n;
            pbVar11 = pbVar10;
            if ((bVar3 & 1) == 0) {
              while( true ) {
                if (sVar1 == 0) goto LAB_00ab2178;
                if (pbVar4[1] != *pbVar5) break;
                sVar9 = sVar9 - 1;
                pbVar4 = pbVar4 + 1;
                pbVar5 = pbVar5 + 1;
                sVar1 = sVar9;
              }
            }
            else if ((__n == 0) || (iVar6 = memcmp(pbVar7,__s2,__n), iVar6 == 0)) break;
          }
          pbVar10 = pbVar10 + 0x18;
          pbVar11 = pbVar2;
        } while (pbVar10 != pbVar2);
      }
LAB_00ab2178:
      uVar8 = (uint)(*(byte **)(this + 0x28) != pbVar11);
      goto LAB_00ab2184;
    }
  }
  uVar8 = 1;
LAB_00ab2184:
  *(uint *)(this + 0x3c) = uVar8;
  return;
}

