
/* dragonBones::JSONDataParser::_getNumber(rapidjson::GenericValue<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> > const&, char const*, float) */

undefined1  [16]
dragonBones::JSONDataParser::_getNumber(GenericValue *param_1,char *param_2,float param_3)

{
  int *piVar1;
  uint uVar2;
  ushort uVar3;
  int iVar4;
  char *pcVar5;
  ulong uVar6;
  char *pcVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  ulong uVar11;
  long lVar12;
  undefined4 in_register_00005004;
  double dVar13;
  undefined8 in_register_00005008;
  undefined1 auVar14 [16];
  
  uVar6 = CONCAT44(in_register_00005004,param_3);
  pcVar7 = param_2 + -1;
  pcVar5 = pcVar7;
  do {
    pcVar5 = pcVar5 + 1;
  } while (*pcVar5 != '\0');
  piVar8 = *(int **)(param_1 + 8);
  uVar2 = *(uint *)param_1;
  uVar11 = (ulong)uVar2;
  piVar9 = piVar8 + uVar11 * 0xc;
  piVar10 = piVar8;
  if (uVar2 != 0) {
                    /* try { // try from 00d8ac68 to 00e8ac83 has its CatchHandler @ 00d8b18c */
    lVar12 = uVar11 * 0x30;
    piVar1 = piVar8;
    do {
      piVar10 = piVar1;
      iVar4 = *piVar10;
      if ((*(ushort *)((long)piVar10 + 0x16) & 0x1000) != 0) {
        iVar4 = 0x15 - *(char *)((long)piVar10 + 0x15);
      }
      if (iVar4 == (int)((long)pcVar5 - (long)param_2)) {
        piVar1 = *(int **)(piVar10 + 2);
        if ((*(ushort *)((long)piVar10 + 0x16) & 0x1000) != 0) {
          piVar1 = piVar10;
        }
                    /* try { // try from 00d8acb4 to 00e8acbb has its CatchHandler @ 00d8b170 */
                    /* try { // try from 00d8acbc to 00e8acff has its CatchHandler @ 00d8b190 */
        if ((piVar1 == (int *)param_2) ||
           (iVar4 = memcmp(param_2,piVar1,(long)pcVar5 - (long)param_2 & 0xffffffff), iVar4 == 0))
        break;
      }
      lVar12 = lVar12 + -0x30;
      piVar1 = piVar10 + 0xc;
      piVar10 = piVar9;
    } while (lVar12 != 0);
  }
  pcVar5 = pcVar7;
  if (piVar9 == piVar10) goto LAB_00d8ae74;
  do {
    pcVar5 = pcVar5 + 1;
  } while (*pcVar5 != '\0');
  if (uVar2 == 0) {
LAB_00d8ad54:
    if (piVar8 != piVar9) {
      if ((*(byte *)((long)piVar8 + 0x2e) >> 4 & 1) == 0) goto LAB_00d8ae74;
      do {
        pcVar7 = pcVar7 + 1;
      } while (*pcVar7 != '\0');
      uVar2 = *(uint *)param_1;
                    /* try { // try from 00d8ad74 to 00e8ad8f has its CatchHandler @ 00d8b184 */
      piVar10 = *(int **)(param_1 + 8);
      piVar8 = piVar10;
      if (uVar2 == 0) {
LAB_00d8ae04:
        if (piVar8 == piVar10 + (ulong)uVar2 * 0xc) goto LAB_00d8ae34;
        uVar3 = *(ushort *)((long)piVar8 + 0x2e);
        if ((uVar3 >> 9 & 1) == 0) {
                    /* try { // try from 00d8ae1c to 00e8ae2f has its CatchHandler @ 00d8b14c */
          if ((uVar3 >> 5 & 1) != 0) {
            dVar13 = (double)(long)piVar8[6];
                    /* try { // try from 00d8ae64 to 00e8ae93 has its CatchHandler @ 00d8b0b8 */
            goto LAB_00d8ae70;
          }
          if ((uVar3 >> 6 & 1) != 0) {
            dVar13 = (double)NEON_ucvtf((ulong)(uint)piVar8[6]);
            goto LAB_00d8ae70;
          }
          uVar6 = *(ulong *)(piVar8 + 6);
          if ((uVar3 >> 7 & 1) != 0) {
            dVar13 = (double)(long)uVar6;
            goto LAB_00d8ae70;
          }
          goto LAB_00d8ae48;
        }
        dVar13 = *(double *)(piVar8 + 6);
      }
      else {
        lVar12 = (ulong)uVar2 * 0x30;
                    /* try { // try from 00d8ad94 to 00e8ad9b has its CatchHandler @ 00d8b190 */
        do {
                    /* try { // try from 00d8adb4 to 00e8adcf has its CatchHandler @ 00d8b148 */
          iVar4 = *piVar8;
          if ((*(ushort *)((long)piVar8 + 0x16) & 0x1000) != 0) {
            iVar4 = 0x15 - *(char *)((long)piVar8 + 0x15);
          }
          if (iVar4 == (int)((long)pcVar7 - (long)param_2)) {
            piVar9 = *(int **)(piVar8 + 2);
            if ((*(ushort *)((long)piVar8 + 0x16) & 0x1000) != 0) {
              piVar9 = piVar8;
            }
            if ((piVar9 == (int *)param_2) ||
               (iVar4 = memcmp(param_2,piVar9,(long)pcVar7 - (long)param_2 & 0xffffffff), iVar4 == 0
               )) goto LAB_00d8ae04;
          }
          lVar12 = lVar12 + -0x30;
          piVar8 = piVar8 + 0xc;
        } while (lVar12 != 0);
LAB_00d8ae34:
                    /* try { // try from 00d8ae34 to 00e8ae4b has its CatchHandler @ 00d8b054 */
        uVar6 = 0;
        rapidjson::
        GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
        ::
        operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
        ::buffer = 0;
        DAT_01785a58 = 0;
        DAT_01785a60 = 0;
LAB_00d8ae48:
        dVar13 = (double)uVar6;
                    /* try { // try from 00d8ae4c to 00e8ae5f has its CatchHandler @ 00d8b030 */
      }
LAB_00d8ae70:
      uVar6 = (ulong)(uint)(float)dVar13;
      in_register_00005008 = 0;
      goto LAB_00d8ae74;
    }
  }
  else {
    lVar12 = uVar11 * 0x30;
    do {
      iVar4 = *piVar8;
      if ((*(ushort *)((long)piVar8 + 0x16) & 0x1000) != 0) {
        iVar4 = 0x15 - *(char *)((long)piVar8 + 0x15);
      }
      if (iVar4 == (int)((long)pcVar5 - (long)param_2)) {
                    /* try { // try from 00d8ad34 to 00e8ad47 has its CatchHandler @ 00d8b188 */
        piVar10 = *(int **)(piVar8 + 2);
        if ((*(ushort *)((long)piVar8 + 0x16) & 0x1000) != 0) {
          piVar10 = piVar8;
        }
        if ((piVar10 == (int *)param_2) ||
           (iVar4 = memcmp(param_2,piVar10,(long)pcVar5 - (long)param_2 & 0xffffffff), iVar4 == 0))
        goto LAB_00d8ad54;
      }
      lVar12 = lVar12 + -0x30;
      piVar8 = piVar8 + 0xc;
    } while (lVar12 != 0);
  }
  rapidjson::
  GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
  operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
  ::buffer = 0;
  DAT_01785a58 = 0;
  DAT_01785a60 = 0;
LAB_00d8ae74:
  auVar14._8_8_ = in_register_00005008;
  auVar14._0_8_ = uVar6;
  return auVar14;
}

