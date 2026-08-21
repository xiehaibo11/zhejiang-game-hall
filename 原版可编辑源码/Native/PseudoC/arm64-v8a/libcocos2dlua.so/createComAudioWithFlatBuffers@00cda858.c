
/* cocostudio::ComAudioReader::createComAudioWithFlatBuffers(flatbuffers::Table const*) */

ComAudio * __thiscall
cocostudio::ComAudioReader::createComAudioWithFlatBuffers(ComAudioReader *this,Table *param_1)

{
  char *pcVar1;
  long lVar2;
  bool bVar3;
  ComAudio *this_00;
  long lVar4;
  Table *pTVar5;
  Table *pTVar6;
  ulong uVar7;
  Table *pTVar8;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_50 [16];
  char *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  this_00 = (ComAudio *)ComAudio::create();
  lVar4 = (long)*(int *)param_1;
  pTVar6 = (Table *)0x0;
  if (0xe < *(ushort *)(param_1 + -lVar4)) {
    uVar7 = (ulong)*(ushort *)(param_1 + -lVar4 + 0xe);
    pTVar6 = (Table *)0x0;
    if (uVar7 != 0) {
      pTVar6 = param_1 + uVar7 + *(uint *)(param_1 + uVar7);
    }
  }
  pTVar8 = pTVar6 + -(long)*(int *)pTVar6;
  if (*(ushort *)pTVar8 < 9) {
    if (4 < *(ushort *)pTVar8) goto LAB_00cda8e0;
    pTVar5 = (Table *)0x0;
  }
  else {
    if (((ulong)*(ushort *)(pTVar8 + 8) != 0) && (*(int *)(pTVar6 + *(ushort *)(pTVar8 + 8)) != 0))
    goto LAB_00cda93c;
LAB_00cda8e0:
    pTVar5 = (Table *)0x0;
    if ((ulong)*(ushort *)(pTVar8 + 4) != 0) {
      pTVar5 = pTVar6 + *(ushort *)(pTVar8 + 4) + *(uint *)(pTVar6 + *(ushort *)(pTVar8 + 4));
    }
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_50,(char *)(pTVar5 + 4));
  pcVar1 = (char *)((ulong)local_50 | 1);
  if (((byte)local_50[0] & 1) != 0) {
    pcVar1 = local_40;
  }
  ComAudio::setFile(this_00,pcVar1);
  if (((byte)local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  lVar4 = (long)*(int *)param_1;
LAB_00cda93c:
  if ((*(ushort *)(param_1 + -lVar4) < 0xb) ||
     (uVar7 = (ulong)*(ushort *)(param_1 + -lVar4 + 10), uVar7 == 0)) {
    bVar3 = false;
  }
  else {
    bVar3 = param_1[uVar7] != (Table)0x0;
  }
  ComAudio::setLoop(this_00,bVar3);
  if (*(ushort *)(param_1 + -(long)*(int *)param_1) < 7) {
    pTVar6 = (Table *)0x0;
  }
  else {
    uVar7 = (ulong)*(ushort *)(param_1 + -(long)*(int *)param_1 + 6);
    pTVar6 = (Table *)0x0;
    if (uVar7 != 0) {
      pTVar6 = param_1 + uVar7 + *(uint *)(param_1 + uVar7);
    }
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_50,(char *)(pTVar6 + 4));
  (**(code **)(*(long *)this_00 + 0x20))(this_00,local_50);
  if (((byte)local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this_00;
}

