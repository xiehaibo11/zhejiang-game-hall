
/* v8::internal::Builtins::EmitCodeCreateEvents(v8::internal::Isolate*) */

void v8::internal::Builtins::EmitCodeCreateEvents(Isolate *param_1)

{
  Mutex *pMVar1;
  void *pvVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long *plVar8;
  Bytecodes local_78 [16];
  void *local_68;
  
  uVar3 = (**(code **)(**(long **)(param_1 + 0x9558) + 0x88))();
  if (((uVar3 & 1) != 0) || (param_1[0xb7fc] != (Isolate)0x0)) {
    lVar7 = 0;
    do {
      lVar5 = *(long *)(param_1 + 0xb6d8);
      uVar4 = *(undefined8 *)(param_1 + lVar7 * 8 + 0x5a58);
      pMVar1 = (Mutex *)(lVar5 + 0x28);
      base::Mutex::Lock(pMVar1);
      plVar8 = *(long **)(lVar5 + 0x10);
      if (plVar8 != (long *)0x0) {
        puVar6 = (&PTR_s_RecordWrite_01a41e5c_0x21_01c98618)[lVar7 * 3];
        do {
          (**(code **)(*(long *)plVar8[2] + 0x10))((long *)plVar8[2],8,uVar4,puVar6);
          plVar8 = (long *)*plVar8;
        } while (plVar8 != (long *)0x0);
      }
      base::Mutex::Unlock(pMVar1);
      lVar7 = lVar7 + 1;
    } while (lVar7 != 0x3d9);
    lVar7 = 0x3d9;
    do {
      uVar4 = *(undefined8 *)(param_1 + lVar7 * 8 + 0x5a58);
      lVar5 = *(long *)(param_1 + 0xb6d8);
      interpreter::Bytecodes::ToString
                (local_78,*(ushort *)(&DAT_01c98628 + lVar7 * 0x18),
                 *(ushort *)(&DAT_01c98628 + lVar7 * 0x18) >> 8,".");
      pMVar1 = (Mutex *)(lVar5 + 0x28);
      pvVar2 = (void *)((ulong)local_78 | 1);
      if (((byte)local_78[0] & 1) != 0) {
        pvVar2 = local_68;
      }
      base::Mutex::Lock(pMVar1);
      for (plVar8 = *(long **)(lVar5 + 0x10); plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
        (**(code **)(*(long *)plVar8[2] + 0x10))((long *)plVar8[2],0xe,uVar4,pvVar2);
      }
      base::Mutex::Unlock(pMVar1);
      if (((byte)local_78[0] & 1) != 0) {
        operator_delete(local_68);
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 != 0x5bc);
  }
  return;
}

