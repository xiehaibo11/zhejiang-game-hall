
ulong FUN_015a1224(undefined8 param_1,ulong *param_2,Isolate *param_3)

{
  long lVar1;
  byte *pbVar2;
  char cVar3;
  long *plVar4;
  undefined8 uVar5;
  basic_ostream *pbVar6;
  void *pvVar7;
  ulong uVar8;
  byte **local_750;
  byte *local_748;
  char *local_740;
  undefined8 local_738;
  RuntimeCallStats *local_730;
  undefined8 uStack_728;
  undefined8 uStack_720;
  undefined8 uStack_718;
  undefined8 local_710;
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
  long *local_608;
  long *local_600;
  long *local_80;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  local_710 = 0;
  uStack_728 = 0;
  local_730 = (RuntimeCallStats *)0x0;
  uStack_718 = 0;
  uStack_720 = 0;
  if (v8::internal::TracingFlags::runtime_stats != 0) {
    local_730 = (RuntimeCallStats *)(*(long *)(param_3 + 0x9520) + 0x58a0);
    v8::internal::RuntimeCallStats::Enter(local_730,(ulong)&local_730 | 8,0x223);
  }
  if (DAT_01d47540 == (byte *)0x0) {
    plVar4 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d47540 = (byte *)(**(code **)(*plVar4 + 0x10))(plVar4,"disabled-by-default-v8.runtime");
  }
  pbVar2 = DAT_01d47540;
  local_750 = (byte **)0x0;
  if ((*DAT_01d47540 & 5) != 0) {
    local_608 = (long *)0x0;
    local_600 = (long *)0x0;
    plVar4 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    uVar5 = (**(code **)(*plVar4 + 0x18))
                      (plVar4,0x58,pbVar2,"V8.Runtime_Runtime_DebugPrint",0,0,0,0,0,0,0,&local_608,0
                      );
    plVar4 = local_600;
    local_600 = (long *)0x0;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))();
    }
    plVar4 = local_608;
    local_608 = (long *)0x0;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))();
    }
    local_750 = &local_748;
    local_740 = "V8.Runtime_Runtime_DebugPrint";
    local_748 = pbVar2;
    local_738 = uVar5;
  }
  uVar8 = *param_2;
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
  if ((int)uVar8 == 3) {
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              ((basic_ostream *)&local_700,"[weak cleared]",0xe);
  }
  else {
    local_708 = uVar8;
    if ((uVar8 & 1) != 0) {
      local_708 = uVar8 & 0xfffffffffffffffd;
    }
    if ((((local_708 & 1) == 0) ||
        (0x3f < *(ushort *)((local_708 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(local_708 - 1)))
        ) || (*(int *)(param_3 + 0x2bc8) == 0)) {
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                ((basic_ostream *)&local_700,"DebugPrint: ",0xc);
      if ((uVar8 & 3) == 3) {
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                  ((basic_ostream *)&local_700,"[weak] ",7);
      }
      v8::internal::Object::Print((Object *)&local_708,(basic_ostream *)&local_700);
    }
    else {
      v8::internal::Object::Print((Object *)&local_708,(basic_ostream *)&local_700);
      v8::internal::StackFrameIterator::StackFrameIterator((StackFrameIterator *)&local_608,param_3)
      ;
      if (local_80 == (long *)0x0) {
        local_80 = (long *)0x0;
      }
      else {
        v8::internal::JavaScriptFrameIterator::Advance((JavaScriptFrameIterator *)&local_608);
      }
      pbVar6 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         ((basic_ostream *)&local_700,"fp = ",5);
      pbVar6 = (basic_ostream *)
               std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                         ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar6,
                          (void *)local_80[4]);
      pbVar6 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar6,", sp = ",7);
      pbVar6 = (basic_ostream *)
               std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                         ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar6,
                          (void *)local_80[3]);
      pbVar6 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar6,", caller_sp = ",0xe);
      pvVar7 = (void *)(**(code **)(*local_80 + 0x38))(local_80);
      pbVar6 = (basic_ostream *)
               std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                         ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar6,pvVar7);
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar6,": ",2);
    }
    if ((local_708 & 1) != 0) {
      local_608 = (long *)(local_708 & 0xffffffff00000000 | (ulong)*(uint *)(local_708 - 1));
      v8::internal::Object::Print((Object *)&local_608,(basic_ostream *)&local_700);
    }
  }
  std::__ndk1::ios_base::getloc();
  plVar4 = (long *)std::__ndk1::locale::use_facet
                             ((locale *)&local_608,(id *)&std::__ndk1::ctype<char>::id);
  cVar3 = (**(code **)(*plVar4 + 0x38))(plVar4,10);
  std::__ndk1::locale::~locale((locale *)&local_608);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_700,cVar3);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_700);
  uVar8 = *param_2;
  local_700 = &PTR__StdoutStream_01ca1128;
  local_6a0[0] = &PTR__StdoutStream_01ca1150;
  v8::internal::AndroidLogStream::~AndroidLogStream((AndroidLogStream *)&local_6f8);
  std::__ndk1::ios_base::~ios_base((ios_base *)local_6a0);
  if ((local_750 != (byte **)0x0) && (*local_748 != 0)) {
    plVar4 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar4 + 0x28))(plVar4,local_748,local_740,local_738);
  }
  if (local_730 != (RuntimeCallStats *)0x0) {
    v8::internal::RuntimeCallStats::Leave(local_730,(RuntimeCallTimer *)((ulong)&local_730 | 8));
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

