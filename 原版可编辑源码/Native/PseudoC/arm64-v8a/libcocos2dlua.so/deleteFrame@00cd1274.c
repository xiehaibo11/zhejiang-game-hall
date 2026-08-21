
/* cocostudio::ActionNode::deleteFrame(cocostudio::ActionFrame*) */

void __thiscall cocostudio::ActionNode::deleteFrame(ActionNode *this,ActionFrame *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  size_t __n;
  int iVar3;
  ulong uVar4;
  undefined8 *__dest;
  long *plVar5;
  
  if (param_1 != (ActionFrame *)0x0) {
    iVar3 = ActionFrame::getFrameType(param_1);
    uVar4 = *(long *)(this + 0x58) - *(long *)(this + 0x50) >> 3;
    if (iVar3 < (int)uVar4) {
      if (uVar4 <= (ulong)(long)iVar3) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_out_of_range();
      }
      plVar5 = *(long **)(*(long *)(this + 0x50) + (long)iVar3 * 8);
      __dest = (undefined8 *)*plVar5;
      puVar2 = (undefined8 *)plVar5[1];
      if (__dest != puVar2) {
        if ((ActionFrame *)*__dest != param_1) {
          do {
            if (puVar2 + -1 == __dest) {
              return;
            }
            puVar1 = __dest + 1;
            __dest = __dest + 1;
          } while ((ActionFrame *)*puVar1 != param_1);
        }
        if (__dest != puVar2) {
          __n = (long)puVar2 - (long)(__dest + 1);
          if (__n != 0) {
            memmove(__dest,__dest + 1,__n);
          }
          plVar5[1] = (long)(__dest + ((long)__n >> 3));
          cocos2d::Ref::release((Ref *)param_1);
          return;
        }
      }
    }
  }
  return;
}

