
/* cocostudio::Particle3DReader::createNodeWithFlatBuffers(flatbuffers::Table const*) */

PUParticleSystem3D * __thiscall
cocostudio::Particle3DReader::createNodeWithFlatBuffers(Particle3DReader *this,Table *param_1)

{
  long lVar1;
  PUParticleSystem3D *this_00;
  long *plVar2;
  ulong uVar3;
  Table *pTVar4;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(ushort *)(param_1 + -(long)*(int *)param_1) < 7) {
    pTVar4 = (Table *)0x0;
  }
  else {
    uVar3 = (ulong)*(ushort *)(param_1 + -(long)*(int *)param_1 + 6);
    pTVar4 = (Table *)0x0;
    if (uVar3 != 0) {
      pTVar4 = param_1 + uVar3 + *(uint *)(param_1 + uVar3);
    }
  }
  if ((*(ushort *)(pTVar4 + -(long)*(int *)pTVar4) < 5) ||
     (uVar3 = (ulong)*(ushort *)(pTVar4 + -(long)*(int *)pTVar4 + 4), uVar3 == 0)) {
    pTVar4 = (Table *)0x0;
  }
  else {
    pTVar4 = pTVar4 + uVar3 + *(uint *)(pTVar4 + uVar3);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_50,(char *)(pTVar4 + 4));
  this_00 = (PUParticleSystem3D *)cocos2d::PUParticleSystem3D::create();
  plVar2 = (long *)cocos2d::FileUtils::getInstance();
  uVar3 = (**(code **)(*plVar2 + 0x128))(plVar2,local_50);
  if ((uVar3 & 1) != 0) {
    cocos2d::PUParticleSystem3D::initWithFilePath(this_00,(basic_string *)local_50);
  }
  (**(code **)(*(long *)this + 0x18))(this,this_00,param_1);
  if (this_00 != (PUParticleSystem3D *)0x0) {
    (**(code **)(*(long *)this_00 + 0x540))(this_00);
  }
  if (((byte)local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return this_00;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

