
/* cocos2d::Node::updateCascadeColor() */

void __thiscall cocos2d::Node::updateCascadeColor(Node *this)

{
  long lVar1;
  ulong uVar2;
  undefined2 *puVar3;
  undefined2 local_30;
  undefined1 local_2e;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = Color3B::WHITE;
  local_2e = DAT_01792432;
  if ((*(long **)(this + 400) != (long *)0x0) &&
     (uVar2 = (**(code **)(**(long **)(this + 400) + 0x4d0))(), (uVar2 & 1) != 0)) {
    puVar3 = (undefined2 *)(**(code **)(**(long **)(this + 400) + 0x4b8))();
    local_30 = *puVar3;
    local_2e = *(undefined1 *)(puVar3 + 1);
  }
  (**(code **)(*(long *)this + 0x4c8))(this,&local_30);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

