
/* v8::internal::compiler::StringData::GetCharAsString(v8::internal::compiler::JSHeapBroker*,
   unsigned int, v8::internal::compiler::SerializationPolicy) */

long __thiscall
v8::internal::compiler::StringData::GetCharAsString
          (StringData *this,JSHeapBroker *param_1,uint param_2,int param_4)

{
  uint *puVar1;
  uint *puVar2;
  char cVar3;
  ulong *puVar4;
  undefined8 uVar5;
  long lVar6;
  basic_ostream *pbVar7;
  long *plVar8;
  long lVar9;
  Zone *this_00;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  Factory *this_01;
  long lVar13;
  ulong *puVar14;
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
  
  if (param_2 < *(uint *)(this + 0x18)) {
    uVar12 = (ulong)param_2;
    puVar1 = *(uint **)(this + 0x38);
    do {
      puVar2 = puVar1;
      if (puVar2 == *(uint **)(this + 0x40)) {
        if (param_4 != 0) {
          puVar14 = *(ulong **)this;
          this_01 = *(Factory **)param_1;
          if (((*puVar14 & 1) == 0) ||
             (puStack_58 = puVar14,
             *(ushort *)(((ulong)this_01 | 7) + (ulong)*(uint *)(*puVar14 - 1)) < 0xa9)) {
            puStack_58 = (ulong *)LookupIterator::GetRootForNonJSReceiver(this_01,puVar14,uVar12);
          }
          local_78 = (ulong *)0x0;
          local_70 = 0;
          local_60 = 0;
          local_98 = 1;
          local_8c = 0xc000000000;
          uStack_48 = 0xffffffffffffffff;
          local_80 = this_01;
          puVar4 = local_78;
          puStack_68 = puVar14;
          local_50 = uVar12;
          if (((param_2 == 0xffffffff) &&
              (*(short *)((*puStack_58 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*puStack_58 - 1)
                         ) != 0x41b)) &&
             (puVar4 = (ulong *)Factory::SizeToString(this_01,0xffffffff,true),
             (*(ushort *)((*puVar4 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*puVar4 - 1)) &
             0xffe0) == 0x20)) {
            puVar4 = (ulong *)StringTable::LookupString(this_01);
          }
          local_78 = puVar4;
          LookupIterator::Start<true>((LookupIterator *)&local_98);
          if ((local_94 == 6) && (((local_8c._4_4_ ^ 0xffffffff) & 0x28) == 0)) {
            uVar5 = LookupIterator::GetDataValue();
            ObjectRef::ObjectRef((ObjectRef *)&local_a8,param_1,uVar5,0);
            uStack_b0 = uStack_a0;
            local_b8 = local_a8;
            lVar6 = ObjectRef::data((ObjectRef *)&local_b8);
            if (*(int *)(lVar6 + 8) != 1) {
                    /* WARNING: Subroutine does not return */
              V8_Fatal("Check failed: %s.","kind() == kSerializedHeapObject");
            }
            if (0x3f < *(ushort *)(*(long *)(lVar6 + 0x10) + 0x18)) {
                    /* WARNING: Subroutine does not return */
              V8_Fatal("Check failed: %s.","IsString()");
            }
          }
          else {
            lVar6 = 0;
            local_b8 = local_b8 & 0xffffffffffffff00;
          }
          puVar1 = *(uint **)(this + 0x40);
          if (puVar1 < *(uint **)(this + 0x48)) {
            *puVar1 = param_2;
            *(long *)(puVar1 + 2) = lVar6;
            *(long *)(this + 0x40) = *(long *)(this + 0x40) + 0x10;
            return lVar6;
          }
          lVar13 = (long)puVar1 - *(long *)(this + 0x38) >> 4;
          uVar12 = lVar13 + 1;
          if (uVar12 >> 0x1b == 0) {
            lVar9 = (long)*(uint **)(this + 0x48) - *(long *)(this + 0x38);
            uVar10 = lVar9 >> 3;
            if (uVar12 <= uVar10) {
              uVar12 = uVar10;
            }
            if (0x3fffffe < (ulong)(lVar9 >> 4)) {
              uVar12 = 0x7ffffff;
            }
            if (uVar12 == 0) {
              lVar9 = 0;
            }
            else {
              this_00 = *(Zone **)(this + 0x50);
              uVar10 = uVar12 * 0x10;
              lVar9 = *(long *)(this_00 + 0x10);
              if (uVar10 < (ulong)(*(long *)(this_00 + 0x18) - lVar9) ||
                  uVar10 - (*(long *)(this_00 + 0x18) - lVar9) == 0) {
                *(ulong *)(this_00 + 0x10) = lVar9 + uVar10;
              }
              else {
                lVar9 = Zone::NewExpand(this_00,uVar10);
              }
            }
            puVar1 = (uint *)(lVar9 + lVar13 * 0x10);
            *puVar1 = param_2;
            *(long *)(puVar1 + 2) = lVar6;
            lVar13 = *(long *)(this + 0x38);
            puVar2 = puVar1;
            for (lVar11 = *(long *)(this + 0x40); lVar11 != lVar13; lVar11 = lVar11 + -0x10) {
              uVar5 = *(undefined8 *)(lVar11 + -0x10);
              *(undefined8 *)(puVar2 + -2) = *(undefined8 *)(lVar11 + -8);
              *(undefined8 *)(puVar2 + -4) = uVar5;
              puVar2 = puVar2 + -4;
            }
            *(uint **)(this + 0x38) = puVar2;
            *(uint **)(this + 0x40) = puVar1 + 4;
            *(ulong *)(this + 0x48) = lVar9 + uVar12 * 0x10;
            return lVar6;
          }
                    /* WARNING: Subroutine does not return */
          abort();
        }
        if (param_1[0x74] != (JSHeapBroker)0x0) {
          pbVar7 = (basic_ostream *)JSHeapBroker::Trace(param_1);
          pbVar7 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                             (pbVar7,"Missing ",8);
          pbVar7 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                             (pbVar7,"knowledge about index ",0x16);
          pbVar7 = (basic_ostream *)
                   std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                             ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar7,param_2);
          pbVar7 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                             (pbVar7," on ",4);
          pbVar7 = (basic_ostream *)
                   std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                             ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar7,this);
          pbVar7 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                             (pbVar7," (",2);
          pbVar7 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                             (pbVar7,"../../src/compiler/js-heap-broker.cc",0x24);
          pbVar7 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                             (pbVar7,":",1);
          pbVar7 = (basic_ostream *)
                   std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                             ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar7,0x2ff);
          pbVar7 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                             (pbVar7,")",1);
          std::__ndk1::ios_base::getloc();
          plVar8 = (long *)std::__ndk1::locale::use_facet
                                     ((locale *)&local_98,(id *)&std::__ndk1::ctype<char>::id);
          cVar3 = (**(code **)(*plVar8 + 0x38))(plVar8,10);
          std::__ndk1::locale::~locale((locale *)&local_98);
          std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put
                    ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar7,cVar3);
          std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush
                    ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar7);
          return 0;
        }
        goto LAB_0170d9b0;
      }
      puVar1 = puVar2 + 4;
    } while (*puVar2 != param_2);
    lVar6 = *(long *)(puVar2 + 2);
  }
  else {
LAB_0170d9b0:
    lVar6 = 0;
  }
  return lVar6;
}

