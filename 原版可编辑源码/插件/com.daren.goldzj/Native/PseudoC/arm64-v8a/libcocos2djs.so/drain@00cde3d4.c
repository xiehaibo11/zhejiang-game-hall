
/* spine::EventQueue::drain() */

void __thiscall spine::EventQueue::drain(EventQueue *this)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  uint uVar4;
  long lVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  uint *puVar11;
  ulong uVar12;
  long lVar13;
  
  if (this[0x38] != (EventQueue)0x0) {
    return;
  }
  this[0x38] = (EventQueue)0x1;
  if (*(long *)(this + 0x10) != 0) {
    lVar9 = *(long *)(this + 0x28);
    uVar12 = 0;
    do {
      lVar13 = *(long *)(this + 0x20);
      lVar10 = lVar13 + uVar12 * 0x20;
      puVar11 = (uint *)(lVar10 + 8);
      uVar4 = *puVar11;
      if (5 < uVar4) goto LAB_00cde76c;
      lVar10 = *(long *)(lVar10 + 0x10);
      switch(uVar4) {
      default:
        plVar2 = *(long **)(lVar10 + 0x100);
        if (plVar2 == (long *)0x0) {
          (**(code **)(lVar10 + 0xf8))(lVar9,uVar4,lVar10,0);
          plVar2 = *(long **)(lVar9 + 0xc0);
        }
        else {
          (**(code **)(*plVar2 + 0x10))(plVar2,lVar9,uVar4,lVar10,0);
          plVar2 = *(long **)(lVar9 + 0xc0);
        }
        if (plVar2 == (long *)0x0) {
          pcVar6 = *(code **)(lVar9 + 0xb8);
          uVar4 = *puVar11;
          uVar3 = 0;
LAB_00cde768:
          (*pcVar6)(lVar9,uVar4,lVar10,uVar3);
          goto LAB_00cde76c;
        }
        uVar4 = *puVar11;
        pcVar6 = *(code **)(*plVar2 + 0x10);
        uVar3 = 0;
        break;
      case 2:
        plVar2 = *(long **)(lVar10 + 0x100);
        if (plVar2 == (long *)0x0) {
          (**(code **)(lVar10 + 0xf8))(lVar9,2,lVar10,0);
          plVar2 = *(long **)(lVar9 + 0xc0);
        }
        else {
          (**(code **)(*plVar2 + 0x10))(plVar2,lVar9,2,lVar10,0);
          plVar2 = *(long **)(lVar9 + 0xc0);
        }
        if (plVar2 == (long *)0x0) {
          (**(code **)(lVar9 + 0xb8))(lVar9,*puVar11,lVar10,0);
          plVar2 = *(long **)(lVar10 + 0x100);
          goto joined_r0x00cde574;
        }
        (**(code **)(*plVar2 + 0x10))(plVar2,lVar9,*puVar11,lVar10,0);
        plVar2 = *(long **)(lVar10 + 0x100);
        if (plVar2 == (long *)0x0) goto LAB_00cde530;
LAB_00cde578:
        (**(code **)(*plVar2 + 0x10))(plVar2,lVar9,4,lVar10,0);
        plVar2 = *(long **)(lVar9 + 0xc0);
        if (plVar2 == (long *)0x0) goto LAB_00cde550;
LAB_00cde59c:
        (**(code **)(*plVar2 + 0x10))(plVar2,lVar9,4,lVar10,0);
        goto LAB_00cde5b8;
      case 4:
        plVar2 = *(long **)(lVar10 + 0x100);
joined_r0x00cde574:
        if (plVar2 != (long *)0x0) goto LAB_00cde578;
LAB_00cde530:
        (**(code **)(lVar10 + 0xf8))(lVar9,4,lVar10,0);
        plVar2 = *(long **)(lVar9 + 0xc0);
        if (plVar2 != (long *)0x0) goto LAB_00cde59c;
LAB_00cde550:
        (**(code **)(lVar9 + 0xb8))(lVar9,4,lVar10,0);
LAB_00cde5b8:
        *(undefined8 *)(lVar10 + 0x28) = 0;
        *(undefined8 *)(lVar10 + 0x20) = 0;
        *(undefined8 *)(lVar10 + 0x38) = 0;
        *(undefined8 *)(lVar10 + 0x30) = 0;
        if ((*(code **)(lVar10 + 0x18) != (code *)0x0) && (*(long *)(lVar10 + 0x10) != 0)) {
          (**(code **)(lVar10 + 0x18))();
        }
        *(undefined8 *)(lVar10 + 0xa0) = 0;
        *(undefined8 *)(lVar10 + 0xc0) = 0;
        *(undefined8 *)(lVar10 + 0xe0) = 0;
        *(long *)(lVar10 + 0x10) = 0;
        *(undefined8 *)(lVar10 + 0x18) = 0;
        *(code **)(lVar10 + 0xf8) = dummyOnAnimationEventFunc;
        *(undefined8 *)(lVar10 + 0x100) = 0;
        lVar13 = *(long *)(this + 0x30);
        uVar7 = *(ulong *)(lVar13 + 0x10);
        if (uVar7 != 0) {
          uVar8 = 0;
          do {
            if (*(long *)(*(long *)(lVar13 + 0x20) + uVar8 * 8) == lVar10) goto LAB_00cde76c;
            uVar8 = uVar8 + 1;
          } while (uVar8 < uVar7);
        }
        if (uVar7 == *(ulong *)(lVar13 + 0x18)) {
          uVar4 = (uint)((float)uVar7 * 1.75);
          uVar3 = *(undefined8 *)(lVar13 + 0x20);
          if (uVar4 < 9) {
            uVar4 = 8;
          }
          *(long *)(lVar13 + 0x18) = (long)(int)uVar4;
          plVar2 = (long *)SpineExtension::getInstance();
          lVar1 = (**(code **)(*plVar2 + 0x20))
                            (plVar2,uVar3,
                             -(ulong)(uVar4 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar4 << 3,
                             "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                             ,0x6a);
          lVar5 = *(long *)(lVar13 + 0x10);
          *(long *)(lVar13 + 0x20) = lVar1;
          *(long *)(lVar13 + 0x10) = lVar5 + 1;
          *(long *)(lVar1 + lVar5 * 8) = lVar10;
        }
        else {
          *(ulong *)(lVar13 + 0x10) = uVar7 + 1;
          *(long *)(*(long *)(lVar13 + 0x20) + uVar7 * 8) = lVar10;
        }
        goto LAB_00cde76c;
      case 5:
        plVar2 = *(long **)(lVar10 + 0x100);
        if (plVar2 == (long *)0x0) {
          (**(code **)(lVar10 + 0xf8))
                    (lVar9,5,lVar10,*(undefined8 *)(lVar13 + uVar12 * 0x20 + 0x18));
          plVar2 = *(long **)(lVar9 + 0xc0);
        }
        else {
          (**(code **)(*plVar2 + 0x10))
                    (plVar2,lVar9,5,lVar10,*(undefined8 *)(lVar13 + uVar12 * 0x20 + 0x18));
          plVar2 = *(long **)(lVar9 + 0xc0);
        }
        if (plVar2 == (long *)0x0) {
          pcVar6 = *(code **)(lVar9 + 0xb8);
          uVar4 = *puVar11;
          uVar3 = *(undefined8 *)(lVar13 + uVar12 * 0x20 + 0x18);
          goto LAB_00cde768;
        }
        uVar4 = *puVar11;
        uVar3 = *(undefined8 *)(lVar13 + uVar12 * 0x20 + 0x18);
        pcVar6 = *(code **)(*plVar2 + 0x10);
      }
      (*pcVar6)(plVar2,lVar9,uVar4,lVar10,uVar3);
LAB_00cde76c:
      uVar7 = *(ulong *)(this + 0x10);
      uVar12 = uVar12 + 1;
    } while (uVar12 < uVar7);
    if (uVar7 != 0) {
      uVar12 = 0;
      lVar9 = -1;
      do {
        (*(code *)**(undefined8 **)(*(long *)(this + 0x20) + (uVar7 + lVar9) * 0x20))();
        uVar7 = *(ulong *)(this + 0x10);
        uVar12 = uVar12 + 1;
        lVar9 = lVar9 + -1;
      } while (uVar12 < uVar7);
    }
  }
  *(undefined8 *)(this + 0x10) = 0;
  this[0x38] = (EventQueue)0x0;
  return;
}

