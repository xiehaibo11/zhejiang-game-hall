
/* ClipperLib::PolyNode::AddChild(ClipperLib::PolyNode&) */

void __thiscall ClipperLib::PolyNode::AddChild(PolyNode *this,PolyNode *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  PolyNode *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  lVar3 = *(long *)(this + 0x18);
  puVar1 = *(undefined8 **)(this + 0x20);
  local_40 = param_1;
  if (puVar1 < *(undefined8 **)(this + 0x28)) {
    *puVar1 = param_1;
    *(undefined8 **)(this + 0x20) = puVar1 + 1;
  }
  else {
    std::__ndk1::vector<ClipperLib::PolyNode*,std::__ndk1::allocator<ClipperLib::PolyNode*>>::
    __push_back_slow_path<ClipperLib::PolyNode*>
              ((vector<ClipperLib::PolyNode*,std::__ndk1::allocator<ClipperLib::PolyNode*>> *)
               (this + 0x18),&local_40);
  }
  *(PolyNode **)(param_1 + 0x30) = this;
  *(int *)(param_1 + 0x38) = (int)((ulong)((long)puVar1 - lVar3) >> 3);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

