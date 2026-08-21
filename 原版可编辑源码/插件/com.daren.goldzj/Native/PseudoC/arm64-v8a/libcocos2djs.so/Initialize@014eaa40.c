
/* v8::internal::EhFrameWriter::Initialize() */

void __thiscall v8::internal::EhFrameWriter::Initialize(EhFrameWriter *this)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  long lVar3;
  Zone *this_00;
  long lVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined1 *puVar7;
  vector<unsigned_char,v8::internal::ZoneAllocator<unsigned_char>> *pvVar8;
  int local_34;
  
  pvVar8 = (vector<unsigned_char,v8::internal::ZoneAllocator<unsigned_char>> *)(this + 0x20);
  lVar4 = *(long *)pvVar8;
  if ((ulong)(*(long *)(this + 0x30) - lVar4) < 0x80) {
    this_00 = *(Zone **)(this + 0x38);
    lVar6 = *(long *)(this + 0x28);
    lVar3 = *(long *)(this_00 + 0x10);
    if ((ulong)(*(long *)(this_00 + 0x18) - lVar3) < 0x80) {
      lVar3 = Zone::NewExpand(this_00,0x80);
    }
    else {
      *(long *)(this_00 + 0x10) = lVar3 + 0x80;
    }
    puVar2 = *(undefined1 **)(this + 0x20);
    puVar7 = *(undefined1 **)(this + 0x28);
    puVar1 = (undefined1 *)(lVar3 + (lVar6 - lVar4));
    puVar5 = puVar1;
    while (puVar7 != puVar2) {
      puVar7 = puVar7 + -1;
      puVar5 = puVar5 + -1;
      *puVar5 = *puVar7;
    }
    *(undefined1 **)(this + 0x20) = puVar5;
    *(undefined1 **)(this + 0x28) = puVar1;
    *(long *)(this + 0x30) = lVar3 + 0x80;
  }
  *(undefined4 *)(this + 8) = 1;
  WriteCie(this);
  local_34 = -0x21523f22;
  std::__ndk1::vector<unsigned_char,v8::internal::ZoneAllocator<unsigned_char>>::
  insert<unsigned_char_const*>
            (pvVar8,*(undefined8 *)(this + 0x28),&local_34,&stack0xffffffffffffffd0);
  local_34 = *(int *)this + 4;
  std::__ndk1::vector<unsigned_char,v8::internal::ZoneAllocator<unsigned_char>>::
  insert<unsigned_char_const*>
            (pvVar8,*(undefined8 *)(this + 0x28),&local_34,&stack0xffffffffffffffd0);
  local_34 = -0x21523f22;
  std::__ndk1::vector<unsigned_char,v8::internal::ZoneAllocator<unsigned_char>>::
  insert<unsigned_char_const*>
            (pvVar8,*(undefined8 *)(this + 0x28),&local_34,&stack0xffffffffffffffd0);
  local_34 = -0x21523f22;
  std::__ndk1::vector<unsigned_char,v8::internal::ZoneAllocator<unsigned_char>>::
  insert<unsigned_char_const*>
            (pvVar8,*(undefined8 *)(this + 0x28),&local_34,&stack0xffffffffffffffd0);
  WriteByte(this,'\0');
  return;
}

