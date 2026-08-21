
/* cocostudio::ParticleReader::createNodeWithFlatBuffers(flatbuffers::Table const*) */

long __thiscall
cocostudio::ParticleReader::createNodeWithFlatBuffers(ParticleReader *this,Table *param_1)

{
  long lVar1;
  char *pcVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  Table *pTVar6;
  Table *pTVar7;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_68 [8];
  ulong local_60;
  char *local_58;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((*(ushort *)(param_1 + -(long)*(int *)param_1) < 7) ||
     (uVar5 = (ulong)*(ushort *)(param_1 + -(long)*(int *)param_1 + 6), uVar5 == 0)) {
    pTVar7 = (Table *)0x0;
  }
  else {
    pTVar7 = param_1 + uVar5 + *(uint *)(param_1 + uVar5);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_50,"");
  if (*(ushort *)(pTVar7 + -(long)*(int *)pTVar7) < 5) {
    pTVar6 = (Table *)0x0;
  }
  else {
    uVar5 = (ulong)*(ushort *)(pTVar7 + -(long)*(int *)pTVar7 + 4);
    pTVar6 = (Table *)0x0;
    if (uVar5 != 0) {
      pTVar6 = pTVar7 + uVar5 + *(uint *)(pTVar7 + uVar5);
    }
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_68,(char *)(pTVar6 + 4));
  if (((*(ushort *)(pTVar7 + -(long)*(int *)pTVar7) < 9) ||
      (uVar5 = (ulong)*(ushort *)(pTVar7 + -(long)*(int *)pTVar7 + 8), uVar5 == 0)) ||
     (*(int *)(pTVar7 + uVar5) == 0)) {
    plVar3 = (long *)cocos2d::FileUtils::getInstance();
    uVar5 = (**(code **)(*plVar3 + 0x128))(plVar3,local_68);
    if ((uVar5 & 1) != 0) {
      lVar4 = cocos2d::ParticleSystemQuad::create((basic_string *)local_68);
      if (lVar4 != 0) {
        (**(code **)(*(long *)this + 0x18))(this,lVar4,param_1);
        *(undefined4 *)(lVar4 + 0x528) = 2;
      }
      goto joined_r0x00cd8918;
    }
    uVar5 = (ulong)((byte)local_68[0] >> 1);
    pcVar2 = (char *)((ulong)local_68 | 1);
    if (((byte)local_68[0] & 1) != 0) {
      uVar5 = local_60;
      pcVar2 = local_58;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign(local_50,pcVar2,uVar5);
  }
  lVar4 = cocos2d::Node::create();
  (**(code **)(*(long *)this + 0x18))(this,lVar4,param_1);
joined_r0x00cd8918:
  if (((byte)local_68[0] & 1) != 0) {
    operator_delete(local_58);
  }
  if (((byte)local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return lVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

