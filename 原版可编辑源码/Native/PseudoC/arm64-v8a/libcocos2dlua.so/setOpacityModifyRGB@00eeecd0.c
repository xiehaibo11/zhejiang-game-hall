
/* cocos2d::AtlasNode::setOpacityModifyRGB(bool) */

void __thiscall cocos2d::AtlasNode::setOpacityModifyRGB(AtlasNode *this,bool param_1)

{
  long lVar1;
  undefined2 *puVar2;
  undefined2 local_40;
  undefined1 local_3e;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* catch() { ... } // from try @ 00eeec8c with catch @ 00eeecf4 */
  puVar2 = (undefined2 *)(**(code **)(*(long *)this + 0x4b0))();
  local_3e = *(undefined1 *)(puVar2 + 1);
  local_40 = *puVar2;
  this[800] = (AtlasNode)param_1;
  (**(code **)(*(long *)this + 0x4c0))(this,&local_40);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

