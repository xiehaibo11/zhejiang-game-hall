
/* v8::SharedArrayBuffer::GetContents(bool) */

void v8::SharedArrayBuffer::GetContents(bool param_1)

{
  __shared_weak_count *p_Var1;
  __shared_weak_count *p_Var2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 *puVar7;
  ulong in_x1;
  undefined8 *in_x8;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 local_58 [8];
  __shared_weak_count *local_50;
  long local_48;
  undefined8 *local_40;
  __shared_weak_count *local_38;
  
  plVar6 = (long *)(ulong)param_1;
  local_48 = *plVar6;
  internal::JSArrayBuffer::GetBackingStore((JSArrayBuffer *)&local_48);
  if ((in_x1 & 1) == 0) {
    puVar7 = (undefined8 *)0x0;
    local_50 = local_38;
  }
  else {
    lVar8 = *plVar6;
    if ((*(uint *)(lVar8 + 0x1b) & 1) != 0) {
      lVar8 = base::Thread::GetThreadLocal(internal::Isolate::isolate_key_);
      if (lVar8 == 0) {
LAB_00ecc284:
        base::OS::PrintError
                  ("\n#\n# Fatal error in %s\n# %s\n#\n\n","v8_SharedArrayBuffer_Externalize",
                   "SharedArrayBuffer already externalized");
                    /* WARNING: Subroutine does not return */
        base::OS::Abort();
      }
      if (*(code **)(lVar8 + 0xb738) == (code *)0x0) goto LAB_00ecc284;
      (**(code **)(lVar8 + 0xb738))
                ("v8_SharedArrayBuffer_Externalize","SharedArrayBuffer already externalized");
      *(undefined1 *)(lVar8 + 0xb6b9) = 1;
      lVar8 = *plVar6;
    }
    p_Var2 = local_38;
    puVar5 = local_40;
    *(uint *)(lVar8 + 0x1b) = *(uint *)(lVar8 + 0x1b) | 1;
    if (local_38 != (__shared_weak_count *)0x0) {
      p_Var1 = local_38 + 8;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
        if (bVar4) {
          *(long *)p_Var1 = *(long *)p_Var1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (local_40 == (undefined8 *)0x0) {
      puVar7 = (undefined8 *)0x0;
      local_50 = local_38;
      if (local_38 == (__shared_weak_count *)0x0) goto joined_r0x00ecc148;
    }
    else {
      puVar7 = operator_new(0x10);
      *puVar7 = puVar5;
      puVar7[1] = p_Var2;
      local_50 = local_38;
      if (p_Var2 == (__shared_weak_count *)0x0) goto joined_r0x00ecc148;
      p_Var1 = p_Var2 + 8;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
        if (bVar4) {
          *(long *)p_Var1 = *(long *)p_Var1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    p_Var1 = p_Var2 + 8;
    do {
      lVar8 = *(long *)p_Var1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar4) {
        *(long *)p_Var1 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    local_50 = local_38;
    if (lVar8 == 0) {
      (**(code **)(*(long *)p_Var2 + 0x10))(p_Var2);
      std::__ndk1::__shared_weak_count::__release_weak(p_Var2);
      local_50 = local_38;
    }
  }
joined_r0x00ecc148:
  local_38 = local_50;
  if (local_40 == (undefined8 *)0x0) {
    *(undefined4 *)(in_x8 + 4) = 0;
    in_x8[1] = 0;
    *in_x8 = 0;
    in_x8[3] = 0;
    in_x8[2] = 0;
  }
  else {
    if (local_50 != (__shared_weak_count *)0x0) {
      p_Var2 = local_50 + 8;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(p_Var2,0x10);
        if (bVar4) {
          *(long *)p_Var2 = *(long *)p_Var2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    internal::GlobalBackingStoreRegistry::Register(local_58);
    if (local_50 != (__shared_weak_count *)0x0) {
      p_Var2 = local_50 + 8;
      do {
        lVar8 = *(long *)p_Var2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(p_Var2,0x10);
        if (bVar4) {
          *(long *)p_Var2 = lVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*(long *)local_50 + 0x10))(local_50);
        std::__ndk1::__shared_weak_count::__release_weak(local_50);
      }
    }
    uVar10 = *local_40;
    uVar11 = local_40[1];
    uVar9 = local_40[1];
    *(uint *)(in_x8 + 4) = *(byte *)(local_40 + 5) >> 1 & 1;
    *in_x8 = uVar10;
    in_x8[1] = uVar11;
    in_x8[2] = uVar10;
    in_x8[3] = uVar9;
  }
  in_x8[5] = FUN_00ec9100;
  in_x8[6] = puVar7;
  if (local_38 != (__shared_weak_count *)0x0) {
    p_Var2 = local_38 + 8;
    do {
      lVar8 = *(long *)p_Var2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(p_Var2,0x10);
      if (bVar4) {
        *(long *)p_Var2 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*(long *)local_38 + 0x10))(local_38);
      std::__ndk1::__shared_weak_count::__release_weak(local_38);
    }
  }
  return;
}

