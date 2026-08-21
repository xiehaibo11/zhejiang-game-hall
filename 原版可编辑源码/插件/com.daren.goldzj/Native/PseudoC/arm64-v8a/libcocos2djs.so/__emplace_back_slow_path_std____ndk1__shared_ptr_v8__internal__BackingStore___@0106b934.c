
/* void std::__ndk1::vector<std::__ndk1::shared_ptr<v8::internal::BackingStore>,
   std::__ndk1::allocator<std::__ndk1::shared_ptr<v8::internal::BackingStore> >
   >::__emplace_back_slow_path<std::__ndk1::shared_ptr<v8::internal::BackingStore>&>(std::__ndk1::shared_ptr<v8::internal::BackingStore>&)
    */

void __thiscall
std::__ndk1::
vector<std::__ndk1::shared_ptr<v8::internal::BackingStore>,std::__ndk1::allocator<std::__ndk1::shared_ptr<v8::internal::BackingStore>>>
::__emplace_back_slow_path<std::__ndk1::shared_ptr<v8::internal::BackingStore>&>
          (vector<std::__ndk1::shared_ptr<v8::internal::BackingStore>,std::__ndk1::allocator<std::__ndk1::shared_ptr<v8::internal::BackingStore>>>
           *this,shared_ptr *param_1)

{
  ulong uVar1;
  long *plVar2;
  undefined8 *puVar3;
  __shared_weak_count *p_Var4;
  char cVar5;
  bool bVar6;
  void *pvVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 *puVar11;
  __shared_weak_count *this_00;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long lVar14;
  
  puVar11 = *(undefined8 **)this;
  puVar12 = *(undefined8 **)(this + 8);
  lVar14 = (long)puVar12 - (long)puVar11 >> 4;
  uVar1 = lVar14 + 1;
  if (uVar1 >> 0x3c == 0) {
    uVar10 = *(long *)(this + 0x10) - (long)puVar11 >> 3;
    if (uVar1 <= uVar10) {
      uVar1 = uVar10;
    }
    if (0x7fffffffffffffe < (ulong)(*(long *)(this + 0x10) - (long)puVar11 >> 4)) {
      uVar1 = 0xfffffffffffffff;
    }
    if (uVar1 == 0) {
      pvVar7 = (void *)0x0;
    }
    else {
      if (uVar1 >> 0x3c != 0) goto LAB_0106ba90;
      pvVar7 = operator_new(uVar1 << 4);
    }
    puVar9 = (undefined8 *)((long)pvVar7 + lVar14 * 0x10);
    *puVar9 = *(undefined8 *)param_1;
    lVar14 = *(long *)(param_1 + 8);
    puVar9[1] = lVar14;
    if (lVar14 != 0) {
      plVar2 = (long *)(lVar14 + 8);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar6) {
          *plVar2 = *plVar2 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      puVar11 = *(undefined8 **)this;
      puVar12 = *(undefined8 **)(this + 8);
    }
    puVar3 = puVar9 + 2;
    puVar8 = puVar9;
    if (puVar12 != puVar11) {
      do {
        puVar13 = puVar12 + -2;
        puVar9 = puVar8 + -2;
        *puVar9 = *puVar13;
        puVar8[-1] = puVar12[-1];
        *puVar13 = 0;
        puVar12[-1] = 0;
        puVar8 = puVar9;
        puVar12 = puVar13;
      } while (puVar11 != puVar13);
      puVar11 = *(undefined8 **)this;
      puVar12 = *(undefined8 **)(this + 8);
    }
    *(undefined8 **)this = puVar9;
    *(undefined8 **)(this + 8) = puVar3;
    *(void **)(this + 0x10) = (void *)((long)pvVar7 + uVar1 * 0x10);
    while (puVar12 != puVar11) {
      this_00 = (__shared_weak_count *)puVar12[-1];
      puVar12 = puVar12 + -2;
      if (this_00 != (__shared_weak_count *)0x0) {
        p_Var4 = this_00 + 8;
        do {
          lVar14 = *(long *)p_Var4;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(p_Var4,0x10);
          if (bVar6) {
            *(long *)p_Var4 = lVar14 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar14 == 0) {
          (**(code **)(*(long *)this_00 + 0x10))(this_00);
          __shared_weak_count::__release_weak(this_00);
        }
      }
    }
    if (puVar11 != (undefined8 *)0x0) {
      operator_delete(puVar11);
      return;
    }
    return;
  }
LAB_0106ba90:
                    /* WARNING: Subroutine does not return */
  abort();
}

