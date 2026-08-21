
/* dragonBones::CCSlot::_updateBlendMode() */

void __thiscall dragonBones::CCSlot::_updateBlendMode(CCSlot *this)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  Texture2D *this_00;
  ulong uVar4;
  long *plVar5;
  undefined8 *puVar6;
  code *pcVar7;
  long lVar8;
  undefined8 local_40;
  long local_38;
  
  puVar6 = &local_40;
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if ((*(long *)(this + 400) == 0) ||
     (plVar3 = (long *)__dynamic_cast(*(long *)(this + 400),&cocos2d::Node::typeinfo,
                                      &cocos2d::Sprite::typeinfo,0), plVar3 == (long *)0x0)) {
    lVar8 = *(long *)(this + 0x178);
    if (lVar8 != 0) {
      plVar1 = *(long **)(lVar8 + 0x80);
      for (plVar3 = *(long **)(lVar8 + 0x78); plVar3 != plVar1; plVar3 = plVar3 + 1) {
        plVar5 = (long *)*plVar3;
        *(undefined4 *)((long)plVar5 + 0x94) = *(undefined4 *)(this + 0x94);
        (**(code **)(*plVar5 + 0x80))();
      }
    }
  }
  else if (*(int *)(this + 0x94) == 1) {
    this_00 = (Texture2D *)(**(code **)(*plVar3 + 0x550))();
    if ((this_00 == (Texture2D *)0x0) ||
       (uVar4 = cocos2d::Texture2D::hasPremultipliedAlpha(this_00), (uVar4 & 1) == 0)) {
      pcVar7 = *(code **)(*plVar3 + 0x5e0);
      puVar6 = &cocos2d::BlendFunc::ADDITIVE;
    }
    else {
      local_40 = 0x100000001;
      pcVar7 = *(code **)(*plVar3 + 0x5e0);
    }
    (*pcVar7)(plVar3,puVar6);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

