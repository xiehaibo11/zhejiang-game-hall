
/* v8::internal::interpreter::Bytecodes::ToString(v8::internal::interpreter::Bytecode,
   v8::internal::interpreter::OperandScale, char const*) */

void __thiscall
v8::internal::interpreter::Bytecodes::ToString
          (ulong *param_1,undefined8 param_2,byte param_3,char *param_4)

{
  long lVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar2;
  char *pcVar3;
  size_t sVar4;
  undefined8 uVar5;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this;
  ulong uVar6;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar7;
  void *__dest;
  ulong uVar8;
  ulong uVar9;
  char *__dest_00;
  void *pvVar10;
  undefined8 local_80;
  ulong local_78;
  char *local_70;
  ulong local_68;
  size_t sStack_60;
  void *local_58;
  
  pcVar3 = (char *)ToString();
  local_68 = 0;
  sStack_60 = 0;
  local_58 = (void *)0x0;
  sVar4 = strlen(pcVar3);
  if (0xffffffffffffffef < sVar4) goto LAB_01040e0c;
  if (sVar4 < 0x17) {
    pvVar10 = (void *)((ulong)&local_68 | 1);
    local_68 = CONCAT71(local_68._1_7_,(char)((int)sVar4 << 1));
    if (sVar4 != 0) goto LAB_01040bc0;
  }
  else {
    uVar8 = sVar4 + 0x10 & 0xfffffffffffffff0;
    pvVar10 = operator_new(uVar8);
    local_68 = uVar8 | 1;
    sStack_60 = sVar4;
    local_58 = pvVar10;
LAB_01040bc0:
    memcpy(pvVar10,pcVar3,sVar4);
  }
  *(undefined1 *)((long)pvVar10 + sVar4) = 0;
  if (param_3 < 2) {
    param_1[2] = (ulong)local_58;
    param_1[1] = sStack_60;
    *param_1 = local_68;
    return;
  }
  if (param_3 == 4) {
    uVar5 = 1;
  }
  else {
    if (param_3 != 2) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    uVar5 = 0;
  }
  pcVar3 = (char *)ToString(uVar5);
  local_80 = 0;
  local_78 = 0;
  local_70 = (char *)0x0;
  sVar4 = strlen(pcVar3);
  if (0xffffffffffffffef < sVar4) goto LAB_01040e0c;
  if (sVar4 < 0x17) {
    __dest_00 = (char *)((ulong)&local_80 | 1);
    local_80 = CONCAT71(local_80._1_7_,(char)((int)sVar4 << 1));
    if (sVar4 != 0) goto LAB_01040c7c;
  }
  else {
    uVar8 = sVar4 + 0x10 & 0xfffffffffffffff0;
    __dest_00 = operator_new(uVar8);
    local_80 = uVar8 | 1;
    local_78 = sVar4;
    local_70 = __dest_00;
LAB_01040c7c:
    memcpy(__dest_00,pcVar3,sVar4);
  }
  __dest_00[sVar4] = '\0';
  this = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
         ::append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                  &local_68,param_4);
  bVar2 = *this;
  uVar8 = local_78;
  pcVar3 = local_70;
  if ((local_80 & 1) == 0) {
    uVar8 = local_80 >> 1 & 0x7f;
    pcVar3 = (char *)((long)&local_80 + 1);
  }
  if (((byte)bVar2 & 1) == 0) {
    uVar9 = (ulong)((byte)bVar2 >> 1);
    uVar6 = 0x16;
  }
  else {
    uVar9 = *(ulong *)(this + 8);
    uVar6 = (*(ulong *)this & 0xfffffffffffffffe) - 1;
  }
  if (uVar6 - uVar9 < uVar8) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __grow_by_and_replace(this,uVar6,(uVar9 + uVar8) - uVar6,uVar9,uVar9,0,uVar8,pcVar3);
  }
  else if (uVar8 != 0) {
    pbVar7 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
              (this + 0x10);
    if (((byte)bVar2 & 1) == 0) {
      pbVar7 = this + 1;
    }
    memcpy(pbVar7 + uVar9,pcVar3,uVar8);
    lVar1 = uVar9 + uVar8;
    if (((byte)*this & 1) == 0) {
      *this = SUB41((int)lVar1 << 1,0);
    }
    else {
      *(long *)(this + 8) = lVar1;
    }
    pbVar7[lVar1] =
         (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (((byte)*this & 1) == 0) {
    uVar9 = *(ulong *)(this + 8);
    uVar8 = *(ulong *)this;
    param_1[2] = *(ulong *)(this + 0x10);
    param_1[1] = uVar9;
    *param_1 = uVar8;
    goto joined_r0x01040e04;
  }
  uVar8 = *(ulong *)(this + 8);
  if (0xffffffffffffffef < uVar8) {
LAB_01040e0c:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  pvVar10 = *(void **)(this + 0x10);
  if (uVar8 < 0x17) {
    __dest = (void *)((long)param_1 + 1);
    *(char *)param_1 = (char)((int)uVar8 << 1);
    if (uVar8 != 0) goto LAB_01040dec;
  }
  else {
    uVar9 = uVar8 + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar9);
    param_1[1] = uVar8;
    param_1[2] = (ulong)__dest;
    *param_1 = uVar9 | 1;
LAB_01040dec:
    memcpy(__dest,pvVar10,uVar8);
  }
  *(undefined1 *)((long)__dest + uVar8) = 0;
joined_r0x01040e04:
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  if ((local_68 & 1) != 0) {
    operator_delete(local_58);
  }
  return;
}

