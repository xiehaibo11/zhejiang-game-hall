
/* dragonBones::JSONDataParser::_parseFrame(rapidjson::GenericValue<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> > const&, unsigned int, unsigned int) */

ulong dragonBones::JSONDataParser::_parseFrame(GenericValue *param_1,uint param_2,uint param_3)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = *(long *)(param_1 + 0x168);
  uVar2 = *(long *)(param_1 + 0x170) - lVar1;
                    /* try { // try from 00d96508 to 00e9650f has its CatchHandler @ 00d966dc */
  if (uVar2 == 0xfffffffffffffffe) {
                    /* try { // try from 00d96510 to 00e96533 has its CatchHandler @ 00d96428 */
    *(long *)(param_1 + 0x170) = lVar1;
  }
  else {
    std::__ndk1::vector<short,std::__ndk1::allocator<short>>::__append
              ((vector<short,std::__ndk1::allocator<short>> *)(param_1 + 0x168),1);
    lVar1 = *(long *)(param_1 + 0x168);
  }
                    /* try { // try from 00d96534 to 00e9654f has its CatchHandler @ 00d9673c */
  *(short *)(lVar1 + ((long)uVar2 >> 1) * 2) = (short)param_3;
  return uVar2 >> 1;
}

