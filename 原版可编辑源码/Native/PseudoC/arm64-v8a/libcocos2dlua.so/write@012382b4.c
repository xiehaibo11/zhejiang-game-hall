
/* btDbvt::write(btDbvt::IWriter*) const */

void __thiscall btDbvt::write(btDbvt *this,IWriter *param_1)

{
  void *pvVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined **local_68;
  undefined8 local_5c;
  void *local_50;
  char local_48;
  
  local_48 = '\x01';
  local_68 = &PTR__btDbvtNodeEnumerator_01733f80;
  local_50 = (void *)0x0;
  local_5c = 0;
  iVar4 = *(int *)(this + 0x14);
  if (0 < iVar4) {
    pvVar1 = (void *)btAlignedAllocInternal((long)iVar4 << 4,0x10);
    if (0 < (int)local_5c) {
      lVar6 = 0;
      do {
        lVar7 = lVar6 * 8;
        lVar6 = lVar6 + 1;
        *(undefined8 *)((long)pvVar1 + lVar7) = *(undefined8 *)((long)local_50 + lVar7);
      } while ((int)local_5c != lVar6);
    }
    if ((local_50 != (void *)0x0) && (local_48 != '\0')) {
      btAlignedFreeInternal(local_50);
    }
    local_5c = CONCAT44((int)((long)iVar4 << 1),(int)local_5c);
    local_50 = pvVar1;
  }
  local_48 = '\x01';
  enumNodes(*(btDbvtNode **)this,(ICollide *)&local_68);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,*(undefined8 *)this,local_5c & 0xffffffff);
  uVar5 = local_5c & 0xffffffff;
  if (0 < (int)local_5c) {
    uVar9 = 0;
    do {
      lVar6 = *(long *)((long)local_50 + uVar9 * 8);
      iVar4 = (int)uVar5;
      if (*(long *)(lVar6 + 0x20) == 0) {
        uVar2 = 0xffffffff;
        lVar7 = *(long *)(lVar6 + 0x30);
        if (lVar7 != 0) goto LAB_012383e4;
LAB_01238440:
        (**(code **)(*(long *)param_1 + 0x20))(param_1,lVar6,uVar9 & 0xffffffff,uVar2);
      }
      else {
        uVar2 = uVar5 & 0xffffffff;
        if (0 < iVar4) {
          uVar2 = 0;
          do {
            if (*(long *)((long)local_50 + uVar2 * 8) == *(long *)(lVar6 + 0x20)) goto LAB_012383dc;
            uVar2 = uVar2 + 1;
          } while ((long)uVar2 < (long)iVar4);
          uVar2 = uVar5 & 0xffffffff;
        }
LAB_012383dc:
        lVar7 = *(long *)(lVar6 + 0x30);
        if (lVar7 == 0) goto LAB_01238440;
LAB_012383e4:
        if (iVar4 < 1) {
          uVar3 = uVar5 & 0xffffffff;
        }
        else {
          uVar3 = 0;
          do {
            if (*(long *)((long)local_50 + uVar3 * 8) == *(long *)(lVar6 + 0x28)) goto LAB_01238414;
            uVar3 = uVar3 + 1;
          } while ((long)uVar3 < (long)iVar4);
          uVar3 = uVar5 & 0xffffffff;
LAB_01238414:
          uVar8 = 0;
          do {
            if (*(long *)((long)local_50 + uVar8 * 8) == lVar7) {
              uVar5 = uVar8 & 0xffffffff;
              break;
            }
            uVar8 = uVar8 + 1;
          } while ((long)uVar8 < (long)iVar4);
        }
        (**(code **)(*(long *)param_1 + 0x18))(param_1,lVar6,uVar9 & 0xffffffff,uVar2,uVar3,uVar5);
      }
      uVar5 = (ulong)(int)local_5c;
      uVar9 = uVar9 + 1;
    } while ((long)uVar9 < (long)uVar5);
  }
  local_68 = &PTR__btDbvtNodeEnumerator_01733f80;
  if ((local_50 != (void *)0x0) && (local_48 != '\0')) {
    btAlignedFreeInternal(local_50);
  }
  return;
}

