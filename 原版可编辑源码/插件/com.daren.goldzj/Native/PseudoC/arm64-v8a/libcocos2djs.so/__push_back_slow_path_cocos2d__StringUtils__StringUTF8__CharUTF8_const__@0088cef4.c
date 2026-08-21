
/* void std::__ndk1::vector<cocos2d::StringUtils::StringUTF8::CharUTF8,
   std::__ndk1::allocator<cocos2d::StringUtils::StringUTF8::CharUTF8>
   >::__push_back_slow_path<cocos2d::StringUtils::StringUTF8::CharUTF8
   const&>(cocos2d::StringUtils::StringUTF8::CharUTF8 const&) */

void __thiscall
std::__ndk1::
vector<cocos2d::StringUtils::StringUTF8::CharUTF8,std::__ndk1::allocator<cocos2d::StringUtils::StringUTF8::CharUTF8>>
::__push_back_slow_path<cocos2d::StringUtils::StringUTF8::CharUTF8_const&>
          (vector<cocos2d::StringUtils::StringUTF8::CharUTF8,std::__ndk1::allocator<cocos2d::StringUtils::StringUTF8::CharUTF8>>
           *this,CharUTF8 *param_1)

{
  ulong *puVar1;
  byte *pbVar2;
  void *pvVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  byte *pbVar8;
  ulong *puVar9;
  void *__src;
  void *__dest;
  byte *pbVar10;
  ulong uVar11;
  
  pbVar8 = *(byte **)this;
  pbVar10 = *(byte **)(this + 8);
  lVar4 = (long)pbVar10 - (long)pbVar8 >> 3;
  uVar11 = 0xaaaaaaaaaaaaaaa;
  uVar7 = lVar4 * -0x5555555555555555 + 1;
  if (0xaaaaaaaaaaaaaaa < uVar7) {
                    /* WARNING: Subroutine does not return */
    __vector_base_common<true>::__throw_length_error();
  }
  lVar6 = *(long *)(this + 0x10) - (long)pbVar8 >> 3;
  if ((ulong)(lVar6 * -0x5555555555555555) < 0x555555555555555) {
    uVar5 = lVar6 * 0x5555555555555556;
    uVar11 = uVar7;
    if (uVar7 <= uVar5) {
      uVar11 = uVar5;
    }
    if (uVar11 != 0) goto LAB_0088cf78;
    pvVar3 = (void *)0x0;
  }
  else {
LAB_0088cf78:
    pvVar3 = operator_new(uVar11 * 0x18);
  }
  puVar9 = (ulong *)((long)pvVar3 + lVar4 * 8);
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = 0;
  if (((byte)*param_1 & 1) == 0) {
    uVar5 = *(ulong *)(param_1 + 8);
    uVar7 = *(ulong *)param_1;
    puVar9[2] = *(ulong *)(param_1 + 0x10);
    puVar9[1] = uVar5;
    *puVar9 = uVar7;
    goto LAB_0088d024;
  }
  uVar7 = *(ulong *)(param_1 + 8);
  if (0xffffffffffffffef < uVar7) {
                    /* WARNING: Subroutine does not return */
    __basic_string_common<true>::__throw_length_error();
  }
  __src = *(void **)(param_1 + 0x10);
  if (uVar7 < 0x17) {
    __dest = (void *)((long)puVar9 + 1);
    *(char *)puVar9 = (char)((int)uVar7 << 1);
    if (uVar7 != 0) goto LAB_0088d008;
  }
  else {
    uVar5 = uVar7 + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar5);
    *(ulong *)((long)pvVar3 + lVar4 * 8 + 8) = uVar7;
    *(void **)((long)pvVar3 + lVar4 * 8 + 0x10) = __dest;
    *puVar9 = uVar5 | 1;
LAB_0088d008:
    memcpy(__dest,__src,uVar7);
  }
  *(undefined1 *)((long)__dest + uVar7) = 0;
  pbVar8 = *(byte **)this;
  pbVar10 = *(byte **)(this + 8);
LAB_0088d024:
  puVar1 = puVar9 + 3;
  if (pbVar10 != pbVar8) {
    do {
      uVar5 = *(ulong *)(pbVar10 + -0x10);
      uVar7 = *(ulong *)(pbVar10 + -0x18);
      puVar9[-1] = *(ulong *)(pbVar10 + -8);
      puVar9[-2] = uVar5;
      puVar9[-3] = uVar7;
      pbVar10[-0x10] = 0;
      pbVar10[-0xf] = 0;
      pbVar10[-0xe] = 0;
      pbVar10[-0xd] = 0;
      pbVar10[-0xc] = 0;
      pbVar10[-0xb] = 0;
      pbVar10[-10] = 0;
      pbVar10[-9] = 0;
      pbVar10[-8] = 0;
      pbVar10[-7] = 0;
      pbVar10[-6] = 0;
      pbVar10[-5] = 0;
      pbVar10[-4] = 0;
      pbVar10[-3] = 0;
      pbVar10[-2] = 0;
      pbVar10[-1] = 0;
      pbVar10[-0x18] = 0;
      pbVar10[-0x17] = 0;
      pbVar10[-0x16] = 0;
      pbVar10[-0x15] = 0;
      pbVar10[-0x14] = 0;
      pbVar10[-0x13] = 0;
      pbVar10[-0x12] = 0;
      pbVar10[-0x11] = 0;
      pbVar10 = pbVar10 + -0x18;
      puVar9 = puVar9 + -3;
    } while (pbVar8 != pbVar10);
    pbVar8 = *(byte **)this;
    pbVar10 = *(byte **)(this + 8);
  }
  *(ulong **)this = puVar9;
  *(ulong **)(this + 8) = puVar1;
  *(void **)(this + 0x10) = (void *)((long)pvVar3 + uVar11 * 0x18);
  while (pbVar2 = pbVar10, pbVar2 != pbVar8) {
    pbVar10 = pbVar2 + -0x18;
    if ((*pbVar10 & 1) != 0) {
      operator_delete(*(void **)(pbVar2 + -8));
    }
  }
  if (pbVar8 == (byte *)0x0) {
    return;
  }
  operator_delete(pbVar8);
  return;
}

