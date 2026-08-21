
/* dragonBones::JSONDataParser::_parsePivot(rapidjson::GenericValue<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> > const&, dragonBones::ImageDisplayData&)
    */

JSONDataParser * __thiscall
dragonBones::JSONDataParser::_parsePivot
          (JSONDataParser *this,GenericValue *param_1,ImageDisplayData *param_2)

{
  int *__s2;
  uint uVar1;
  undefined *__s1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  GenericValue *pGVar5;
  int *piVar6;
  int *piVar7;
  char *pcVar8;
  ulong uVar9;
  ulong uVar10;
  int *piVar11;
  long lVar12;
  undefined4 uVar13;
  undefined4 extraout_s0;
  
  __s1 = DataParser::PIVOT;
                    /* try { // try from 00d923bc to 00e923c3 has its CatchHandler @ 00d9358c */
                    /* try { // try from 00d923c4 to 00e923cf has its CatchHandler @ 00d935a0 */
  pcVar8 = DataParser::PIVOT + -1;
  pcVar4 = pcVar8;
  do {
    pcVar4 = pcVar4 + 1;
  } while (*pcVar4 != '\0');
  piVar6 = *(int **)(param_1 + 8);
  uVar1 = *(uint *)param_1;
  uVar9 = (ulong)uVar1;
                    /* try { // try from 00d923f0 to 00e9240f has its CatchHandler @ 00d9365c */
  piVar7 = piVar6 + uVar9 * 0xc;
  piVar11 = piVar6;
  if (uVar1 == 0) {
LAB_00d9246c:
    if (piVar7 != piVar11) {
      do {
        pcVar8 = pcVar8 + 1;
      } while (*pcVar8 != '\0');
      if (uVar1 == 0) {
LAB_00d924f8:
        if (piVar6 == piVar7) goto LAB_00d9251c;
        pGVar5 = (GenericValue *)(piVar6 + 6);
      }
      else {
        lVar12 = uVar9 * 0x30;
        do {
          iVar3 = *piVar6;
          if ((*(ushort *)((long)piVar6 + 0x16) & 0x1000) != 0) {
            iVar3 = 0x15 - *(char *)((long)piVar6 + 0x15);
          }
          if (iVar3 == (int)((long)pcVar8 - (long)__s1)) {
            piVar11 = *(int **)(piVar6 + 2);
            if ((*(ushort *)((long)piVar6 + 0x16) & 0x1000) != 0) {
              piVar11 = piVar6;
            }
            if ((piVar11 == (int *)__s1) ||
               (iVar3 = memcmp(__s1,piVar11,(long)pcVar8 - (long)__s1 & 0xffffffff), iVar3 == 0))
            goto LAB_00d924f8;
          }
          lVar12 = lVar12 + -0x30;
          piVar6 = piVar6 + 0xc;
        } while (lVar12 != 0);
LAB_00d9251c:
        pGVar5 = (GenericValue *)
                 &rapidjson::
                  GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                  ::
                  operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
                  ::buffer;
        rapidjson::
        GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
        ::
        operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
        ::buffer = 0;
        DAT_01785a58 = 0;
        DAT_01785a60 = 0;
      }
      uVar13 = _getNumber(pGVar5,DataParser::X,0.0);
      *(undefined4 *)(param_2 + 0x68) = uVar13;
      this = (JSONDataParser *)_getNumber(pGVar5,DataParser::Y,0.0);
      uVar13 = extraout_s0;
      goto LAB_00d92564;
    }
  }
  else {
    uVar10 = (long)pcVar4 - (long)DataParser::PIVOT;
    lVar12 = uVar9 * 0x30;
    do {
      iVar3 = *piVar11;
      if ((*(ushort *)((long)piVar11 + 0x16) & 0x1000) != 0) {
        iVar3 = 0x15 - *(char *)((long)piVar11 + 0x15);
      }
                    /* try { // try from 00d92440 to 00e9245f has its CatchHandler @ 00d936a0 */
      if (iVar3 == (int)uVar10) {
        __s2 = *(int **)(piVar11 + 2);
        if ((*(ushort *)((long)piVar11 + 0x16) & 0x1000) != 0) {
          __s2 = piVar11;
        }
        if (__s2 == (int *)__s1) goto LAB_00d9246c;
                    /* try { // try from 00d92460 to 00e924af has its CatchHandler @ 00d936a4 */
        uVar2 = memcmp(__s1,__s2,uVar10 & 0xffffffff);
        this = (JSONDataParser *)(ulong)uVar2;
        if (uVar2 == 0) goto LAB_00d9246c;
      }
      lVar12 = lVar12 + -0x30;
      piVar11 = piVar11 + 0xc;
    } while (lVar12 != 0);
  }
  uVar13 = 0x3f000000;
  *(undefined4 *)(param_2 + 0x68) = 0x3f000000;
LAB_00d92564:
  *(undefined4 *)(param_2 + 0x6c) = uVar13;
  return this;
}

