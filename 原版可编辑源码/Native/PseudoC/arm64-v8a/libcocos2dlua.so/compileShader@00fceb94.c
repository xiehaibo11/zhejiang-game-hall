
/* cocos2d::GLProgram::compileShader(unsigned int*, unsigned int, char const*,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

bool __thiscall
cocos2d::GLProgram::compileShader
          (GLProgram *this,uint *param_1,uint param_2,char *param_3,basic_string *param_4,
          basic_string *param_5)

{
  ulong uVar1;
  basic_string bVar2;
  long lVar3;
  undefined8 uVar4;
  void *__ptr;
  basic_string *pbVar5;
  bool bVar6;
  int local_8c;
  ulong local_88;
  undefined8 local_80;
  void *local_78;
  int local_6c;
  void *local_68;
  char *pcStack_60;
  basic_string *local_58;
  char *pcStack_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  if (param_3 == (char *)0x0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00fcebfc with catch @ 00fcec10
                        */
    bVar6 = false;
  }
  else {
    local_80 = 0;
    local_78 = (void *)0x0;
    local_88 = 0;
    bVar2 = *param_4;
    uVar1 = (ulong)((byte)bVar2 >> 1);
    if (((byte)bVar2 & 1) != 0) {
      uVar1 = *(ulong *)(param_4 + 8);
    }
    if (uVar1 == 0) {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_88,"#version 100\n precision highp float;\n precision highp int;\n",0x3b);
    }
    else if ((basic_string *)&local_88 != param_4) {
      pbVar5 = *(basic_string **)(param_4 + 0x10);
                    /* try { // try from 00fcebfc to 010cebff has its CatchHandler @ 00fcec10 */
      if (((byte)bVar2 & 1) == 0) {
        pbVar5 = param_4 + 1;
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_88,(char *)pbVar5,uVar1);
    }
    local_68 = (void *)((ulong)&local_88 | 1);
    if ((local_88 & 1) != 0) {
      local_68 = local_78;
    }
    pcStack_60 = 
    "uniform mat4 CC_PMatrix;\nuniform mat4 CC_MultiViewPMatrix[4];\nuniform mat4 CC_MVMatrix;\nuniform mat4 CC_MVPMatrix;\nuniform mat4 CC_MultiViewMVPMatrix[4];\nuniform mat3 CC_NormalMatrix;\nuniform vec4 CC_Time;\nuniform vec4 CC_SinTime;\nuniform vec4 CC_CosTime;\nuniform vec4 CC_Random01;\nuniform sampler2D CC_Texture0;\nuniform sampler2D CC_Texture1;\nuniform sampler2D CC_Texture2;\nuniform sampler2D CC_Texture3;\n//CC INCLUDES END\n\n"
    ;
                    /* try { // try from 00fcec54 to 010cec57 has its CatchHandler @ 00fcec70 */
    local_58 = *(basic_string **)(param_5 + 0x10);
    if (((byte)*param_5 & 1) == 0) {
      local_58 = param_5 + 1;
    }
    pcStack_50 = param_3;
    uVar4 = glCreateShader(param_2);
    *param_1 = (uint)uVar4;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00fcec54 with catch @ 00fcec70
                        */
    glShaderSource(uVar4,4,&local_68,0);
    glCompileShader(*param_1);
    glGetShaderiv(*param_1,0x8b81,&local_6c);
    if (local_6c == 0) {
      glGetShaderiv(*param_1,0x8b88,&local_8c);
      __ptr = malloc((long)local_8c);
      glGetShaderSource(*param_1,local_8c,0,__ptr);
      free(__ptr);
    }
    bVar6 = local_6c == 1;
    if ((local_88 & 1) != 0) {
      operator_delete(local_78);
    }
  }
                    /* try { // try from 00fcecb8 to 010cecbb has its CatchHandler @ 00fcecd4 */
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00fcecb8 with catch @ 00fcecd4
                        */
  return bVar6;
}

