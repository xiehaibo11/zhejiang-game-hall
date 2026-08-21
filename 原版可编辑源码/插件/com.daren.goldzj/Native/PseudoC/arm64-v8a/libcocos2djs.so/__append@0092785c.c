
/* std::__ndk1::vector<std::__ndk1::vector<std::__ndk1::function<void (int)>,
   std::__ndk1::allocator<std::__ndk1::function<void (int)> > >,
   std::__ndk1::allocator<std::__ndk1::vector<std::__ndk1::function<void (int)>,
   std::__ndk1::allocator<std::__ndk1::function<void (int)> > > > >::__append(unsigned long) */

void __thiscall
std::__ndk1::
vector<std::__ndk1::vector<std::__ndk1::function<void(int)>,std::__ndk1::allocator<std::__ndk1::function<void(int)>>>,std::__ndk1::allocator<std::__ndk1::vector<std::__ndk1::function<void(int)>,std::__ndk1::allocator<std::__ndk1::function<void(int)>>>>>
::__append(vector<std::__ndk1::vector<std::__ndk1::function<void(int)>,std::__ndk1::allocator<std::__ndk1::function<void(int)>>>,std::__ndk1::allocator<std::__ndk1::vector<std::__ndk1::function<void(int)>,std::__ndk1::allocator<std::__ndk1::function<void(int)>>>>>
           *this,ulong param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  void *pvVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  code *pcVar7;
  long lVar8;
  undefined8 *puVar9;
  void *__s;
  long *plVar10;
  long *plVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined8 uVar14;
  
  puVar12 = *(undefined8 **)(this + 8);
  if (param_1 <= (ulong)((*(long *)(this + 0x10) - (long)puVar12 >> 3) * -0x5555555555555555)) {
    do {
      puVar12[1] = 0;
      puVar12[2] = 0;
      *puVar12 = 0;
      param_1 = param_1 - 1;
      puVar12 = (undefined8 *)(*(long *)(this + 8) + 0x18);
      *(undefined8 **)(this + 8) = puVar12;
    } while (param_1 != 0);
    return;
  }
  puVar9 = *(undefined8 **)this;
  uVar13 = 0xaaaaaaaaaaaaaaa;
  lVar8 = (long)puVar12 - (long)puVar9 >> 3;
  uVar1 = lVar8 * -0x5555555555555555 + param_1;
  if (0xaaaaaaaaaaaaaaa < uVar1) {
                    /* WARNING: Subroutine does not return */
    __vector_base_common<true>::__throw_length_error();
  }
  lVar5 = *(long *)(this + 0x10) - (long)puVar9 >> 3;
  if ((ulong)(lVar5 * -0x5555555555555555) < 0x555555555555555) {
    uVar6 = lVar5 * 0x5555555555555556;
    uVar13 = uVar1;
    if (uVar1 <= uVar6) {
      uVar13 = uVar6;
    }
    if (uVar13 == 0) {
      pvVar3 = (void *)0x0;
      goto LAB_0092790c;
    }
  }
  pvVar3 = operator_new(uVar13 * 0x18);
LAB_0092790c:
  __s = (void *)((long)pvVar3 + lVar8 * 8);
  memset(__s,0,param_1 * 0x18);
  if (puVar12 != puVar9) {
    lVar8 = 0;
    do {
      *(undefined8 *)((long)__s + lVar8 + -0x10) = 0;
      *(undefined8 *)((long)__s + lVar8 + -8) = 0;
      *(undefined8 *)((long)__s + lVar8 + -0x18) = 0;
      uVar14 = *(undefined8 *)((long)puVar12 + lVar8 + -0x18);
      lVar5 = lVar8 + -0x18;
      *(undefined8 *)((long)__s + lVar8 + -0x10) = *(undefined8 *)((long)puVar12 + lVar8 + -0x10);
      *(undefined8 *)((long)__s + lVar8 + -0x18) = uVar14;
      *(undefined8 *)((long)__s + lVar8 + -8) = *(undefined8 *)((long)puVar12 + lVar8 + -8);
      *(undefined8 *)((long)puVar12 + lVar8 + -0x18) = 0;
      *(undefined8 *)((long)puVar12 + lVar8 + -0x10) = 0;
      *(undefined8 *)((long)puVar12 + lVar8 + -8) = 0;
      lVar8 = lVar5;
    } while ((long)puVar9 - (long)puVar12 != lVar5);
    puVar9 = *(undefined8 **)this;
    puVar12 = *(undefined8 **)(this + 8);
    __s = (void *)((long)__s + lVar5);
  }
  *(void **)this = __s;
  *(void **)(this + 8) = (void *)((long)pvVar3 + uVar1 * 0x18);
  *(void **)(this + 0x10) = (void *)((long)pvVar3 + uVar13 * 0x18);
  do {
    do {
      puVar2 = puVar12;
      if (puVar2 == puVar9) {
        if (puVar9 == (undefined8 *)0x0) {
          return;
        }
        operator_delete(puVar9);
        return;
      }
      puVar12 = puVar2 + -3;
      plVar10 = (long *)*puVar12;
    } while (plVar10 == (long *)0x0);
    plVar11 = (long *)puVar2[-2];
    plVar4 = plVar10;
    if (plVar11 != plVar10) {
      do {
        plVar4 = (long *)plVar11[-2];
        plVar11 = plVar11 + -6;
        if (plVar11 == plVar4) {
          pcVar7 = *(code **)(*plVar4 + 0x20);
LAB_009279d0:
          (*pcVar7)();
        }
        else if (plVar4 != (long *)0x0) {
          pcVar7 = *(code **)(*plVar4 + 0x28);
          goto LAB_009279d0;
        }
      } while (plVar10 != plVar11);
      plVar4 = (long *)*puVar12;
    }
    puVar2[-2] = plVar10;
    operator_delete(plVar4);
  } while( true );
}

