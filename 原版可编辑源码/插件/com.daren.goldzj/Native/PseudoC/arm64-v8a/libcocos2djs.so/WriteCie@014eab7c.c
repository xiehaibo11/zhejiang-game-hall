
/* WARNING: Removing unreachable block (ram,0x014eac48) */
/* WARNING: Removing unreachable block (ram,0x014eac30) */
/* WARNING: Removing unreachable block (ram,0x014eac34) */
/* WARNING: Removing unreachable block (ram,0x014eac3c) */
/* WARNING: Removing unreachable block (ram,0x014eac54) */
/* WARNING: Removing unreachable block (ram,0x014eac74) */
/* WARNING: Removing unreachable block (ram,0x014eac40) */
/* WARNING: Removing unreachable block (ram,0x014eacb4) */
/* WARNING: Removing unreachable block (ram,0x014eaccc) */
/* WARNING: Removing unreachable block (ram,0x014eacb8) */
/* WARNING: Removing unreachable block (ram,0x014eacc0) */
/* WARNING: Removing unreachable block (ram,0x014eacec) */
/* v8::internal::EhFrameWriter::WriteCie() */

void __thiscall v8::internal::EhFrameWriter::WriteCie(EhFrameWriter *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  vector<unsigned_char,v8::internal::ZoneAllocator<unsigned_char>> *pvVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 local_38;
  undefined4 local_34;
  
  pvVar4 = (vector<unsigned_char,v8::internal::ZoneAllocator<unsigned_char>> *)(this + 0x20);
  uVar8 = *(undefined8 *)pvVar4;
  uVar6 = *(undefined8 *)(this + 0x28);
  local_38 = 0xdeadc0de;
  std::__ndk1::vector<unsigned_char,v8::internal::ZoneAllocator<unsigned_char>>::
  insert<unsigned_char_const*>(pvVar4,uVar6,&local_38,&local_34);
  uVar7 = *(undefined8 *)(this + 0x28);
  iVar1 = *(int *)pvVar4;
  local_34 = 0;
  std::__ndk1::vector<unsigned_char,v8::internal::ZoneAllocator<unsigned_char>>::
  insert<unsigned_char_const*>(pvVar4,uVar7,&local_34,&stack0xffffffffffffffd0);
  WriteByte(this,'\x03');
  std::__ndk1::vector<unsigned_char,v8::internal::ZoneAllocator<unsigned_char>>::
  insert<unsigned_char_const*>(pvVar4,*(undefined8 *)(this + 0x28),&DAT_01a48974,&DAT_01a48978);
  iVar5 = (int)uVar6 - (int)uVar8;
  iVar1 = (int)uVar7 - iVar1;
  WriteByte(this,'\x04');
  WriteByte(this,'x');
  WriteReturnAddressRegisterCode(this);
  WriteByte(this,'\x02');
  WriteByte(this,0xff);
  WriteByte(this,'\x1b');
  WriteInitialStateInCie(this);
  iVar2 = (*(int *)(this + 0x28) - *(int *)(this + 0x20)) - iVar1;
  if (((DAT_01d46b58 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_01d46b58), iVar3 != 0)) {
    DAT_01d46b50 = 0;
    __cxa_guard_release(&DAT_01d46b58);
  }
  std::__ndk1::vector<unsigned_char,v8::internal::ZoneAllocator<unsigned_char>>::
  insert<unsigned_char_const*>
            (pvVar4,*(undefined8 *)(this + 0x28),&DAT_01d46b50,
             (long)&DAT_01d46b50 + (long)(int)((iVar2 + 7U & 0xfffffff8) - iVar2));
  iVar2 = *(int *)(this + 0x28) - (int)*(long *)(this + 0x20);
  *(int *)this = iVar2 - iVar5;
  *(int *)(*(long *)(this + 0x20) + (long)iVar5) = iVar2 - iVar1;
  return;
}

