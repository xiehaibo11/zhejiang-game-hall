
/* cocos2d::renderer::VertexFormat::VertexFormat(cocos2d::renderer::VertexFormat&&) */

void __thiscall
cocos2d::renderer::VertexFormat::VertexFormat(VertexFormat *this,VertexFormat *param_1)

{
  undefined8 uVar1;
  
  Ref::Ref((Ref *)this);
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined ***)this = &PTR__VertexFormat_01c6af48;
  *(undefined4 *)(this + 0x48) = 0x3f800000;
  if (this != param_1) {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(this + 0x18) = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(this + 0x10) = uVar1;
    *(undefined8 *)(this + 0x20) = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
                    /* catch() { ... } // from try @ 009b9aa8 with catch @ 009b9c00 */
    std::__ndk1::
    __hash_table<std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::VertexFormat::Element>,std::__ndk1::__unordered_map_hasher<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::VertexFormat::Element>,std::__ndk1::hash<unsigned_long>,true>,std::__ndk1::__unordered_map_equal<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::VertexFormat::Element>,std::__ndk1::equal_to<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::VertexFormat::Element>>>
    ::__move_assign(this + 0x28,param_1 + 0x28);
    return;
  }
  return;
}

