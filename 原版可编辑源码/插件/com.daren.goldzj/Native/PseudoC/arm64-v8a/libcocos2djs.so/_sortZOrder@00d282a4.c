
/* dragonBones::Armature::_sortZOrder(short const*, unsigned int) */

void __thiscall dragonBones::Armature::_sortZOrder(Armature *this,short *param_1,uint param_2)

{
  size_t sVar1;
  size_t __n;
  undefined8 *puVar2;
  char *__s2;
  byte bVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  char *pcVar7;
  long lVar8;
  char *pcVar9;
  void *__s1;
  ulong uVar10;
  Slot *this_00;
  undefined8 *puVar11;
  ulong uVar12;
  
  lVar8 = *(long *)(this + 0x20);
  if ((this[0x5b] != (Armature)0x0) || (param_1 != (short *)0x0)) {
    lVar6 = *(long *)(lVar8 + 0x80) - *(long *)(lVar8 + 0x78);
    if (lVar6 != 0) {
      uVar10 = 0;
      uVar12 = lVar6 >> 3;
      do {
        uVar5 = uVar10;
        if (param_1 != (short *)0x0) {
          uVar5 = (ulong)param_1[uVar10 + param_2];
        }
        if (uVar5 < uVar12) {
          puVar11 = *(undefined8 **)(this + 0x78);
          puVar2 = *(undefined8 **)(this + 0x80);
          if (puVar11 != puVar2) {
            lVar6 = *(long *)(*(long *)(lVar8 + 0x78) + uVar5 * 8);
            __n = *(size_t *)(lVar6 + 0x28);
            __s2 = *(char **)(lVar6 + 0x30);
            if ((*(byte *)(lVar6 + 0x20) & 1) == 0) {
              __s2 = (char *)(lVar6 + 0x21);
              __n = (ulong)(*(byte *)(lVar6 + 0x20) >> 1);
            }
            do {
              this_00 = (Slot *)*puVar11;
              lVar6 = *(long *)(this_00 + 200);
              bVar3 = *(byte *)(lVar6 + 0x20);
              sVar1 = (ulong)(bVar3 >> 1);
              if ((bVar3 & 1) != 0) {
                sVar1 = *(size_t *)(lVar6 + 0x28);
              }
              if (sVar1 == __n) {
                __s1 = *(void **)(lVar6 + 0x30);
                if ((bVar3 & 1) == 0) {
                  __s1 = (void *)(lVar6 + 0x21);
                }
                if ((bVar3 & 1) == 0) {
                  if (__n == 0) {
LAB_00d283e4:
                    if (this_00 != (Slot *)0x0) {
                      Slot::_setZorder(this_00,(int)uVar10);
                    }
                    break;
                  }
                  pcVar7 = (char *)(lVar6 + 0x21);
                  lVar6 = -(ulong)(bVar3 >> 1);
                  pcVar9 = __s2;
                  while (*pcVar7 == *pcVar9) {
                    pcVar7 = pcVar7 + 1;
                    lVar6 = lVar6 + 1;
                    pcVar9 = pcVar9 + 1;
                    if (lVar6 == 0) goto LAB_00d283e4;
                  }
                }
                else if ((__n == 0) || (iVar4 = memcmp(__s1,__s2,__n), iVar4 == 0))
                goto LAB_00d283e4;
              }
              puVar11 = puVar11 + 1;
            } while (puVar11 != puVar2);
          }
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 < uVar12);
    }
    this[0x5a] = (Armature)0x1;
    this[0x5b] = (Armature)(param_1 != (short *)0x0);
  }
  return;
}

