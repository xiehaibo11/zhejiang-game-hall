
/* void std::__ndk1::vector<std::__ndk1::pair<double, std::__ndk1::unique_ptr<v8::Task,
   std::__ndk1::default_delete<v8::Task> > >, std::__ndk1::allocator<std::__ndk1::pair<double,
   std::__ndk1::unique_ptr<v8::Task, std::__ndk1::default_delete<v8::Task> > > >
   >::__push_back_slow_path<std::__ndk1::pair<double, std::__ndk1::unique_ptr<v8::Task,
   std::__ndk1::default_delete<v8::Task> > > >(std::__ndk1::pair<double,
   std::__ndk1::unique_ptr<v8::Task, std::__ndk1::default_delete<v8::Task> > >&&) */

void __thiscall
std::__ndk1::
vector<std::__ndk1::pair<double,std::__ndk1::unique_ptr<v8::Task,std::__ndk1::default_delete<v8::Task>>>,std::__ndk1::allocator<std::__ndk1::pair<double,std::__ndk1::unique_ptr<v8::Task,std::__ndk1::default_delete<v8::Task>>>>>
::
__push_back_slow_path<std::__ndk1::pair<double,std::__ndk1::unique_ptr<v8::Task,std::__ndk1::default_delete<v8::Task>>>>
          (vector<std::__ndk1::pair<double,std::__ndk1::unique_ptr<v8::Task,std::__ndk1::default_delete<v8::Task>>>,std::__ndk1::allocator<std::__ndk1::pair<double,std::__ndk1::unique_ptr<v8::Task,std::__ndk1::default_delete<v8::Task>>>>>
           *this,pair *param_1)

{
  ulong uVar1;
  void *pvVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 uVar14;
  
  lVar13 = *(long *)(this + 8) - *(long *)this >> 4;
  uVar1 = lVar13 + 1;
  if (uVar1 >> 0x3c == 0) {
    lVar4 = *(long *)(this + 0x10) - *(long *)this;
    uVar8 = lVar4 >> 3;
    if (uVar1 <= uVar8) {
      uVar1 = uVar8;
    }
    if (0x7fffffffffffffe < (ulong)(lVar4 >> 4)) {
      uVar1 = 0xfffffffffffffff;
    }
    if (uVar1 == 0) {
      pvVar2 = (void *)0x0;
    }
    else {
      if (uVar1 >> 0x3c != 0) goto LAB_01479378;
      pvVar2 = operator_new(uVar1 << 4);
    }
    uVar14 = *(undefined8 *)(param_1 + 8);
    uVar11 = *(undefined8 *)param_1;
    puVar7 = (undefined8 *)((long)pvVar2 + lVar13 * 0x10);
    *(undefined8 *)(param_1 + 8) = 0;
    puVar9 = puVar7 + 2;
    puVar7[1] = uVar14;
    *puVar7 = uVar11;
    puVar5 = *(undefined8 **)this;
    puVar6 = puVar7;
    puVar10 = *(undefined8 **)(this + 8);
    puVar12 = puVar5;
    if (*(undefined8 **)(this + 8) != puVar5) {
      do {
        puVar12 = puVar10 + -2;
        puVar7 = puVar6 + -2;
        *puVar7 = *puVar12;
        uVar11 = puVar10[-1];
        puVar10[-1] = 0;
        puVar6[-1] = uVar11;
        puVar6 = puVar7;
        puVar10 = puVar12;
      } while (puVar5 != puVar12);
      puVar5 = *(undefined8 **)(this + 8);
      puVar12 = *(undefined8 **)this;
    }
    *(undefined8 **)this = puVar7;
    *(undefined8 **)(this + 8) = puVar9;
    *(void **)(this + 0x10) = (void *)((long)pvVar2 + uVar1 * 0x10);
    while (puVar5 != puVar12) {
      plVar3 = (long *)puVar5[-1];
      puVar7 = puVar5 + -2;
      puVar5[-1] = 0;
      puVar5 = puVar7;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 8))();
      }
    }
    if (puVar12 != (undefined8 *)0x0) {
      operator_delete(puVar12);
      return;
    }
    return;
  }
LAB_01479378:
                    /* WARNING: Subroutine does not return */
  abort();
}

