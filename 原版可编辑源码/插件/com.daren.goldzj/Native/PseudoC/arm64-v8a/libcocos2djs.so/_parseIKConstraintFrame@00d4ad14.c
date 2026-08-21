
/* dragonBones::JSONDataParser::_parseIKConstraintFrame(rapidjson::GenericValue<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> > const&, unsigned int, unsigned int) */

undefined4
dragonBones::JSONDataParser::_parseIKConstraintFrame
          (GenericValue *param_1,uint param_2,uint param_3)

{
  vector<short,std::__ndk1::allocator<short>> *this;
  ushort uVar1;
  undefined4 uVar2;
  GenericValue *pGVar3;
  ulong uVar4;
  float fVar5;
  
  pGVar3 = (GenericValue *)(ulong)param_2;
  uVar2 = (**(code **)(*(long *)param_1 + 0x98))(param_1,pGVar3,param_3);
  this = (vector<short,std::__ndk1::allocator<short>> *)(param_1 + 0x138);
  uVar4 = *(long *)(param_1 + 0x140) - *(long *)(param_1 + 0x138) >> 1;
  if (uVar4 < 0xfffffffffffffffe) {
    std::__ndk1::vector<short,std::__ndk1::allocator<short>>::__append(this,2);
  }
  else {
    *(ulong *)(param_1 + 0x140) = *(long *)(param_1 + 0x138) + uVar4 * 2 + 4;
  }
  uVar1 = _getBoolean(pGVar3,DataParser::BEND_POSITIVE,true);
  *(ushort *)(*(long *)this + uVar4 * 2) = uVar1 & 1;
  fVar5 = (float)_getNumber(pGVar3,DataParser::WEIGHT,1.0);
  *(short *)(*(long *)this + uVar4 * 2 + 2) = (short)(int)(fVar5 * 100.0);
  return uVar2;
}

