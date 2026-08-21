
/* void std::__ndk1::allocator<cocos2d::NMaterialData>::construct<cocos2d::NMaterialData,
   cocos2d::NMaterialData const&>(cocos2d::NMaterialData*, cocos2d::NMaterialData const&) */

void __thiscall
std::__ndk1::allocator<cocos2d::NMaterialData>::
construct<cocos2d::NMaterialData,cocos2d::NMaterialData_const&>
          (allocator<cocos2d::NMaterialData> *this,NMaterialData *param_1,NMaterialData *param_2)

{
  vector<cocos2d::NTextureData,std::__ndk1::allocator<cocos2d::NTextureData>>::vector
            ((vector<cocos2d::NTextureData,std::__ndk1::allocator<cocos2d::NTextureData>> *)param_1,
             (vector *)param_2);
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::basic_string
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (param_1 + 0x18),(basic_string *)(param_2 + 0x18));
  return;
}

