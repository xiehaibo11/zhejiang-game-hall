
/* ClipperLib::Clipper::AddGhostJoin(ClipperLib::OutPt*, ClipperLib::IntPoint) */

void ClipperLib::Clipper::AddGhostJoin
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  Join *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  local_50 = operator_new(0x20);
  *(undefined8 *)local_50 = param_2;
  *(undefined8 *)(local_50 + 8) = 0;
  *(undefined8 *)(local_50 + 0x10) = param_3;
  *(undefined8 *)(local_50 + 0x18) = param_4;
  puVar1 = *(undefined8 **)(param_1 + 0x40);
  if (puVar1 == *(undefined8 **)(param_1 + 0x48)) {
    std::__ndk1::vector<ClipperLib::Join*,std::__ndk1::allocator<ClipperLib::Join*>>::
    __push_back_slow_path<ClipperLib::Join*const&>
              ((vector<ClipperLib::Join*,std::__ndk1::allocator<ClipperLib::Join*>> *)
               (param_1 + 0x38),&local_50);
  }
  else {
    *puVar1 = local_50;
    *(undefined8 **)(param_1 + 0x40) = puVar1 + 1;
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

