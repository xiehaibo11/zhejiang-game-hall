
/* cocostudio::timeline::ColorFrame::onApply(float) */

void __thiscall cocostudio::timeline::ColorFrame::onApply(ColorFrame *this,float param_1)

{
  long lVar1;
  float fVar2;
  Color3B local_40;
  undefined1 local_3f;
  undefined1 local_3e;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((*(long *)(this + 0x50) != 0) &&
     (((*(int *)(this + 0x5c) != 0 || (*(int *)(this + 0x60) != 0)) || (*(int *)(this + 100) != 0)))
     ) {
    cocos2d::Color3B::Color3B(&local_40);
    fVar2 = (float)NEON_ucvtf((uint)(byte)this[0x59]);
    local_40 = SUB41((int)((float)*(int *)(this + 0x5c) * param_1 + fVar2),0);
    fVar2 = (float)NEON_ucvtf((uint)(byte)this[0x5a]);
    local_3f = (undefined1)(int)((float)*(int *)(this + 0x60) * param_1 + fVar2);
    fVar2 = (float)NEON_ucvtf((uint)(byte)this[0x5b]);
    local_3e = (undefined1)(int)((float)*(int *)(this + 100) * param_1 + fVar2);
    (**(code **)(**(long **)(this + 0x50) + 0x4c0))(*(long **)(this + 0x50),&local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

