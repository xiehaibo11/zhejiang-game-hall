
/* cocos2d::renderer::VertexFormat::VertexFormat(cocos2d::renderer::VertexFormat const&) */

void __thiscall
cocos2d::renderer::VertexFormat::VertexFormat(VertexFormat *this,VertexFormat *param_1)

{
                    /* try { // try from 009b9a30 to 00ab9a37 has its CatchHandler @ 009b9c10 */
  Ref::Ref((Ref *)this);
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined ***)this = &PTR__VertexFormat_01c6af48;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x48) = 0x3f800000;
  if (this != param_1) {
    std::__ndk1::
    vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
    ::
    assign<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>*>
              ((vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                *)(this + 0x10),*(basic_string **)(param_1 + 0x10),
               *(basic_string **)(param_1 + 0x18));
    *(undefined4 *)(this + 0x48) = *(undefined4 *)(param_1 + 0x48);
    std::__ndk1::
    __hash_table<std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::VertexFormat::Element>,std::__ndk1::__unordered_map_hasher<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::VertexFormat::Element>,std::__ndk1::hash<unsigned_long>,true>,std::__ndk1::__unordered_map_equal<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::VertexFormat::Element>,std::__ndk1::equal_to<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::VertexFormat::Element>>>
    ::
    __assign_multi<std::__ndk1::__hash_const_iterator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::VertexFormat::Element>,void*>*>>
              ((__hash_table<std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::VertexFormat::Element>,std::__ndk1::__unordered_map_hasher<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::VertexFormat::Element>,std::__ndk1::hash<unsigned_long>,true>,std::__ndk1::__unordered_map_equal<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::VertexFormat::Element>,std::__ndk1::equal_to<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::VertexFormat::Element>>>
                *)(this + 0x28),*(undefined8 *)(param_1 + 0x38),0);
  }
  return;
}

