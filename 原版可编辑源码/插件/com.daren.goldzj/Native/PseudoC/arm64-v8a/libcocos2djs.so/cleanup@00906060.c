
/* se::Object::cleanup() */

void se::Object::cleanup(void)

{
  ulong uVar1;
  RefCounter *this;
  byte bVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  Object *pOVar6;
  int iVar7;
  long lVar8;
  undefined8 *puVar9;
  code *pcVar10;
  byte *__s1;
  long *plVar11;
  void *pvVar12;
  byte *pbVar13;
  undefined8 *local_68;
  undefined8 *local_60;
  undefined8 *puStack_58;
  Object *local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  local_50 = (Object *)0x0;
  lVar8 = NativePtrToObjectMap::instance();
  for (plVar11 = *(long **)(lVar8 + 0x10); plVar11 != (long *)0x0; plVar11 = (long *)*plVar11) {
    this = (RefCounter *)plVar11[3];
    pcVar10 = *(code **)(this + 0x48);
    local_50 = (Object *)this;
    if ((pcVar10 != (code *)0x0) ||
       ((*(long *)(this + 0x10) != 0 &&
        (pcVar10 = *(code **)(*(long *)(this + 0x10) + 0x40), pcVar10 != (code *)0x0)))) {
      (*pcVar10)(plVar11[2]);
    }
    if (*(void **)(this + 0x50) != (void *)0x0) {
      free(*(void **)(this + 0x50));
      *(undefined8 *)(this + 0x50) = 0;
    }
    RefCounter::decRef(this);
  }
  NativePtrToObjectMap::clear();
  NonRefNativePtrCreatedByCtorMap::clear();
  if (__objectMap == (undefined8 *)0x0) {
    __objectMap = (undefined8 *)0x0;
  }
  else {
    local_60 = (undefined8 *)0x0;
    puStack_58 = (undefined8 *)0x0;
    local_68 = (undefined8 *)0x0;
    plVar11 = (long *)__objectMap[2];
    if (plVar11 != (long *)0x0) {
      do {
        local_50 = (Object *)plVar11[2];
        pbVar13 = *(byte **)(local_50 + 0x10);
        puVar9 = (undefined8 *)ObjectWrap::persistent((ObjectWrap *)(local_50 + 0x18));
        if ((ulong *)*puVar9 != (ulong *)0x0) {
          v8::V8::DisposeGlobal((ulong *)*puVar9);
          *puVar9 = 0;
        }
        pOVar6 = local_50;
        *(undefined4 *)(local_50 + 0x38) = 0;
        if (pbVar13 != (byte *)0x0) {
          bVar2 = *pbVar13;
          uVar1 = (ulong)(bVar2 >> 1);
          if ((bVar2 & 1) != 0) {
            uVar1 = *(ulong *)(pbVar13 + 8);
          }
          if (uVar1 == 0xd) {
            __s1 = *(byte **)(pbVar13 + 0x10);
            if ((bVar2 & 1) == 0) {
              __s1 = pbVar13 + 1;
            }
            iVar7 = memcmp(__s1,"__PrivateData",0xd);
            if (iVar7 == 0) {
              if (local_60 == puStack_58) {
                std::__ndk1::vector<se::Object*,std::__ndk1::allocator<se::Object*>>::
                __push_back_slow_path<se::Object*const&>
                          ((vector<se::Object*,std::__ndk1::allocator<se::Object*>> *)&local_68,
                           &local_50);
              }
              else {
                *local_60 = pOVar6;
                local_60 = local_60 + 1;
              }
            }
          }
        }
        puVar5 = local_60;
        plVar11 = (long *)*plVar11;
        puVar9 = local_68;
        puVar4 = local_60;
      } while (plVar11 != (long *)0x0);
      for (; puVar9 != puVar5; puVar9 = puVar9 + 1) {
        RefCounter::decRef((RefCounter *)*puVar9);
        puVar4 = local_68;
      }
      if (puVar4 != (undefined8 *)0x0) {
        local_60 = puVar4;
        operator_delete(puVar4);
      }
    }
    puVar9 = __objectMap;
    __objectMap = (undefined8 *)0x0;
    if (puVar9 != (undefined8 *)0x0) {
      puVar4 = (void *)puVar9[2];
      while (puVar4 != (void *)0x0) {
        pvVar12 = (void *)*puVar4;
        operator_delete(puVar4);
        puVar4 = pvVar12;
      }
      pvVar12 = (void *)*puVar9;
      *puVar9 = 0;
      if (pvVar12 != (void *)0x0) {
        operator_delete(pvVar12);
      }
      operator_delete(puVar9);
    }
  }
  DAT_01d371a8 = 0;
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

