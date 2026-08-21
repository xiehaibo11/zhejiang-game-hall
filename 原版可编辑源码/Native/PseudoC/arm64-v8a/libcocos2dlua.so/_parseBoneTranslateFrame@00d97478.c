
/* dragonBones::JSONDataParser::_parseBoneTranslateFrame(rapidjson::GenericValue<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> > const&, unsigned int, unsigned int) */

undefined4
dragonBones::JSONDataParser::_parseBoneTranslateFrame
          (GenericValue *param_1,uint param_2,uint param_3)

{
  vector<float,std::__ndk1::allocator<float>> *this;
  undefined4 uVar1;
  GenericValue *pGVar2;
  ulong uVar3;
  undefined4 uVar4;
  
  pGVar2 = (GenericValue *)(ulong)param_2;
                    /* catch() { ... } // from try @ 00d97354 with catch @ 00d97480 */
                    /* catch() { ... } // from try @ 00d97314 with catch @ 00d97498 */
  uVar1 = (**(code **)(*(long *)param_1 + 0x98))(param_1,pGVar2,param_3);
                    /* catch() { ... } // from try @ 00d972cc with catch @ 00d974a8 */
  this = (vector<float,std::__ndk1::allocator<float>> *)(param_1 + 0x150);
                    /* catch() { ... } // from try @ 00d97258 with catch @ 00d974ac */
  uVar3 = *(long *)(param_1 + 0x158) - *(long *)(param_1 + 0x150) >> 2;
  if (uVar3 < 0xfffffffffffffffe) {
    std::__ndk1::vector<float,std::__ndk1::allocator<float>>::__append(this,2);
  }
  else {
                    /* catch() { ... } // from try @ 00d97244 with catch @ 00d974cc */
                    /* catch() { ... } // from try @ 00d97238 with catch @ 00d974d0
                       catch() { ... } // from try @ 00d972b4 with catch @ 00d974d0 */
    *(ulong *)(param_1 + 0x158) = *(long *)(param_1 + 0x150) + uVar3 * 4 + 8;
  }
  uVar4 = _getNumber(pGVar2,DataParser::X,0.0);
  *(undefined4 *)(*(long *)this + uVar3 * 4) = uVar4;
  uVar4 = _getNumber(pGVar2,DataParser::Y,0.0);
  *(undefined4 *)(uVar3 * 4 + *(long *)this + 4) = uVar4;
  return uVar1;
}

