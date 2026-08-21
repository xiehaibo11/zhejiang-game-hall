
/* spine::Skin::attachAll(spine::Skeleton&, spine::Skin&) */

void __thiscall spine::Skin::attachAll(Skin *this,Skeleton *param_1,Skin *param_2)

{
  long lVar1;
  char *__s2;
  int iVar2;
  long lVar3;
  char *__s1;
  Attachment *pAVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  Slot *this_00;
  ulong uVar11;
  ulong uVar12;
  ulong *puVar13;
  
  lVar3 = Skeleton::getSlots(param_1);
  uVar5 = *(ulong *)(param_2 + 0x30);
  if (uVar5 != 0) {
    uVar12 = 0;
    uVar11 = 0;
    do {
      plVar6 = (long *)(*(long *)(param_2 + 0x40) + uVar12 * 0x20 + 0x18);
      while ((ulong)plVar6[-2] <= uVar11) {
        uVar12 = uVar12 + 1;
        uVar11 = 0;
        plVar6 = plVar6 + 4;
        if (uVar5 <= uVar12) {
          return;
        }
      }
      lVar8 = *plVar6;
      puVar13 = (ulong *)(lVar8 + uVar11 * 0x28);
      uVar9 = *puVar13;
      this_00 = *(Slot **)(*(long *)(lVar3 + 0x18) +
                          (-(uVar9 >> 0x1f & 1) & 0xfffffff800000000 | (uVar9 & 0xffffffff) << 3));
      uVar5 = Slot::getAttachment(this_00);
      if ((uVar5 == puVar13[4]) && ((ulong)(long)(int)uVar9 < *(ulong *)(this + 0x30))) {
        lVar1 = *(long *)(this + 0x40) + (long)(int)uVar9 * 0x20;
        uVar5 = *(ulong *)(lVar1 + 8);
        if (uVar5 != 0) {
          lVar7 = *(long *)(lVar1 + 0x18);
          lVar8 = lVar8 + uVar11 * 0x28;
          lVar1 = *(long *)(lVar8 + 0x10);
          __s2 = *(char **)(lVar8 + 0x18);
          lVar8 = 0;
          uVar9 = 0;
          puVar10 = (undefined8 *)(lVar7 + 0x18);
          do {
            __s1 = (char *)*puVar10;
            if ((__s1 == __s2) ||
               ((((__s2 != (char *)0x0 && (__s1 != (char *)0x0)) && (puVar10[-1] == lVar1)) &&
                (iVar2 = strcmp(__s1,__s2), iVar2 == 0)))) {
              if ((-1 < (int)uVar9) &&
                 (pAVar4 = *(Attachment **)(lVar7 + (lVar8 >> 0x20) * 0x28 + 0x20),
                 pAVar4 != (Attachment *)0x0)) {
                Slot::setAttachment(this_00,pAVar4);
              }
              break;
            }
            uVar9 = uVar9 + 1;
            lVar8 = lVar8 + 0x100000000;
            puVar10 = puVar10 + 5;
          } while (uVar9 < uVar5);
        }
      }
      uVar5 = *(ulong *)(param_2 + 0x30);
      uVar11 = uVar11 + 1;
    } while (uVar12 < uVar5);
  }
  return;
}

