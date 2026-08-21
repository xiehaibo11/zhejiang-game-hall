
/* v8::internal::compiler::MapRef::FindRootMap() const */

void v8::internal::compiler::MapRef::FindRootMap(void)

{
  short sVar1;
  char cVar2;
  ObjectRef *in_x0;
  ulong uVar3;
  ulong *puVar4;
  long lVar5;
  basic_ostream *pbVar6;
  long *plVar7;
  undefined1 *in_x8;
  Isolate *pIVar8;
  undefined8 *puVar9;
  undefined8 local_48;
  long local_40;
  undefined8 uStack_38;
  
  if (*(int *)(*(undefined8 **)in_x0 + 1) == 2) {
    puVar9 = *(undefined8 **)(in_x0 + 8);
    local_48 = *(undefined8 *)**(undefined8 **)in_x0;
    uVar3 = Map::FindRootMap((Map *)&local_48,(Isolate *)*puVar9);
    pIVar8 = (Isolate *)**(undefined8 **)(in_x0 + 8);
    if (*(CanonicalHandleScope **)(pIVar8 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar4 = *(ulong **)(pIVar8 + 0x95a0);
      if (puVar4 == *(ulong **)(pIVar8 + 0x95a8)) {
        puVar4 = (ulong *)HandleScope::Extend(pIVar8);
      }
      *(ulong **)(pIVar8 + 0x95a0) = puVar4 + 1;
      *puVar4 = uVar3;
    }
    else {
      puVar4 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar8 + 0x95b8),uVar3);
    }
    ObjectRef::ObjectRef((ObjectRef *)&local_40,puVar9,puVar4,0);
  }
  else {
    lVar5 = ObjectRef::data(in_x0);
    if (*(int *)(lVar5 + 8) != 1) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","kind() == kSerializedHeapObject");
    }
    if (*(short *)(*(long *)(lVar5 + 0x10) + 0x18) != 0xa2) goto LAB_0172dc10;
    local_40 = *(long *)(lVar5 + 0xb0);
    if (local_40 == 0) {
      if ((*(JSHeapBroker **)(in_x0 + 8))[0x74] != (JSHeapBroker)0x0) {
        pbVar6 = (basic_ostream *)JSHeapBroker::Trace(*(JSHeapBroker **)(in_x0 + 8));
        pbVar6 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                           (pbVar6,"Missing ",8);
        pbVar6 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                           (pbVar6,"root map for object ",0x14);
        pbVar6 = (basic_ostream *)compiler::operator<<(pbVar6,in_x0);
        pbVar6 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                           (pbVar6," (",2);
        pbVar6 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                           (pbVar6,"../../src/compiler/js-heap-broker.cc",0x24);
        pbVar6 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                           (pbVar6,":",1);
        pbVar6 = (basic_ostream *)
                 std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                           ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar6,0xd94);
        pbVar6 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                           (pbVar6,")",1);
        std::__ndk1::ios_base::getloc();
        plVar7 = (long *)std::__ndk1::locale::use_facet
                                   ((locale *)&local_40,(id *)&std::__ndk1::ctype<char>::id);
        cVar2 = (**(code **)(*plVar7 + 0x38))(plVar7,10);
        std::__ndk1::locale::~locale((locale *)&local_40);
        std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put
                  ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar6,cVar2);
        std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush
                  ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar6);
      }
      *in_x8 = 0;
      in_x8[8] = 0;
      return;
    }
    uStack_38 = *(undefined8 *)(in_x0 + 8);
  }
  puVar9 = (undefined8 *)ObjectRef::data((ObjectRef *)&local_40);
  if (*(int *)(puVar9 + 1) == 2) {
    uVar3 = *(ulong *)*puVar9;
    if ((uVar3 & 1) == 0) goto LAB_0172dc10;
    sVar1 = *(short *)((uVar3 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar3 - 1));
  }
  else {
    if (*(int *)(puVar9 + 1) == 0) goto LAB_0172dc10;
    sVar1 = *(short *)(puVar9[2] + 0x18);
  }
  if (sVar1 == 0xa2) {
    *in_x8 = 1;
    *(undefined8 *)(in_x8 + 0x10) = uStack_38;
    *(long *)(in_x8 + 8) = local_40;
    return;
  }
LAB_0172dc10:
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","IsMap()");
}

