
/* dragonBones::Slot::_onClear() */

void __thiscall dragonBones::Slot::_onClear(Slot *this)

{
  long *plVar1;
  long *__dest;
  long lVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  size_t __n;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  undefined1 auVar11 [16];
  
  TransformObject::_onClear((TransformObject *)this);
  plVar7 = *(long **)(this + 0x140);
  plVar1 = *(long **)(this + 0x148);
  if (plVar7 == plVar1) {
    __dest = (long *)0x0;
  }
  else {
    plVar9 = (long *)0x0;
    plVar8 = (long *)0x0;
    plVar6 = (long *)0x0;
    do {
      lVar3 = *plVar7;
      __dest = plVar6;
      if (((lVar3 != 0) && (lVar3 != *(long *)(this + 0xe0))) && (lVar3 != *(long *)(this + 0xe8)))
      {
        plVar4 = plVar6;
        if (plVar6 == plVar8) {
LAB_00d2b5bc:
          if (plVar4 != plVar8) goto LAB_00d2b660;
        }
        else {
          do {
            if ((*plVar4 == lVar3) && ((int)plVar4[1] == (int)plVar7[1])) goto LAB_00d2b5bc;
            plVar4 = plVar4 + 2;
          } while (plVar8 != plVar4);
        }
        if (plVar8 == plVar9) {
          __n = (long)plVar8 - (long)plVar6;
          uVar10 = ((long)__n >> 4) + 1;
          if (uVar10 >> 0x3c != 0) {
LAB_00d2b7ec:
                    /* WARNING: Subroutine does not return */
            abort();
          }
          if ((ulong)((long)plVar9 - (long)plVar6 >> 4) < 0x7ffffffffffffff) {
            uVar5 = (long)plVar9 - (long)plVar6 >> 3;
            if (uVar10 <= uVar5) {
              uVar10 = uVar5;
            }
            if (uVar10 != 0) {
              if (uVar10 >> 0x3c != 0) goto LAB_00d2b7ec;
              goto LAB_00d2b618;
            }
            __dest = (long *)0x0;
          }
          else {
            uVar10 = 0xfffffffffffffff;
LAB_00d2b618:
            __dest = operator_new(uVar10 << 4);
          }
          lVar3 = *plVar7;
          plVar4 = __dest + ((long)__n >> 4) * 2;
          plVar9 = __dest + uVar10 * 2;
          plVar8 = plVar4 + 2;
          plVar4[1] = plVar7[1];
          *plVar4 = lVar3;
          if (0 < (long)__n) {
            memcpy(__dest,plVar6,__n);
          }
          if (plVar6 != (long *)0x0) {
            operator_delete(plVar6);
          }
        }
        else {
          lVar3 = *plVar7;
          plVar8[1] = plVar7[1];
          *plVar8 = lVar3;
          plVar8 = plVar8 + 2;
        }
      }
LAB_00d2b660:
      plVar7 = plVar7 + 2;
      plVar6 = __dest;
    } while (plVar7 != plVar1);
    for (; plVar6 != plVar8; plVar6 = plVar6 + 2) {
      if ((int)plVar6[1] == 1) {
        BaseObject::returnToPool((BaseObject *)*plVar6);
      }
      else {
        (**(code **)(*(long *)this + 0x28))(this,(BaseObject *)*plVar6,1);
      }
    }
  }
  if (*(BaseObject **)(this + 0xd8) != (BaseObject *)0x0) {
    BaseObject::returnToPool(*(BaseObject **)(this + 0xd8));
  }
  lVar3 = *(long *)(this + 0xe8);
  if (lVar3 != 0) {
    lVar2 = *(long *)(this + 0xe0);
    if (lVar3 == lVar2) goto LAB_00d2b6f4;
    (**(code **)(*(long *)this + 0x28))(this,lVar3,0);
  }
  lVar2 = *(long *)(this + 0xe0);
LAB_00d2b6f4:
  if (lVar2 != 0) {
    (**(code **)(*(long *)this + 0x28))(this,lVar2,0);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (this + 0x78),"",0);
  this[0xfd] = (Slot)0x1;
  *(undefined8 *)(this + 0x100) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0x108) = 0x3f800000ffffffff;
  *(undefined2 *)(this + 0xf8) = 0;
  *(undefined2 *)(this + 0xfb) = 0;
  this[0x90] = (Slot)0x0;
  *(undefined4 *)(this + 0x94) = 0;
  *(undefined4 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0x9c) = 0;
  *(undefined8 *)(this + 0x114) = 0x3f80000000000000;
  *(undefined4 *)(this + 0x110) = 0;
  *(undefined8 *)(this + 0x11c) = 0;
  auVar11 = NEON_fmov(0x3f800000,4);
  *(long *)(this + 0xac) = auVar11._8_8_;
  *(long *)(this + 0xa4) = auVar11._0_8_;
  *(undefined8 *)(this + 0xbc) = 0;
  *(undefined8 *)(this + 0xb4) = 0;
  *(undefined8 *)(this + 200) = 0;
  *(undefined8 *)(this + 0xd0) = 0;
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined8 *)(this + 0x160) = 0;
  *(undefined8 *)(this + 0x168) = 0;
  *(undefined8 *)(this + 0x158) = 0;
  *(undefined8 *)(this + 0x148) = *(undefined8 *)(this + 0x140);
  *(undefined8 *)(this + 0x130) = *(undefined8 *)(this + 0x128);
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined8 *)(this + 0x170) = 0;
  *(undefined8 *)(this + 0x178) = 0;
  *(undefined8 *)(this + 0x180) = 0;
  if (__dest != (long *)0x0) {
    operator_delete(__dest);
    return;
  }
  return;
}

