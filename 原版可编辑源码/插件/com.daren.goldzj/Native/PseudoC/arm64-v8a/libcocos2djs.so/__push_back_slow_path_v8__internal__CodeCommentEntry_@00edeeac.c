
/* void std::__ndk1::vector<v8::internal::CodeCommentEntry,
   std::__ndk1::allocator<v8::internal::CodeCommentEntry>
   >::__push_back_slow_path<v8::internal::CodeCommentEntry>(v8::internal::CodeCommentEntry&&) */

void __thiscall
std::__ndk1::
vector<v8::internal::CodeCommentEntry,std::__ndk1::allocator<v8::internal::CodeCommentEntry>>::
__push_back_slow_path<v8::internal::CodeCommentEntry>
          (vector<v8::internal::CodeCommentEntry,std::__ndk1::allocator<v8::internal::CodeCommentEntry>>
           *this,CodeCommentEntry *param_1)

{
  ulong uVar1;
  undefined4 *puVar2;
  void *pvVar3;
  long lVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  ulong uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  lVar11 = *(long *)(this + 8) - *(long *)this >> 5;
  uVar1 = lVar11 + 1;
  if (uVar1 >> 0x3b == 0) {
    lVar4 = *(long *)(this + 0x10) - *(long *)this;
    uVar8 = lVar4 >> 4;
    if (uVar1 <= uVar8) {
      uVar1 = uVar8;
    }
    if (0x3fffffffffffffe < (ulong)(lVar4 >> 5)) {
      uVar1 = 0x7ffffffffffffff;
    }
    if (uVar1 == 0) {
      pvVar3 = (void *)0x0;
    }
    else {
      if (uVar1 >> 0x3b != 0) goto LAB_00edefe4;
      pvVar3 = operator_new(uVar1 << 5);
    }
    puVar7 = (undefined4 *)((long)pvVar3 + lVar11 * 0x20);
    puVar2 = puVar7 + 8;
    *puVar7 = *(undefined4 *)param_1;
    uVar13 = *(undefined8 *)(param_1 + 0x10);
    uVar12 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(puVar7 + 6) = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(puVar7 + 4) = uVar13;
    *(undefined8 *)(puVar7 + 2) = uVar12;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 8) = 0;
    puVar5 = *(undefined4 **)this;
    puVar6 = puVar7;
    puVar9 = *(undefined4 **)(this + 8);
    puVar10 = puVar5;
    if (*(undefined4 **)(this + 8) != puVar5) {
      do {
        puVar10 = puVar9 + -8;
        puVar7 = puVar6 + -8;
        *puVar7 = *puVar10;
        uVar13 = *(undefined8 *)(puVar9 + -4);
        uVar12 = *(undefined8 *)(puVar9 + -6);
        *(undefined8 *)(puVar6 + -2) = *(undefined8 *)(puVar9 + -2);
        *(undefined8 *)(puVar6 + -4) = uVar13;
        *(undefined8 *)(puVar6 + -6) = uVar12;
        *(undefined8 *)(puVar9 + -4) = 0;
        *(undefined8 *)(puVar9 + -2) = 0;
        *(undefined8 *)(puVar9 + -6) = 0;
        puVar6 = puVar7;
        puVar9 = puVar10;
      } while (puVar5 != puVar10);
      puVar5 = *(undefined4 **)(this + 8);
      puVar10 = *(undefined4 **)this;
    }
    *(undefined4 **)this = puVar7;
    *(undefined4 **)(this + 8) = puVar2;
    *(void **)(this + 0x10) = (void *)((long)pvVar3 + uVar1 * 0x20);
    while (puVar2 = puVar5, puVar2 != puVar10) {
      puVar5 = puVar2 + -8;
      if ((*(byte *)(puVar2 + -6) & 1) != 0) {
        operator_delete(*(void **)(puVar2 + -2));
      }
    }
    if (puVar10 != (undefined4 *)0x0) {
      operator_delete(puVar10);
      return;
    }
    return;
  }
LAB_00edefe4:
                    /* WARNING: Subroutine does not return */
  abort();
}

