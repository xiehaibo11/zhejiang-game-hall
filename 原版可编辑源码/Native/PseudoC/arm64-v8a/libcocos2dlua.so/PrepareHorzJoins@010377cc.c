
/* ClipperLib::Clipper::PrepareHorzJoins(ClipperLib::TEdge*, bool) */

void __thiscall ClipperLib::Clipper::PrepareHorzJoins(Clipper *this,TEdge *param_1,bool param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  Join *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  lVar3 = *(long *)(*(long *)(*(long *)(this + 8) + (long)*(int *)(param_1 + 0x5c) * 8) + 0x18);
  if (*(int *)(param_1 + 0x4c) != 1) {
    lVar3 = *(long *)(lVar3 + 0x20);
  }
  if (param_2) {
    lVar4 = *(long *)(param_1 + 0x20);
    if (*(long *)(lVar3 + 8) == lVar4) {
      lVar5 = *(long *)(param_1 + 0x28);
      if (*(long *)(lVar3 + 0x10) == lVar5) {
        lVar4 = *(long *)param_1;
        lVar5 = *(long *)(param_1 + 8);
      }
    }
    else {
      lVar5 = *(long *)(param_1 + 0x28);
    }
    local_50 = operator_new(0x20);
    *(long *)local_50 = lVar3;
    *(long *)(local_50 + 8) = 0;
    *(long *)(local_50 + 0x10) = lVar4;
    *(long *)(local_50 + 0x18) = lVar5;
    puVar1 = *(undefined8 **)(this + 0x40);
    if (puVar1 == *(undefined8 **)(this + 0x48)) {
      std::__ndk1::vector<ClipperLib::Join*,std::__ndk1::allocator<ClipperLib::Join*>>::
      __push_back_slow_path<ClipperLib::Join*const&>
                ((vector<ClipperLib::Join*,std::__ndk1::allocator<ClipperLib::Join*>> *)
                 (this + 0x38),&local_50);
    }
    else {
      *puVar1 = local_50;
      *(undefined8 **)(this + 0x40) = puVar1 + 1;
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

