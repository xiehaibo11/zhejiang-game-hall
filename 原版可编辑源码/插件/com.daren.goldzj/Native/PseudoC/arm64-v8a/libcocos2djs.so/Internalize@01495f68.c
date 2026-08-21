
/* v8::internal::AstValueFactory::Internalize(v8::internal::Isolate*) */

void __thiscall v8::internal::AstValueFactory::Internalize(AstValueFactory *this,Isolate *param_1)

{
  long lVar1;
  long lVar2;
  Isolate *pIVar3;
  int iVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined **local_90;
  undefined4 local_88;
  int iStack_84;
  long local_80;
  ulong uStack_78;
  undefined1 local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  plVar5 = *(long **)(this + 0x18);
  if (plVar5 != (long *)0x0) {
    do {
      while( true ) {
        plVar7 = (long *)*plVar5;
        iVar4 = (int)plVar5[2];
        if (iVar4 == 0) break;
        if (*(char *)((long)plVar5 + 0x1c) == '\0') {
          local_88 = (undefined4)plVar5[3];
          local_80 = plVar5[1];
          uStack_78 = (ulong)(long)iVar4 >> 1;
          iStack_84 = (int)uStack_78;
          local_70 = 0;
          local_90 = &PTR__StringTableKey_01ca70b0;
          lVar2 = StringTable::LookupKey<v8::internal::SequentialStringKey<unsigned_short>>
                            (param_1,(SequentialStringKey *)&local_90);
          *plVar5 = lVar2;
        }
        else {
          local_88 = (undefined4)plVar5[3];
          uStack_78 = plVar5[2];
          local_80 = plVar5[1];
          local_70 = 0;
          local_90 = &PTR__StringTableKey_01ca7080;
          iStack_84 = iVar4;
          lVar2 = StringTable::LookupKey<v8::internal::SequentialStringKey<unsigned_char>>
                            (param_1,(SequentialStringKey *)&local_90);
          *plVar5 = lVar2;
        }
        plVar5 = plVar7;
        if (plVar7 == (long *)0x0) goto LAB_01496060;
      }
      *plVar5 = (long)(param_1 + 200);
      plVar5 = plVar7;
    } while (plVar7 != (long *)0x0);
  }
LAB_01496060:
  plVar5 = *(long **)(this + 0x28);
  if (plVar5 != (long *)0x0) {
    do {
      plVar7 = (long *)*plVar5;
      pIVar3 = param_1 + 200;
      if ((long *)plVar5[1] != (long *)0x0) {
        pIVar3 = *(Isolate **)plVar5[1];
        for (puVar6 = (undefined8 *)plVar5[2]; puVar6 != (undefined8 *)0x0;
            puVar6 = (undefined8 *)puVar6[1]) {
          pIVar3 = (Isolate *)Factory::NewConsString((Factory *)param_1,*(undefined8 *)*puVar6);
          if (pIVar3 == (Isolate *)0x0) {
                    /* WARNING: Subroutine does not return */
            V8_Fatal("Check failed: %s.","(location_) != nullptr");
          }
        }
      }
      *plVar5 = (long)pIVar3;
      plVar5 = plVar7;
    } while (plVar7 != (long *)0x0);
  }
  *(undefined8 *)(this + 0x18) = 0;
  *(AstValueFactory **)(this + 0x20) = this + 0x18;
  *(undefined8 *)(this + 0x28) = 0;
  *(AstValueFactory **)(this + 0x30) = this + 0x28;
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

