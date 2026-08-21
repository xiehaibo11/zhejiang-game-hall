
/* std::__ndk1::vector<dragonBones::ActionFrame, std::__ndk1::allocator<dragonBones::ActionFrame>
   >::__append(unsigned long) */

void __thiscall
std::__ndk1::vector<dragonBones::ActionFrame,std::__ndk1::allocator<dragonBones::ActionFrame>>::
__append(vector<dragonBones::ActionFrame,std::__ndk1::allocator<dragonBones::ActionFrame>> *this,
        ulong param_1)

{
  ulong uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  void *pvVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  void *__s;
  undefined8 *puVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  
  puVar10 = *(undefined8 **)(this + 8);
  if (param_1 <= (ulong)(*(long *)(this + 0x10) - (long)puVar10 >> 5)) {
    do {
      puVar10[1] = 0;
      *puVar10 = 0;
      puVar10[3] = 0;
      puVar10[2] = 0;
      param_1 = param_1 - 1;
      puVar10 = (undefined8 *)(*(long *)(this + 8) + 0x20);
      *(undefined8 **)(this + 8) = puVar10;
    } while (param_1 != 0);
    return;
  }
  puVar9 = *(undefined8 **)this;
  lVar12 = (long)puVar10 - (long)puVar9 >> 5;
  uVar1 = lVar12 + param_1;
  if (uVar1 >> 0x3b != 0) {
LAB_00d4dac8:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar5 = *(long *)(this + 0x10) - (long)puVar9;
  if ((ulong)(lVar5 >> 5) < 0x3ffffffffffffff) {
    uVar6 = lVar5 >> 4;
    uVar11 = uVar1;
    if (uVar1 <= uVar6) {
      uVar11 = uVar6;
    }
    if (uVar11 == 0) {
      pvVar4 = (void *)0x0;
      goto LAB_00d4dafc;
    }
    if (uVar11 >> 0x3b != 0) goto LAB_00d4dac8;
  }
  else {
    uVar11 = 0x7ffffffffffffff;
  }
  pvVar4 = operator_new(uVar11 << 5);
LAB_00d4dafc:
  __s = (void *)((long)pvVar4 + lVar12 * 0x20);
  memset(__s,0,param_1 << 5);
  lVar5 = (long)puVar10 - (long)puVar9;
  if (lVar5 != 0) {
    lVar7 = 0;
    do {
      uVar2 = *(undefined4 *)((long)puVar10 + lVar7 + -0x20);
      *(undefined8 *)((long)__s + lVar7 + -0x10) = 0;
      *(undefined8 *)((long)__s + lVar7 + -8) = 0;
      *(undefined8 *)((long)__s + lVar7 + -0x18) = 0;
      *(undefined4 *)((long)__s + lVar7 + -0x20) = uVar2;
      uVar13 = *(undefined8 *)((long)puVar10 + lVar7 + -0x18);
      lVar8 = lVar7 + -0x20;
      *(undefined8 *)((long)__s + lVar7 + -0x10) = *(undefined8 *)((long)puVar10 + lVar7 + -0x10);
      *(undefined8 *)((long)__s + lVar7 + -0x18) = uVar13;
      *(undefined8 *)((long)__s + lVar7 + -8) = *(undefined8 *)((long)puVar10 + lVar7 + -8);
      *(undefined8 *)((long)puVar10 + lVar7 + -0x18) = 0;
      *(undefined8 *)((long)puVar10 + lVar7 + -0x10) = 0;
      *(undefined8 *)((long)puVar10 + lVar7 + -8) = 0;
      lVar7 = lVar8;
    } while ((long)puVar9 - (long)puVar10 != lVar8);
    puVar9 = *(undefined8 **)this;
    puVar10 = *(undefined8 **)(this + 8);
    __s = (void *)((long)pvVar4 + (lVar12 + (lVar5 - 0x20U >> 5 ^ 0xffffffffffffffff)) * 0x20);
  }
  *(void **)this = __s;
  *(void **)(this + 8) = (void *)((long)pvVar4 + uVar1 * 0x20);
  *(void **)(this + 0x10) = (void *)((long)pvVar4 + uVar11 * 0x20);
  while (puVar3 = puVar10, puVar3 != puVar9) {
    pvVar4 = (void *)puVar3[-3];
    puVar10 = puVar3 + -4;
    if (pvVar4 != (void *)0x0) {
      puVar3[-2] = pvVar4;
      operator_delete(pvVar4);
    }
  }
  if (puVar9 == (undefined8 *)0x0) {
    return;
  }
  operator_delete(puVar9);
  return;
}

