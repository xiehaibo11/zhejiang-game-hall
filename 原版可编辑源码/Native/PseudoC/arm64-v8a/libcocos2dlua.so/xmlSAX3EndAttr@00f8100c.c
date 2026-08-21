
/* rapidxml::xml_sax2_handler::xmlSAX3EndAttr() */

void __thiscall rapidxml::xml_sax2_handler::xmlSAX3EndAttr(xml_sax2_handler *this)

{
  undefined1 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  char *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar1 = *(undefined1 *)(*(long *)(this + 8) + *(long *)(this + 0x10));
  *(undefined1 *)(*(long *)(this + 8) + *(long *)(this + 0x10)) = 0;
  puVar3 = *(undefined8 **)(this + 0x20);
  if (*(undefined8 **)(this + 0x18) == puVar3) {
    local_40 = (char *)0x0;
    (**(code **)(*(long *)this + 0x38))
              (this,*(undefined8 *)(this + 8),*(undefined8 *)(this + 0x10),&local_40,0);
  }
  else {
    local_40 = (char *)0x0;
    if (puVar3 < *(undefined8 **)(this + 0x28)) {
      puVar4 = puVar3 + 1;
      *puVar3 = 0;
      *(undefined8 **)(this + 0x20) = puVar4;
    }
    else {
      std::__ndk1::vector<char_const*,std::__ndk1::allocator<char_const*>>::
      __push_back_slow_path<char_const*>
                ((vector<char_const*,std::__ndk1::allocator<char_const*>> *)(this + 0x18),&local_40)
      ;
      puVar4 = *(undefined8 **)(this + 0x20);
    }
    (**(code **)(*(long *)this + 0x38))
              (this,*(undefined8 *)(this + 8),*(undefined8 *)(this + 0x10),*(long *)(this + 0x18),
               ((long)puVar4 - *(long *)(this + 0x18) >> 3) + -1);
    *(undefined8 *)(this + 0x20) = *(undefined8 *)(this + 0x18);
  }
  *(undefined1 *)(*(long *)(this + 8) + *(long *)(this + 0x10)) = uVar1;
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

