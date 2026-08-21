
/* std::__ndk1::__split_buffer<universe::network::AUpdates**,
   std::__ndk1::allocator<universe::network::AUpdates**>
   >::push_back(universe::network::AUpdates**&&) */

void __thiscall
std::__ndk1::
__split_buffer<universe::network::AUpdates**,std::__ndk1::allocator<universe::network::AUpdates**>>
::push_back(__split_buffer<universe::network::AUpdates**,std::__ndk1::allocator<universe::network::AUpdates**>>
            *this,AUpdates ***param_1)

{
  long lVar1;
  undefined8 *puVar2;
  size_t __n;
  void *pvVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *__src;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  puVar7 = *(undefined8 **)(this + 0x10);
  if (puVar7 == *(undefined8 **)(this + 0x18)) {
    puVar6 = *(undefined8 **)this;
    __src = *(undefined8 **)(this + 8);
    if (__src < puVar6 || (long)__src - (long)puVar6 == 0) {
      lVar1 = (long)*(undefined8 **)(this + 0x18) - (long)puVar6;
                    /* try { // try from 00a072e8 to 00b07337 has its CatchHandler @ 00a072e8
                       catch() { ... } // from try @ 00a072e8 with catch @ 00a072e8
                       catch() { ... } // from try @ 00a07370 with catch @ 00a072e8
                       catch() { ... } // from try @ 00a073b4 with catch @ 00a072e8 */
      uVar5 = lVar1 >> 2;
      if (lVar1 == 0) {
        uVar5 = 1;
      }
      if (uVar5 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_007c2210("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      pvVar3 = operator_new(uVar5 * 8);
      puVar2 = (undefined8 *)((long)pvVar3 + (uVar5 >> 2) * 8);
      lVar1 = (long)puVar7 - (long)__src;
      puVar7 = puVar2;
      if (lVar1 != 0) {
        lVar4 = (lVar1 >> 3) << 3;
        do {
          lVar4 = lVar4 + -8;
          *puVar7 = *__src;
          puVar7 = puVar7 + 1;
          __src = __src + 1;
                    /* try { // try from 00a07338 to 00b0736f has its CatchHandler @ 00a073f4 */
        } while (lVar4 != 0);
        puVar6 = *(undefined8 **)this;
        puVar7 = (undefined8 *)((long)puVar2 + lVar1);
      }
      *(void **)this = pvVar3;
      *(undefined8 **)(this + 8) = puVar2;
      *(undefined8 **)(this + 0x10) = puVar7;
      *(void **)(this + 0x18) = (void *)((long)pvVar3 + uVar5 * 8);
      if (puVar6 != (undefined8 *)0x0) {
        operator_delete(puVar6);
        puVar7 = *(undefined8 **)(this + 0x10);
      }
    }
    else {
                    /* catch() { ... } // from try @ 00a07200 with catch @ 00a07298 */
      lVar4 = (long)__src - (long)puVar6 >> 3;
                    /* catch() { ... } // from try @ 00a07218 with catch @ 00a0729c */
      lVar1 = lVar4 + 2;
      if (-1 < lVar4 + 1) {
        lVar1 = lVar4 + 1;
      }
      __n = (long)puVar7 - (long)__src;
      if (__n != 0) {
                    /* catch() { ... } // from try @ 00a071cc with catch @ 00a072cc */
        memmove(__src + -(lVar1 >> 1),__src,__n);
      }
      puVar7 = __src + -(lVar1 >> 1) + ((long)__n >> 3);
      *(long *)(this + 8) = *(long *)(this + 8) + (lVar1 >> 1) * -8;
      *(undefined8 **)(this + 0x10) = puVar7;
    }
  }
  *puVar7 = *param_1;
                    /* try { // try from 00a07370 to 00b0739f has its CatchHandler @ 00a072e8 */
  *(long *)(this + 0x10) = *(long *)(this + 0x10) + 8;
  return;
}

