
/* cocostudio::Armature::updateOffsetPoint() */

void __thiscall cocostudio::Armature::updateOffsetPoint(Armature *this)

{
  long lVar1;
  float local_50;
  float fStack_4c;
  undefined1 local_48 [8];
  float local_40;
  float local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*(long *)this + 0x370))(local_48);
  (**(code **)(*(long *)this + 0x160))(this,&local_40);
  *(ulong *)(this + 0x368) = CONCAT44(-local_48._4_4_,-local_48._0_4_);
  if ((local_40 != 0.0) && (local_3c != 0.0)) {
    local_50 = -local_48._0_4_ / local_40;
    fStack_4c = -local_48._4_4_ / local_3c;
    (**(code **)(*(long *)this + 0x148))(this,&local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

