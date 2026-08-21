
/* dragonBones::JSONDataParser::_getBoolean(rapidjson::GenericValue<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> > const&, char const*, bool) */

bool dragonBones::JSONDataParser::_getBoolean(GenericValue *param_1,char *param_2,bool param_3)

{
  int *__s2;
  uint uVar1;
  ushort uVar2;
  long lVar3;
  int iVar4;
  size_t sVar5;
  char *pcVar6;
  int *piVar7;
  int *piVar8;
  long lVar9;
  int *piVar10;
  char *pcVar11;
  ulong uVar12;
  ulong local_80;
  size_t local_78;
  int *local_70;
  long local_68;
  
                    /* catch() { ... } // from try @ 00d8ed2c with catch @ 00d8fa98 */
                    /* catch() { ... } // from try @ 00d8ed24 with catch @ 00d8fa9c */
                    /* catch() { ... } // from try @ 00d8ed1c with catch @ 00d8faa0 */
                    /* catch() { ... } // from try @ 00d8ed0c with catch @ 00d8faa4 */
                    /* catch() { ... } // from try @ 00d8f208 with catch @ 00d8faa8
                       catch() { ... } // from try @ 00d8f290 with catch @ 00d8faa8 */
                    /* catch() { ... } // from try @ 00d8eb88 with catch @ 00d8faac
                       catch() { ... } // from try @ 00d8ec24 with catch @ 00d8faac */
                    /* catch() { ... } // from try @ 00d8ec58 with catch @ 00d8fab0 */
  lVar3 = tpidr_el0;
                    /* catch() { ... } // from try @ 00d8ed48 with catch @ 00d8fac0 */
                    /* catch() { ... } // from try @ 00d8f058 with catch @ 00d8fac4 */
  local_68 = *(long *)(lVar3 + 0x28);
  pcVar11 = param_2 + -1;
  pcVar6 = pcVar11;
  do {
    pcVar6 = pcVar6 + 1;
  } while (*pcVar6 != '\0');
  piVar8 = *(int **)(param_1 + 8);
                    /* catch() { ... } // from try @ 00d8ed70 with catch @ 00d8fae4 */
  uVar1 = *(uint *)param_1;
  uVar12 = (ulong)uVar1;
  piVar10 = piVar8 + uVar12 * 0xc;
  piVar7 = piVar8;
  if (uVar1 != 0) {
    lVar9 = uVar12 * 0x30;
    do {
      iVar4 = *piVar7;
                    /* catch() { ... } // from try @ 00d8e024 with catch @ 00d8fb34 */
      if ((*(ushort *)((long)piVar7 + 0x16) & 0x1000) != 0) {
        iVar4 = 0x15 - *(char *)((long)piVar7 + 0x15);
      }
      if (iVar4 == (int)((long)pcVar6 - (long)param_2)) {
        __s2 = *(int **)(piVar7 + 2);
        if ((*(ushort *)((long)piVar7 + 0x16) & 0x1000) != 0) {
          __s2 = piVar7;
        }
                    /* try { // try from 00d8fb58 to 00e8fc4f has its CatchHandler @ 00d8fb58
                       catch() { ... } // from try @ 00d8fb58 with catch @ 00d8fb58
                       catch() { ... } // from try @ 00d8fee8 with catch @ 00d8fb58 */
        if ((__s2 == (int *)param_2) ||
           (iVar4 = memcmp(param_2,__s2,(long)pcVar6 - (long)param_2 & 0xffffffff), iVar4 == 0))
        goto LAB_00d8fb64;
      }
                    /* catch() { ... } // from try @ 00d8ed58 with catch @ 00d8fb14 */
      lVar9 = lVar9 + -0x30;
                    /* catch() { ... } // from try @ 00d8e8d0 with catch @ 00d8fb18
                       catch() { ... } // from try @ 00d8ebd4 with catch @ 00d8fb18
                       catch() { ... } // from try @ 00d8ec90 with catch @ 00d8fb18
                       catch() { ... } // from try @ 00d8f250 with catch @ 00d8fb18
                       catch() { ... } // from try @ 00d8f2b0 with catch @ 00d8fb18
                       catch() { ... } // from try @ 00d8f4b0 with catch @ 00d8fb18 */
      piVar7 = piVar7 + 0xc;
    } while (lVar9 != 0);
    goto LAB_00d8fc3c;
  }
LAB_00d8fb64:
  if (piVar10 == piVar7) goto LAB_00d8fc3c;
  do {
    pcVar11 = pcVar11 + 1;
  } while (*pcVar11 != '\0');
  if (uVar1 != 0) {
    lVar9 = uVar12 * 0x30;
    do {
      iVar4 = *piVar8;
      if ((*(ushort *)((long)piVar8 + 0x16) & 0x1000) != 0) {
        iVar4 = 0x15 - *(char *)((long)piVar8 + 0x15);
      }
      if (iVar4 == (int)((long)pcVar11 - (long)param_2)) {
        piVar7 = *(int **)(piVar8 + 2);
        if ((*(ushort *)((long)piVar8 + 0x16) & 0x1000) != 0) {
          piVar7 = piVar8;
        }
        if ((piVar7 == (int *)param_2) ||
           (iVar4 = memcmp(param_2,piVar7,(long)pcVar11 - (long)param_2 & 0xffffffff), iVar4 == 0))
        goto LAB_00d8fbf0;
      }
      lVar9 = lVar9 + -0x30;
      piVar8 = piVar8 + 0xc;
    } while (lVar9 != 0);
LAB_00d8fc24:
    rapidjson::
    GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
    operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
    ::buffer = 0;
    DAT_01785a58 = 0;
    DAT_01785a60 = 0;
    goto LAB_00d8fc3c;
  }
LAB_00d8fbf0:
  if (piVar8 == piVar10) goto LAB_00d8fc24;
  uVar2 = *(ushort *)((long)piVar8 + 0x2e);
  if ((uVar2 >> 3 & 1) != 0) {
    param_3 = uVar2 == 10;
                    /* try { // try from 00d8fc78 to 00e8fc87 has its CatchHandler @ 00d8ffd4 */
    goto LAB_00d8fc3c;
  }
  piVar7 = piVar8 + 6;
  if ((uVar2 >> 10 & 1) == 0) {
    if ((uVar2 >> 4 & 1) != 0) {
      param_3 = *piVar7 != 0;
    }
    goto LAB_00d8fc3c;
  }
  if ((uVar2 >> 0xc & 1) == 0) {
    piVar7 = *(int **)(piVar8 + 8);
  }
  local_78 = 0;
  local_70 = (int *)0x0;
  local_80 = 0;
                    /* try { // try from 00d8fc94 to 00e8fcbf has its CatchHandler @ 00d8ffec */
  sVar5 = strlen((char *)piVar7);
  if (0xffffffffffffffef < sVar5) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (sVar5 < 0x17) {
    piVar8 = (int *)((ulong)&local_80 | 1);
    local_80 = CONCAT71(local_80._1_7_,(char)((int)sVar5 << 1));
                    /* try { // try from 00d8fcc0 to 00e8fcd3 has its CatchHandler @ 00d90078 */
    if (sVar5 != 0) goto LAB_00d8fcec;
  }
  else {
    uVar12 = sVar5 + 0x10 & 0xfffffffffffffff0;
    piVar8 = operator_new(uVar12);
                    /* try { // try from 00d8fcd8 to 00e8fceb has its CatchHandler @ 00d90088 */
    local_80 = uVar12 | 1;
    local_78 = sVar5;
    local_70 = piVar8;
LAB_00d8fcec:
                    /* try { // try from 00d8fcf4 to 00e8fcfb has its CatchHandler @ 00d8ffd0 */
    memcpy(piVar8,piVar7,sVar5);
  }
  uVar12 = local_80;
                    /* try { // try from 00d8fcfc to 00e8fd13 has its CatchHandler @ 00d8ffbc */
  *(undefined1 *)((long)piVar8 + sVar5) = 0;
  sVar5 = local_80 >> 1 & 0x7f;
  if ((local_80 & 1) != 0) {
    sVar5 = local_78;
  }
  param_3 = false;
  switch(sVar5) {
  case 0:
    goto switchD_00d8fd34_caseD_0;
  case 1:
    piVar7 = (int *)((ulong)&local_80 | 1);
    if ((local_80 & 1) != 0) {
      piVar7 = local_70;
    }
    if ((char)*piVar7 != '0') break;
LAB_00d8fd58:
    param_3 = false;
    goto joined_r0x00d8fd5c;
  case 3:
                    /* try { // try from 00d8fd6c to 00e8fd7b has its CatchHandler @ 00d90088 */
    piVar7 = (int *)((ulong)&local_80 | 1);
    if ((local_80 & 1) != 0) {
      piVar7 = local_70;
    }
                    /* try { // try from 00d8fd7c to 00e8fd8f has its CatchHandler @ 00d90074 */
    iVar4 = memcmp(piVar7,&DAT_012f0666,3);
    if (iVar4 == 0) goto LAB_00d8fd58;
    break;
  case 4:
    piVar7 = (int *)((ulong)&local_80 | 1);
    if ((local_80 & 1) != 0) {
      piVar7 = local_70;
    }
                    /* try { // try from 00d8fde0 to 00e8fdef has its CatchHandler @ 00d8ffb0 */
    if (*piVar7 == 0x6c6c756e) goto LAB_00d8fd58;
    break;
  case 5:
                    /* try { // try from 00d8fdf0 to 00e8fe03 has its CatchHandler @ 00d90050 */
    piVar7 = (int *)((ulong)&local_80 | 1);
    if ((local_80 & 1) != 0) {
      piVar7 = local_70;
    }
    pcVar6 = "false";
    sVar5 = 5;
    goto LAB_00d8fe08;
  case 9:
    piVar7 = (int *)((ulong)&local_80 | 1);
    if ((local_80 & 1) != 0) {
      piVar7 = local_70;
    }
                    /* try { // try from 00d8fdb0 to 00e8fdb7 has its CatchHandler @ 00d8ffb8 */
    pcVar6 = "undefined";
    sVar5 = 9;
                    /* try { // try from 00d8fdb8 to 00e8fdcf has its CatchHandler @ 00d8ffb4 */
LAB_00d8fe08:
                    /* try { // try from 00d8fe08 to 00e8fe1b has its CatchHandler @ 00d90040 */
    iVar4 = memcmp(piVar7,pcVar6,sVar5);
    param_3 = iVar4 != 0;
switchD_00d8fd34_caseD_0:
joined_r0x00d8fd5c:
    if ((uVar12 & 1) == 0) goto LAB_00d8fc3c;
    goto LAB_00d8fe18;
  }
  param_3 = true;
  if ((uVar12 & 1) != 0) {
LAB_00d8fe18:
    operator_delete(local_70);
  }
LAB_00d8fc3c:
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00d8fe24 to 00e8fe2b has its CatchHandler @ 00d8ffac */
    __stack_chk_fail();
  }
                    /* try { // try from 00d8fc50 to 00e8fc67 has its CatchHandler @ 00d8ffd8 */
  return param_3;
}

