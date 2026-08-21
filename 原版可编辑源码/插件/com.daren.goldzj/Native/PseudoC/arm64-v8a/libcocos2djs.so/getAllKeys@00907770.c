
/* se::Object::getAllKeys(std::__ndk1::vector<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::allocator<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > > >*) const */

undefined4 __thiscall se::Object::getAllKeys(Object *this,vector *param_1)

{
  ulong *puVar1;
  byte *pbVar2;
  long lVar3;
  byte *pbVar4;
  uint uVar5;
  undefined8 uVar6;
  Object *pOVar7;
  Array *this_00;
  long lVar8;
  basic_string *pbVar9;
  size_t __n;
  undefined4 uVar10;
  byte *pbVar11;
  uint uVar12;
  void *__dest;
  ulong uVar13;
  void *pvVar14;
  ulong uVar15;
  ulong local_c8;
  size_t sStack_c0;
  void *local_b8;
  Value aVStack_b0 [8];
  char local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined2 local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  uVar6 = v8::Isolate::GetCurrentContext(DAT_01d371a8);
  pOVar7 = (Object *)ObjectWrap::handle((ObjectWrap *)(this + 0x18),DAT_01d371a8);
  this_00 = (Array *)v8::Object::GetOwnPropertyNames(pOVar7,uVar6);
  if (this_00 == (Array *)0x0) {
    uVar10 = 0;
  }
  else {
    se::Value::Value(aVStack_b0);
    uVar5 = v8::Array::Length(this_00);
    if (uVar5 == 0) {
      uVar10 = 1;
    }
    else {
      uVar12 = 0;
      do {
        lVar8 = v8::Object::Get((Object *)this_00,uVar6,uVar12);
        if (lVar8 == 0) {
          pbVar2 = *(byte **)param_1;
          pbVar11 = *(byte **)(param_1 + 8);
          while (pbVar4 = pbVar11, pbVar4 != pbVar2) {
            pbVar11 = pbVar4 + -0x18;
            if ((*pbVar11 & 1) != 0) {
              operator_delete(*(void **)(pbVar4 + -8));
            }
          }
          uVar10 = 0;
          *(byte **)(param_1 + 8) = pbVar2;
          goto LAB_00907a2c;
        }
        internal::jsToSeValue(DAT_01d371a8,lVar8,aVStack_b0);
        if (local_a8 == '\x02') {
          local_70 = 0;
          uStack_88 = 0;
          local_90 = 0;
          uStack_78 = 0;
          uStack_80 = 0;
          uStack_98 = 0;
          local_a0 = 0;
          uVar13 = se::Value::toInt32(aVStack_b0);
          snprintf((char *)&local_a0,0x32,"%d",uVar13 & 0xffffffff);
          local_c8 = 0;
          sStack_c0 = 0;
          local_b8 = (void *)0x0;
          __n = strlen((char *)&local_a0);
          if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__basic_string_common<true>::__throw_length_error();
          }
          if (__n < 0x17) {
            local_c8 = CONCAT71(local_c8._1_7_,(char)((int)__n << 1));
            pvVar14 = (void *)((ulong)&local_c8 | 1);
            if (__n != 0) goto LAB_009078fc;
          }
          else {
            uVar13 = __n + 0x10 & 0xfffffffffffffff0;
            pvVar14 = operator_new(uVar13);
            local_c8 = uVar13 | 1;
            sStack_c0 = __n;
            local_b8 = pvVar14;
LAB_009078fc:
            memcpy(pvVar14,&local_a0,__n);
          }
          *(undefined1 *)((long)pvVar14 + __n) = 0;
          puVar1 = *(ulong **)(param_1 + 8);
          if (puVar1 < *(ulong **)(param_1 + 0x10)) {
            puVar1[2] = (ulong)local_b8;
            puVar1[1] = sStack_c0;
            *puVar1 = local_c8;
            sStack_c0 = 0;
            local_b8 = (void *)0x0;
            local_c8 = 0;
LAB_009079c0:
            *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x18;
          }
          else {
            std::__ndk1::
            vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
            ::
            __push_back_slow_path<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                      ((vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                        *)param_1,(basic_string *)&local_c8);
            if ((local_c8 & 1) != 0) {
              operator_delete(local_b8);
            }
          }
        }
        else if (local_a8 == '\x04') {
          pbVar9 = (basic_string *)se::Value::toString(aVStack_b0);
          puVar1 = *(ulong **)(param_1 + 8);
          if (puVar1 != *(ulong **)(param_1 + 0x10)) {
            puVar1[1] = 0;
            puVar1[2] = 0;
            *puVar1 = 0;
            if (((byte)*pbVar9 & 1) == 0) {
              uVar15 = *(ulong *)(pbVar9 + 8);
              uVar13 = *(ulong *)pbVar9;
              puVar1[2] = *(ulong *)(pbVar9 + 0x10);
              puVar1[1] = uVar15;
              *puVar1 = uVar13;
            }
            else {
              uVar13 = *(ulong *)(pbVar9 + 8);
              if (0xffffffffffffffef < uVar13) {
                    /* WARNING: Subroutine does not return */
                std::__ndk1::__basic_string_common<true>::__throw_length_error();
              }
              pvVar14 = *(void **)(pbVar9 + 0x10);
              if (uVar13 < 0x17) {
                __dest = (void *)((long)puVar1 + 1);
                *(char *)puVar1 = (char)((int)uVar13 << 1);
                if (uVar13 != 0) goto LAB_009079ac;
              }
              else {
                uVar15 = uVar13 + 0x10 & 0xfffffffffffffff0;
                __dest = operator_new(uVar15);
                puVar1[1] = uVar13;
                puVar1[2] = (ulong)__dest;
                *puVar1 = uVar15 | 1;
LAB_009079ac:
                memcpy(__dest,pvVar14,uVar13);
              }
              *(undefined1 *)((long)__dest + uVar13) = 0;
            }
            goto LAB_009079c0;
          }
          std::__ndk1::
          vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
          ::
          __push_back_slow_path<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>
                    ((vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                      *)param_1,pbVar9);
        }
        uVar12 = uVar12 + 1;
      } while (uVar12 < uVar5);
      uVar10 = 1;
    }
LAB_00907a2c:
    se::Value::~Value(aVStack_b0);
  }
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar10;
}

