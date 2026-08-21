
/* v8::internal::ProfilerEventsProcessor::AddSample(v8::internal::TickSample) */

void __thiscall
v8::internal::ProfilerEventsProcessor::AddSample(ProfilerEventsProcessor *this,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  long lVar4;
  undefined4 *puVar5;
  ulong extraout_x1;
  undefined8 uVar6;
  undefined1 auStack_1090 [4080];
  undefined8 local_a0;
  undefined6 uStack_98;
  undefined2 uStack_92;
  undefined6 uStack_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  uVar1 = *(undefined4 *)(this + 0x168);
  local_70 = param_2[5];
  uStack_78 = *(undefined8 *)(param_2 + 3);
  local_80 = *(undefined8 *)(param_2 + 1);
  uVar2 = *param_2;
  memcpy(auStack_1090,param_2 + 6,0xff0);
  local_a0 = *(undefined8 *)((long)param_2 + 0x1012);
  uVar6 = *(undefined8 *)(param_2 + 0x402);
  uVar3 = *(undefined2 *)(param_2 + 0x404);
  uStack_90 = (undefined6)((ulong)*(undefined8 *)(param_2 + 0x408) >> 0x10);
  uStack_98 = (undefined6)*(undefined8 *)((long)param_2 + 0x101a);
  uStack_92 = (undefined2)((ulong)*(undefined8 *)((long)param_2 + 0x101a) >> 0x30);
  puVar5 = Malloced::operator_new((Malloced *)0x1038,extraout_x1);
  puVar5[2] = 5;
  *(undefined8 *)(puVar5 + 0x404) = 0;
  *(undefined8 *)(puVar5 + 4) = 0;
  *(undefined8 *)(puVar5 + 6) = 0;
  *(undefined8 *)(puVar5 + 0x408) = 0;
  *(undefined8 *)(puVar5 + 0x40c) = 0;
  *(ushort *)(puVar5 + 0x406) = *(ushort *)(puVar5 + 0x406) & 0xfc00 | 0x200;
  *(undefined8 *)(puVar5 + 0x40a) = 0;
  if (puVar5 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","(n) != nullptr");
  }
  *puVar5 = uVar1;
  puVar5[2] = uVar2;
  puVar5[7] = local_70;
  *(undefined8 *)(puVar5 + 5) = uStack_78;
  *(undefined8 *)(puVar5 + 3) = local_80;
  memcpy(puVar5 + 8,auStack_1090,0xff0);
  *(undefined8 *)(puVar5 + 0x404) = uVar6;
  *(undefined2 *)(puVar5 + 0x406) = uVar3;
  *(ulong *)((long)puVar5 + 0x1022) = CONCAT26(uStack_92,uStack_98);
  *(undefined8 *)((long)puVar5 + 0x101a) = local_a0;
  *(ulong *)(puVar5 + 0x40a) = CONCAT62(uStack_90,uStack_92);
  base::Mutex::Lock((Mutex *)(this + 0x130));
  *(undefined4 **)(*(long *)(this + 0x160) + 0x1030) = puVar5;
  *(undefined4 **)(this + 0x160) = puVar5;
  base::Mutex::Unlock((Mutex *)(this + 0x130));
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

