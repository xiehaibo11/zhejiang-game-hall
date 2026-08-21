
/* std::__ndk1::enable_if<__is_forward_iterator<unsigned char*>::value&&is_constructible<char,
   std::__ndk1::iterator_traits<unsigned char*>::reference>::value, std::__ndk1::__wrap_iter<char*>
   >::type std::__ndk1::vector<char, std::__ndk1::allocator<char> >::insert<unsigned
   char*>(std::__ndk1::__wrap_iter<char const*>, unsigned char*, unsigned char*) */

undefined1 * __thiscall
std::__ndk1::vector<char,std::__ndk1::allocator<char>>::insert<unsigned_char*>
          (vector<char,std::__ndk1::allocator<char>> *this,undefined1 *param_2,undefined1 *param_3,
          undefined1 *param_4)

{
  undefined8 *puVar1;
  size_t sVar2;
  ulong uVar3;
  undefined1 *puVar4;
  long lVar5;
  ulong uVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  void *__src;
  void *pvVar12;
  ulong uVar13;
  size_t __n;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  uVar13 = (long)param_4 - (long)param_3;
  if ((long)uVar13 < 1) {
    return param_2;
  }
  puVar11 = *(undefined1 **)(this + 8);
  if ((long)uVar13 <= *(long *)(this + 0x10) - (long)puVar11) {
    lVar5 = (long)puVar11 - (long)param_2;
    puVar4 = puVar11;
    if (lVar5 < (long)uVar13) {
      for (puVar7 = param_3 + lVar5; puVar7 != param_4; puVar7 = puVar7 + 1) {
        *puVar4 = *puVar7;
        puVar4 = (undefined1 *)(*(long *)(this + 8) + 1);
        *(undefined1 **)(this + 8) = puVar4;
      }
      param_4 = param_3 + lVar5;
      if (lVar5 < 1) {
        return param_2;
      }
    }
    puVar7 = param_2 + uVar13;
                    /* try { // try from 009ec3f4 to 00aec3ff has its CatchHandler @ 009ec504 */
    sVar2 = (long)puVar4 - (long)puVar7;
    if (puVar4 + -uVar13 < puVar11) {
      puVar11 = puVar11 + (long)(puVar7 + (-(long)param_2 - (long)puVar4));
      puVar10 = puVar4 + (long)param_2 + -(long)puVar7;
      puVar7 = puVar4;
      do {
        puVar11 = puVar11 + -1;
        *puVar7 = *puVar10;
        puVar7 = (undefined1 *)(*(long *)(this + 8) + 1);
        *(undefined1 **)(this + 8) = puVar7;
        puVar10 = puVar10 + 1;
      } while (puVar11 != (undefined1 *)0x0);
    }
    if (sVar2 != 0) {
      memmove(puVar4 + -sVar2,param_2,sVar2);
    }
    uVar13 = (long)param_4 - (long)param_3;
    if (uVar13 == 0) {
      return param_2;
    }
    puVar11 = param_2;
                    /* try { // try from 009ec45c to 00aec4a7 has its CatchHandler @ 009ec4ec */
    if ((0x1f < uVar13) &&
       ((param_4 <= param_2 || (param_4 + ((long)param_2 - (long)param_3) <= param_3)))) {
      uVar6 = uVar13 & 0xffffffffffffffe0;
      puVar8 = (undefined8 *)(param_3 + 0x10);
                    /* catch() { ... } // from try @ 009ebadc with catch @ 009ec5bc
                       catch() { ... } // from try @ 009ec4c0 with catch @ 009ec5bc */
      param_3 = param_3 + uVar6;
      puVar9 = (undefined8 *)(param_2 + 0x10);
      uVar3 = uVar6;
      do {
        puVar1 = puVar8 + -1;
                    /* catch() { ... } // from try @ 009ebd08 with catch @ 009ec5cc */
        uVar14 = puVar8[-2];
        uVar16 = puVar8[1];
        uVar15 = *puVar8;
                    /* catch() { ... } // from try @ 009ebc88 with catch @ 009ec5d0 */
        puVar8 = puVar8 + 4;
                    /* catch() { ... } // from try @ 009ebd30 with catch @ 009ec5d4 */
        uVar3 = uVar3 - 0x20;
                    /* catch() { ... } // from try @ 009ebbb4 with catch @ 009ec5d8 */
        puVar9[-1] = *puVar1;
        puVar9[-2] = uVar14;
        puVar9[1] = uVar16;
        *puVar9 = uVar15;
                    /* catch() { ... } // from try @ 009ebc70 with catch @ 009ec5dc */
        puVar9 = puVar9 + 4;
                    /* catch() { ... } // from try @ 009ec1f4 with catch @ 009ec5e0
                       catch() { ... } // from try @ 009ec290 with catch @ 009ec5e0 */
      } while (uVar3 != 0);
      puVar11 = param_2 + uVar6;
      if (uVar6 == uVar13) {
        return param_2;
      }
    }
    do {
      puVar4 = param_3 + 1;
      *puVar11 = *param_3;
      puVar11 = puVar11 + 1;
      param_3 = puVar4;
    } while (param_4 != puVar4);
    return param_2;
  }
  __src = *(void **)this;
  puVar11 = puVar11 + (uVar13 - (long)__src);
  if ((long)puVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    __vector_base_common<true>::__throw_length_error();
  }
  uVar3 = *(long *)(this + 0x10) - (long)__src;
                    /* try { // try from 009ec374 to 00aec387 has its CatchHandler @ 009ec658 */
  if (uVar3 < 0x3fffffffffffffff) {
    puVar4 = (undefined1 *)(uVar3 * 2);
    if (puVar11 <= puVar4) {
      puVar11 = puVar4;
    }
    if (puVar11 != (undefined1 *)0x0) goto LAB_009ec48c;
    pvVar12 = (void *)0x0;
                    /* try { // try from 009ec398 to 00aec3a3 has its CatchHandler @ 009ec508 */
  }
  else {
    puVar11 = (undefined1 *)0x7fffffffffffffff;
LAB_009ec48c:
    pvVar12 = operator_new((ulong)puVar11);
  }
  puVar4 = (undefined1 *)((long)pvVar12 + ((long)param_2 - (long)__src));
  puVar7 = puVar4;
  if (param_3 == param_4) goto LAB_009ec53c;
  lVar5 = -(long)__src - (long)param_3;
                    /* try { // try from 009ec4b4 to 00aec4b7 has its CatchHandler @ 009ec648 */
                    /* try { // try from 009ec4c8 to 00aec4cb has its CatchHandler @ 009ec508 */
                    /* try { // try from 009ec4cc to 00aec4cf has its CatchHandler @ 009ec504 */
                    /* try { // try from 009ec4d0 to 00aec4d7 has its CatchHandler @ 009ec4e8 */
                    /* try { // try from 009ec4d8 to 00aec4df has its CatchHandler @ 009ec4e4 */
  if ((uVar13 < 0x20) ||
     ((puVar4 < param_4 &&
      (param_3 < (undefined1 *)((long)pvVar12 + (long)(param_4 + (long)(param_2 + lVar5))))))) {
LAB_009ec524:
    do {
      puVar10 = param_3 + 1;
      *puVar7 = *param_3;
      puVar7 = puVar7 + 1;
      param_3 = puVar10;
    } while (param_4 != puVar10);
  }
  else {
                    /* catch() { ... } // from try @ 009ec178 with catch @ 009ec4e4
                       catch() { ... } // from try @ 009ec4d8 with catch @ 009ec4e4 */
                    /* catch() { ... } // from try @ 009ebfe8 with catch @ 009ec4e8
                       catch() { ... } // from try @ 009ec4d0 with catch @ 009ec4e8 */
    uVar6 = uVar13 & 0xffffffffffffffe0;
                    /* catch() { ... } // from try @ 009ec224 with catch @ 009ec4ec
                       catch() { ... } // from try @ 009ec45c with catch @ 009ec4ec */
    puVar8 = (undefined8 *)(param_3 + 0x10);
    param_3 = param_3 + uVar6;
                    /* catch() { ... } // from try @ 009ec1e8 with catch @ 009ec4fc */
    puVar9 = (undefined8 *)((long)pvVar12 + (long)(param_2 + (0x10 - (long)__src)));
                    /* catch() { ... } // from try @ 009ec1dc with catch @ 009ec500 */
    uVar3 = uVar6;
    do {
      puVar1 = puVar8 + -1;
                    /* catch() { ... } // from try @ 009ec3f4 with catch @ 009ec504
                       catch() { ... } // from try @ 009ec4cc with catch @ 009ec504 */
      uVar14 = puVar8[-2];
      uVar16 = puVar8[1];
      uVar15 = *puVar8;
                    /* catch() { ... } // from try @ 009ec398 with catch @ 009ec508
                       catch() { ... } // from try @ 009ec4c8 with catch @ 009ec508 */
      puVar8 = puVar8 + 4;
                    /* catch() { ... } // from try @ 009ec1a4 with catch @ 009ec50c */
      uVar3 = uVar3 - 0x20;
      puVar9[-1] = *puVar1;
      puVar9[-2] = uVar14;
      puVar9[1] = uVar16;
      *puVar9 = uVar15;
      puVar9 = puVar9 + 4;
    } while (uVar3 != 0);
                    /* catch() { ... } // from try @ 009ebe74 with catch @ 009ec51c */
    puVar7 = puVar4 + uVar6;
    if (uVar13 != uVar6) goto LAB_009ec524;
  }
  __src = *(void **)this;
  puVar7 = (undefined1 *)((long)pvVar12 + (long)(param_4 + (long)(param_2 + lVar5)));
LAB_009ec53c:
                    /* catch() { ... } // from try @ 009ebe40 with catch @ 009ec53c */
  sVar2 = (long)param_2 - (long)__src;
  if (0 < (long)sVar2) {
    memcpy(puVar4 + -sVar2,__src,sVar2);
  }
  __n = *(long *)(this + 8) - (long)param_2;
  if (0 < (long)__n) {
    memcpy(puVar7,param_2,__n);
    puVar7 = puVar7 + __n;
  }
  *(undefined1 **)this = puVar4 + -sVar2;
  *(undefined1 **)(this + 8) = puVar7;
  *(undefined1 **)(this + 0x10) = (undefined1 *)((long)pvVar12 + (long)puVar11);
  if (__src != (void *)0x0) {
    operator_delete(__src);
  }
                    /* catch() { ... } // from try @ 009ebe1c with catch @ 009ec59c */
                    /* catch() { ... } // from try @ 009ebddc with catch @ 009ec5ac */
  return puVar4;
}

