
/* v8::internal::compiler::JSArrayData::GetOwnElement(v8::internal::compiler::JSHeapBroker*,
   unsigned int, v8::internal::compiler::SerializationPolicy) */

undefined8 __thiscall
v8::internal::compiler::JSArrayData::GetOwnElement
          (JSArrayData *this,JSHeapBroker *param_1,uint param_2,int param_4)

{
  uint *puVar1;
  uint *puVar2;
  char cVar3;
  ulong *puVar4;
  undefined8 uVar5;
  basic_ostream *pbVar6;
  long *plVar7;
  long lVar8;
  Zone *this_00;
  ulong uVar9;
  long lVar10;
  Factory *this_01;
  long lVar11;
  ulong uVar12;
  ulong *puVar13;
  undefined8 uVar14;
  ulong local_b8;
  undefined8 uStack_b0;
  ulong local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  int local_94;
  undefined8 local_8c;
  Factory *local_80;
  ulong *local_78;
  undefined8 local_70;
  ulong *puStack_68;
  undefined8 local_60;
  ulong *puStack_58;
  ulong local_50;
  undefined8 uStack_48;
  
  puVar1 = *(uint **)(this + 0xc0);
  while (puVar2 = puVar1, puVar2 != *(uint **)(this + 200)) {
    puVar1 = puVar2 + 4;
    if (*puVar2 == param_2) {
      return *(undefined8 *)(puVar2 + 2);
    }
  }
  if (param_4 == 0) {
    if (param_1[0x74] != (JSHeapBroker)0x0) {
      pbVar6 = (basic_ostream *)JSHeapBroker::Trace(param_1);
      pbVar6 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar6,"Missing ",8);
      pbVar6 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar6,"knowledge about index ",0x16);
      pbVar6 = (basic_ostream *)
               std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                         ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar6,param_2);
      pbVar6 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar6," on ",4);
      pbVar6 = (basic_ostream *)
               std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                         ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar6,this);
      pbVar6 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar6," (",2);
      pbVar6 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar6,"../../src/compiler/js-heap-broker.cc",0x24);
      pbVar6 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar6,":",1);
      pbVar6 = (basic_ostream *)
               std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                         ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar6,0x636);
      pbVar6 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar6,")",1);
      std::__ndk1::ios_base::getloc();
      plVar7 = (long *)std::__ndk1::locale::use_facet
                                 ((locale *)&local_98,(id *)&std::__ndk1::ctype<char>::id);
      cVar3 = (**(code **)(*plVar7 + 0x38))(plVar7,10);
      std::__ndk1::locale::~locale((locale *)&local_98);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put
                ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar6,cVar3);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush
                ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar6);
      return 0;
    }
    return 0;
  }
  puVar13 = *(ulong **)this;
  this_01 = *(Factory **)param_1;
  uVar12 = (ulong)param_2;
  if (((*puVar13 & 1) == 0) ||
     (puStack_58 = puVar13,
     *(ushort *)(((ulong)this_01 | 7) + (ulong)*(uint *)(*puVar13 - 1)) < 0xa9)) {
    puStack_58 = (ulong *)LookupIterator::GetRootForNonJSReceiver(this_01,puVar13,uVar12);
  }
  local_78 = (ulong *)0x0;
  local_70 = 0;
  local_60 = 0;
  local_98 = 1;
  local_8c = 0xc000000000;
  uStack_48 = 0xffffffffffffffff;
  local_80 = this_01;
  puVar4 = local_78;
  puStack_68 = puVar13;
  local_50 = uVar12;
  if (((param_2 == 0xffffffff) &&
      (*(short *)((*puStack_58 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*puStack_58 - 1)) !=
       0x41b)) &&
     (puVar4 = (ulong *)Factory::SizeToString(this_01,0xffffffff,true),
     (*(ushort *)((*puVar4 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*puVar4 - 1)) & 0xffe0) ==
     0x20)) {
    puVar4 = (ulong *)StringTable::LookupString(this_01);
  }
  local_78 = puVar4;
  LookupIterator::Start<true>((LookupIterator *)&local_98);
  if (local_94 == 6) {
    uVar5 = LookupIterator::GetDataValue();
    ObjectRef::ObjectRef((ObjectRef *)&local_a8,param_1,uVar5,0);
    uStack_b0 = uStack_a0;
    local_b8 = local_a8;
    uVar5 = ObjectRef::data((ObjectRef *)&local_b8);
  }
  else {
    uVar5 = 0;
    local_b8 = local_b8 & 0xffffffffffffff00;
  }
  puVar1 = *(uint **)(this + 200);
  if (puVar1 < *(uint **)(this + 0xd0)) {
    *puVar1 = param_2;
    *(undefined8 *)(puVar1 + 2) = uVar5;
    *(long *)(this + 200) = *(long *)(this + 200) + 0x10;
    return uVar5;
  }
  lVar11 = (long)puVar1 - *(long *)(this + 0xc0) >> 4;
  uVar12 = lVar11 + 1;
  if (uVar12 >> 0x1b == 0) {
    lVar8 = (long)*(uint **)(this + 0xd0) - *(long *)(this + 0xc0);
    uVar9 = lVar8 >> 3;
    if (uVar12 <= uVar9) {
      uVar12 = uVar9;
    }
    if (0x3fffffe < (ulong)(lVar8 >> 4)) {
      uVar12 = 0x7ffffff;
    }
    if (uVar12 == 0) {
      lVar8 = 0;
    }
    else {
      this_00 = *(Zone **)(this + 0xd8);
      uVar9 = uVar12 * 0x10;
      lVar8 = *(long *)(this_00 + 0x10);
      if (uVar9 < (ulong)(*(long *)(this_00 + 0x18) - lVar8) ||
          uVar9 - (*(long *)(this_00 + 0x18) - lVar8) == 0) {
        *(ulong *)(this_00 + 0x10) = lVar8 + uVar9;
      }
      else {
        lVar8 = Zone::NewExpand(this_00,uVar9);
      }
    }
    puVar1 = (uint *)(lVar8 + lVar11 * 0x10);
    *puVar1 = param_2;
    *(undefined8 *)(puVar1 + 2) = uVar5;
    lVar11 = *(long *)(this + 0xc0);
    puVar2 = puVar1;
    for (lVar10 = *(long *)(this + 200); lVar10 != lVar11; lVar10 = lVar10 + -0x10) {
      uVar14 = *(undefined8 *)(lVar10 + -0x10);
      *(undefined8 *)(puVar2 + -2) = *(undefined8 *)(lVar10 + -8);
      *(undefined8 *)(puVar2 + -4) = uVar14;
      puVar2 = puVar2 + -4;
    }
    *(uint **)(this + 0xc0) = puVar2;
    *(uint **)(this + 200) = puVar1 + 4;
    *(ulong *)(this + 0xd0) = lVar8 + uVar12 * 0x10;
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

