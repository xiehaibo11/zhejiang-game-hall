
/* std_map_string_string_to_seval(std::__ndk1::map<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::less<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >
   > > const&, se::Value*) */

undefined8 std_map_string_string_to_seval(map *param_1,Value *param_2)

{
  map mVar1;
  long lVar2;
  bool bVar3;
  Object *pOVar4;
  map *pmVar5;
  long lVar6;
  map *pmVar7;
  Object *local_60;
  Value aVStack_58 [16];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  pOVar4 = (Object *)se::Object::createPlainObject();
  se::HandleObject::HandleObject((HandleObject *)&local_60,pOVar4);
  pmVar7 = *(map **)param_1;
  do {
    while( true ) {
      if (pmVar7 == param_1 + 8) {
        se::Value::setObject(param_2,(HandleObject *)&local_60,false);
        se::HandleObject::~HandleObject((HandleObject *)&local_60);
        if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return 1;
      }
      mVar1 = pmVar7[0x20];
      if (((byte)mVar1 & 1) != 0) break;
      if ((byte)mVar1 >> 1 != 0) goto LAB_008ddda0;
LAB_008ddd8c:
      pmVar5 = *(map **)(pmVar7 + 8);
      if (*(map **)(pmVar7 + 8) != (map *)0x0) goto LAB_008ddde4;
LAB_008dddf4:
      pmVar5 = pmVar7 + 0x10;
      bVar3 = *(map **)*(map **)pmVar5 != pmVar7;
      pmVar7 = *(map **)pmVar5;
      if (bVar3) {
        do {
          lVar6 = *(long *)pmVar5;
          pmVar5 = (map *)(lVar6 + 0x10);
          pmVar7 = *(map **)pmVar5;
        } while (*(long *)pmVar7 != lVar6);
      }
    }
    if (*(long *)(pmVar7 + 0x28) == 0) goto LAB_008ddd8c;
LAB_008ddda0:
    se::Value::Value(aVStack_58);
    se::Value::setString(aVStack_58,(basic_string *)(pmVar7 + 0x38));
    if (((byte)pmVar7[0x20] & 1) == 0) {
      pmVar5 = pmVar7 + 0x21;
    }
    else {
      pmVar5 = *(map **)(pmVar7 + 0x30);
    }
    se::Object::setProperty(local_60,(char *)pmVar5,aVStack_58);
    se::Value::~Value(aVStack_58);
    pmVar5 = *(map **)(pmVar7 + 8);
    if (*(map **)(pmVar7 + 8) == (map *)0x0) goto LAB_008dddf4;
LAB_008ddde4:
    do {
      pmVar7 = pmVar5;
      pmVar5 = *(map **)pmVar7;
    } while (pmVar5 != (map *)0x0);
  } while( true );
}

