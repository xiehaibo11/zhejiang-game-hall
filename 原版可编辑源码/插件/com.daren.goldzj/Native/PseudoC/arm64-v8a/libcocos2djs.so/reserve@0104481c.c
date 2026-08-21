
/* std::__ndk1::vector<v8::internal::JsonParser<unsigned char>::JsonContinuation,
   std::__ndk1::allocator<v8::internal::JsonParser<unsigned char>::JsonContinuation>
   >::reserve(unsigned long) */

void __thiscall
std::__ndk1::
vector<v8::internal::JsonParser<unsigned_char>::JsonContinuation,std::__ndk1::allocator<v8::internal::JsonParser<unsigned_char>::JsonContinuation>>
::reserve(vector<v8::internal::JsonParser<unsigned_char>::JsonContinuation,std::__ndk1::allocator<v8::internal::JsonParser<unsigned_char>::JsonContinuation>>
          *this,ulong param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  void *pvVar5;
  Isolate *pIVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  
  puVar11 = *(undefined8 **)this;
  if ((ulong)((*(long *)(this + 0x10) - (long)puVar11 >> 3) * -0x3333333333333333) < param_1) {
    if (0x666666666666666 < param_1) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    puVar10 = *(undefined8 **)(this + 8);
    pvVar5 = operator_new(param_1 * 0x28);
    lVar1 = (long)puVar10 - (long)puVar11;
    lVar8 = (long)pvVar5 + lVar1;
    if (lVar1 != 0) {
      lVar8 = 0;
      do {
        lVar3 = lVar8 + (lVar1 >> 3) * 8;
        lVar7 = lVar8 + -0x28;
        *(undefined8 *)((long)pvVar5 + lVar3 + -0x28) =
             *(undefined8 *)((long)puVar10 + lVar8 + -0x28);
        *(undefined8 *)((long)pvVar5 + lVar3 + -0x20) =
             *(undefined8 *)((long)puVar10 + lVar8 + -0x20);
        *(undefined8 *)((long)pvVar5 + lVar3 + -0x18) =
             *(undefined8 *)((long)puVar10 + lVar8 + -0x18);
        *(undefined8 *)((long)puVar10 + lVar8 + -0x28) = 0;
        uVar9 = *(undefined8 *)((long)puVar10 + lVar8 + -0x10);
        *(undefined4 *)((long)pvVar5 + lVar3 + -8) = *(undefined4 *)((long)puVar10 + lVar8 + -8);
        *(undefined8 *)((long)pvVar5 + lVar3 + -0x10) = uVar9;
        lVar8 = lVar7;
      } while ((long)puVar11 - (long)puVar10 != lVar7);
      puVar10 = *(undefined8 **)this;
      puVar11 = *(undefined8 **)(this + 8);
      lVar8 = (long)pvVar5 + lVar7 + (lVar1 >> 3) * 8;
    }
    *(long *)this = lVar8;
    *(long *)(this + 8) = (long)pvVar5 + lVar1;
    *(void **)(this + 0x10) = (void *)((long)pvVar5 + param_1 * 0x28);
    if (puVar11 != puVar10) {
      pIVar6 = (Isolate *)puVar11[-5];
      puVar4 = puVar11 + -5;
      while( true ) {
        puVar2 = puVar4;
        if (pIVar6 != (Isolate *)0x0) {
          lVar1 = puVar11[-3];
          *(undefined8 *)(pIVar6 + 0x95a0) = puVar11[-4];
          *(int *)(pIVar6 + 0x95b0) = *(int *)(pIVar6 + 0x95b0) + -1;
          if (*(long *)(pIVar6 + 0x95a8) != lVar1) {
            *(long *)(pIVar6 + 0x95a8) = lVar1;
            v8::internal::HandleScope::DeleteExtensions(pIVar6);
          }
        }
        if (puVar10 == puVar2) break;
        pIVar6 = (Isolate *)puVar2[-5];
        puVar4 = puVar2 + -5;
        puVar11 = puVar2;
      }
    }
    if (puVar10 != (undefined8 *)0x0) {
      operator_delete(puVar10);
      return;
    }
  }
  return;
}

