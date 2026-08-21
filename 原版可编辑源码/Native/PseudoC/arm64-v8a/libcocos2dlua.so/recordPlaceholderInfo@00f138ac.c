
/* cocos2d::Label::recordPlaceholderInfo(int, char32_t) */

void __thiscall cocos2d::Label::recordPlaceholderInfo(Label *this,int param_1,wchar32 param_2)

{
  void *pvVar1;
  undefined8 *puVar2;
  wchar32 *pwVar3;
  long lVar4;
  ulong uVar5;
  void *__src;
  size_t __n;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  puVar2 = *(undefined8 **)(this + 0x3f8);
  __src = *(void **)(this + 0x3f0);
  uVar7 = (ulong)param_1;
  __n = (long)puVar2 - (long)__src;
  uVar6 = ((long)__n >> 3) * -0x5555555555555555;
  if (uVar7 <= uVar6 && uVar6 - uVar7 != 0) goto LAB_00f139d8;
  if (*(undefined8 **)(this + 0x400) == puVar2) {
    uVar8 = 0xaaaaaaaaaaaaaaa;
    uVar6 = uVar6 + 1;
    if (0xaaaaaaaaaaaaaaa < uVar6) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    lVar4 = (long)*(undefined8 **)(this + 0x400) - (long)__src >> 3;
    if ((ulong)(lVar4 * -0x5555555555555555) < 0x555555555555555) {
      uVar5 = lVar4 * 0x5555555555555556;
      uVar8 = uVar6;
      if (uVar6 <= uVar5) {
        uVar8 = uVar5;
      }
      if (uVar8 != 0) goto LAB_00f13974;
      pvVar1 = (void *)0x0;
    }
    else {
LAB_00f13974:
      pvVar1 = operator_new(uVar8 * 0x18);
    }
    puVar2 = (undefined8 *)((long)pvVar1 + ((long)__n >> 3) * 8);
    puVar2[2] = local_68;
    puVar2[1] = uStack_70;
    *puVar2 = local_78;
    if (0 < (long)__n) {
                    /* try { // try from 00f139b8 to 01013a17 has its CatchHandler @ 00f139b8
                       catch() { ... } // from try @ 00f139b8 with catch @ 00f139b8
                       catch() { ... } // from try @ 00f13a1c with catch @ 00f139b8
                       catch() { ... } // from try @ 00f13aa4 with catch @ 00f139b8 */
      memcpy((void *)((long)puVar2 - __n),__src,__n);
    }
    *(void **)(this + 0x3f0) = (void *)((long)puVar2 - __n);
    *(undefined8 **)(this + 0x3f8) = puVar2 + 3;
    *(void **)(this + 0x400) = (void *)((long)pvVar1 + uVar8 * 0x18);
    if (__src != (void *)0x0) {
      operator_delete(__src);
    }
  }
  else {
    puVar2[2] = local_68;
                    /* catch() { ... } // from try @ 00f13898 with catch @ 00f1391c */
    puVar2[1] = uStack_70;
    *puVar2 = local_78;
    *(undefined8 **)(this + 0x3f8) = puVar2 + 3;
  }
  __src = *(void **)(this + 0x3f0);
LAB_00f139d8:
  pwVar3 = (wchar32 *)((long)__src + uVar7 * 0x18);
  *pwVar3 = param_2;
  *(undefined1 *)(pwVar3 + 1) = 0;
  return;
}

