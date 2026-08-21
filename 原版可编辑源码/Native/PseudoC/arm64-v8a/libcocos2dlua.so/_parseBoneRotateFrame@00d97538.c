
/* dragonBones::JSONDataParser::_parseBoneRotateFrame(rapidjson::GenericValue<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> > const&, unsigned int, unsigned int) */

undefined4 __thiscall
dragonBones::JSONDataParser::_parseBoneRotateFrame
          (JSONDataParser *this,GenericValue *param_1,uint param_2,uint param_3)

{
  vector<float,std::__ndk1::allocator<float>> *this_00;
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar6 = (float)_getNumber(param_1,DataParser::ROTATE,0.0);
                    /* catch() { ... } // from try @ 00d975c0 with catch @ 00d97588 */
  fVar6 = fVar6 * 0.017453292;
  if (param_2 == 0) goto LAB_00d97618;
  iVar3 = *(int *)(this + 0x74);
  if (iVar3 == 0) {
    fVar8 = *(float *)(this + 0x78);
                    /* catch() { ... } // from try @ 00d975b8 with catch @ 00d975f8 */
    fVar7 = fmodf((fVar6 - fVar8) + 3.1415927,6.2831855);
    fVar6 = -3.1415927;
    if (fVar7 <= 0.0) {
      fVar6 = 3.1415927;
    }
                    /* catch() { ... } // from try @ 00d9764c with catch @ 00d97614 */
    fVar6 = fVar8 + fVar7 + fVar6;
    goto LAB_00d97618;
  }
  fVar7 = *(float *)(this + 0x78);
  if (iVar3 < 1) {
    if (fVar6 <= fVar7) goto LAB_00d975ac;
  }
  else if (fVar7 <= fVar6) {
LAB_00d975ac:
    iVar1 = 1;
    if (0 < iVar3) {
      iVar1 = -1;
    }
                    /* try { // try from 00d975b8 to 00e975bf has its CatchHandler @ 00d975f8 */
    iVar3 = iVar1 + iVar3;
    *(int *)(this + 0x74) = iVar3;
  }
                    /* try { // try from 00d975c0 to 00e97613 has its CatchHandler @ 00d97588 */
  fVar6 = ((fVar6 + fVar7) - fVar7) + (float)iVar3 * 6.2831855;
LAB_00d97618:
  fVar7 = (float)_getNumber(param_1,DataParser::CLOCK_WISE,0.0);
  *(int *)(this + 0x74) = (int)fVar7;
  *(float *)(this + 0x78) = fVar6;
                    /* try { // try from 00d97644 to 00e9764b has its CatchHandler @ 00d97684 */
                    /* try { // try from 00d9764c to 00e9769f has its CatchHandler @ 00d97614 */
  uVar2 = (**(code **)(*(long *)this + 0x98))(this,param_1,param_2,param_3);
  lVar4 = *(long *)(this + 0x150);
  this_00 = (vector<float,std::__ndk1::allocator<float>> *)(this + 0x150);
  uVar5 = *(long *)(this + 0x158) - lVar4 >> 2;
  if (uVar5 < 0xfffffffffffffffe) {
    std::__ndk1::vector<float,std::__ndk1::allocator<float>>::__append(this_00,2);
    lVar4 = *(long *)this_00;
                    /* catch() { ... } // from try @ 00d97644 with catch @ 00d97684 */
  }
  else {
    *(ulong *)(this + 0x158) = lVar4 + uVar5 * 4 + 8;
  }
  *(float *)(lVar4 + uVar5 * 4) = fVar6;
  fVar6 = (float)_getNumber(param_1,DataParser::SKEW,0.0);
  *(float *)(uVar5 * 4 + *(long *)this_00 + 4) = fVar6 * 0.017453292;
  return uVar2;
}

