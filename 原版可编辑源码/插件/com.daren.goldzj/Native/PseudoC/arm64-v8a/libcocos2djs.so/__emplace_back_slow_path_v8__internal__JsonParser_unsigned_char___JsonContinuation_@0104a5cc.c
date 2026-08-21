
/* void std::__ndk1::vector<v8::internal::JsonParser<unsigned char>::JsonContinuation,
   std::__ndk1::allocator<v8::internal::JsonParser<unsigned char>::JsonContinuation>
   >::__emplace_back_slow_path<v8::internal::JsonParser<unsigned
   char>::JsonContinuation>(v8::internal::JsonParser<unsigned char>::JsonContinuation&&) */

void __thiscall
std::__ndk1::
vector<v8::internal::JsonParser<unsigned_char>::JsonContinuation,std::__ndk1::allocator<v8::internal::JsonParser<unsigned_char>::JsonContinuation>>
::__emplace_back_slow_path<v8::internal::JsonParser<unsigned_char>::JsonContinuation>
          (vector<v8::internal::JsonParser<unsigned_char>::JsonContinuation,std::__ndk1::allocator<v8::internal::JsonParser<unsigned_char>::JsonContinuation>>
           *this,JsonContinuation *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  void *pvVar4;
  Isolate *pIVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  
  lVar9 = *(long *)(this + 8) - *(long *)this >> 3;
  uVar1 = lVar9 * -0x3333333333333333 + 1;
  if (uVar1 < 0x666666666666667) {
    lVar7 = *(long *)(this + 0x10) - *(long *)this >> 3;
    uVar8 = lVar7 * -0x6666666666666666;
    if (uVar1 <= uVar8) {
      uVar1 = uVar8;
    }
    if (0x333333333333332 < (ulong)(lVar7 * -0x3333333333333333)) {
      uVar1 = 0x666666666666666;
    }
    if (uVar1 == 0) {
      pvVar4 = (void *)0x0;
    }
    else {
      if (0x666666666666666 < uVar1) goto LAB_0104a778;
      pvVar4 = operator_new(uVar1 * 0x28);
    }
    uVar11 = *(undefined8 *)param_1;
    puVar6 = (undefined8 *)((long)pvVar4 + lVar9 * 8);
    puVar6[1] = *(undefined8 *)(param_1 + 8);
    *puVar6 = uVar11;
    uVar11 = *(undefined8 *)(param_1 + 0x18);
    puVar6[2] = *(undefined8 *)(param_1 + 0x10);
    puVar6[3] = uVar11;
    *(undefined8 *)param_1 = 0;
    *(undefined4 *)(puVar6 + 4) = *(undefined4 *)(param_1 + 0x20);
    puVar10 = *(undefined8 **)this;
    puVar2 = *(undefined8 **)(this + 8);
    puVar3 = puVar6 + 5;
    puVar12 = puVar10;
    if (puVar2 != puVar10) {
      lVar9 = 0;
      do {
        lVar7 = lVar9 + -0x28;
        *(undefined8 *)((long)puVar6 + lVar9 + -0x28) =
             *(undefined8 *)((long)puVar2 + lVar9 + -0x28);
        *(undefined8 *)((long)puVar6 + lVar9 + -0x20) =
             *(undefined8 *)((long)puVar2 + lVar9 + -0x20);
        *(undefined8 *)((long)puVar6 + lVar9 + -0x18) =
             *(undefined8 *)((long)puVar2 + lVar9 + -0x18);
        *(undefined8 *)((long)puVar2 + lVar9 + -0x28) = 0;
        uVar11 = *(undefined8 *)((long)puVar2 + lVar9 + -0x10);
        *(undefined4 *)((long)puVar6 + lVar9 + -8) = *(undefined4 *)((long)puVar2 + lVar9 + -8);
        *(undefined8 *)((long)puVar6 + lVar9 + -0x10) = uVar11;
        lVar9 = lVar7;
      } while ((long)puVar10 - (long)puVar2 != lVar7);
      puVar10 = *(undefined8 **)(this + 8);
      puVar6 = (undefined8 *)((long)puVar6 + lVar7);
      puVar12 = *(undefined8 **)this;
    }
    *(undefined8 **)this = puVar6;
    *(undefined8 **)(this + 8) = puVar3;
    *(void **)(this + 0x10) = (void *)((long)pvVar4 + uVar1 * 0x28);
    if (puVar10 != puVar12) {
      pIVar5 = (Isolate *)puVar10[-5];
      puVar3 = puVar10 + -5;
      while( true ) {
        puVar6 = puVar3;
        if (pIVar5 != (Isolate *)0x0) {
          lVar9 = puVar10[-3];
          *(undefined8 *)(pIVar5 + 0x95a0) = puVar10[-4];
          *(int *)(pIVar5 + 0x95b0) = *(int *)(pIVar5 + 0x95b0) + -1;
          if (*(long *)(pIVar5 + 0x95a8) != lVar9) {
            *(long *)(pIVar5 + 0x95a8) = lVar9;
            v8::internal::HandleScope::DeleteExtensions(pIVar5);
          }
        }
        if (puVar12 == puVar6) break;
        pIVar5 = (Isolate *)puVar6[-5];
        puVar3 = puVar6 + -5;
        puVar10 = puVar6;
      }
    }
    if (puVar12 != (undefined8 *)0x0) {
      operator_delete(puVar12);
      return;
    }
    return;
  }
LAB_0104a778:
                    /* WARNING: Subroutine does not return */
  abort();
}

