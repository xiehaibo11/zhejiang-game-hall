
/* cocostudio::timeline::TextureFrame::onEnter(cocostudio::timeline::Frame*, int) */

void cocostudio::timeline::TextureFrame::onEnter(Frame *param_1,int param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  SpriteFrameCache *this;
  basic_string *pbVar4;
  int *piVar5;
  basic_string *pbVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar2 = *(long **)(param_1 + 0x58);
  if (plVar2 != (long *)0x0) {
    puVar3 = (undefined8 *)(**(code **)(*plVar2 + 0x5e8))(plVar2,param_2);
    uVar8 = *puVar3;
    local_40 = uVar8;
    this = (SpriteFrameCache *)cocos2d::SpriteFrameCache::getInstance();
    pbVar6 = (basic_string *)(param_1 + 0x60);
    pbVar4 = (basic_string *)cocos2d::SpriteFrameCache::getSpriteFrameByName(this,pbVar6);
    plVar2 = *(long **)(param_1 + 0x58);
    if (pbVar4 == (basic_string *)0x0) {
      pcVar7 = *(code **)(*plVar2 + 0x540);
    }
    else {
      pcVar7 = *(code **)(*plVar2 + 0x598);
      pbVar6 = pbVar4;
    }
    (*pcVar7)(plVar2,pbVar6);
    piVar5 = (int *)(**(code **)(**(long **)(param_1 + 0x58) + 0x5e8))();
    if ((*piVar5 != (int)uVar8) || (piVar5[1] != (int)((ulong)uVar8 >> 0x20))) {
      (**(code **)(**(long **)(param_1 + 0x58) + 0x5e0))(*(long **)(param_1 + 0x58),&local_40);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

