
/* cocos2d::ui::TabControl::dispatchSelectedTabChanged(int, cocos2d::ui::TabHeader::EventType) */

void __thiscall
cocos2d::ui::TabControl::dispatchSelectedTabChanged(TabControl *this,int param_1,int param_3)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined4 local_40;
  undefined4 uStack_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_3 == 0) {
    if (-1 < param_1) {
      lVar3 = *(long *)(this + 0x550);
      uVar4 = *(long *)(this + 0x558) - lVar3;
      if (param_1 < (int)(uVar4 >> 3)) {
        puVar7 = *(undefined8 **)(this + 0x520);
        if (puVar7 != (undefined8 *)0x0) {
          (**(code **)(*(long *)*puVar7 + 0x18))((long *)*puVar7,0xfffffffe);
          (**(code **)(*(long *)*puVar7 + 0x80))(0x3f800000);
          (**(code **)(*(long *)*puVar7 + 0x680))((long *)*puVar7,0);
          (**(code **)(*(long *)puVar7[1] + 0x170))((long *)puVar7[1],0);
          lVar3 = *(long *)(this + 0x550);
          this[0x310] = (TabControl)0x1;
          uVar4 = *(long *)(this + 0x558) - lVar3;
        }
        if ((ulong)((long)uVar4 >> 3) <= (ulong)(long)param_1) goto LAB_00df1b80;
        puVar7 = *(undefined8 **)(lVar3 + (long)param_1 * 8);
        if (puVar7 != (undefined8 *)0x0) {
          (**(code **)(*(long *)*puVar7 + 0x18))((long *)*puVar7,0xffffffff);
          (**(code **)(*(long *)*puVar7 + 0x80))(*(float *)(this + 0x544) + 1.0);
          (**(code **)(*(long *)*puVar7 + 0x680))((long *)*puVar7,1);
          (**(code **)(*(long *)puVar7[1] + 0x170))((long *)puVar7[1],1);
          this[0x310] = (TabControl)0x1;
        }
        *(undefined8 **)(this + 0x520) = puVar7;
        goto LAB_00df1a68;
      }
    }
    puVar7 = *(undefined8 **)(this + 0x520);
joined_r0x00df1b08:
    if (puVar7 != (undefined8 *)0x0) {
      (**(code **)(*(long *)*puVar7 + 0x18))((long *)*puVar7,0xfffffffe);
      (**(code **)(*(long *)*puVar7 + 0x80))(0x3f800000);
      (**(code **)(*(long *)*puVar7 + 0x680))((long *)*puVar7,0);
      (**(code **)(*(long *)puVar7[1] + 0x170))((long *)puVar7[1],0);
      this[0x310] = (TabControl)0x1;
    }
    *(undefined8 *)(this + 0x520) = 0;
    plVar2 = *(long **)(this + 0x510);
  }
  else {
    if ((-1 < param_1) && (param_3 == 1)) {
      uVar4 = *(long *)(this + 0x558) - *(long *)(this + 0x550) >> 3;
      if (param_1 < (int)uVar4) {
        if (uVar4 <= (ulong)(long)param_1) {
LAB_00df1b80:
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__vector_base_common<true>::__throw_out_of_range();
        }
        puVar7 = *(undefined8 **)(*(long *)(this + 0x550) + (long)param_1 * 8);
        if (puVar7 == *(undefined8 **)(this + 0x520)) goto joined_r0x00df1b08;
      }
    }
LAB_00df1a68:
    plVar2 = *(long **)(this + 0x510);
  }
  if (plVar2 != (long *)0x0) {
    if (*(long **)(this + 0x520) != (long *)0x0) {
      uVar6 = *(long *)(this + 0x558) - *(long *)(this + 0x550);
      uVar4 = (long)uVar6 >> 3;
      if (0 < (int)uVar4) {
        uVar5 = 0;
        do {
          if (uVar4 == uVar5) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__vector_base_common<true>::__throw_out_of_range();
          }
          if (**(long **)(*(long *)(this + 0x550) + uVar5 * 8) == **(long **)(this + 0x520))
          goto LAB_00df1ac8;
          uVar5 = uVar5 + 1;
        } while ((uVar6 >> 3 & 0xffffffff) != uVar5);
      }
    }
    uVar5 = 0xffffffff;
LAB_00df1ac8:
    uStack_3c = (undefined4)uVar5;
    local_40 = 0;
    (**(code **)(*plVar2 + 0x30))(plVar2,&uStack_3c,&local_40);
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

