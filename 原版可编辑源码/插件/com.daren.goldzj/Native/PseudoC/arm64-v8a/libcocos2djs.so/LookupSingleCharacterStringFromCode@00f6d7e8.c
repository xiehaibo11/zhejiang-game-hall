
/* v8::internal::Factory::LookupSingleCharacterStringFromCode(unsigned short) */

ulong * __thiscall
v8::internal::Factory::LookupSingleCharacterStringFromCode(Factory *this,ushort param_1)

{
  long lVar1;
  undefined4 *puVar2;
  uint uVar3;
  long lVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ushort local_74 [2];
  undefined **local_70;
  uint local_68;
  undefined4 uStack_64;
  ushort *local_60;
  undefined8 uStack_58;
  undefined1 local_50;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  if (param_1 < 0x100) {
    lVar1 = (ulong)param_1 * 4 + 7;
    uVar3 = *(uint *)(*(ulong *)(this + 0xf18) + lVar1);
    if (uVar3 == *(uint *)(this + 0xa0)) {
      local_74[0] = CONCAT11(local_74[0]._1_1_,(char)param_1);
      local_68 = StringHasher::HashSequentialString<unsigned_char>
                           ((uchar *)local_74,1,*(ulong *)(*(long *)(this + 0x490) + 7));
      uStack_64 = 1;
      uStack_58 = 1;
      local_70 = &PTR__StringTableKey_01ca7080;
      local_50 = 0;
      local_60 = local_74;
      puVar5 = (ulong *)StringTable::LookupKey<v8::internal::SequentialStringKey<unsigned_char>>
                                  ((Isolate *)this,(SequentialStringKey *)&local_70);
      uVar8 = *(ulong *)(this + 0xf18);
      uVar7 = *puVar5;
      puVar2 = (undefined4 *)(uVar8 + lVar1);
      *puVar2 = (int)uVar7;
      if ((uVar7 & 1) != 0) {
        uVar6 = *(ulong *)((uVar7 & 0xfffffffffffc0000) + 8);
        if (((uint)uVar6 >> 0x12 & 1) != 0) {
          Heap_MarkingBarrierSlow(uVar8,puVar2,uVar7);
          uVar6 = *(ulong *)(uVar7 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar6 & 0x18) != 0) && ((*(byte *)((uVar8 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
          Heap_GenerationalBarrierSlow(uVar8,puVar2,uVar7);
        }
      }
    }
    else {
      uVar7 = *(ulong *)(this + 0xf18) & 0xffffffff00000000 | (ulong)uVar3;
      if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar5 = *(ulong **)(this + 0x95a0);
        if (puVar5 == *(ulong **)(this + 0x95a8)) {
          puVar5 = (ulong *)HandleScope::Extend((Isolate *)this);
        }
        *(ulong **)(this + 0x95a0) = puVar5 + 1;
        *puVar5 = uVar7;
      }
      else {
        puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(this + 0x95b8),uVar7);
      }
    }
  }
  else {
    local_74[0] = param_1;
    local_68 = StringHasher::HashSequentialString<unsigned_short>
                         (local_74,1,*(ulong *)(*(long *)(this + 0x490) + 7));
    uStack_64 = 1;
    uStack_58 = 1;
    local_70 = &PTR__StringTableKey_01ca70b0;
    local_50 = 0;
    local_60 = local_74;
    puVar5 = (ulong *)StringTable::LookupKey<v8::internal::SequentialStringKey<unsigned_short>>
                                ((Isolate *)this,(SequentialStringKey *)&local_70);
  }
  if (*(long *)(lVar4 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar5;
}

