
/* AppDelegate::applicationDidFinishLaunching() */

undefined8 __thiscall AppDelegate::applicationDidFinishLaunching(AppDelegate *this)

{
  __shared_weak_count *p_Var1;
  ulong uVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  Scheduler *this_00;
  __shared_weak_count *this_01;
  ScriptEngine *this_02;
  byte *pbVar7;
  Isolate *pIVar8;
  char *pcVar9;
  code *pcVar10;
  long lVar11;
  void *pvVar12;
  HandleScope local_b0;
  undefined7 uStack_af;
  undefined1 local_a8;
  undefined1 uStack_a7;
  undefined6 uStack_a6;
  char *local_a0;
  basic_string local_98;
  undefined7 uStack_97;
  undefined1 uStack_90;
  undefined7 uStack_8f;
  undefined1 uStack_88;
  undefined1 uStack_87;
  undefined6 uStack_86;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_80;
  undefined7 uStack_7f;
  undefined1 uStack_78;
  undefined7 uStack_77;
  undefined1 uStack_70;
  undefined1 uStack_6f;
  undefined6 uStack_6e;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *local_60;
  long local_48;
  
  lVar6 = tpidr_el0;
  local_48 = *(long *)(lVar6 + 0x28);
  this_02 = (ScriptEngine *)se::ScriptEngine::getInstance();
  uStack_86 = 0;
  local_98 = (basic_string)0x20;
  uStack_8f = 0x31323334353637;
  uStack_88 = 0x30;
  uStack_97 = 0x39414243444546;
  uStack_90 = 0x38;
  uStack_87 = 0;
  AppDelegate_convertToHex(0xf288cfd2,&local_98);
  AppDelegate_convertToHex(0x350dfd3,&local_98);
  uVar2 = (ulong)((byte)local_b0 >> 1);
  pcVar9 = (char *)((ulong)&local_b0 | 1);
  if (((byte)local_b0 & 1) != 0) {
    uVar2 = CONCAT62(uStack_a6,CONCAT11(uStack_a7,local_a8));
    pcVar9 = local_a0;
  }
  pbVar7 = (byte *)std::__ndk1::
                   basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                   append(&local_80,pcVar9,uVar2);
  bVar3 = *pbVar7;
  pvVar12 = *(void **)(pbVar7 + 0x10);
  pbVar7[8] = 0;
  pbVar7[9] = 0;
  pbVar7[10] = 0;
  pbVar7[0xb] = 0;
  pbVar7[0xc] = 0;
  pbVar7[0xd] = 0;
  pbVar7[0xe] = 0;
  pbVar7[0xf] = 0;
  pbVar7[0x10] = 0;
  pbVar7[0x11] = 0;
  pbVar7[0x12] = 0;
  pbVar7[0x13] = 0;
  pbVar7[0x14] = 0;
  pbVar7[0x15] = 0;
  pbVar7[0x16] = 0;
  pbVar7[0x17] = 0;
  pbVar7[0] = 0;
  pbVar7[1] = 0;
  pbVar7[2] = 0;
  pbVar7[3] = 0;
  pbVar7[4] = 0;
  pbVar7[5] = 0;
  pbVar7[6] = 0;
  pbVar7[7] = 0;
  if (((byte)local_b0 & 1) != 0) {
    operator_delete(local_a0);
  }
  if (((byte)local_80 & 1) != 0) {
    operator_delete((void *)CONCAT62(uStack_6e,CONCAT11(uStack_6f,uStack_70)));
  }
  uStack_6e = 0;
  local_80 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x20;
  uStack_77 = 0x35314230423033;
  uStack_70 = 0x33;
  uStack_7f = 0x32343845363744;
  uStack_78 = 0x39;
  uStack_6f = 0;
  jsb_set_xxtea_key((basic_string *)&local_80);
  if (((byte)local_80 & 1) != 0) {
    operator_delete((void *)CONCAT62(uStack_6e,CONCAT11(uStack_6f,uStack_70)));
  }
  jsb_init_file_operation_delegate();
  universe_core_init();
  FileImplement::init();
  this_01 = DAT_01d35b10;
  this_00 = cocos2d::Application::_scheduler;
  if (DAT_01d35b10 != (__shared_weak_count *)0x0) {
    p_Var1 = DAT_01d35b10 + 8;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar5) {
        *(long *)p_Var1 = *(long *)p_Var1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  local_60 = &local_80;
  uStack_a6 = 0;
  local_a0 = (void *)0x0;
  local_80 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0xd8;
  uStack_7f = 0x1c65c;
  local_b0 = (HandleScope)0x10;
  uStack_af = 0x73726576696e75;
  local_a8 = 0x65;
  uStack_a7 = 0;
  cocos2d::Scheduler::schedule(this_00,&local_80,this,0.0,false,(basic_string *)&local_b0);
  if (((byte)local_b0 & 1) != 0) {
    operator_delete(local_a0);
  }
  if (&local_80 == local_60) {
    pcVar10 = *(code **)(*(long *)local_60 + 0x20);
LAB_00856dcc:
    (*pcVar10)();
  }
  else if (local_60 !=
           (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)0x0) {
    pcVar10 = *(code **)(*(long *)local_60 + 0x28);
    goto LAB_00856dcc;
  }
  if (this_01 != (__shared_weak_count *)0x0) {
    p_Var1 = this_01 + 8;
    do {
      lVar11 = *(long *)p_Var1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar5) {
        *(long *)p_Var1 = lVar11 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*(long *)this_01 + 0x10))(this_01);
      std::__ndk1::__shared_weak_count::__release_weak(this_01);
    }
  }
  local_80 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x68;
  uStack_7f = 0x1c65d;
  local_60 = &local_80;
  se::ScriptEngine::setExceptionCallback(this_02,&local_80);
  if (&local_80 == local_60) {
    pcVar10 = *(code **)(*(long *)local_60 + 0x20);
LAB_00856e48:
    (*pcVar10)();
  }
  else if (local_60 !=
           (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)0x0) {
    pcVar10 = *(code **)(*(long *)local_60 + 0x28);
    goto LAB_00856e48;
  }
  jsb_register_all_modules();
  se::ScriptEngine::start(this_02);
  pIVar8 = (Isolate *)v8::Isolate::GetCurrent();
  v8::HandleScope::HandleScope(&local_b0,pIVar8);
  local_80 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
  uStack_7f = 0;
  uStack_78 = 0;
  uStack_77 = 0;
  uStack_70 = 0;
  uStack_6f = 0;
  uStack_6e = 0;
  pcVar9 = operator_new(0x20);
  uStack_70 = SUB81(pcVar9,0);
  uStack_6f = (undefined1)((ulong)pcVar9 >> 8);
  uStack_6e = (undefined6)((ulong)pcVar9 >> 0x10);
  uStack_78 = 0x1a;
  uStack_77 = 0;
  local_80 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x21;
  uStack_7f = 0;
  builtin_strncpy(pcVar9,"jsb-adapter/jsb-builtin.js",0x1b);
  jsb_run_script((basic_string *)&local_80,(Value *)0x0);
  if (((byte)local_80 & 1) != 0) {
    operator_delete((void *)CONCAT62(uStack_6e,CONCAT11(uStack_6f,uStack_70)));
  }
  uStack_77 = 0;
  uStack_70 = 0;
  uStack_6f = 0;
  uStack_6e = 0;
  local_80 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0xe;
  uStack_7f = 0x736a2e6e69616d;
  uStack_78 = 0;
  jsb_run_script((basic_string *)&local_80,(Value *)0x0);
  if (((byte)local_80 & 1) != 0) {
    operator_delete((void *)CONCAT62(uStack_6e,CONCAT11(uStack_6f,uStack_70)));
  }
  local_80 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0xf8;
  uStack_7f = 0x1c65d;
  local_60 = &local_80;
  se::ScriptEngine::addAfterCleanupHook(this_02,&local_80);
  if (&local_80 == local_60) {
    pcVar10 = *(code **)(*(long *)local_60 + 0x20);
  }
  else {
    if (local_60 ==
        (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)0x0)
    goto LAB_00856f48;
    pcVar10 = *(code **)(*(long *)local_60 + 0x28);
  }
  (*pcVar10)();
LAB_00856f48:
  v8::HandleScope::~HandleScope(&local_b0);
  if ((bVar3 & 1) != 0) {
    operator_delete(pvVar12);
  }
  if (((byte)local_98 & 1) != 0) {
    operator_delete((void *)CONCAT62(uStack_86,CONCAT11(uStack_87,uStack_88)));
  }
  if (*(long *)(lVar6 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 1;
}

