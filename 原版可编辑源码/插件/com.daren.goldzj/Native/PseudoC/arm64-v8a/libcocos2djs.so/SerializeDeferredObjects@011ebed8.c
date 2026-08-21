
/* v8::internal::Serializer::SerializeDeferredObjects() */

void __thiscall v8::internal::Serializer::SerializeDeferredObjects(Serializer *this)

{
  long lVar1;
  long lVar2;
  undefined **local_60;
  Serializer *pSStack_58;
  undefined8 local_50;
  Serializer *pSStack_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = *(long *)(this + 0xc0);
  if (*(long *)(this + 0xb8) != lVar2) {
    do {
      local_50 = *(undefined8 *)(lVar2 + -8);
      *(undefined8 **)(this + 0xc0) = (undefined8 *)(lVar2 + -8);
      local_40 = 0;
      local_60 = &PTR__ObjectVisitor_01cbba18;
      pSStack_58 = this;
      pSStack_48 = this + 0x50;
      ObjectSerializer::SerializeDeferred((ObjectSerializer *)&local_60);
      lVar2 = *(long *)(this + 0xc0);
    } while (*(long *)(this + 0xb8) != lVar2);
  }
  local_60 = (undefined **)CONCAT71(local_60._1_7_,0x1a);
  if (*(undefined1 **)(this + 0x58) == *(undefined1 **)(this + 0x60)) {
    std::__ndk1::vector<unsigned_char,std::__ndk1::allocator<unsigned_char>>::
    __push_back_slow_path<unsigned_char_const&>
              ((vector<unsigned_char,std::__ndk1::allocator<unsigned_char>> *)(this + 0x50),
               (uchar *)&local_60);
  }
  else {
    **(undefined1 **)(this + 0x58) = 0x1a;
    *(long *)(this + 0x58) = *(long *)(this + 0x58) + 1;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

