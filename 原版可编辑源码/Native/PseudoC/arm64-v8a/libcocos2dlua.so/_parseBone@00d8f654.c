
/* dragonBones::JSONDataParser::_parseBone(rapidjson::GenericValue<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> > const&) */

BoneData * dragonBones::JSONDataParser::_parseBone(GenericValue *param_1)

{
  int *piVar1;
  uint uVar2;
  long lVar3;
  undefined *__s1;
  byte bVar4;
  int iVar5;
  BoneData *pBVar6;
  GenericValue *in_x1;
  basic_string *in_x3;
  char *pcVar7;
  int *piVar8;
  BoneData *pBVar9;
  long lVar10;
  int *piVar11;
  int *piVar12;
  char *pcVar13;
  ulong uVar14;
  ulong uVar15;
  float fVar16;
  ulong local_98 [2];
  void *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long local_68;
  
                    /* try { // try from 00d8f654 to 00e8f66b has its CatchHandler @ 00d8fa58 */
                    /* try { // try from 00d8f66c to 00e8f67b has its CatchHandler @ 00d8fa54 */
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
                    /* try { // try from 00d8f680 to 00e8f68b has its CatchHandler @ 00d8fa44 */
  pBVar6 = BaseObject::borrowObject<dragonBones::BoneData>();
                    /* try { // try from 00d8f690 to 00e8f6a3 has its CatchHandler @ 00d8fa40 */
  bVar4 = _getBoolean(in_x1,DataParser::INHERIT_TRANSLATION,true);
  pBVar6[0xd] = (BoneData)(bVar4 & 1);
                    /* try { // try from 00d8f6b4 to 00e8f6bb has its CatchHandler @ 00d8fa34 */
                    /* try { // try from 00d8f6c0 to 00e8f6d7 has its CatchHandler @ 00d8fa90 */
  bVar4 = _getBoolean(in_x1,DataParser::INHERIT_ROTATION,true);
  pBVar6[0xe] = (BoneData)(bVar4 & 1);
                    /* try { // try from 00d8f6d8 to 00e8f6e7 has its CatchHandler @ 00d8fa88 */
                    /* try { // try from 00d8f6e8 to 00e8f797 has its CatchHandler @ 00d8df58 */
  bVar4 = _getBoolean(in_x1,DataParser::INHERIT_SCALE,true);
  pBVar6[0xf] = (BoneData)(bVar4 & 1);
  bVar4 = _getBoolean(in_x1,DataParser::INHERIT_REFLECTION,true);
  pBVar6[0x10] = (BoneData)(bVar4 & 1);
  fVar16 = (float)_getNumber(in_x1,DataParser::LENGTH,0.0);
  *(float *)(pBVar6 + 0x14) = fVar16 * *(float *)(*(long *)(param_1 + 0x30) + 0x1c);
  local_98[1] = 0;
  local_88 = (void *)0x0;
  local_98[0] = 0;
  _getString((JSONDataParser *)in_x1,(GenericValue *)DataParser::NAME,(char *)local_98,in_x3);
  pBVar9 = pBVar6 + 0x18;
  if (((byte)*pBVar9 & 1) == 0) {
    *(undefined2 *)pBVar9 = 0;
  }
  else {
    **(undefined1 **)(pBVar6 + 0x28) = 0;
    *(undefined8 *)(pBVar6 + 0x20) = 0;
    if (((byte)pBVar6[0x18] & 1) != 0) {
      operator_delete(*(void **)(pBVar6 + 0x28));
      *(undefined8 *)(pBVar6 + 0x18) = 0;
    }
  }
                    /* try { // try from 00d8f798 to 00e8f79f has its CatchHandler @ 00d8fa2c */
                    /* try { // try from 00d8f7a0 to 00e8f7a3 has its CatchHandler @ 00d8fa30 */
  *(undefined8 *)(pBVar6 + 0x28) = local_70;
                    /* try { // try from 00d8f7a4 to 00e8f7ab has its CatchHandler @ 00d8fa24 */
  *(undefined8 *)(pBVar6 + 0x20) = uStack_78;
  *(undefined8 *)pBVar9 = local_80;
                    /* try { // try from 00d8f7ac to 00e8f7af has its CatchHandler @ 00d8fa30 */
  uStack_78 = 0;
  local_70 = 0;
                    /* try { // try from 00d8f7b0 to 00e8f7b7 has its CatchHandler @ 00d8fa20 */
  local_80 = 0;
  if ((local_98[0] & 1) != 0) {
                    /* try { // try from 00d8f7b8 to 00e8f7bb has its CatchHandler @ 00d8fa30 */
                    /* try { // try from 00d8f7bc to 00e8f7c3 has its CatchHandler @ 00d8fa1c */
    operator_delete(local_88);
  }
  __s1 = DataParser::TRANSFORM;
                    /* try { // try from 00d8f7c4 to 00e8f7c7 has its CatchHandler @ 00d8fa30 */
                    /* try { // try from 00d8f7c8 to 00e8f7cf has its CatchHandler @ 00d8fa18 */
  pcVar13 = DataParser::TRANSFORM + -1;
                    /* try { // try from 00d8f7d0 to 00e8f7d7 has its CatchHandler @ 00d8fa14 */
  pcVar7 = pcVar13;
  do {
    pcVar7 = pcVar7 + 1;
                    /* try { // try from 00d8f7d8 to 00e8f7df has its CatchHandler @ 00d8fa10 */
  } while (*pcVar7 != '\0');
  piVar11 = *(int **)(in_x1 + 8);
                    /* try { // try from 00d8f7e0 to 00e8f7e3 has its CatchHandler @ 00d8fa30 */
  uVar2 = *(uint *)in_x1;
  uVar14 = (ulong)uVar2;
                    /* try { // try from 00d8f7e4 to 00e8f7eb has its CatchHandler @ 00d8fa0c */
                    /* try { // try from 00d8f7ec to 00e8f7ef has its CatchHandler @ 00d8fa28 */
  piVar8 = piVar11 + uVar14 * 0xc;
                    /* try { // try from 00d8f7f0 to 00e8f7f3 has its CatchHandler @ 00d8fa30 */
                    /* try { // try from 00d8f7f4 to 00e8f7fb has its CatchHandler @ 00d8fa08 */
  piVar12 = piVar11;
  if (uVar2 != 0) {
    uVar15 = (long)pcVar7 - (long)DataParser::TRANSFORM;
                    /* try { // try from 00d8f7fc to 00e8f803 has its CatchHandler @ 00d8fa30 */
                    /* try { // try from 00d8f804 to 00e8f807 has its CatchHandler @ 00d8fa28 */
    lVar10 = uVar14 * 0x30;
    piVar1 = piVar11;
                    /* try { // try from 00d8f808 to 00e8f80b has its CatchHandler @ 00d8fa30 */
                    /* try { // try from 00d8f80c to 00e8f80f has its CatchHandler @ 00d8fa04 */
                    /* try { // try from 00d8f810 to 00e8f817 has its CatchHandler @ 00d8fa00 */
    do {
      piVar12 = piVar1;
                    /* try { // try from 00d8f820 to 00e8f827 has its CatchHandler @ 00d8f9f8 */
                    /* try { // try from 00d8f828 to 00e8f82f has its CatchHandler @ 00d8fa30 */
                    /* try { // try from 00d8f830 to 00e8f837 has its CatchHandler @ 00d8f9f4 */
      iVar5 = *piVar12;
      if ((*(ushort *)((long)piVar12 + 0x16) & 0x1000) != 0) {
        iVar5 = 0x15 - *(char *)((long)piVar12 + 0x15);
      }
                    /* try { // try from 00d8f838 to 00e8f83b has its CatchHandler @ 00d8fa28 */
                    /* try { // try from 00d8f83c to 00e8f843 has its CatchHandler @ 00d8f9f0 */
      if (iVar5 == (int)uVar15) {
                    /* try { // try from 00d8f844 to 00e8f84b has its CatchHandler @ 00d8f9ec */
        piVar1 = *(int **)(piVar12 + 2);
        if ((*(ushort *)((long)piVar12 + 0x16) & 0x1000) != 0) {
          piVar1 = piVar12;
        }
                    /* try { // try from 00d8f84c to 00e8f853 has its CatchHandler @ 00d8f9e8 */
                    /* try { // try from 00d8f854 to 00e8f85b has its CatchHandler @ 00d8f9e4 */
                    /* try { // try from 00d8f85c to 00e8f863 has its CatchHandler @ 00d8f9e0 */
        if ((piVar1 == (int *)__s1) || (iVar5 = memcmp(__s1,piVar1,uVar15 & 0xffffffff), iVar5 == 0)
           ) break;
      }
      lVar10 = lVar10 + -0x30;
                    /* try { // try from 00d8f818 to 00e8f81f has its CatchHandler @ 00d8f9fc */
      piVar1 = piVar12 + 0xc;
      piVar12 = piVar8;
    } while (lVar10 != 0);
  }
                    /* try { // try from 00d8f870 to 00e8f873 has its CatchHandler @ 00d8f9dc */
                    /* try { // try from 00d8f874 to 00e8f87b has its CatchHandler @ 00d8f9d8 */
  if (piVar8 == piVar12) goto LAB_00d8f928;
  do {
    pcVar13 = pcVar13 + 1;
                    /* try { // try from 00d8f87c to 00e8f883 has its CatchHandler @ 00d8f9d4 */
  } while (*pcVar13 != '\0');
  if (uVar2 == 0) {
LAB_00d8f8ec:
                    /* try { // try from 00d8f8ec to 00e8f8f7 has its CatchHandler @ 00d8fa30 */
    if (piVar11 == piVar8) goto LAB_00d8f8fc;
    piVar11 = piVar11 + 6;
                    /* try { // try from 00d8f8f8 to 00e8f8fb has its CatchHandler @ 00d8f9ac */
  }
  else {
                    /* try { // try from 00d8f884 to 00e8f88b has its CatchHandler @ 00d8f9d0 */
                    /* try { // try from 00d8f88c to 00e8f893 has its CatchHandler @ 00d8f9cc */
    lVar10 = uVar14 * 0x30;
                    /* try { // try from 00d8f894 to 00e8f89b has its CatchHandler @ 00d8f9c8 */
    do {
                    /* try { // try from 00d8f8ac to 00e8f8b3 has its CatchHandler @ 00d8f9bc */
                    /* try { // try from 00d8f8b4 to 00e8f8bb has its CatchHandler @ 00d8f9b8 */
      iVar5 = *piVar11;
                    /* try { // try from 00d8f8bc to 00e8f8d7 has its CatchHandler @ 00d8fa30 */
      if ((*(ushort *)((long)piVar11 + 0x16) & 0x1000) != 0) {
        iVar5 = 0x15 - *(char *)((long)piVar11 + 0x15);
      }
      if (iVar5 == (int)((long)pcVar13 - (long)__s1)) {
        piVar12 = *(int **)(piVar11 + 2);
        if ((*(ushort *)((long)piVar11 + 0x16) & 0x1000) != 0) {
          piVar12 = piVar11;
        }
                    /* try { // try from 00d8f8d8 to 00e8f8df has its CatchHandler @ 00d8f9b4 */
                    /* try { // try from 00d8f8e0 to 00e8f8e7 has its CatchHandler @ 00d8f9b0 */
                    /* try { // try from 00d8f8e8 to 00e8f8eb has its CatchHandler @ 00d8fa28 */
        if ((piVar12 == (int *)__s1) ||
           (iVar5 = memcmp(__s1,piVar12,(long)pcVar13 - (long)__s1 & 0xffffffff), iVar5 == 0))
        goto LAB_00d8f8ec;
      }
                    /* try { // try from 00d8f89c to 00e8f8a3 has its CatchHandler @ 00d8f9c4 */
      lVar10 = lVar10 + -0x30;
      piVar11 = piVar11 + 0xc;
                    /* try { // try from 00d8f8a4 to 00e8f8ab has its CatchHandler @ 00d8f9c0 */
    } while (lVar10 != 0);
LAB_00d8f8fc:
                    /* try { // try from 00d8f8fc to 00e8f8ff has its CatchHandler @ 00d8f9a8 */
                    /* try { // try from 00d8f900 to 00e8f907 has its CatchHandler @ 00d8f9a4 */
    piVar11 = (int *)&rapidjson::
                      GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                      ::
                      operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
                      ::buffer;
    rapidjson::
    GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
    operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
    ::buffer = 0;
    DAT_01785a58 = 0;
                    /* try { // try from 00d8f908 to 00e8f90f has its CatchHandler @ 00d8f9a0 */
    DAT_01785a60 = 0;
  }
                    /* try { // try from 00d8f910 to 00e8f917 has its CatchHandler @ 00d8f99c */
                    /* try { // try from 00d8f918 to 00e8f91f has its CatchHandler @ 00d8fa30 */
                    /* try { // try from 00d8f920 to 00e8f927 has its CatchHandler @ 00d8f998 */
  (**(code **)(*(long *)param_1 + 0xf8))
            (*(undefined4 *)(*(long *)(param_1 + 0x30) + 0x1c),param_1,piVar11,pBVar6 + 0x30);
LAB_00d8f928:
                    /* try { // try from 00d8f928 to 00e8f92f has its CatchHandler @ 00d8f994 */
                    /* try { // try from 00d8f930 to 00e8f937 has its CatchHandler @ 00d8fa28 */
                    /* try { // try from 00d8f938 to 00e8f93f has its CatchHandler @ 00d8fa30 */
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 00d8f940 to 00e8f947 has its CatchHandler @ 00d8f990 */
                    /* try { // try from 00d8f948 to 00e8f94f has its CatchHandler @ 00d8f98c */
                    /* try { // try from 00d8f950 to 00e8f957 has its CatchHandler @ 00d8f988 */
                    /* try { // try from 00d8f958 to 00e8f95b has its CatchHandler @ 00d8fa30 */
                    /* try { // try from 00d8f95c to 00e8f963 has its CatchHandler @ 00d8f984 */
  return pBVar6;
}

