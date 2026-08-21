
/* v8::internal::Runtime_DebugPrint(int, unsigned long*, v8::internal::Isolate*) */

ulong v8::internal::Runtime_DebugPrint(int param_1,ulong *param_2,Isolate *param_3)

{
  long lVar1;
  char cVar2;
  long *plVar3;
  basic_ostream *pbVar4;
  void *pvVar5;
  ulong uVar6;
  ulong local_708;
  undefined **local_700;
  undefined **local_6f8;
  locale alStack_6f0 [8];
  undefined8 local_6e8;
  undefined8 uStack_6e0;
  undefined8 local_6d8;
  undefined8 uStack_6d0;
  undefined8 local_6c8;
  undefined8 uStack_6c0;
  undefined8 local_6b8;
  undefined8 uStack_6b0;
  undefined8 local_6a8;
  undefined **local_6a0 [17];
  undefined8 local_618;
  undefined4 local_610;
  ulong local_608 [177];
  long *local_80;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if (TracingFlags::runtime_stats == 0) {
    uVar6 = *param_2;
    local_700 = (undefined **)0x1ca1178;
    local_6a0[0] = (undefined **)0x1ca11a0;
    std::__ndk1::ios_base::init((ios_base *)local_6a0,(AndroidLogStream *)&local_6f8);
    local_610 = 0xffffffff;
    local_700 = &PTR__StdoutStream_01ca1128;
    local_6a0[0] = &PTR__StdoutStream_01ca1150;
    local_6f8 = &PTR__basic_streambuf_01c671a8;
    local_618 = 0;
    std::__ndk1::locale::locale(alStack_6f0);
    local_6b8 = 0;
    uStack_6b0 = 0;
    local_6f8 = &PTR__AndroidLogStream_01cbc008;
    uStack_6c0 = 0;
    local_6c8 = 0;
    uStack_6d0 = 0;
    local_6d8 = 0;
    uStack_6e0 = 0;
    local_6e8 = 0;
    local_6a8 = 0;
    if ((int)uVar6 == 3) {
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                ((basic_ostream *)&local_700,"[weak cleared]",0xe);
    }
    else {
      local_708 = uVar6;
      if ((uVar6 & 1) != 0) {
        local_708 = uVar6 & 0xfffffffffffffffd;
      }
      if ((((local_708 & 1) == 0) ||
          (0x3f < *(ushort *)
                   ((local_708 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(local_708 - 1)))) ||
         (*(int *)(param_3 + 0x2bc8) == 0)) {
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                  ((basic_ostream *)&local_700,"DebugPrint: ",0xc);
        if ((uVar6 & 3) == 3) {
          std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                    ((basic_ostream *)&local_700,"[weak] ",7);
        }
        Object::Print((Object *)&local_708,(basic_ostream *)&local_700);
      }
      else {
        Object::Print((Object *)&local_708,(basic_ostream *)&local_700);
        StackFrameIterator::StackFrameIterator((StackFrameIterator *)local_608,param_3);
        if (local_80 == (long *)0x0) {
          local_80 = (long *)0x0;
        }
        else {
          JavaScriptFrameIterator::Advance((JavaScriptFrameIterator *)local_608);
        }
        pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                           ((basic_ostream *)&local_700,"fp = ",5);
        pbVar4 = (basic_ostream *)
                 std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                           ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar4,
                            (void *)local_80[4]);
        pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                           (pbVar4,", sp = ",7);
        pbVar4 = (basic_ostream *)
                 std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                           ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar4,
                            (void *)local_80[3]);
        pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                           (pbVar4,", caller_sp = ",0xe);
        pvVar5 = (void *)(**(code **)(*local_80 + 0x38))(local_80);
        pbVar4 = (basic_ostream *)
                 std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                           ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar4,pvVar5);
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar4,": ",2);
      }
      if ((local_708 & 1) != 0) {
        local_608[0] = local_708 & 0xffffffff00000000 | (ulong)*(uint *)(local_708 - 1);
        Object::Print((Object *)local_608,(basic_ostream *)&local_700);
      }
    }
    std::__ndk1::ios_base::getloc();
    plVar3 = (long *)std::__ndk1::locale::use_facet
                               ((locale *)local_608,(id *)&std::__ndk1::ctype<char>::id);
    cVar2 = (**(code **)(*plVar3 + 0x38))(plVar3,10);
    std::__ndk1::locale::~locale((locale *)local_608);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put
              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_700,cVar2);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush
              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_700);
    uVar6 = *param_2;
    local_700 = &PTR__StdoutStream_01ca1128;
    local_6a0[0] = &PTR__StdoutStream_01ca1150;
    AndroidLogStream::~AndroidLogStream((AndroidLogStream *)&local_6f8);
    std::__ndk1::ios_base::~ios_base((ios_base *)local_6a0);
    if (*(long *)(lVar1 + 0x28) != local_68) {
LAB_015a1220:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
  else {
    uVar6 = FUN_015a1224(param_1,param_2,param_3);
    if (*(long *)(lVar1 + 0x28) != local_68) goto LAB_015a1220;
  }
  return uVar6;
}

