
/* v8::internal::Heap::RemoveNearHeapLimitCallback(unsigned long (*)(void*, unsigned long, unsigned
   long), unsigned long) */

void __thiscall
v8::internal::Heap::RemoveNearHeapLimitCallback
          (Heap *this,_func_ulong_void_ptr_ulong_ulong *param_1,ulong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  
  puVar5 = *(undefined8 **)(this + 200);
  puVar1 = *(undefined8 **)(this + 0xd0);
  if ((long)puVar1 - (long)puVar5 != 0) {
    uVar3 = 0;
    puVar2 = puVar5;
    do {
      if ((_func_ulong_void_ptr_ulong_ulong *)*puVar2 == param_1) {
        puVar4 = puVar2 + 2;
        if (puVar4 == puVar1) goto LAB_00f95454;
        lVar7 = (long)puVar2 - (long)puVar5 >> 4;
        uVar3 = ((ulong)((long)puVar1 + ((-2 - lVar7) * 0x10 - (long)puVar5)) >> 4) + 1;
        if (uVar3 < 4) goto LAB_00f95434;
        uVar6 = uVar3 & 0x1ffffffffffffffc;
        puVar2 = puVar2 + uVar6 * 2;
        puVar4 = puVar4 + uVar6 * 2;
        puVar5 = puVar5 + lVar7 * 2 + 4;
        uVar8 = uVar6;
        do {
          uVar8 = uVar8 - 4;
          puVar5[-3] = puVar5[-1];
          puVar5[-4] = puVar5[-2];
          puVar5[-1] = puVar5[1];
          puVar5[-2] = *puVar5;
          puVar5[1] = puVar5[3];
          *puVar5 = puVar5[2];
          puVar5[3] = puVar5[5];
          puVar5[2] = puVar5[4];
          puVar5 = puVar5 + 8;
        } while (uVar8 != 0);
        if (uVar3 != uVar6) {
LAB_00f95434:
          do {
            *puVar2 = *puVar4;
            puVar5 = puVar4 + 1;
            puVar4 = puVar4 + 2;
            puVar2[1] = *puVar5;
            puVar2 = puVar2 + 2;
          } while (puVar4 != puVar1);
        }
LAB_00f95454:
        *(undefined8 **)(this + 0xd0) = puVar2;
        if (param_2 != 0) {
          RestoreHeapLimit(this,param_2);
          return;
        }
        return;
      }
      uVar3 = uVar3 + 1;
      puVar2 = puVar2 + 2;
    } while (uVar3 < (ulong)((long)puVar1 - (long)puVar5 >> 4));
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("unreachable code");
}

