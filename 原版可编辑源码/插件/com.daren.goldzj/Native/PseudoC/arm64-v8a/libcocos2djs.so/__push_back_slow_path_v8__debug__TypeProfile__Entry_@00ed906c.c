
/* void std::__ndk1::vector<v8::debug::TypeProfile::Entry,
   std::__ndk1::allocator<v8::debug::TypeProfile::Entry>
   >::__push_back_slow_path<v8::debug::TypeProfile::Entry>(v8::debug::TypeProfile::Entry&&) */

void __thiscall
std::__ndk1::
vector<v8::debug::TypeProfile::Entry,std::__ndk1::allocator<v8::debug::TypeProfile::Entry>>::
__push_back_slow_path<v8::debug::TypeProfile::Entry>
          (vector<v8::debug::TypeProfile::Entry,std::__ndk1::allocator<v8::debug::TypeProfile::Entry>>
           *this,Entry *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  __shared_weak_count *p_Var3;
  char cVar4;
  bool bVar5;
  void *pvVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  undefined8 *puVar12;
  __shared_weak_count *this_00;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  
  lVar11 = *(long *)(this + 8) - *(long *)this >> 3;
  uVar1 = lVar11 * -0x5555555555555555 + 1;
  if (uVar1 < 0xaaaaaaaaaaaaaab) {
    lVar9 = *(long *)(this + 0x10) - *(long *)this >> 3;
    uVar10 = lVar9 * 0x5555555555555556;
    if (uVar1 <= uVar10) {
      uVar1 = uVar10;
    }
    if (0x555555555555554 < (ulong)(lVar9 * -0x5555555555555555)) {
      uVar1 = 0xaaaaaaaaaaaaaaa;
    }
    if (uVar1 == 0) {
      pvVar6 = (void *)0x0;
    }
    else {
      if (0xaaaaaaaaaaaaaaa < uVar1) goto LAB_00ed91dc;
      pvVar6 = operator_new(uVar1 * 0x18);
    }
    uVar15 = *(undefined8 *)param_1;
    puVar7 = (undefined8 *)((long)pvVar6 + lVar11 * 8);
    puVar7[1] = *(undefined8 *)(param_1 + 8);
    *puVar7 = uVar15;
    puVar7[2] = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    puVar13 = *(undefined8 **)this;
    puVar2 = puVar7 + 3;
    puVar8 = puVar7;
    puVar12 = *(undefined8 **)(this + 8);
    puVar14 = puVar13;
    if (*(undefined8 **)(this + 8) != puVar13) {
      do {
        puVar14 = puVar12 + -3;
        puVar7 = puVar8 + -3;
        *puVar7 = *puVar14;
        puVar8[-2] = puVar12[-2];
        puVar8[-1] = puVar12[-1];
        puVar12[-2] = 0;
        puVar12[-1] = 0;
        puVar8 = puVar7;
        puVar12 = puVar14;
      } while (puVar13 != puVar14);
      puVar13 = *(undefined8 **)this;
      puVar14 = *(undefined8 **)(this + 8);
    }
    *(undefined8 **)this = puVar7;
    *(undefined8 **)(this + 8) = puVar2;
    *(void **)(this + 0x10) = (void *)((long)pvVar6 + uVar1 * 0x18);
    while (puVar14 != puVar13) {
      this_00 = (__shared_weak_count *)puVar14[-1];
      puVar14 = puVar14 + -3;
      if (this_00 != (__shared_weak_count *)0x0) {
        p_Var3 = this_00 + 8;
        do {
          lVar11 = *(long *)p_Var3;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(p_Var3,0x10);
          if (bVar5) {
            *(long *)p_Var3 = lVar11 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*(long *)this_00 + 0x10))(this_00);
          __shared_weak_count::__release_weak(this_00);
        }
      }
    }
    if (puVar13 != (undefined8 *)0x0) {
      operator_delete(puVar13);
      return;
    }
    return;
  }
LAB_00ed91dc:
                    /* WARNING: Subroutine does not return */
  abort();
}

