
/* std::__ndk1::vector<std::__ndk1::unique_ptr<std::__ndk1::thread,
   std::__ndk1::default_delete<std::__ndk1::thread> >,
   std::__ndk1::allocator<std::__ndk1::unique_ptr<std::__ndk1::thread,
   std::__ndk1::default_delete<std::__ndk1::thread> > > >::__append(unsigned long) */

void __thiscall
std::__ndk1::
vector<std::__ndk1::unique_ptr<std::__ndk1::thread,std::__ndk1::default_delete<std::__ndk1::thread>>,std::__ndk1::allocator<std::__ndk1::unique_ptr<std::__ndk1::thread,std::__ndk1::default_delete<std::__ndk1::thread>>>>
::__append(vector<std::__ndk1::unique_ptr<std::__ndk1::thread,std::__ndk1::default_delete<std::__ndk1::thread>>,std::__ndk1::allocator<std::__ndk1::unique_ptr<std::__ndk1::thread,std::__ndk1::default_delete<std::__ndk1::thread>>>>
           *this,ulong param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  thread *this_00;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  
  puVar9 = *(undefined8 **)(this + 8);
  if (param_1 <= (ulong)(*(long *)(this + 0x10) - (long)puVar9 >> 3)) {
    puVar8 = puVar9;
    if (param_1 != 0) {
      puVar8 = puVar9 + param_1;
      lVar10 = param_1 << 3;
      do {
        *puVar9 = 0;
        lVar10 = lVar10 + -8;
        puVar9 = puVar9 + 1;
      } while (lVar10 != 0);
    }
    *(undefined8 **)(this + 8) = puVar8;
    return;
  }
  puVar8 = *(undefined8 **)this;
  lVar10 = (long)puVar9 - (long)puVar8 >> 3;
  uVar11 = lVar10 + param_1;
  if (uVar11 >> 0x3d != 0) {
LAB_00e915c4:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar3 = *(long *)(this + 0x10) - (long)puVar8;
  if ((ulong)(lVar3 >> 3) < 0xfffffffffffffff) {
    uVar4 = lVar3 >> 2;
    if (uVar11 <= uVar4) {
      uVar11 = uVar4;
    }
    if (uVar11 == 0) {
      pvVar2 = (void *)0x0;
      goto LAB_00e91604;
    }
    if (uVar11 >> 0x3d != 0) goto LAB_00e915c4;
  }
  else {
    uVar11 = 0x1fffffffffffffff;
  }
  pvVar2 = operator_new(uVar11 << 3);
LAB_00e91604:
  puVar5 = (undefined8 *)((long)pvVar2 + lVar10 * 8);
  lVar10 = param_1 * 8;
  puVar1 = puVar5 + param_1;
  puVar7 = puVar5;
  do {
    *puVar7 = 0;
    lVar10 = lVar10 + -8;
    puVar7 = puVar7 + 1;
  } while (lVar10 != 0);
  if (puVar9 != puVar8) {
    do {
      puVar9 = puVar9 + -1;
      uVar6 = *puVar9;
      *puVar9 = 0;
      puVar5 = puVar5 + -1;
      *puVar5 = uVar6;
    } while (puVar8 != puVar9);
    puVar8 = *(undefined8 **)this;
  }
  puVar9 = *(undefined8 **)(this + 8);
  *(undefined8 **)this = puVar5;
  *(undefined8 **)(this + 8) = puVar1;
  *(void **)(this + 0x10) = (void *)((long)pvVar2 + uVar11 * 8);
  while (puVar9 != puVar8) {
    puVar9 = puVar9 + -1;
    this_00 = (thread *)*puVar9;
    *puVar9 = 0;
    if (this_00 != (thread *)0x0) {
      thread::~thread(this_00);
      operator_delete(this_00);
    }
  }
  if (puVar8 == (undefined8 *)0x0) {
    return;
  }
  operator_delete(puVar8);
  return;
}

