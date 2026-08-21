
/* WARNING: Type propagation algorithm not settling */
/* cocosbuilder::CCBReader::readNodeGraphFromFile(char const*, cocos2d::Ref*, cocos2d::Size const&)
    */

undefined8 __thiscall
cocosbuilder::CCBReader::readNodeGraphFromFile
          (CCBReader *this,char *param_1,Ref *param_2,Size *param_3)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  size_t sVar6;
  ulong uVar7;
  long *plVar8;
  __shared_weak_count *this_00;
  undefined8 uVar9;
  long lVar10;
  __shared_weak_count *p_Var11;
  Data *local_c0;
  __shared_weak_count *p_Stack_b8;
  Data aDStack_b0 [16];
  byte local_a0 [16];
  void *local_90;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_88 [8];
  ulong local_80;
  char *local_78;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_70 [16];
  char *local_60;
  long local_58;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  if ((param_1 == (char *)0x0) || (sVar6 = strlen(param_1), sVar6 == 0)) {
    uVar9 = 0;
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_70,param_1);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_88,".ccbi");
    pcVar1 = (char *)((ulong)local_70 | 1);
    if (((byte)local_70[0] & 1) != 0) {
      pcVar1 = local_60;
    }
    pcVar2 = (char *)((ulong)local_88 | 1);
    if (((byte)local_88[0] & 1) != 0) {
      pcVar2 = local_78;
    }
    uVar7 = endsWith(pcVar1,pcVar2);
    if ((uVar7 & 1) == 0) {
      uVar7 = (ulong)((byte)local_88[0] >> 1);
      pcVar1 = (char *)((ulong)local_88 | 1);
      if (((byte)local_88[0] & 1) != 0) {
        uVar7 = local_80;
        pcVar1 = local_78;
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append(local_70,pcVar1,uVar7);
    }
    plVar8 = (long *)cocos2d::FileUtils::getInstance();
    (**(code **)(*plVar8 + 0x50))(local_a0,plVar8,local_70);
    plVar8 = (long *)cocos2d::FileUtils::getInstance();
    (**(code **)(*plVar8 + 0x28))(aDStack_b0,plVar8,local_a0);
    this_00 = operator_new(0x28);
    *(undefined8 *)(this_00 + 0x10) = 0;
    p_Var11 = this_00 + 8;
    *(long *)p_Var11 = 0;
    *(undefined ***)this_00 = &PTR____shared_ptr_emplace_016cfc60;
    cocos2d::Data::Data((Data *)(this_00 + 0x18),aDStack_b0);
    cocos2d::Data::~Data(aDStack_b0);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(p_Var11,0x10);
      if (bVar4) {
        *(long *)p_Var11 = *(long *)p_Var11 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    local_c0 = (Data *)(this_00 + 0x18);
    p_Stack_b8 = this_00;
    uVar9 = readNodeGraphFromData(this,&local_c0,param_2,param_3);
    do {
      lVar10 = *(long *)p_Var11;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(p_Var11,0x10);
      if (bVar4) {
        *(long *)p_Var11 = lVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*(long *)this_00 + 0x10))(this_00);
      std::__ndk1::__shared_weak_count::__release_weak(this_00);
    }
    do {
      lVar10 = *(long *)p_Var11;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(p_Var11,0x10);
      if (bVar4) {
        *(long *)p_Var11 = lVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*(long *)this_00 + 0x10))(this_00);
      std::__ndk1::__shared_weak_count::__release_weak(this_00);
    }
    if ((local_a0[0] & 1) != 0) {
      operator_delete(local_90);
    }
    if (((byte)local_88[0] & 1) != 0) {
      operator_delete(local_78);
    }
    if (((byte)local_70[0] & 1) != 0) {
      operator_delete(local_60);
    }
  }
  if (*(long *)(lVar5 + 0x28) == local_58) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

