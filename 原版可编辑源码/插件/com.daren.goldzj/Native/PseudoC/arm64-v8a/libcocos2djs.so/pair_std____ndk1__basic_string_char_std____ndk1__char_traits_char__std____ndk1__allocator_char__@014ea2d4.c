
/* std::__ndk1::pair<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >,
   v8::internal::CompilationStatistics::OrderedStats>::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&,
   v8::internal::CompilationStatistics::OrderedStats&, false>(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&,
   v8::internal::CompilationStatistics::OrderedStats&) */

void __thiscall
std::__ndk1::
pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,v8::internal::CompilationStatistics::OrderedStats>
::
pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&,v8::internal::CompilationStatistics::OrderedStats&,false>
          (pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,v8::internal::CompilationStatistics::OrderedStats>
           *this,basic_string *param_1,OrderedStats *param_2)

{
  pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,v8::internal::CompilationStatistics::OrderedStats>
  *ppVar1;
  pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,v8::internal::CompilationStatistics::OrderedStats>
  *__dest;
  ulong uVar2;
  void *pvVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  if (((byte)*param_1 & 1) == 0) {
    uVar6 = *(undefined8 *)(param_1 + 8);
    uVar5 = *(undefined8 *)param_1;
    *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(this + 8) = uVar6;
    *(undefined8 *)this = uVar5;
  }
  else {
    uVar2 = *(ulong *)(param_1 + 8);
    if (0xffffffffffffffef < uVar2) goto LAB_014ea420;
    pvVar3 = *(void **)(param_1 + 0x10);
    if (uVar2 < 0x17) {
      ppVar1 = this + 1;
      *this = SUB41((int)uVar2 << 1,0);
      if (uVar2 != 0) goto LAB_014ea360;
    }
    else {
      uVar4 = uVar2 + 0x10 & 0xfffffffffffffff0;
      ppVar1 = operator_new(uVar4);
      *(ulong *)(this + 8) = uVar2;
      *(pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,v8::internal::CompilationStatistics::OrderedStats>
        **)(this + 0x10) = ppVar1;
      *(ulong *)this = uVar4 | 1;
LAB_014ea360:
      memcpy(ppVar1,pvVar3,uVar2);
    }
    ppVar1[uVar2] =
         (pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,v8::internal::CompilationStatistics::OrderedStats>
          )0x0;
  }
  uVar6 = *(undefined8 *)(param_2 + 8);
  uVar5 = *(undefined8 *)param_2;
  uVar8 = *(undefined8 *)(param_2 + 0x18);
  uVar7 = *(undefined8 *)(param_2 + 0x10);
  ppVar1 = this + 0x38;
  *(undefined8 *)ppVar1 = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x20) = uVar6;
  *(undefined8 *)(this + 0x18) = uVar5;
  *(undefined8 *)(this + 0x30) = uVar8;
  *(undefined8 *)(this + 0x28) = uVar7;
  if (((byte)param_2[0x20] & 1) == 0) {
    uVar6 = *(undefined8 *)(param_2 + 0x28);
    uVar5 = *(undefined8 *)(param_2 + 0x20);
    *(undefined8 *)(this + 0x48) = *(undefined8 *)(param_2 + 0x30);
    *(undefined8 *)(this + 0x40) = uVar6;
    *(undefined8 *)ppVar1 = uVar5;
    goto LAB_014ea404;
  }
  uVar2 = *(ulong *)(param_2 + 0x28);
  if (0xffffffffffffffef < uVar2) {
LAB_014ea420:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  pvVar3 = *(void **)(param_2 + 0x30);
  if (uVar2 < 0x17) {
    __dest = this + 0x39;
    *ppVar1 = SUB41((int)uVar2 << 1,0);
    if (uVar2 != 0) goto LAB_014ea3f0;
  }
  else {
    uVar4 = uVar2 + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar4);
    *(ulong *)(this + 0x40) = uVar2;
    *(pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,v8::internal::CompilationStatistics::OrderedStats>
      **)(this + 0x48) = __dest;
    *(ulong *)(this + 0x38) = uVar4 | 1;
LAB_014ea3f0:
    memcpy(__dest,pvVar3,uVar2);
  }
  __dest[uVar2] =
       (pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,v8::internal::CompilationStatistics::OrderedStats>
        )0x0;
LAB_014ea404:
  *(undefined8 *)(this + 0x50) = *(undefined8 *)(param_2 + 0x38);
  return;
}

