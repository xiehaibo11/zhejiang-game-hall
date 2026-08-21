
/* cocos2d::Animate::update(float) */

void __thiscall cocos2d::Animate::update(Animate *this,float param_1)

{
  long lVar1;
  undefined8 *puVar2;
  EventCustom *this_00;
  long lVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  float fVar8;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_98 [16];
  void *local_88;
  undefined8 local_80;
  long local_78;
  
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  lVar3 = *(long *)(this + 0x78);
  if (param_1 < 1.0) {
    fVar8 = (float)NEON_ucvtf(*(undefined4 *)(lVar3 + 0x5c));
    if (*(uint *)(this + 0x74) < (uint)(int)(fVar8 * param_1)) {
      *(undefined4 *)(this + 0x60) = 0;
      *(uint *)(this + 0x74) = *(uint *)(this + 0x74) + 1;
    }
    param_1 = fmodf(fVar8 * param_1,1.0);
  }
  uVar6 = (ulong)*(int *)(this + 0x60);
  lVar4 = *(long *)(lVar3 + 0x48) - *(long *)(lVar3 + 0x40) >> 3;
  if ((long)uVar6 < lVar4) {
    do {
      lVar7 = **(long **)(this + 0x58);
      if ((ulong)((*(long **)(this + 0x58))[1] - lVar7 >> 2) <= uVar6) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_out_of_range();
      }
      if (param_1 < *(float *)(lVar7 + uVar6 * 4)) break;
      puVar2 = (undefined8 *)(**(code **)(**(long **)(this + 0x38) + 0x5e8))();
      local_80 = *puVar2;
      iVar5 = (int)uVar6;
      *(int *)(this + 0x70) = iVar5;
      lVar7 = *(long *)(*(long *)(lVar3 + 0x40) + uVar6 * 8);
      (**(code **)(**(long **)(this + 0x38) + 0x598))
                (*(long **)(this + 0x38),*(undefined8 *)(lVar7 + 0x30));
      (**(code **)(**(long **)(this + 0x38) + 0x5e0))(*(long **)(this + 0x38),&local_80);
      if (*(long *)(lVar7 + 0x58) != 0) {
        this_00 = *(EventCustom **)(this + 0x80);
        if (this_00 == (EventCustom *)0x0) {
          this_00 = operator_new(0x58,(nothrow_t *)&std::nothrow);
          if (this_00 == (EventCustom *)0x0) {
            *(undefined8 *)(this + 0x80) = 0;
          }
          else {
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            basic_string<decltype(nullptr)>(local_98,"CCAnimationFrameDisplayedNotification");
            EventCustom::EventCustom(this_00,(basic_string *)local_98);
            *(EventCustom **)(this + 0x80) = this_00;
            if (((byte)local_98[0] & 1) != 0) {
              operator_delete(local_88);
              this_00 = *(EventCustom **)(this + 0x80);
            }
          }
        }
        *(undefined8 *)(this + 0x88) = *(undefined8 *)(this + 0x38);
        *(long *)(this + 0x90) = lVar7 + 0x40;
        *(Animate **)(this_00 + 0x38) = this + 0x88;
        lVar7 = Director::getInstance();
        EventDispatcher::dispatchEvent(*(EventDispatcher **)(lVar7 + 0xb0),*(Event **)(this + 0x80))
        ;
      }
      uVar6 = uVar6 + 1;
      *(int *)(this + 0x60) = iVar5 + 1;
    } while ((long)uVar6 < lVar4);
  }
  if (*(long *)(lVar1 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

