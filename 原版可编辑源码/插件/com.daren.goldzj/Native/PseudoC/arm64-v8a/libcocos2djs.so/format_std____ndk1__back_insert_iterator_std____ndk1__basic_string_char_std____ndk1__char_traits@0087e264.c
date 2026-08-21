
/* std::__ndk1::back_insert_iterator<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > > std::__ndk1::match_results<std::__ndk1::__wrap_iter<char
   const*>, std::__ndk1::allocator<std::__ndk1::sub_match<std::__ndk1::__wrap_iter<char const*> > >
   >::format<std::__ndk1::back_insert_iterator<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >
   >(std::__ndk1::back_insert_iterator<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, char const*, char const*,
   std::__ndk1::regex_constants::match_flag_type) const */

basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> * __thiscall
std::__ndk1::
match_results<std::__ndk1::__wrap_iter<char_const*>,std::__ndk1::allocator<std::__ndk1::sub_match<std::__ndk1::__wrap_iter<char_const*>>>>
::
format<std::__ndk1::back_insert_iterator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
          (match_results<std::__ndk1::__wrap_iter<char_const*>,std::__ndk1::allocator<std::__ndk1::sub_match<std::__ndk1::__wrap_iter<char_const*>>>>
           *this,basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                 *param_2,char *param_3,char *param_4,uint param_5)

{
  match_results<std::__ndk1::__wrap_iter<char_const*>,std::__ndk1::allocator<std::__ndk1::sub_match<std::__ndk1::__wrap_iter<char_const*>>>>
  *pmVar1;
  char *pcVar2;
  char cVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  char *pcVar7;
  char *pcVar8;
  
  if ((param_5 >> 8 & 1) == 0) {
    if (param_3 != param_4) {
      do {
        cVar3 = *param_3;
        if ((cVar3 == '$') && (pcVar8 = param_3 + 1, pcVar8 != param_4)) {
          cVar3 = *pcVar8;
          iVar4 = (int)cVar3;
          if (cVar3 < '\'') {
            if (cVar3 == '$') {
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
              push_back(param_2,'$');
            }
            else if (iVar4 == 0x26) {
              pcVar2 = (char *)(*(undefined8 **)this)[1];
              for (pcVar7 = (char *)**(undefined8 **)this; pcVar7 != pcVar2; pcVar7 = pcVar7 + 1) {
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                push_back(param_2,*pcVar7);
              }
            }
            else {
LAB_0087e378:
              if (9 < (iVar4 - 0x30U & 0xff)) {
                cVar3 = '$';
                goto LAB_0087e400;
              }
              param_3 = param_3 + 2;
              uVar5 = (long)iVar4 - 0x30;
              if ((param_3 != param_4) && ((byte)(*param_3 - 0x30U) < 10)) {
                uVar5 = ((long)*param_3 + uVar5 * 10) - 0x30;
                pcVar8 = param_3;
              }
              uVar6 = (*(long *)(this + 8) - *(long *)this >> 3) * -0x5555555555555555;
              pmVar1 = (match_results<std::__ndk1::__wrap_iter<char_const*>,std::__ndk1::allocator<std::__ndk1::sub_match<std::__ndk1::__wrap_iter<char_const*>>>>
                        *)(*(long *)this + uVar5 * 0x18);
              if (uVar6 < uVar5 || uVar6 - uVar5 == 0) {
                pmVar1 = this + 0x18;
              }
              pcVar2 = *(char **)(pmVar1 + 8);
              for (pcVar7 = *(char **)pmVar1; pcVar7 != pcVar2; pcVar7 = pcVar7 + 1) {
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                push_back(param_2,*pcVar7);
              }
            }
          }
          else if (iVar4 == 0x27) {
            pcVar2 = *(char **)(this + 0x50);
            for (pcVar7 = *(char **)(this + 0x48); pcVar7 != pcVar2; pcVar7 = pcVar7 + 1) {
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
              push_back(param_2,*pcVar7);
            }
          }
          else {
            if (cVar3 != '`') goto LAB_0087e378;
            pcVar2 = *(char **)(this + 0x38);
            for (pcVar7 = *(char **)(this + 0x30); pcVar7 != pcVar2; pcVar7 = pcVar7 + 1) {
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
              push_back(param_2,*pcVar7);
            }
          }
        }
        else {
LAB_0087e400:
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::push_back
                    (param_2,cVar3);
          pcVar8 = param_3;
        }
        param_3 = pcVar8 + 1;
      } while (param_3 != param_4);
    }
  }
  else if (param_3 != param_4) {
    do {
      cVar3 = *param_3;
      if (cVar3 == '\\') {
        pcVar8 = param_3 + 1;
        if (pcVar8 == param_4) goto LAB_0087e4cc;
        cVar3 = *pcVar8;
        if ((byte)(cVar3 - 0x30U) < 10) {
          uVar6 = (long)cVar3 - 0x30;
          uVar5 = (*(long *)(this + 8) - *(long *)this >> 3) * -0x5555555555555555;
          pmVar1 = (match_results<std::__ndk1::__wrap_iter<char_const*>,std::__ndk1::allocator<std::__ndk1::sub_match<std::__ndk1::__wrap_iter<char_const*>>>>
                    *)(*(long *)this + uVar6 * 0x18);
          if (uVar5 < uVar6 || uVar5 - uVar6 == 0) {
            pmVar1 = this + 0x18;
          }
          pcVar2 = *(char **)(pmVar1 + 8);
          for (pcVar7 = *(char **)pmVar1; pcVar7 != pcVar2; pcVar7 = pcVar7 + 1) {
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            push_back(param_2,*pcVar7);
          }
        }
        else {
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::push_back
                    (param_2,cVar3);
        }
      }
      else if (cVar3 == '&') {
        pcVar2 = (char *)(*(undefined8 **)this)[1];
        for (pcVar7 = (char *)**(undefined8 **)this; pcVar8 = param_3, pcVar7 != pcVar2;
            pcVar7 = pcVar7 + 1) {
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::push_back
                    (param_2,*pcVar7);
        }
      }
      else {
LAB_0087e4cc:
        basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::push_back
                  (param_2,cVar3);
        pcVar8 = param_3;
      }
      param_3 = pcVar8 + 1;
    } while (param_3 != param_4);
  }
  return param_2;
}

