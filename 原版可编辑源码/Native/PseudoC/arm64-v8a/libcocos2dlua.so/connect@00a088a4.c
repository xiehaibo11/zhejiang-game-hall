
/* universe::network::GuoPengFei::connect(int, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, int) */

void __thiscall
universe::network::GuoPengFei::connect
          (GuoPengFei *this,undefined4 param_1,
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *param_3,
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *param_4,
          uint param_5)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  char *pcVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long *plVar7;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar8;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar9;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined1 local_4c [4];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if (this[0x4a0] != (GuoPengFei)0x0) {
    pcVar4 = (char *)Translated::getInstance();
    Translated::log(pcVar4,"GuoPengFei: delete 2");
  }
  pcVar4 = (char *)Translated::getInstance();
  Translated::log(pcVar4,"GuoPengFei connect %d, timeout: %d",(ulong)*(uint *)(this + 0x45c),
                  (ulong)param_5);
  if (this[0x10] == (GuoPengFei)0x0) {
    *(undefined2 *)(this + 0x10) = 1;
    if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
        (this + 0x3e0) != param_3) {
      uVar1 = *(ulong *)(param_3 + 8);
      pbVar8 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
                (param_3 + 0x10);
      if (((byte)*param_3 & 1) == 0) {
        pbVar8 = param_3 + 1;
        uVar1 = (ulong)((byte)*param_3 >> 1);
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (this + 0x3e0),(char *)pbVar8,uVar1);
    }
    if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
        (this + 0x3f8) != param_4) {
      uVar1 = *(ulong *)(param_4 + 8);
      pbVar8 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
                (param_4 + 0x10);
      if (((byte)*param_4 & 1) == 0) {
        pbVar8 = param_4 + 1;
        uVar1 = (ulong)((byte)*param_4 >> 1);
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (this + 0x3f8),(char *)pbVar8,uVar1);
    }
    *(undefined4 *)(this + 0x410) = param_1;
    local_70 = 0;
    local_68 = 0;
    uStack_60 = 0;
    uStack_78 = 0x600000001;
    local_80 = 0;
    local_58 = 0;
    pcVar4 = (char *)Translated::getInstance();
    if (((byte)*param_3 & 1) == 0) {
      pbVar8 = param_3 + 1;
    }
    else {
      pbVar8 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
                (param_3 + 0x10);
    }
    pbVar9 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
              (param_4 + 0x10);
    if (((byte)*param_4 & 1) == 0) {
      pbVar9 = param_4 + 1;
    }
    Translated::log(pcVar4,"start query host address %s:%s",pbVar8,pbVar9);
                    /* try { // try from 00a089e8 to 00b08a37 has its CatchHandler @ 00a089e8
                       catch() { ... } // from try @ 00a089e8 with catch @ 00a089e8
                       catch() { ... } // from try @ 00a08a64 with catch @ 00a089e8 */
    puVar5 = malloc(0xa0);
    *(undefined8 **)(this + 0x2b0) = puVar5;
    puVar5[0x13] = 0;
    puVar5[2] = 0;
    puVar5[1] = 0;
    puVar5[4] = 0;
    puVar5[3] = 0;
    puVar5[6] = 0;
    puVar5[5] = 0;
    puVar5[8] = 0;
    puVar5[7] = 0;
    puVar5[10] = 0;
    puVar5[9] = 0;
    puVar5[0xc] = 0;
    puVar5[0xb] = 0;
    puVar5[0xe] = 0;
    puVar5[0xd] = 0;
    puVar5[0x10] = 0;
    puVar5[0xf] = 0;
    puVar5[0x12] = 0;
    puVar5[0x11] = 0;
    *puVar5 = this;
    uVar6 = uv_default_loop();
    if (((byte)*param_3 & 1) == 0) {
      param_3 = param_3 + 1;
                    /* try { // try from 00a08a38 to 00b08a63 has its CatchHandler @ 00a08b3c */
    }
    else {
      param_3 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
                 (param_3 + 0x10);
    }
    pbVar8 = param_4 + 1;
    if (((byte)*param_4 & 1) != 0) {
      pbVar8 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
                (param_4 + 0x10);
    }
    iVar3 = uv_getaddrinfo(uVar6,*(undefined8 *)(this + 0x2b0),FUN_00a08b08,param_3,pbVar8,&local_80
                          );
    if (iVar3 == 0) {
      if (0 < (int)param_5) {
        *(GuoPengFei **)(this + 0xe8) = this;
        iVar3 = uv_timer_start(this + 0xe8,FUN_00a08c7c,(long)(int)param_5,0);
        if (iVar3 != 0) {
          pcVar4 = (char *)Translated::getInstance();
          uVar6 = uv_err_name(iVar3);
          Translated::log(pcVar4,"uv_timer_start call error %s",uVar6);
        }
      }
    }
    else {
                    /* try { // try from 00a08a64 to 00b08bd7 has its CatchHandler @ 00a089e8 */
      pcVar4 = (char *)Translated::getInstance();
      uVar6 = uv_err_name(iVar3);
      Translated::log(pcVar4,"getaddrinfo call error %s",uVar6);
      plVar7 = *(long **)(this + 0x40);
      this[0x10] = (GuoPengFei)0x0;
      if (plVar7 != (long *)0x0) {
        local_4c[0] = 0;
        (**(code **)(*plVar7 + 0x30))(plVar7,local_4c);
      }
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

