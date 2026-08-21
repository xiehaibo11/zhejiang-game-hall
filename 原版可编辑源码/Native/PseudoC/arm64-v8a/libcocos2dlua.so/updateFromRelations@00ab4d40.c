
/* fairygui::GearSize::updateFromRelations(float, float) */

void __thiscall fairygui::GearSize::updateFromRelations(GearSize *this,float param_1,float param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((*(long *)(this + 0x10) != 0) && (*(long *)(this + 0x38) != 0)) {
    for (plVar2 = *(long **)(this + 0x30); plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
      cocos2d::Vec4::Vec4((Vec4 *)&local_48,*(float *)(plVar2 + 5) + param_1,
                          *(float *)((long)plVar2 + 0x2c) + param_2,*(float *)(plVar2 + 6),
                          *(float *)((long)plVar2 + 0x34));
      plVar2[6] = uStack_40;
      plVar2[5] = local_48;
      cocos2d::Vec4::~Vec4((Vec4 *)&local_48);
    }
    *(ulong *)(this + 0x48) =
         CONCAT44((float)((ulong)*(undefined8 *)(this + 0x48) >> 0x20) + param_2,
                  (float)*(undefined8 *)(this + 0x48) + param_1);
    (**(code **)(*(long *)this + 0x20))(this);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

