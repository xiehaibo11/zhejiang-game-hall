
/* ClipperLib::Clipper::CreateOutRec() */

void __thiscall ClipperLib::Clipper::CreateOutRec(Clipper *this)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  OutRec *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_40 = operator_new(0x28);
  *(undefined2 *)(local_40 + 4) = 0;
  *(undefined8 *)(local_40 + 8) = 0;
  *(undefined8 *)(local_40 + 0x10) = 0;
  *(undefined8 *)(local_40 + 0x18) = 0;
  *(undefined8 *)(local_40 + 0x20) = 0;
  puVar1 = *(undefined8 **)(this + 0x10);
  if (puVar1 == *(undefined8 **)(this + 0x18)) {
    std::__ndk1::vector<ClipperLib::OutRec*,std::__ndk1::allocator<ClipperLib::OutRec*>>::
    __push_back_slow_path<ClipperLib::OutRec*const&>
              ((vector<ClipperLib::OutRec*,std::__ndk1::allocator<ClipperLib::OutRec*>> *)(this + 8)
               ,&local_40);
    puVar3 = *(undefined8 **)(this + 0x10);
  }
  else {
    puVar3 = puVar1 + 1;
    *puVar1 = local_40;
    *(undefined8 **)(this + 0x10) = puVar3;
  }
  *(int *)local_40 = (int)((ulong)((long)puVar3 - *(long *)(this + 8)) >> 3) + -1;
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

