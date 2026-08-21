
/* cocos2d::VertexAttribBinding::parseAttributes() */

void __thiscall cocos2d::VertexAttribBinding::parseAttributes(VertexAttribBinding *this)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  void *pvVar5;
  long *plVar6;
  undefined8 local_80;
  undefined2 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  piecewise_construct_t *local_50;
  long local_48;
  
                    /* try { // try from 00ff4480 to 010f45fb has its CatchHandler @ 00ff43c4 */
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (*(long *)(this + 0x50) != 0) {
    puVar2 = *(void **)(this + 0x48);
    while (puVar2 != (void *)0x0) {
      pvVar5 = (void *)*puVar2;
      VertexAttribValue::~VertexAttribValue((VertexAttribValue *)(puVar2 + 5));
      if ((*(byte *)(puVar2 + 2) & 1) != 0) {
        operator_delete((void *)puVar2[4]);
      }
      operator_delete(puVar2);
      puVar2 = pvVar5;
    }
    lVar3 = *(long *)(this + 0x40);
    *(undefined8 *)(this + 0x48) = 0;
    if (lVar3 != 0) {
      lVar4 = 0;
      do {
        *(undefined8 *)(*(long *)(this + 0x38) + lVar4 * 8) = 0;
        lVar4 = lVar4 + 1;
      } while (lVar3 != lVar4);
    }
    *(undefined8 *)(this + 0x50) = 0;
  }
  *(undefined4 *)(this + 0x60) = 0;
  for (plVar6 = *(long **)(*(long *)(*(long *)(this + 0x30) + 0xd0) + 0xa8); plVar6 != (long *)0x0;
      plVar6 = (long *)*plVar6) {
    VertexAttribValue::VertexAttribValue
              ((VertexAttribValue *)&local_80,(VertexAttrib *)(plVar6 + 5));
    local_50 = (piecewise_construct_t *)(plVar6 + 2);
    lVar3 = std::__ndk1::
            __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::VertexAttribValue>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::VertexAttribValue>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::VertexAttribValue>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::VertexAttribValue>>>
            ::
            __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                      ((basic_string *)(this + 0x38),(piecewise_construct_t *)(plVar6 + 2),
                       (tuple *)&DAT_0144dc6e,(tuple *)&local_50);
    *(undefined2 *)(lVar3 + 0x30) = local_78;
    *(undefined8 *)(lVar3 + 0x28) = local_80;
    *(undefined8 *)(lVar3 + 0x48) = local_60;
    *(undefined8 *)(lVar3 + 0x40) = uStack_68;
    *(undefined8 *)(lVar3 + 0x38) = local_70;
    VertexAttribValue::~VertexAttribValue((VertexAttribValue *)&local_80);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

