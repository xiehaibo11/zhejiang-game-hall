
/* dragonBones::JSONDataParser::_parseBoneAllFrame(rapidjson::GenericValue<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> > const&, unsigned int, unsigned int) */

undefined4 __thiscall
dragonBones::JSONDataParser::_parseBoneAllFrame
          (JSONDataParser *this,GenericValue *param_1,uint param_2,uint param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined *__s1;
  int iVar6;
  undefined4 uVar7;
  char *pcVar8;
  int *piVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  int *piVar14;
  char *pcVar15;
  float fVar16;
  undefined8 uVar17;
  float fVar18;
  float fVar19;
  
  uVar17 = NEON_fmov(0x3f800000,4);
  *(undefined8 *)(this + 0xac) = 0;
  *(undefined8 *)(this + 0xb4) = 0;
  *(undefined8 *)(this + 0xbc) = uVar17;
  __s1 = DataParser::TRANSFORM;
                    /* try { // try from 00d97180 to 00e97237 has its CatchHandler @ 00d97180
                       catch() { ... } // from try @ 00d97180 with catch @ 00d97180
                       catch() { ... } // from try @ 00d97378 with catch @ 00d97180 */
  pcVar15 = DataParser::TRANSFORM + -1;
  pcVar8 = pcVar15;
  do {
    pcVar8 = pcVar8 + 1;
  } while (*pcVar8 != '\0');
  piVar14 = *(int **)(param_1 + 8);
  uVar4 = *(uint *)param_1;
  uVar12 = (ulong)uVar4;
  piVar9 = piVar14 + uVar12 * 0xc;
  piVar13 = piVar14;
  if (uVar4 != 0) {
    uVar10 = (long)pcVar8 - (long)DataParser::TRANSFORM;
    lVar11 = uVar12 * 0x30;
    piVar3 = piVar14;
    do {
      piVar13 = piVar3;
      iVar6 = *piVar13;
      if ((*(ushort *)((long)piVar13 + 0x16) & 0x1000) != 0) {
        iVar6 = 0x15 - *(char *)((long)piVar13 + 0x15);
      }
      if (iVar6 == (int)uVar10) {
        piVar3 = *(int **)(piVar13 + 2);
        if ((*(ushort *)((long)piVar13 + 0x16) & 0x1000) != 0) {
          piVar3 = piVar13;
        }
        if ((piVar3 == (int *)__s1) || (iVar6 = memcmp(__s1,piVar3,uVar10 & 0xffffffff), iVar6 == 0)
           ) break;
      }
      lVar11 = lVar11 + -0x30;
      piVar3 = piVar13 + 0xc;
      piVar13 = piVar9;
    } while (lVar11 != 0);
  }
  if (piVar9 == piVar13) {
                    /* try { // try from 00d972b4 to 00e972bf has its CatchHandler @ 00d974d0 */
    fVar18 = 0.0;
  }
  else {
    do {
      pcVar15 = pcVar15 + 1;
    } while (*pcVar15 != '\0');
                    /* try { // try from 00d97238 to 00e9723b has its CatchHandler @ 00d974d0 */
    if (uVar4 == 0) {
LAB_00d972a4:
      if (piVar14 == piVar9) goto LAB_00d972bc;
      piVar14 = piVar14 + 6;
    }
    else {
                    /* try { // try from 00d97244 to 00e9724f has its CatchHandler @ 00d974cc */
      lVar11 = uVar12 * 0x30;
      do {
        iVar6 = *piVar14;
        if ((*(ushort *)((long)piVar14 + 0x16) & 0x1000) != 0) {
          iVar6 = 0x15 - *(char *)((long)piVar14 + 0x15);
        }
        if (iVar6 == (int)((long)pcVar15 - (long)__s1)) {
          piVar13 = *(int **)(piVar14 + 2);
          if ((*(ushort *)((long)piVar14 + 0x16) & 0x1000) != 0) {
            piVar13 = piVar14;
          }
          if ((piVar13 == (int *)__s1) ||
             (iVar6 = memcmp(__s1,piVar13,(long)pcVar15 - (long)__s1 & 0xffffffff), iVar6 == 0))
          goto LAB_00d972a4;
        }
        lVar11 = lVar11 + -0x30;
                    /* try { // try from 00d97258 to 00e97263 has its CatchHandler @ 00d974ac */
        piVar14 = piVar14 + 0xc;
      } while (lVar11 != 0);
LAB_00d972bc:
      piVar14 = (int *)&rapidjson::
                        GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                        ::
                        operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
                        ::buffer;
      rapidjson::
      GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
      operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
      ::buffer = 0;
      DAT_01785a58 = 0;
      DAT_01785a60 = 0;
    }
                    /* try { // try from 00d972cc to 00e972d3 has its CatchHandler @ 00d974a8 */
    (**(code **)(*(long *)this + 0xf8))(0x3f800000,this,piVar14,this + 0xac);
    fVar18 = *(float *)(this + 0xb8);
  }
  if (param_2 == 0) goto LAB_00d97380;
  iVar6 = *(int *)(this + 0x74);
  if (iVar6 == 0) {
    fVar19 = *(float *)(this + 0x78);
                    /* try { // try from 00d97354 to 00e9735b has its CatchHandler @ 00d97480 */
                    /* try { // try from 00d9735c to 00e97377 has its CatchHandler @ 00d97460 */
    fVar16 = fmodf((fVar18 - fVar19) + 3.1415927,6.2831855);
    fVar18 = -3.1415927;
    if (fVar16 <= 0.0) {
      fVar18 = 3.1415927;
    }
                    /* try { // try from 00d97378 to 00e974eb has its CatchHandler @ 00d97180 */
    fVar18 = fVar19 + fVar16 + fVar18;
    goto LAB_00d97380;
  }
  fVar16 = *(float *)(this + 0x78);
  if (iVar6 < 1) {
    if (fVar18 <= fVar16) goto LAB_00d97314;
  }
  else if (fVar16 <= fVar18) {
LAB_00d97314:
                    /* try { // try from 00d97314 to 00e9731f has its CatchHandler @ 00d97498 */
    iVar2 = 1;
    if (0 < iVar6) {
      iVar2 = -1;
    }
    iVar6 = iVar2 + iVar6;
    *(int *)(this + 0x74) = iVar6;
  }
  fVar18 = ((fVar18 + fVar16) - fVar16) + (float)iVar6 * 6.2831855;
LAB_00d97380:
  fVar16 = (float)_getNumber(param_1,DataParser::TWEEN_ROTATE,0.0);
  *(int *)(this + 0x74) = (int)fVar16;
  *(float *)(this + 0x78) = fVar18;
  uVar7 = (**(code **)(*(long *)this + 0x98))(this,param_1,param_2,param_3);
  lVar11 = *(long *)(this + 0x150);
  uVar12 = *(long *)(this + 0x158) - lVar11 >> 2;
  if (uVar12 < 0xfffffffffffffffa) {
    std::__ndk1::vector<float,std::__ndk1::allocator<float>>::__append
              ((vector<float,std::__ndk1::allocator<float>> *)(this + 0x150),6);
    lVar11 = *(long *)(this + 0x150);
  }
  else {
    *(ulong *)(this + 0x158) = lVar11 + uVar12 * 4 + 0x18;
  }
  puVar1 = (undefined4 *)(lVar11 + uVar12 * 4);
  *puVar1 = *(undefined4 *)(this + 0xac);
  uVar5 = *(undefined4 *)(this + 0xb0);
  puVar1[2] = fVar18;
  puVar1[1] = uVar5;
  puVar1[3] = *(undefined4 *)(this + 0xb4);
  puVar1[4] = *(undefined4 *)(this + 0xbc);
  puVar1[5] = *(undefined4 *)(this + 0xc0);
  _parseActionDataInFrame
            (this,param_1,param_2,*(BoneData **)(this + 0x38),*(SlotData **)(this + 0x40));
                    /* catch() { ... } // from try @ 00d9735c with catch @ 00d97460 */
  return uVar7;
}

