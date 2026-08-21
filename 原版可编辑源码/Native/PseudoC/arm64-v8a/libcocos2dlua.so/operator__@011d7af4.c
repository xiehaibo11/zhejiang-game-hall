
/* std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char>
   >::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >*)
    */

basic_ostream<char,std::__ndk1::char_traits<char>> * __thiscall
std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
          (basic_ostream<char,std::__ndk1::char_traits<char>> *this,basic_streambuf *param_1)

{
  undefined1 *puVar1;
  uint uVar2;
  long lVar3;
  undefined1 uVar4;
  int iVar5;
  long lVar6;
  basic_streambuf *pbVar7;
  long *plVar8;
  sentry local_58 [8];
  basic_ostream<char,std::__ndk1::char_traits<char>> *local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  local_58[0] = (sentry)0x0;
  lVar6 = *(long *)this;
  local_50 = this;
  if (*(int *)(this + *(long *)(lVar6 + -0x18) + 0x20) == 0) {
    if (*(basic_ostream<char,std::__ndk1::char_traits<char>> **)
         (this + *(long *)(lVar6 + -0x18) + 0x88) !=
        (basic_ostream<char,std::__ndk1::char_traits<char>> *)0x0) {
      flush(*(basic_ostream<char,std::__ndk1::char_traits<char>> **)
             (this + *(long *)(lVar6 + -0x18) + 0x88));
      lVar6 = *(long *)this;
    }
    local_58[0] = (sentry)0x1;
    lVar6 = *(long *)(lVar6 + -0x18);
    if (param_1 != (basic_streambuf *)0x0) {
      plVar8 = *(long **)(this + lVar6 + 0x28);
      lVar6 = 0;
      do {
        pbVar7 = param_1;
        if (*(long *)(param_1 + 0x18) == *(long *)(param_1 + 0x20)) {
          iVar5 = (**(code **)(*(long *)param_1 + 0x48))(param_1);
          pbVar7 = (basic_streambuf *)0x0;
          if (iVar5 != -1) {
            pbVar7 = param_1;
          }
          if (pbVar7 == (basic_streambuf *)0x0) goto LAB_011d7c44;
        }
        if (*(undefined1 **)(pbVar7 + 0x18) == *(undefined1 **)(pbVar7 + 0x20)) {
          uVar4 = (**(code **)(*(long *)pbVar7 + 0x48))(pbVar7);
        }
        else {
          uVar4 = **(undefined1 **)(pbVar7 + 0x18);
        }
        if (plVar8 == (long *)0x0) goto LAB_011d7c48;
        puVar1 = (undefined1 *)plVar8[6];
        if (puVar1 == (undefined1 *)plVar8[7]) {
          iVar5 = (**(code **)(*plVar8 + 0x68))(plVar8,uVar4);
          if (iVar5 == -1) goto LAB_011d7c44;
        }
        else {
          plVar8[6] = (long)(puVar1 + 1);
          *puVar1 = uVar4;
        }
        if (*(long *)(pbVar7 + 0x18) == *(long *)(pbVar7 + 0x20)) {
          (**(code **)(*(long *)pbVar7 + 0x50))(pbVar7);
        }
        else {
          *(long *)(pbVar7 + 0x18) = *(long *)(pbVar7 + 0x18) + 1;
        }
        lVar6 = lVar6 + -1;
        param_1 = pbVar7;
      } while( true );
    }
    uVar2 = *(uint *)(this + lVar6 + 0x20);
    *(uint *)(this + lVar6 + 0x20) = uVar2 | 1;
    if ((*(uint *)(this + lVar6 + 0x24) & (uVar2 | 1)) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_011dac54("ios_base::clear");
    }
  }
LAB_011d7c7c:
  sentry::~sentry(local_58);
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_011d7c44:
  if (lVar6 == 0) {
LAB_011d7c48:
    lVar6 = *(long *)(*(long *)this + -0x18);
    uVar2 = *(uint *)(this + lVar6 + 0x20) | (uint)(*(long *)(this + lVar6 + 0x28) == 0) | 4;
    *(uint *)(this + lVar6 + 0x20) = uVar2;
    if ((uVar2 & *(uint *)(this + lVar6 + 0x24)) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_011dac54("ios_base::clear");
    }
  }
  goto LAB_011d7c7c;
}

