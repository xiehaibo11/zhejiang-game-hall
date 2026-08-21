
/* seval_to_std_vector_string(se::Value const&, std::__ndk1::vector<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::allocator<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > > >*) */

undefined4 seval_to_std_vector_string(Value *param_1,vector *param_2)

{
  ulong *puVar1;
  byte *pbVar2;
  long lVar3;
  byte *pbVar4;
  byte bVar5;
  Object *this;
  ulong uVar6;
  basic_string *pbVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  byte *pbVar10;
  uint uVar11;
  void *__dest;
  void *__src;
  ulong uVar12;
  uint local_6c;
  Value aVStack_68 [8];
  char local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  if (param_1[8] == (Value)0x5) {
    this = (Object *)se::Value::toObject(param_1);
    uVar6 = se::Object::isArray(this);
    if ((uVar6 & 1) != 0) {
      local_6c = 0;
      uVar6 = se::Object::getArrayLength(this,&local_6c);
      if ((uVar6 & 1) == 0) {
        pbVar2 = *(byte **)param_2;
        pbVar10 = *(byte **)(param_2 + 8);
        while (pbVar4 = pbVar10, pbVar4 != pbVar2) {
          pbVar10 = pbVar4 + -0x18;
          if ((*pbVar10 & 1) != 0) {
            operator_delete(*(void **)(pbVar4 + -8));
          }
        }
        *(byte **)(param_2 + 8) = pbVar2;
        uVar9 = 1;
      }
      else {
        se::Value::Value(aVStack_68);
        if (local_6c != 0) {
          uVar11 = 0;
          do {
            bVar5 = se::Object::getArrayElement(this,uVar11,aVStack_68);
            if ((bVar5 & local_60 == '\x04') == 0) {
              pbVar2 = *(byte **)param_2;
              pbVar10 = *(byte **)(param_2 + 8);
              while (pbVar4 = pbVar10, pbVar4 != pbVar2) {
                pbVar10 = pbVar4 + -0x18;
                if ((*pbVar10 & 1) != 0) {
                  operator_delete(*(void **)(pbVar4 + -8));
                }
              }
              uVar9 = 0;
              *(byte **)(param_2 + 8) = pbVar2;
              goto LAB_008d742c;
            }
            pbVar7 = (basic_string *)se::Value::toString(aVStack_68);
            puVar1 = *(ulong **)(param_2 + 8);
            if (puVar1 == *(ulong **)(param_2 + 0x10)) {
              std::__ndk1::
              vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
              ::
              __push_back_slow_path<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>
                        ((vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                          *)param_2,pbVar7);
            }
            else {
              puVar1[1] = 0;
              puVar1[2] = 0;
              *puVar1 = 0;
              if (((byte)*pbVar7 & 1) == 0) {
                uVar12 = *(ulong *)(pbVar7 + 8);
                uVar6 = *(ulong *)pbVar7;
                puVar1[2] = *(ulong *)(pbVar7 + 0x10);
                puVar1[1] = uVar12;
                *puVar1 = uVar6;
              }
              else {
                uVar6 = *(ulong *)(pbVar7 + 8);
                if (0xffffffffffffffef < uVar6) {
                    /* WARNING: Subroutine does not return */
                  std::__ndk1::__basic_string_common<true>::__throw_length_error();
                }
                __src = *(void **)(pbVar7 + 0x10);
                if (uVar6 < 0x17) {
                  __dest = (void *)((long)puVar1 + 1);
                  *(char *)puVar1 = (char)((int)uVar6 << 1);
                  if (uVar6 != 0) goto LAB_008d72e4;
                }
                else {
                  uVar12 = uVar6 + 0x10 & 0xfffffffffffffff0;
                  __dest = operator_new(uVar12);
                  puVar1[1] = uVar6;
                  puVar1[2] = (ulong)__dest;
                  *puVar1 = uVar12 | 1;
LAB_008d72e4:
                  memcpy(__dest,__src,uVar6);
                }
                *(undefined1 *)((long)__dest + uVar6) = 0;
              }
              *(long *)(param_2 + 8) = *(long *)(param_2 + 8) + 0x18;
            }
            uVar11 = uVar11 + 1;
          } while (uVar11 < local_6c);
        }
        uVar9 = 1;
LAB_008d742c:
        se::Value::~Value(aVStack_68);
      }
      goto LAB_008d7390;
    }
    uVar8 = 0x2d0;
  }
  else {
    uVar8 = 0x2ce;
  }
  __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_conversions.cpp"
                      ,uVar8,"seval_to_std_vector_string");
  __android_log_print(6,"jswrapper","Convert parameter to vector of String failed!");
  uVar9 = 0;
LAB_008d7390:
  if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar9;
}

