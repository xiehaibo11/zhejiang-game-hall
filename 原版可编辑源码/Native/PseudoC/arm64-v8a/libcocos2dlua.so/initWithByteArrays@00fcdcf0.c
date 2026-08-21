
/* cocos2d::GLProgram::initWithByteArrays(char const*, char const*, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&) */

undefined4 __thiscall
cocos2d::GLProgram::initWithByteArrays
          (GLProgram *this,char *param_1,char *param_2,basic_string *param_3,basic_string *param_4)

{
  ulong uVar1;
  long lVar2;
  char *pcVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  GLProgram *this_00;
  GLProgram *extraout_x0;
  GLProgram *extraout_x0_00;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  void *pvVar10;
  GLProgram *pGVar11;
  GLProgram *pGVar12;
  char *pcVar13;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_c8 [16];
  void *local_b8;
  byte local_b0 [8];
  ulong local_a8;
  char *local_a0;
  ulong local_98;
  ulong local_90;
  undefined1 *local_88;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_80 [8];
  ulong local_78;
  char *local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  uVar5 = glCreateProgram();
  *(undefined4 *)(this + 0x24) = uVar5;
  this_00 = (GLProgram *)
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            basic_string<decltype(nullptr)>(local_c8,"");
  uVar8 = (ulong)((byte)*param_4 >> 1);
  if (((byte)*param_4 & 1) != 0) {
    uVar8 = *(ulong *)(param_4 + 8);
  }
  if (uVar8 != 0) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string(local_80,param_4);
    uVar8 = (ulong)((byte)local_80[0] >> 1);
    pcVar13 = (char *)((ulong)local_80 | 1);
    uVar1 = uVar8;
    if (((byte)local_80[0] & 1) != 0) {
      pcVar13 = local_70;
      uVar1 = local_78;
    }
    if (pcVar13[uVar1 - 1] != ';') {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append(local_80,1,';');
      uVar8 = (ulong)((byte)local_80[0] >> 1);
    }
    pcVar13 = (char *)((ulong)local_80 | 1);
    if (((byte)local_80[0] & 1) != 0) {
      pcVar13 = local_70;
      uVar8 = local_78;
    }
    local_90 = 0;
    local_88 = (undefined1 *)0x0;
    local_98 = 0;
    if (uVar8 != 0) {
      do {
        if (*pcVar13 == ';') {
          uVar1 = local_98 >> 1 & 0x7f;
          if ((local_98 & 1) != 0) {
            uVar1 = local_90;
          }
          if (uVar1 != 0) {
            std::__ndk1::operator+((__ndk1 *)"\n#define ",(char *)&local_98,(basic_string *)0x3b);
            uVar1 = (ulong)(local_b0[0] >> 1);
            pcVar3 = (char *)((ulong)local_b0 | 1);
            if ((local_b0[0] & 1) != 0) {
              uVar1 = local_a8;
              pcVar3 = local_a0;
            }
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                      (local_c8,pcVar3,uVar1);
            if ((local_b0[0] & 1) != 0) {
              operator_delete(local_a0);
            }
            if ((local_98 & 1) == 0) {
              local_98 = local_98 & 0xffffffffffff0000;
            }
            else {
              *local_88 = 0;
              local_90 = 0;
            }
          }
        }
        else {
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)&local_98,1,*pcVar13);
        }
        uVar8 = uVar8 - 1;
        pcVar13 = pcVar13 + 1;
      } while (uVar8 != 0);
    }
    this_00 = (GLProgram *)
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                        (local_c8,"\n",1);
    if ((local_98 & 1) != 0) {
      operator_delete(local_88);
      this_00 = extraout_x0;
    }
    if (((byte)local_80[0] & 1) != 0) {
      operator_delete(local_70);
      this_00 = extraout_x0_00;
    }
  }
  pGVar11 = this + 0x2c;
  *(undefined4 *)pGVar11 = 0;
  pGVar12 = this + 0x28;
  *(undefined4 *)pGVar12 = 0;
  if (((param_1 == (char *)0x0) ||
      (this_00 = (GLProgram *)
                 compileShader(this_00,(uint *)pGVar12,0x8b31,param_1,param_3,
                               (basic_string *)local_c8), ((ulong)this_00 & 1) != 0)) &&
     ((param_2 == (char *)0x0 ||
      (uVar8 = compileShader(this_00,(uint *)pGVar11,0x8b30,param_2,param_3,(basic_string *)local_c8
                            ), (uVar8 & 1) != 0)))) {
    if (*(int *)pGVar12 != 0) {
      glAttachShader(*(undefined4 *)(this + 0x24));
    }
    if (*(int *)pGVar11 != 0) {
      glAttachShader(*(undefined4 *)(this + 0x24));
    }
    for (plVar9 = *(long **)(this + 0xd0); plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
      free((void *)plVar9[3]);
    }
    if (*(long *)(this + 0xd8) != 0) {
      puVar4 = *(void **)(this + 0xd0);
      while (puVar4 != (void *)0x0) {
        pvVar10 = (void *)*puVar4;
        operator_delete(puVar4);
        puVar4 = pvVar10;
      }
      lVar6 = *(long *)(this + 200);
      *(undefined8 *)(this + 0xd0) = 0;
      if (lVar6 != 0) {
        lVar7 = 0;
        do {
          *(undefined8 *)(*(long *)(this + 0xc0) + lVar7 * 8) = 0;
          lVar7 = lVar7 + 1;
                    /* catch() { ... } // from try @ 00fcdfc0 with catch @ 00fcdf88 */
        } while (lVar6 != lVar7);
      }
      *(undefined8 *)(this + 0xd8) = 0;
    }
    uVar5 = 1;
  }
  else {
    uVar5 = 0;
  }
  if (((byte)local_c8[0] & 1) != 0) {
    operator_delete(local_b8);
  }
                    /* try { // try from 00fcdfb8 to 010cdfbf has its CatchHandler @ 00fce058 */
                    /* try { // try from 00fcdfc0 to 010ce073 has its CatchHandler @ 00fcdf88 */
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

