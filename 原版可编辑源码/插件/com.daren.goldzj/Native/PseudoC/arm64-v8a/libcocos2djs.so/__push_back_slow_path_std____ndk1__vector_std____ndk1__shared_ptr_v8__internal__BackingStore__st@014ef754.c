
/* void std::__ndk1::vector<std::__ndk1::vector<std::__ndk1::shared_ptr<v8::internal::BackingStore>,
   std::__ndk1::allocator<std::__ndk1::shared_ptr<v8::internal::BackingStore> > >,
   std::__ndk1::allocator<std::__ndk1::vector<std::__ndk1::shared_ptr<v8::internal::BackingStore>,
   std::__ndk1::allocator<std::__ndk1::shared_ptr<v8::internal::BackingStore> > > >
   >::__push_back_slow_path<std::__ndk1::vector<std::__ndk1::shared_ptr<v8::internal::BackingStore>,
   std::__ndk1::allocator<std::__ndk1::shared_ptr<v8::internal::BackingStore> > >
   >(std::__ndk1::vector<std::__ndk1::shared_ptr<v8::internal::BackingStore>,
   std::__ndk1::allocator<std::__ndk1::shared_ptr<v8::internal::BackingStore> > >&&) */

void __thiscall
std::__ndk1::
vector<std::__ndk1::vector<std::__ndk1::shared_ptr<v8::internal::BackingStore>,std::__ndk1::allocator<std::__ndk1::shared_ptr<v8::internal::BackingStore>>>,std::__ndk1::allocator<std::__ndk1::vector<std::__ndk1::shared_ptr<v8::internal::BackingStore>,std::__ndk1::allocator<std::__ndk1::shared_ptr<v8::internal::BackingStore>>>>>
::
__push_back_slow_path<std::__ndk1::vector<std::__ndk1::shared_ptr<v8::internal::BackingStore>,std::__ndk1::allocator<std::__ndk1::shared_ptr<v8::internal::BackingStore>>>>
          (vector<std::__ndk1::vector<std::__ndk1::shared_ptr<v8::internal::BackingStore>,std::__ndk1::allocator<std::__ndk1::shared_ptr<v8::internal::BackingStore>>>,std::__ndk1::allocator<std::__ndk1::vector<std::__ndk1::shared_ptr<v8::internal::BackingStore>,std::__ndk1::allocator<std::__ndk1::shared_ptr<v8::internal::BackingStore>>>>>
           *this,vector *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  __shared_weak_count *p_Var3;
  long *plVar4;
  char cVar5;
  bool bVar6;
  long *plVar7;
  void *pvVar8;
  void *pvVar9;
  undefined8 *puVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  __shared_weak_count *this_00;
  long *plVar14;
  long *plVar15;
  void *pvVar16;
  undefined8 uVar17;
  
  lVar13 = *(long *)(this + 8) - *(long *)this >> 3;
  uVar1 = lVar13 * -0x5555555555555555 + 1;
  if (uVar1 < 0xaaaaaaaaaaaaaab) {
    lVar11 = *(long *)(this + 0x10) - *(long *)this >> 3;
    uVar12 = lVar11 * 0x5555555555555556;
    if (uVar1 <= uVar12) {
      uVar1 = uVar12;
    }
    if (0x555555555555554 < (ulong)(lVar11 * -0x5555555555555555)) {
      uVar1 = 0xaaaaaaaaaaaaaaa;
    }
    if (uVar1 == 0) {
      pvVar8 = (void *)0x0;
    }
    else {
      if (0xaaaaaaaaaaaaaaa < uVar1) goto LAB_014ef944;
      pvVar8 = operator_new(uVar1 * 0x18);
    }
    puVar10 = (undefined8 *)((long)pvVar8 + lVar13 * 8);
    puVar10[1] = 0;
    puVar10[2] = 0;
    uVar17 = *(undefined8 *)param_1;
    puVar10[1] = *(undefined8 *)(param_1 + 8);
    *puVar10 = uVar17;
    puVar10[2] = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)param_1 = 0;
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    plVar14 = *(long **)this;
    plVar4 = *(long **)(this + 8);
    puVar2 = puVar10 + 3;
    plVar15 = plVar14;
    if (plVar4 != plVar14) {
      lVar13 = 0;
      do {
        *(undefined8 *)((long)puVar10 + lVar13 + -0x18) = 0;
        *(undefined8 *)((long)puVar10 + lVar13 + -0x10) = 0;
        *(undefined8 *)((long)puVar10 + lVar13 + -8) = 0;
        lVar11 = lVar13 + -0x18;
        *(undefined8 *)((long)puVar10 + lVar13 + -0x18) =
             *(undefined8 *)((long)plVar4 + lVar13 + -0x18);
        *(undefined8 *)((long)puVar10 + lVar13 + -0x10) =
             *(undefined8 *)((long)plVar4 + lVar13 + -0x10);
        *(undefined8 *)((long)puVar10 + lVar13 + -8) = *(undefined8 *)((long)plVar4 + lVar13 + -8);
        *(undefined8 *)((long)plVar4 + lVar13 + -0x18) = 0;
        *(undefined8 *)((long)plVar4 + lVar13 + -0x10) = 0;
        *(undefined8 *)((long)plVar4 + lVar13 + -8) = 0;
        lVar13 = lVar11;
      } while ((long)plVar14 - (long)plVar4 != lVar11);
      plVar14 = *(long **)this;
      puVar10 = (undefined8 *)((long)puVar10 + lVar11);
      plVar15 = *(long **)(this + 8);
    }
    *(undefined8 **)this = puVar10;
    *(undefined8 **)(this + 8) = puVar2;
    *(void **)(this + 0x10) = (void *)((long)pvVar8 + uVar1 * 0x18);
    if (plVar15 != plVar14) {
      pvVar8 = (void *)plVar15[-3];
      plVar4 = plVar15 + -3;
      while( true ) {
        plVar7 = plVar4;
        if (pvVar8 != (void *)0x0) {
          pvVar16 = (void *)plVar15[-2];
          pvVar9 = pvVar8;
          if (pvVar16 != pvVar8) {
            do {
              this_00 = *(__shared_weak_count **)((long)pvVar16 + -8);
              pvVar16 = (void *)((long)pvVar16 + -0x10);
              if (this_00 != (__shared_weak_count *)0x0) {
                p_Var3 = this_00 + 8;
                do {
                  lVar13 = *(long *)p_Var3;
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(p_Var3,0x10);
                  if (bVar6) {
                    *(long *)p_Var3 = lVar13 + -1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if (lVar13 == 0) {
                  (**(code **)(*(long *)this_00 + 0x10))(this_00);
                  __shared_weak_count::__release_weak(this_00);
                }
              }
            } while (pvVar16 != pvVar8);
            pvVar9 = (void *)*plVar7;
          }
          plVar15[-2] = (long)pvVar8;
          operator_delete(pvVar9);
        }
        if (plVar7 == plVar14) break;
        pvVar8 = (void *)plVar7[-3];
        plVar4 = plVar7 + -3;
        plVar15 = plVar7;
      }
    }
    if (plVar14 != (long *)0x0) {
      operator_delete(plVar14);
      return;
    }
    return;
  }
LAB_014ef944:
                    /* WARNING: Subroutine does not return */
  abort();
}

