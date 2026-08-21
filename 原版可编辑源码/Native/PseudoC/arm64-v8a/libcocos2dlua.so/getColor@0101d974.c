
/* cocos2d::NavMeshDebugDraw::getColor(unsigned int) */

void __thiscall cocos2d::NavMeshDebugDraw::getColor(NavMeshDebugDraw *this,uint param_1)

{
  long lVar1;
  uint uVar2;
  Vec4 *in_x8;
  Vec4 aVStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = (uint)this;
  Vec4::Vec4(aVStack_38,(float)(uVar2 & 0xff),(float)(uVar2 >> 8 & 0xff),
             (float)(uVar2 >> 0x10 & 0xff),(float)(uVar2 >> 0x18));
  Vec4::Vec4(in_x8,aVStack_38);
  Vec4::scale(in_x8,0.003921569);
  Vec4::~Vec4(aVStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

