
/* spine::Vector<spine::Vector<int> >::add(spine::Vector<int> const&) */

void __thiscall
spine::Vector<spine::Vector<int>>::add(Vector<spine::Vector<int>> *this,Vector *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  uint uVar5;
  ulong uVar6;
  undefined4 *puVar7;
  long lVar8;
  ulong uVar9;
  undefined4 *puVar10;
  long lVar11;
  ulong uVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined8 uVar15;
  long lVar16;
  ulong uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined **local_78;
  ulong uStack_70;
  long local_68;
  ulong local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  lVar16 = *(long *)(this + 8);
  if (lVar16 != *(long *)(this + 0x10)) {
    *(long *)(this + 8) = lVar16 + 1;
    puVar4 = SpineObject::operator_new(0x20,(void *)(*(long *)(this + 0x18) + lVar16 * 0x20));
    *puVar4 = &PTR__Vector_01c8e510;
    puVar4[1] = *(undefined8 *)(param_1 + 8);
    lVar16 = *(long *)(param_1 + 0x10);
    puVar4[2] = lVar16;
    puVar4[3] = 0;
    if (lVar16 != 0) {
      plVar3 = (long *)SpineExtension::getInstance();
      uVar17 = (**(code **)(*plVar3 + 0x18))
                         (plVar3,lVar16 << 2,
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                          ,0xc5);
      uVar6 = puVar4[1];
      puVar4[3] = uVar17;
      if (uVar6 != 0) {
        uVar9 = *(ulong *)(param_1 + 0x18);
        if ((uVar6 < 8) || ((uVar17 < uVar9 + uVar6 * 4 && (uVar9 < uVar17 + uVar6 * 4)))) {
          uVar12 = 0;
        }
        else {
          uVar12 = uVar6 & 0xfffffffffffffff8;
          puVar4 = (undefined8 *)(uVar17 + 0x10);
          puVar13 = (undefined8 *)(uVar9 + 0x10);
          uVar14 = uVar12;
          do {
            puVar2 = puVar13 + -1;
            uVar15 = puVar13[-2];
            uVar19 = puVar13[1];
            uVar18 = *puVar13;
            uVar14 = uVar14 - 8;
            puVar13 = puVar13 + 4;
            puVar4[-1] = *puVar2;
            puVar4[-2] = uVar15;
            puVar4[1] = uVar19;
            *puVar4 = uVar18;
            puVar4 = puVar4 + 4;
          } while (uVar14 != 0);
          if (uVar6 == uVar12) goto LAB_00ce83d4;
        }
        lVar16 = uVar6 - uVar12;
        puVar7 = (undefined4 *)(uVar9 + uVar12 * 4);
        puVar10 = (undefined4 *)(uVar17 + uVar12 * 4);
        do {
          lVar16 = lVar16 + -1;
          *puVar10 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar10 = puVar10 + 1;
        } while (lVar16 != 0);
      }
    }
    goto LAB_00ce83d4;
  }
  uVar17 = *(ulong *)(param_1 + 8);
  local_78 = &PTR__Vector_01c8e510;
  lVar16 = *(long *)(param_1 + 0x10);
  local_60 = 0;
  uStack_70 = uVar17;
  local_68 = lVar16;
  if (lVar16 != 0) {
    plVar3 = (long *)SpineExtension::getInstance();
    local_60 = (**(code **)(*plVar3 + 0x18))
                         (plVar3,lVar16 << 2,
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                          ,0xc5);
    if (uVar17 != 0) {
      uVar6 = *(ulong *)(param_1 + 0x18);
      if ((uVar17 < 8) || ((local_60 < uVar6 + uVar17 * 4 && (uVar6 < local_60 + uVar17 * 4)))) {
        uVar9 = 0;
      }
      else {
        uVar9 = uVar17 & 0xfffffffffffffff8;
        puVar4 = (undefined8 *)(local_60 + 0x10);
        puVar13 = (undefined8 *)(uVar6 + 0x10);
        uVar12 = uVar9;
        do {
          puVar2 = puVar13 + -1;
          uVar15 = puVar13[-2];
          uVar19 = puVar13[1];
          uVar18 = *puVar13;
          uVar12 = uVar12 - 8;
          puVar13 = puVar13 + 4;
          puVar4[-1] = *puVar2;
          puVar4[-2] = uVar15;
          puVar4[1] = uVar19;
          *puVar4 = uVar18;
          puVar4 = puVar4 + 4;
        } while (uVar12 != 0);
        if (uVar17 == uVar9) goto LAB_00ce81ec;
      }
      lVar11 = uVar17 - uVar9;
      puVar7 = (undefined4 *)(uVar6 + uVar9 * 4);
      puVar10 = (undefined4 *)(local_60 + uVar9 * 4);
      do {
        lVar11 = lVar11 + -1;
        *puVar10 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar10 = puVar10 + 1;
      } while (lVar11 != 0);
    }
  }
LAB_00ce81ec:
  uVar15 = *(undefined8 *)(this + 0x18);
  uVar5 = (uint)((float)*(ulong *)(this + 8) * 1.75);
  if (uVar5 < 9) {
    uVar5 = 8;
  }
  *(long *)(this + 0x10) = (long)(int)uVar5;
  plVar3 = (long *)SpineExtension::getInstance();
  lVar11 = (**(code **)(*plVar3 + 0x20))
                     (plVar3,uVar15,-(ulong)(uVar5 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar5 << 5
                      ,"F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h",
                      0x6a);
  lVar8 = *(long *)(this + 8);
  *(long *)(this + 0x18) = lVar11;
  *(long *)(this + 8) = lVar8 + 1;
  puVar4 = SpineObject::operator_new(0x20,(void *)(lVar11 + lVar8 * 0x20));
  *puVar4 = &PTR__Vector_01c8e510;
  puVar4[1] = uVar17;
  puVar4[2] = lVar16;
  puVar4[3] = 0;
  if (lVar16 != 0) {
    plVar3 = (long *)SpineExtension::getInstance();
    uVar17 = (**(code **)(*plVar3 + 0x18))
                       (plVar3,lVar16 << 2,
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h",
                        0xc5);
    uVar6 = puVar4[1];
    puVar4[3] = uVar17;
    if (uVar6 != 0) {
      if ((uVar6 < 8) || ((uVar17 < local_60 + uVar6 * 4 && (local_60 < uVar17 + uVar6 * 4)))) {
        uVar9 = 0;
      }
      else {
        uVar9 = uVar6 & 0xfffffffffffffff8;
        puVar4 = (undefined8 *)(uVar17 + 0x10);
        puVar13 = (undefined8 *)(local_60 + 0x10);
        uVar12 = uVar9;
        do {
          puVar2 = puVar13 + -1;
          uVar15 = puVar13[-2];
          uVar19 = puVar13[1];
          uVar18 = *puVar13;
          uVar12 = uVar12 - 8;
          puVar13 = puVar13 + 4;
          puVar4[-1] = *puVar2;
          puVar4[-2] = uVar15;
          puVar4[1] = uVar19;
          *puVar4 = uVar18;
          puVar4 = puVar4 + 4;
        } while (uVar12 != 0);
        if (uVar6 == uVar9) goto LAB_00ce82e0;
      }
      lVar16 = uVar6 - uVar9;
      puVar7 = (undefined4 *)(local_60 + uVar9 * 4);
      puVar10 = (undefined4 *)(uVar17 + uVar9 * 4);
      do {
        lVar16 = lVar16 + -1;
        *puVar10 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar10 = puVar10 + 1;
      } while (lVar16 != 0);
    }
  }
LAB_00ce82e0:
  uVar17 = local_60;
  local_78 = &PTR__Vector_01c8e510;
  uStack_70 = 0;
  if (local_60 != 0) {
    plVar3 = (long *)SpineExtension::getInstance();
    (**(code **)(*plVar3 + 0x28))
              (plVar3,uVar17,
               "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h",0xce);
  }
  SpineObject::~SpineObject((SpineObject *)&local_78);
LAB_00ce83d4:
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

