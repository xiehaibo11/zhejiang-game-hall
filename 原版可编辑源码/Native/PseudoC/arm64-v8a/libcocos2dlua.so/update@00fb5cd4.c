
/* cocos2d::Scheduler::update(float) */

void __thiscall cocos2d::Scheduler::update(Scheduler *this,float param_1)

{
  undefined8 *puVar1;
  size_t __n;
  long lVar2;
  float fVar3;
  Timer *this_00;
  Ref *this_01;
  long *plVar4;
  code *pcVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  void *pvVar10;
  undefined8 *puVar11;
  long *plVar12;
  float local_5c;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  this[0x71] = (Scheduler)0x1;
  lVar6 = *(long *)(this + 0x28);
  fVar3 = *(float *)(this + 0x24) * param_1;
  if (*(float *)(this + 0x24) == 1.0) {
    fVar3 = param_1;
  }
  while (lVar8 = lVar6, lVar8 != 0) {
    lVar6 = *(long *)(lVar8 + 8);
    if ((*(char *)(lVar8 + 0x4c) == '\0') && (*(char *)(lVar8 + 0x4d) == '\0')) {
      plVar9 = *(long **)(lVar8 + 0x30);
      if (plVar9 == (long *)0x0) goto LAB_00fb5f00;
      local_5c = fVar3;
      (**(code **)(*plVar9 + 0x30))(plVar9,&local_5c);
    }
  }
  lVar6 = *(long *)(this + 0x30);
  while (lVar8 = lVar6, lVar8 != 0) {
    lVar6 = *(long *)(lVar8 + 8);
    if ((*(char *)(lVar8 + 0x4c) == '\0') && (*(char *)(lVar8 + 0x4d) == '\0')) {
      plVar9 = *(long **)(lVar8 + 0x30);
      if (plVar9 == (long *)0x0) goto LAB_00fb5f00;
      local_5c = fVar3;
      (**(code **)(*plVar9 + 0x30))(plVar9,&local_5c);
    }
  }
  lVar6 = *(long *)(this + 0x38);
  while (lVar8 = lVar6, lVar8 != 0) {
    lVar6 = *(long *)(lVar8 + 8);
    if ((*(char *)(lVar8 + 0x4c) == '\0') && (*(char *)(lVar8 + 0x4d) == '\0')) {
      plVar9 = *(long **)(lVar8 + 0x30);
      if (plVar9 == (long *)0x0) {
LAB_00fb5f00:
        local_5c = fVar3;
                    /* WARNING: Subroutine does not return */
        FUN_009d64e4();
      }
      local_5c = fVar3;
      (**(code **)(*plVar9 + 0x30))(plVar9,&local_5c);
    }
  }
  for (plVar9 = *(long **)(this + 0x60); plVar9 != (long *)0x0; plVar9 = (long *)plVar9[7]) {
    while( true ) {
      *(long **)(this + 0x68) = plVar9;
      this[0x70] = (Scheduler)0x0;
      if ((char)plVar9[4] != '\0') break;
      plVar4 = (long *)*plVar9;
      *(undefined4 *)(plVar9 + 2) = 0;
      if (*plVar4 < 1) {
        plVar9 = (long *)plVar9[7];
      }
      else {
        lVar6 = 0;
        do {
          this_00 = *(Timer **)(plVar4[2] + lVar6 * 8);
          plVar9[3] = (long)this_00;
          Timer::update(this_00,fVar3);
          if (((Ref *)plVar9[3])[0x48] != (Ref)0x0) {
            Ref::release((Ref *)plVar9[3]);
          }
          plVar4 = (long *)*plVar9;
          plVar9[3] = 0;
          lVar6 = (long)(int)plVar9[2] + 1;
          *(int *)(plVar9 + 2) = (int)lVar6;
        } while (lVar6 < *plVar4);
        plVar9 = (long *)plVar9[7];
        if ((this[0x70] != (Scheduler)0x0) &&
           (**(long **)*(_hashSelectorEntry **)(this + 0x68) == 0)) {
          removeHashElement(this,*(_hashSelectorEntry **)(this + 0x68));
        }
      }
      if (plVar9 == (long *)0x0) goto LAB_00fb5df8;
    }
  }
LAB_00fb5df8:
  puVar11 = *(undefined8 **)(this + 0x48);
  puVar1 = *(undefined8 **)(this + 0x50);
  if (puVar11 != puVar1) {
    do {
      pvVar10 = (void *)*puVar11;
      if (pvVar10 != (void *)0x0) {
        plVar9 = *(long **)((long)pvVar10 + 0x30);
        if ((long *)((long)pvVar10 + 0x10) == plVar9) {
          pcVar5 = *(code **)(*plVar9 + 0x20);
LAB_00fb5e10:
          (*pcVar5)();
        }
        else if (plVar9 != (long *)0x0) {
          pcVar5 = *(code **)(*plVar9 + 0x28);
          goto LAB_00fb5e10;
        }
        operator_delete(pvVar10);
      }
      puVar11 = puVar11 + 1;
    } while (puVar1 != puVar11);
    puVar11 = *(undefined8 **)(this + 0x48);
  }
  lVar6 = *(long *)(this + 0x78);
  *(undefined8 **)(this + 0x50) = puVar11;
  this[0x71] = (Scheduler)0x0;
  *(undefined8 *)(this + 0x68) = 0;
  if ((lVar6 != *(long *)(this + 0x80)) && (uVar7 = *(long *)(this + 0x80) - lVar6, 0 < (long)uVar7)
     ) {
    uVar7 = uVar7 >> 3;
    lVar8 = uVar7 * 8;
    while( true ) {
      uVar7 = uVar7 - 1;
      lVar8 = lVar8 + -8;
      puVar11 = (undefined8 *)(lVar6 + lVar8);
      this_01 = (Ref *)*puVar11;
      if (this_01[0x39] == (Ref)0x0) {
        if (this_01[0x38] == (Ref)0x0) {
          Timer::update(*(Timer **)(this_01 + 0x30),fVar3);
        }
      }
      else {
        Ref::release(this_01);
        __n = *(long *)(this + 0x80) - (long)(puVar11 + 1);
        if (__n != 0) {
          memmove(puVar11,puVar11 + 1,__n);
        }
        *(undefined8 **)(this + 0x80) = puVar11 + ((long)__n >> 3);
      }
      if ((long)uVar7 < 1) break;
      lVar6 = *(long *)(this + 0x78);
    }
  }
  if (*(long *)(this + 0x90) != *(long *)(this + 0x98)) {
    std::__ndk1::mutex::lock((mutex *)(this + 0xa8));
    plVar4 = *(long **)(this + 0x90);
    plVar12 = *(long **)(this + 0x98);
    *(undefined8 *)(this + 0x90) = 0;
    *(undefined8 *)(this + 0x98) = 0;
    *(undefined8 *)(this + 0xa0) = 0;
    std::__ndk1::mutex::unlock((mutex *)(this + 0xa8));
    for (plVar9 = plVar4; plVar9 != plVar12; plVar9 = plVar9 + 6) {
      if ((long *)plVar9[4] == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_009d64e4();
      }
      (**(code **)(*(long *)plVar9[4] + 0x30))();
    }
    if (plVar4 != (long *)0x0) {
LAB_00fb601c:
      if (plVar4 != plVar12) {
        while( true ) {
          plVar9 = (long *)plVar12[-2];
          plVar12 = plVar12 + -6;
          if (plVar12 == plVar9) break;
          if (plVar9 == (long *)0x0) goto LAB_00fb601c;
          (**(code **)(*plVar9 + 0x28))();
          if (plVar4 == plVar12) goto LAB_00fb604c;
        }
        (**(code **)(*plVar9 + 0x20))();
        goto LAB_00fb601c;
      }
LAB_00fb604c:
      operator_delete(plVar4);
    }
  }
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

