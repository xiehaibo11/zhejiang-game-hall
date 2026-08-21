
/* cocostudio::Bone::updateColor() */

void __thiscall cocostudio::Bone::updateColor(Bone *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  Color3B aCStack_40 [8];
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  plVar5 = (long *)DisplayManager::getDisplayRenderNode(*(DisplayManager **)(this + 0x310));
  if (plVar5 != (long *)0x0) {
    lVar6 = *(long *)(this + 0x330);
    iVar1 = *(int *)(lVar6 + 0x4c) * (uint)(byte)this[0x21a];
    iVar2 = *(int *)(lVar6 + 0x50) * (uint)(byte)this[0x21b];
    iVar3 = *(int *)(lVar6 + 0x54) * (uint)(byte)this[0x21c];
    cocos2d::Color3B::Color3B
              (aCStack_40,
               ((char)(iVar1 / 0xff) + (char)(iVar1 >> 0x1f)) -
               (char)((long)iVar1 * 0x80808081 >> 0x3f),
               ((char)(iVar2 / 0xff) + (char)(iVar2 >> 0x1f)) -
               (char)((long)iVar2 * 0x80808081 >> 0x3f),
               ((char)(iVar3 / 0xff) + (char)(iVar3 >> 0x1f)) -
               (char)((long)iVar3 * 0x80808081 >> 0x3f));
    (**(code **)(*plVar5 + 0x4c0))(plVar5,aCStack_40);
    (**(code **)(*plVar5 + 0x490))
              (plVar5,(int)(*(int *)(*(long *)(this + 0x330) + 0x48) * (uint)(byte)this[0x218]) /
                      0xff);
  }
  if (*(long *)(lVar4 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

