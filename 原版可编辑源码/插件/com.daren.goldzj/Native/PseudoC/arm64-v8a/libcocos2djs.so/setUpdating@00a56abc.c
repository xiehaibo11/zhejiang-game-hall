
/* cocos2d::extension::Manifest::setUpdating(bool) */

void __thiscall cocos2d::extension::Manifest::setUpdating(Manifest *this,bool param_1)

{
  int iVar1;
  long *plVar2;
  uint uVar3;
  long lVar4;
  ushort uVar5;
  long *plVar6;
  undefined2 uVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  undefined8 local_68;
  char *pcStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  long lStack_40;
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  if ((this[0xd] == (Manifest)0x0) || (*(short *)(this + 0x13e) != 3)) goto LAB_00a56cf8;
  plVar6 = *(long **)(this + 0x130);
  uVar3 = *(uint *)(this + 0x128);
  uVar9 = (ulong)uVar3;
  plVar8 = plVar6 + uVar9 * 6;
  plVar11 = plVar6;
  if (uVar3 != 0) {
                    /* catch() { ... } // from try @ 00a569c8 with catch @ 00a56b24 */
    lVar12 = uVar9 * 0x30;
    plVar10 = plVar6;
    do {
                    /* try { // try from 00a56b40 to 00b56b97 has its CatchHandler @ 00a56b40
                       catch() { ... } // from try @ 00a56b40 with catch @ 00a56b40
                       catch() { ... } // from try @ 00a56d8c with catch @ 00a56b40 */
      iVar1 = (int)*plVar10;
      if ((*(ushort *)((long)plVar10 + 0x16) & 0x1000) != 0) {
        iVar1 = 0x15 - *(char *)((long)plVar10 + 0x15);
      }
      if (iVar1 == 8) {
        plVar2 = (long *)plVar10[1];
        if ((*(ushort *)((long)plVar10 + 0x16) & 0x1000) != 0) {
          plVar2 = plVar10;
        }
        plVar11 = plVar10;
        if ((plVar2 == (long *)"updating") || (*plVar2 == 0x676e697461647075)) break;
      }
      lVar12 = lVar12 + -0x30;
      plVar10 = plVar10 + 6;
      plVar11 = plVar8;
    } while (lVar12 != 0);
  }
  if (plVar8 == plVar11) {
LAB_00a56ca8:
    uStack_50 = 0;
    local_58 = 0x405000000000000;
                    /* try { // try from 00a56cbc to 00b56cff has its CatchHandler @ 00a56e0c */
    pcStack_60 = "updating";
    local_68 = 8;
    uVar5 = 9;
    if (param_1) {
      uVar5 = 10;
    }
    local_48 = 0;
    lStack_40 = (ulong)uVar5 << 0x30;
    rapidjson::
    GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
    AddMember((GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
               *)(this + 0x128),(GenericValue *)&local_68,(GenericValue *)&uStack_50,
              *(MemoryPoolAllocator **)(this + 0x140));
  }
  else {
    plVar11 = plVar6;
    if (uVar3 != 0) {
                    /* try { // try from 00a56b98 to 00b56baf has its CatchHandler @ 00a56e5c */
      lVar12 = uVar9 * 0x30;
                    /* try { // try from 00a56bb8 to 00b56bc3 has its CatchHandler @ 00a56e08 */
      do {
                    /* try { // try from 00a56bc4 to 00b56bcf has its CatchHandler @ 00a56e04 */
        iVar1 = (int)*plVar11;
                    /* try { // try from 00a56bd0 to 00b56be7 has its CatchHandler @ 00a56e6c */
        if ((*(ushort *)((long)plVar11 + 0x16) & 0x1000) != 0) {
          iVar1 = 0x15 - *(char *)((long)plVar11 + 0x15);
        }
        if (iVar1 == 8) {
          plVar10 = (long *)plVar11[1];
          if ((*(ushort *)((long)plVar11 + 0x16) & 0x1000) != 0) {
            plVar10 = plVar11;
          }
          if ((plVar10 == (long *)"updating") || (*plVar10 == 0x676e697461647075))
          goto LAB_00a56c10;
        }
        lVar12 = lVar12 + -0x30;
        plVar11 = plVar11 + 6;
      } while (lVar12 != 0);
LAB_00a56c98:
      rapidjson::
      GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
      operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
      ::buffer = 0;
      DAT_01d38c18 = 0;
      DAT_01d38c20 = 0;
      goto LAB_00a56ca8;
    }
LAB_00a56c10:
    if (plVar11 == plVar8) goto LAB_00a56c98;
    if ((*(byte *)((long)plVar11 + 0x2e) >> 3 & 1) == 0) goto LAB_00a56ca8;
    if (uVar3 == 0) {
LAB_00a56d1c:
      if (plVar6 == plVar8) goto LAB_00a56d2c;
      plVar6 = plVar6 + 3;
    }
    else {
      lVar12 = uVar9 * 0x30;
      do {
                    /* try { // try from 00a56c50 to 00b56cb7 has its CatchHandler @ 00a56e6c */
        iVar1 = (int)*plVar6;
        if ((*(ushort *)((long)plVar6 + 0x16) & 0x1000) != 0) {
          iVar1 = 0x15 - *(char *)((long)plVar6 + 0x15);
        }
        if (iVar1 == 8) {
          plVar11 = (long *)plVar6[1];
          if ((*(ushort *)((long)plVar6 + 0x16) & 0x1000) != 0) {
            plVar11 = plVar6;
          }
          if ((plVar11 == (long *)"updating") || (*plVar11 == 0x676e697461647075))
          goto LAB_00a56d1c;
        }
        lVar12 = lVar12 + -0x30;
        plVar6 = plVar6 + 6;
      } while (lVar12 != 0);
LAB_00a56d2c:
      plVar6 = &rapidjson::
                GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                ::
                operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
                ::buffer;
      rapidjson::
      GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
      operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
      ::buffer = 0;
      DAT_01d38c18 = 0;
      DAT_01d38c20 = 0;
    }
    uVar7 = 9;
    if (param_1) {
      uVar7 = 10;
    }
    plVar6[1] = 0;
    plVar6[2] = 0;
    *plVar6 = 0;
                    /* try { // try from 00a56d50 to 00b56d8b has its CatchHandler @ 00a56e6c */
    *(undefined2 *)((long)plVar6 + 0x16) = uVar7;
  }
  this[0xe] = (Manifest)param_1;
LAB_00a56cf8:
  if (*(long *)(lVar4 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

