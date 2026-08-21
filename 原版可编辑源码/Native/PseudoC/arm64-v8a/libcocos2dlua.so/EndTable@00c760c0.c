
/* flatbuffers::FlatBufferBuilder::EndTable(unsigned int, unsigned short) */

uint __thiscall
flatbuffers::FlatBufferBuilder::EndTable(FlatBufferBuilder *this,uint param_1,ushort param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  ushort uVar5;
  long lVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ushort *__s2;
  ulong __n;
  void *pvVar14;
  uint *puVar15;
  uint *puVar16;
  uint *puVar17;
  uint uVar18;
  uint local_6c;
  long local_68;
  
  uVar10 = (ulong)param_2;
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  uVar7 = PushElement<unsigned_int>(this,0);
  lVar11 = *(long *)(this + 0x18);
  __n = uVar10 * 2;
  if (lVar11 + uVar10 * -2 < *(ulong *)(this + 0x10)) {
    uVar12 = *(ulong *)(this + 8);
    uVar13 = uVar12 >> 1 & 0x7ffffffffffffff8;
    if (uVar13 <= __n) {
      uVar13 = __n;
    }
    *(ulong *)(this + 8) = uVar13 + uVar12;
    uVar13 = (ulong)(uint)(((int)*(ulong *)(this + 0x10) - (int)lVar11) + (int)uVar12);
    lVar9 = (**(code **)(**(long **)(this + 0x20) + 0x10))();
    pvVar14 = (void *)((lVar9 + *(long *)(this + 8)) - uVar13);
    memcpy(pvVar14,*(void **)(this + 0x18),uVar13);
    *(void **)(this + 0x18) = pvVar14;
    (**(code **)(**(long **)(this + 0x20) + 0x18))
              (*(long **)(this + 0x20),*(undefined8 *)(this + 0x10));
    lVar11 = *(long *)(this + 0x18);
    *(long *)(this + 0x10) = lVar9;
  }
  pvVar14 = (void *)(lVar11 + uVar10 * -2);
  *(void **)(this + 0x18) = pvVar14;
  if (param_2 != 0) {
    memset(pvVar14,0,__n);
  }
  PushElement<unsigned_short>(this,(short)uVar7 - (short)param_1);
  PushElement<unsigned_short>(this,param_2 * 2 + 4);
  puVar3 = *(undefined4 **)(this + 0x30);
  __s2 = *(ushort **)(this + 0x18);
  puVar2 = *(undefined4 **)(this + 0x28);
  for (puVar1 = puVar2; puVar3 != puVar1; puVar1 = puVar1 + 2) {
    *(short *)((long)__s2 + (ulong)*(ushort *)(puVar1 + 1)) = (short)uVar7 - (short)*puVar1;
  }
  lVar11 = *(long *)(this + 8);
  lVar9 = *(long *)(this + 0x10);
  *(undefined4 **)(this + 0x30) = puVar2;
  uVar5 = *__s2;
  uVar18 = ((int)lVar11 - (int)__s2) + (int)lVar9;
  puVar16 = *(uint **)(this + 0x40);
  puVar15 = *(uint **)(this + 0x48);
  local_6c = uVar18;
  if (puVar16 != puVar15) {
    do {
      puVar17 = puVar16 + 1;
      uVar4 = *puVar16;
      iVar8 = memcmp((void *)((lVar9 + lVar11) - (ulong)uVar4),__s2,(ulong)uVar5);
      if (iVar8 == 0) {
        __s2 = (ushort *)((long)__s2 + (ulong)(uVar18 - uVar7));
        *(ushort **)(this + 0x18) = __s2;
        uVar18 = uVar4;
        local_6c = uVar4;
        break;
      }
      puVar16 = puVar17;
    } while (puVar15 != puVar17);
  }
  if (uVar18 == ((int)lVar9 + (int)lVar11) - (int)__s2) {
    if (puVar15 == *(uint **)(this + 0x50)) {
      std::__ndk1::vector<unsigned_int,std::__ndk1::allocator<unsigned_int>>::
      __push_back_slow_path<unsigned_int_const&>
                ((vector<unsigned_int,std::__ndk1::allocator<unsigned_int>> *)(this + 0x40),
                 &local_6c);
      lVar11 = *(long *)(this + 8);
      lVar9 = *(long *)(this + 0x10);
    }
    else {
      *puVar15 = uVar18;
      *(uint **)(this + 0x48) = puVar15 + 1;
    }
  }
  *(uint *)((lVar9 + lVar11) - (ulong)uVar7) = local_6c - uVar7;
  if (*(long *)(lVar6 + 0x28) == local_68) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

