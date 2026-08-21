
/* cocos2d::Material::parseUniform(cocos2d::GLProgramState*, cocos2d::Properties*, char const*) */

undefined8 __thiscall
cocos2d::Material::parseUniform
          (Material *this,GLProgramState *param_1,Properties *param_2,char *param_3)

{
  long lVar1;
  undefined4 uVar2;
  char *pcVar3;
  float fVar4;
  ulong local_a0 [2];
  void *local_90;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_88 [16];
  void *local_78;
  long local_48;
  
  lVar1 = tpidr_el0;
                    /* try { // try from 00fdfa94 to 010dfaa7 has its CatchHandler @ 00fdfb30 */
  local_48 = *(long *)(lVar1 + 0x28);
  uVar2 = Properties::getType(param_2,param_3);
                    /* try { // try from 00fdfac4 to 010dfacb has its CatchHandler @ 00fdfb24 */
                    /* try { // try from 00fdfacc to 010dfb53 has its CatchHandler @ 00fdfa34 */
  switch(uVar2) {
  case 2:
    fVar4 = (float)Properties::getFloat(param_2,param_3);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_88,param_3);
    GLProgramState::setUniformFloat(param_1,(basic_string *)local_88,fVar4);
    break;
  case 3:
    local_a0[0] = 0;
    Properties::getVec2(param_2,param_3,(Vec2 *)local_a0);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_88,param_3);
    GLProgramState::setUniformVec2(param_1,(basic_string *)local_88,(Vec2 *)local_a0);
    break;
  case 4:
    Vec3::Vec3((Vec3 *)local_a0);
    Properties::getVec3(param_2,param_3,(Vec3 *)local_a0);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_88,param_3);
    GLProgramState::setUniformVec3(param_1,(basic_string *)local_88,(Vec3 *)local_a0);
    break;
  case 5:
    Vec4::Vec4((Vec4 *)local_a0);
    Properties::getVec4(param_2,param_3,(Vec4 *)local_a0);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_88,param_3);
    GLProgramState::setUniformVec4(param_1,(basic_string *)local_88,(Vec4 *)local_a0);
    if (((byte)local_88[0] & 1) != 0) {
      operator_delete(local_78);
    }
    Vec4::~Vec4((Vec4 *)local_a0);
    goto LAB_00fdfc6c;
  case 6:
    Mat4::Mat4((Mat4 *)local_88);
    Properties::getMat4(param_2,param_3,(Mat4 *)local_88);
                    /* catch() { ... } // from try @ 00fdfac4 with catch @ 00fdfb24 */
                    /* catch() { ... } // from try @ 00fdfa68 with catch @ 00fdfb28 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               local_a0,param_3);
                    /* catch() { ... } // from try @ 00fdfa94 with catch @ 00fdfb30 */
    GLProgramState::setUniformMat4(param_1,(basic_string *)local_a0,(Mat4 *)local_88);
    if ((local_a0[0] & 1) != 0) {
      operator_delete(local_90);
    }
    Mat4::~Mat4((Mat4 *)local_88);
    goto LAB_00fdfc6c;
  default:
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_88,param_3);
    pcVar3 = (char *)Properties::getString(param_2,(char *)0x0,(char *)0x0);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               local_a0,pcVar3);
    GLProgramState::setParameterAutoBinding
              (param_1,(basic_string *)local_88,(basic_string *)local_a0);
    if ((local_a0[0] & 1) != 0) {
      operator_delete(local_90);
    }
  }
  if (((byte)local_88[0] & 1) != 0) {
    operator_delete(local_78);
  }
LAB_00fdfc6c:
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 1;
}

