
/* v8::internal::BackingStore::~BackingStore() */

void __thiscall v8::internal::BackingStore::~BackingStore(BackingStore *this)

{
  __shared_weak_count *p_Var1;
  void *pvVar2;
  BackingStore BVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  PageAllocator *pPVar7;
  ulong uVar8;
  void *pvVar9;
  long lVar10;
  ulong uVar11;
  __shared_weak_count *this_00;
  undefined8 *puVar12;
  
  GlobalBackingStoreRegistry::Unregister(this);
  pvVar9 = *(void **)this;
  if (pvVar9 == (void *)0x0) {
    return;
  }
  BVar3 = this[0x28];
  if (((byte)BVar3 >> 1 & 1) == 0) {
    if (((byte)BVar3 >> 6 & 1) == 0) {
      if (((byte)BVar3 >> 3 & 1) != 0) {
        plVar6 = *(long **)(this + 0x18);
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          V8_Fatal("Check failed: %s.","(array_buffer_allocator) != nullptr");
        }
        (**(code **)(*plVar6 + 0x20))(plVar6,pvVar9,*(undefined8 *)(this + 8));
      }
      *(undefined8 *)this = 0;
      *(undefined8 *)(this + 8) = 0;
      BVar3 = this[0x28];
      this[0x28] = (BackingStore)((byte)BVar3 & 0xef);
      if (((byte)BVar3 >> 2 & 1) == 0) goto LAB_01069224;
      this_00 = *(__shared_weak_count **)(this + 0x20);
      if (this_00 != (__shared_weak_count *)0x0) {
        p_Var1 = this_00 + 8;
        do {
          lVar10 = *(long *)p_Var1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
          if (bVar5) {
            *(long *)p_Var1 = lVar10 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
LAB_010691fc:
        if (lVar10 == 0) {
          (**(code **)(*(long *)this_00 + 0x10))(this_00);
          std::__ndk1::__shared_weak_count::__release_weak(this_00);
        }
      }
    }
    else {
      (**(code **)(this + 0x18))(pvVar9,*(undefined8 *)(this + 8),*(undefined8 *)(this + 0x20));
      *(undefined8 *)this = 0;
      *(undefined8 *)(this + 8) = 0;
      BVar3 = this[0x28];
      this[0x28] = (BackingStore)((byte)BVar3 & 0xef);
      if (((byte)BVar3 >> 2 & 1) == 0) goto LAB_01069224;
      this_00 = *(__shared_weak_count **)(this + 0x20);
      if (this_00 != (__shared_weak_count *)0x0) {
        p_Var1 = this_00 + 8;
        do {
          lVar10 = *(long *)p_Var1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
          if (bVar5) {
            *(long *)p_Var1 = lVar10 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        goto LAB_010691fc;
      }
    }
  }
  else {
    if (((byte)BVar3 & 1) != 0) {
      if ((~(byte)BVar3 & 3) != 0) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","is_wasm_memory_ && is_shared_");
      }
      puVar12 = *(undefined8 **)(this + 0x18);
      if (puVar12 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","shared_wasm_memory_data");
      }
      pvVar9 = (void *)*puVar12;
      if (pvVar9 != (void *)0x0) {
        puVar12[1] = pvVar9;
        operator_delete(pvVar9);
      }
      operator_delete(puVar12);
      BVar3 = this[0x28];
      pvVar9 = *(void **)this;
      *(undefined8 *)(this + 0x18) = 0;
    }
    uVar11 = *(ulong *)(this + 0x10);
    uVar8 = 0x280000000;
    if (((byte)BVar3 & 0x10) == 0) {
      uVar8 = uVar11;
    }
    if (uVar8 != 0) {
      pvVar2 = (void *)((long)pvVar9 + -0x80000000);
      if (((byte)BVar3 & 0x10) == 0) {
        pvVar2 = pvVar9;
      }
      pPVar7 = (PageAllocator *)GetPlatformPageAllocator();
      uVar8 = FreePages(pPVar7,pvVar2,uVar8);
      if ((uVar8 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","pages_were_freed");
      }
      uVar11 = *(ulong *)(this + 0x10);
    }
    if (((byte)this[0x28] & 0x10) != 0) {
      uVar11 = 0x280000000;
    }
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(0x1d3f5f0,0x10);
      if (bVar5) {
        cVar4 = ExclusiveMonitorsStatus();
        DAT_01d3f5f0 = DAT_01d3f5f0 - uVar11;
      }
    } while (cVar4 != '\0');
    *(undefined8 *)this = 0;
    *(undefined8 *)(this + 8) = 0;
    BVar3 = this[0x28];
    this[0x28] = (BackingStore)((byte)BVar3 & 0xef);
    if (((byte)BVar3 >> 2 & 1) == 0) goto LAB_01069224;
    this_00 = *(__shared_weak_count **)(this + 0x20);
    if (this_00 != (__shared_weak_count *)0x0) {
      p_Var1 = this_00 + 8;
      do {
        lVar10 = *(long *)p_Var1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
        if (bVar5) {
          *(long *)p_Var1 = lVar10 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      goto LAB_010691fc;
    }
  }
  this[0x28] = (BackingStore)((byte)this[0x28] & 0xfb);
LAB_01069224:
  *(undefined8 *)(this + 0x18) = 0;
  return;
}

