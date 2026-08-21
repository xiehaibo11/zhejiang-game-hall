
/* v8::internal::compiler::JSGlobalObjectData::GetPropertyCell(v8::internal::compiler::JSHeapBroker*,
   v8::internal::compiler::NameData*, v8::internal::compiler::SerializationPolicy) */

long __thiscall
v8::internal::compiler::JSGlobalObjectData::GetPropertyCell
          (JSGlobalObjectData *this,JSHeapBroker *param_1,undefined8 *param_2,int param_4)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  char cVar4;
  long lVar5;
  basic_ostream *pbVar6;
  long *plVar7;
  long lVar8;
  Zone *this_00;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  locale local_48 [8];
  PropertyCellRef aPStack_40 [16];
  
  if (param_2 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","(name) != nullptr");
  }
  puVar2 = *(undefined8 **)(this + 0xb8);
  while (puVar3 = puVar2, puVar3 != *(undefined8 **)(this + 0xc0)) {
    puVar2 = puVar3 + 2;
    if ((undefined8 *)*puVar3 == param_2) {
      return puVar3[1];
    }
  }
  if (param_4 == 0) {
    if (param_1[0x74] != (JSHeapBroker)0x0) {
      pbVar6 = (basic_ostream *)JSHeapBroker::Trace(param_1);
      pbVar6 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar6,"Missing ",8);
      pbVar6 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar6,"knowledge about global property ",0x20);
      pbVar6 = (basic_ostream *)
               std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                         ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar6,param_2);
      pbVar6 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar6," (",2);
      pbVar6 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar6,"../../src/compiler/js-heap-broker.cc",0x24);
      pbVar6 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar6,":",1);
      pbVar6 = (basic_ostream *)
               std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                         ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar6,0x75e);
      pbVar6 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar6,")",1);
      std::__ndk1::ios_base::getloc();
      plVar7 = (long *)std::__ndk1::locale::use_facet(local_48,(id *)&std::__ndk1::ctype<char>::id);
      cVar4 = (**(code **)(*plVar7 + 0x38))(plVar7,10);
      std::__ndk1::locale::~locale(local_48);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put
                ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar6,cVar4);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush
                ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar6);
      return 0;
    }
    return 0;
  }
  FUN_01712e9c(local_48,param_1,*param_2);
  if (local_48[0] == (locale)0x0) {
    lVar5 = 0;
  }
  else {
    PropertyCellRef::Serialize(aPStack_40);
    lVar5 = ObjectRef::data((ObjectRef *)aPStack_40);
    if (*(int *)(lVar5 + 8) != 1) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","kind() == kSerializedHeapObject");
    }
    if (*(short *)(*(long *)(lVar5 + 0x10) + 0x18) != 0xa5) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","IsPropertyCell()");
    }
  }
  puVar2 = *(undefined8 **)(this + 0xc0);
  if (puVar2 < *(undefined8 **)(this + 200)) {
    *puVar2 = param_2;
    puVar2[1] = lVar5;
    *(long *)(this + 0xc0) = *(long *)(this + 0xc0) + 0x10;
    return lVar5;
  }
  lVar11 = (long)puVar2 - *(long *)(this + 0xb8) >> 4;
  uVar1 = lVar11 + 1;
  if (uVar1 >> 0x1b == 0) {
    lVar8 = (long)*(undefined8 **)(this + 200) - *(long *)(this + 0xb8);
    uVar9 = lVar8 >> 3;
    if (uVar1 <= uVar9) {
      uVar1 = uVar9;
    }
    if (0x3fffffe < (ulong)(lVar8 >> 4)) {
      uVar1 = 0x7ffffff;
    }
    if (uVar1 == 0) {
      lVar8 = 0;
    }
    else {
      this_00 = *(Zone **)(this + 0xd0);
      uVar9 = uVar1 * 0x10;
      lVar8 = *(long *)(this_00 + 0x10);
      if (uVar9 < (ulong)(*(long *)(this_00 + 0x18) - lVar8) ||
          uVar9 - (*(long *)(this_00 + 0x18) - lVar8) == 0) {
        *(ulong *)(this_00 + 0x10) = lVar8 + uVar9;
      }
      else {
        lVar8 = Zone::NewExpand(this_00,uVar9);
      }
    }
    puVar2 = (undefined8 *)(lVar8 + lVar11 * 0x10);
    *puVar2 = param_2;
    puVar2[1] = lVar5;
    lVar11 = *(long *)(this + 0xb8);
    puVar3 = puVar2;
    for (lVar10 = *(long *)(this + 0xc0); lVar10 != lVar11; lVar10 = lVar10 + -0x10) {
      uVar12 = *(undefined8 *)(lVar10 + -0x10);
      puVar3[-1] = *(undefined8 *)(lVar10 + -8);
      puVar3[-2] = uVar12;
      puVar3 = puVar3 + -2;
    }
    *(undefined8 **)(this + 0xb8) = puVar3;
    *(undefined8 **)(this + 0xc0) = puVar2 + 2;
    *(ulong *)(this + 200) = lVar8 + uVar1 * 0x10;
    return lVar5;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

