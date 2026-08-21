
/* std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<int,
   std::__ndk1::vector<v8::internal::CodeEntryAndLineNumber,
   std::__ndk1::allocator<v8::internal::CodeEntryAndLineNumber> > >,
   std::__ndk1::__unordered_map_hasher<int, std::__ndk1::__hash_value_type<int,
   std::__ndk1::vector<v8::internal::CodeEntryAndLineNumber,
   std::__ndk1::allocator<v8::internal::CodeEntryAndLineNumber> > >, std::__ndk1::hash<int>, true>,
   std::__ndk1::__unordered_map_equal<int, std::__ndk1::__hash_value_type<int,
   std::__ndk1::vector<v8::internal::CodeEntryAndLineNumber,
   std::__ndk1::allocator<v8::internal::CodeEntryAndLineNumber> > >, std::__ndk1::equal_to<int>,
   true>, std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,
   std::__ndk1::vector<v8::internal::CodeEntryAndLineNumber,
   std::__ndk1::allocator<v8::internal::CodeEntryAndLineNumber> > > >
   >::__move_assign(std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<int,
   std::__ndk1::vector<v8::internal::CodeEntryAndLineNumber,
   std::__ndk1::allocator<v8::internal::CodeEntryAndLineNumber> > >,
   std::__ndk1::__unordered_map_hasher<int, std::__ndk1::__hash_value_type<int,
   std::__ndk1::vector<v8::internal::CodeEntryAndLineNumber,
   std::__ndk1::allocator<v8::internal::CodeEntryAndLineNumber> > >, std::__ndk1::hash<int>, true>,
   std::__ndk1::__unordered_map_equal<int, std::__ndk1::__hash_value_type<int,
   std::__ndk1::vector<v8::internal::CodeEntryAndLineNumber,
   std::__ndk1::allocator<v8::internal::CodeEntryAndLineNumber> > >, std::__ndk1::equal_to<int>,
   true>, std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,
   std::__ndk1::vector<v8::internal::CodeEntryAndLineNumber,
   std::__ndk1::allocator<v8::internal::CodeEntryAndLineNumber> > > > >&,
   std::__ndk1::integral_constant<bool, true>) */

void std::__ndk1::
     __hash_table<std::__ndk1::__hash_value_type<int,std::__ndk1::vector<v8::internal::CodeEntryAndLineNumber,std::__ndk1::allocator<v8::internal::CodeEntryAndLineNumber>>>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,std::__ndk1::vector<v8::internal::CodeEntryAndLineNumber,std::__ndk1::allocator<v8::internal::CodeEntryAndLineNumber>>>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,std::__ndk1::vector<v8::internal::CodeEntryAndLineNumber,std::__ndk1::allocator<v8::internal::CodeEntryAndLineNumber>>>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,std::__ndk1::vector<v8::internal::CodeEntryAndLineNumber,std::__ndk1::allocator<v8::internal::CodeEntryAndLineNumber>>>>>
     ::__move_assign(long *param_1,long *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  void *pvVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  void *pvVar8;
  
  if (param_1[3] != 0) {
    puVar2 = (void *)param_1[2];
    while (puVar2 != (void *)0x0) {
      pvVar3 = (void *)puVar2[3];
      pvVar8 = (void *)*puVar2;
      if (pvVar3 != (void *)0x0) {
        puVar2[4] = pvVar3;
        operator_delete(pvVar3);
      }
      operator_delete(puVar2);
      puVar2 = pvVar8;
    }
    lVar4 = param_1[1];
    param_1[2] = 0;
    if (lVar4 != 0) {
      lVar5 = 0;
      do {
        *(undefined8 *)(*param_1 + lVar5 * 8) = 0;
        lVar5 = lVar5 + 1;
      } while (lVar4 != lVar5);
    }
    param_1[3] = 0;
  }
  lVar4 = *param_2;
  *param_2 = 0;
  pvVar3 = (void *)*param_1;
  *param_1 = lVar4;
  if (pvVar3 != (void *)0x0) {
    operator_delete(pvVar3);
  }
  param_1[1] = param_2[1];
  lVar5 = param_2[3];
  param_2[1] = 0;
  param_1[3] = lVar5;
  *(int *)(param_1 + 4) = (int)param_2[4];
  lVar4 = param_2[2];
  param_1[2] = lVar4;
  if (lVar5 != 0) {
    uVar7 = param_1[1];
    uVar6 = *(ulong *)(lVar4 + 8);
    if ((uVar7 & uVar7 - 1) == 0) {
      uVar6 = uVar7 - 1 & uVar6;
    }
    else if (uVar7 <= uVar6) {
      uVar1 = 0;
      if (uVar7 != 0) {
        uVar1 = uVar6 / uVar7;
      }
      uVar6 = uVar6 - uVar1 * uVar7;
    }
    *(long **)(*param_1 + uVar6 * 8) = param_1 + 2;
    param_2[2] = 0;
    param_2[3] = 0;
  }
  return;
}

