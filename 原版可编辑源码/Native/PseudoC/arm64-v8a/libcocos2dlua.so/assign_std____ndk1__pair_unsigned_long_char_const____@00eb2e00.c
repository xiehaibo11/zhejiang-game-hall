
/* std::__ndk1::enable_if<__is_forward_iterator<std::__ndk1::pair<unsigned long, char
   const*>*>::value&&is_constructible<std::__ndk1::pair<unsigned long, char const*>,
   std::__ndk1::iterator_traits<std::__ndk1::pair<unsigned long, char const*>*>::reference>::value,
   void>::type std::__ndk1::vector<std::__ndk1::pair<unsigned long, char const*>,
   std::__ndk1::allocator<std::__ndk1::pair<unsigned long, char const*> >
   >::assign<std::__ndk1::pair<unsigned long, char const*>*>(std::__ndk1::pair<unsigned long, char
   const*>*, std::__ndk1::pair<unsigned long, char const*>*) */

void __thiscall
std::__ndk1::
vector<std::__ndk1::pair<unsigned_long,char_const*>,std::__ndk1::allocator<std::__ndk1::pair<unsigned_long,char_const*>>>
::assign<std::__ndk1::pair<unsigned_long,char_const*>*>
          (vector<std::__ndk1::pair<unsigned_long,char_const*>,std::__ndk1::allocator<std::__ndk1::pair<unsigned_long,char_const*>>>
           *this,pair *param_1,pair *param_2)

{
  ulong uVar1;
  undefined8 *__src;
  undefined8 *puVar2;
  void *pvVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  size_t sVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
                    /* catch() { ... } // from try @ 00eb2e44 with catch @ 00eb2e18 */
  lVar5 = *(long *)(this + 0x10);
  puVar2 = *(undefined8 **)this;
  sVar10 = (long)param_2 - (long)param_1;
  uVar11 = (long)sVar10 >> 4;
  if (uVar11 <= (ulong)(lVar5 - (long)puVar2 >> 4)) {
    pvVar3 = *(void **)(this + 8);
                    /* try { // try from 00eb2e88 to 00fb2eff has its CatchHandler @ 00eb2e88
                       catch(type#1 @ 00000000) { ... } // from try @ 00eb2e88 with catch @ 00eb2e88
                       catch(type#1 @ 00000000) { ... } // from try @ 00eb30ac with catch @ 00eb2e88
                       catch(type#1 @ 00000000) { ... } // from try @ 00eb3140 with catch @ 00eb2e88
                        */
    uVar6 = (long)pvVar3 - (long)puVar2 >> 4;
    __src = (undefined8 *)(param_1 + ((long)pvVar3 - (long)puVar2));
    if (uVar11 <= uVar6) {
      __src = (undefined8 *)param_2;
    }
    if ((long)__src - (long)param_1 != 0) {
      uVar7 = ((long)__src - (long)param_1) - 0x10;
      uVar1 = (uVar7 >> 4) + 1;
      puVar4 = puVar2;
      if (3 < uVar1) {
        uVar7 = uVar7 & 0xfffffffffffffff0;
                    /* try { // try from 00eb2f18 to 00fb2f1b has its CatchHandler @ 00eb3164 */
        if ((param_1 + uVar7 + 8 <= puVar2 || (pair *)((long)puVar2 + uVar7 + 8) <= param_1) &&
           (param_1 + uVar7 + 0x10 <= puVar2 + 1 ||
            (pair *)((long)puVar2 + uVar7 + 0x10) <= param_1 + 8)) {
          uVar8 = uVar1 & 0x1ffffffffffffffc;
          puVar4 = puVar2 + 4;
          puVar2 = puVar2 + uVar8 * 2;
          puVar9 = (undefined8 *)(param_1 + 0x20);
          uVar7 = uVar8;
          do {
            uVar12 = puVar9[-4];
            uVar14 = puVar9[-1];
            uVar13 = puVar9[-2];
            uVar16 = puVar9[1];
            uVar15 = *puVar9;
            uVar18 = puVar9[3];
            uVar17 = puVar9[2];
            uVar7 = uVar7 - 4;
            puVar4[-3] = puVar9[-3];
            puVar4[-4] = uVar12;
            puVar4[-1] = uVar14;
            puVar4[-2] = uVar13;
            puVar4[1] = uVar16;
            *puVar4 = uVar15;
            puVar4[3] = uVar18;
            puVar4[2] = uVar17;
            puVar4 = puVar4 + 8;
            puVar9 = puVar9 + 8;
          } while (uVar7 != 0);
          puVar4 = puVar2;
          param_1 = param_1 + uVar8 * 0x10;
          if (uVar1 == uVar8) goto LAB_00eb2fb8;
        }
      }
      do {
        puVar9 = (undefined8 *)((long)param_1 + 0x10);
                    /* try { // try from 00eb2fa8 to 00fb2fab has its CatchHandler @ 00eb3124 */
        uVar12 = *(undefined8 *)param_1;
        puVar2 = puVar4 + 2;
        puVar4[1] = *(undefined8 *)((long)param_1 + 8);
        *puVar4 = uVar12;
        puVar4 = puVar2;
        param_1 = (pair *)puVar9;
      } while (__src != puVar9);
    }
LAB_00eb2fb8:
    if (uVar6 < uVar11) {
      sVar10 = (long)param_2 - (long)__src;
      if (0 < (long)sVar10) {
                    /* try { // try from 00eb2fcc to 00fb2fcf has its CatchHandler @ 00eb311c */
        memcpy(pvVar3,__src,sVar10);
        pvVar3 = (void *)((long)pvVar3 + sVar10);
      }
                    /* try { // try from 00eb2fdc to 00fb2fe3 has its CatchHandler @ 00eb3118 */
      *(void **)(this + 8) = pvVar3;
    }
    else {
      *(undefined8 **)(this + 8) = puVar2;
    }
                    /* try { // try from 00eb2ff0 to 00fb3007 has its CatchHandler @ 00eb3120 */
    return;
  }
  if (puVar2 != (undefined8 *)0x0) {
                    /* try { // try from 00eb2e3c to 00fb2e43 has its CatchHandler @ 00eb2e6c */
    *(undefined8 **)(this + 8) = puVar2;
    operator_delete(puVar2);
                    /* try { // try from 00eb2e44 to 00fb2e87 has its CatchHandler @ 00eb2e18 */
    lVar5 = 0;
    *(undefined8 *)this = 0;
    *(undefined8 *)(this + 8) = 0;
    *(undefined8 *)(this + 0x10) = 0;
  }
  if (uVar11 >> 0x3c == 0) {
    if ((ulong)(lVar5 >> 4) < 0x7ffffffffffffff) {
      uVar6 = lVar5 >> 3;
                    /* catch() { ... } // from try @ 00eb2e3c with catch @ 00eb2e6c */
      if ((uVar11 <= uVar6) && (uVar11 = uVar6, uVar6 >> 0x3c != 0)) goto LAB_00eb2e7c;
    }
    else {
      uVar11 = 0xfffffffffffffff;
    }
    pvVar3 = operator_new(uVar11 * 0x10);
    *(void **)this = pvVar3;
    *(void **)(this + 8) = pvVar3;
    *(void **)(this + 0x10) = (void *)((long)pvVar3 + uVar11 * 0x10);
    if (0 < (long)sVar10) {
      memcpy(pvVar3,param_1,sVar10);
      pvVar3 = (void *)((long)pvVar3 + sVar10);
    }
    *(void **)(this + 8) = pvVar3;
    return;
                    /* try { // try from 00eb2f00 to 00fb2f07 has its CatchHandler @ 00eb3110 */
  }
LAB_00eb2e7c:
                    /* WARNING: Subroutine does not return */
  __vector_base_common<true>::__throw_length_error();
}

