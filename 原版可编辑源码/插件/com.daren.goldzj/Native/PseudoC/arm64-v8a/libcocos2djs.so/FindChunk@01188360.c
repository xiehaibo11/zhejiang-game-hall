
/* v8::internal::ChunkedStream<unsigned char>::FindChunk(unsigned long,
   v8::internal::RuntimeCallStats*) */

void v8::internal::ChunkedStream<unsigned_char>::FindChunk(ulong param_1,RuntimeCallStats *param_2)

{
  undefined8 uVar1;
  RuntimeCallStats *in_x2;
  undefined8 *in_x8;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  RuntimeCallStats *pRVar5;
  undefined8 uVar6;
  RuntimeCallStats *local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  
  puVar4 = *(undefined8 **)(param_1 + 0x10);
  puVar2 = *(undefined8 **)(param_1 + 0x18);
  if (puVar4 == puVar2) {
    do {
      local_58 = 0;
      local_60 = 0;
      uStack_78 = 0;
      local_80 = (RuntimeCallStats *)0x0;
      uStack_68 = 0;
      uStack_70 = 0;
      if ((in_x2 != (RuntimeCallStats *)0x0) && (TracingFlags::runtime_stats != 0)) {
        RuntimeCallStats::Enter();
        local_80 = in_x2;
      }
      uVar1 = (**(code **)(**(long **)(param_1 + 8) + 0x10))(*(long **)(param_1 + 8),&local_58);
      if (local_80 != (RuntimeCallStats *)0x0) {
        RuntimeCallStats::Leave(local_80,(RuntimeCallTimer *)&uStack_78);
      }
      (*(code *)**(undefined8 **)param_1)(param_1,local_58,0,uVar1);
      puVar4 = *(undefined8 **)(param_1 + 0x10);
      puVar2 = *(undefined8 **)(param_1 + 0x18);
    } while (puVar4 == puVar2);
  }
  if ((puVar2[-1] != 0) &&
     (pRVar5 = (RuntimeCallStats *)(puVar2[-1] + puVar2[-2]), pRVar5 <= param_2)) {
    do {
      local_58 = 0;
      local_60 = 0;
      uStack_78 = 0;
      local_80 = (RuntimeCallStats *)0x0;
      uStack_68 = 0;
      uStack_70 = 0;
      if ((in_x2 != (RuntimeCallStats *)0x0) && (TracingFlags::runtime_stats != 0)) {
        RuntimeCallStats::Enter();
        local_80 = in_x2;
      }
      uVar1 = (**(code **)(**(long **)(param_1 + 8) + 0x10))(*(long **)(param_1 + 8),&local_58);
      if (local_80 != (RuntimeCallStats *)0x0) {
        RuntimeCallStats::Leave(local_80,(RuntimeCallTimer *)&uStack_78);
      }
      (*(code *)**(undefined8 **)param_1)(param_1,local_58,pRVar5,uVar1);
      puVar2 = *(undefined8 **)(param_1 + 0x18);
    } while ((puVar2[-1] != 0) &&
            (pRVar5 = (RuntimeCallStats *)(puVar2[-1] + puVar2[-2]), pRVar5 <= param_2));
    puVar4 = *(undefined8 **)(param_1 + 0x10);
  }
  do {
    puVar3 = puVar2;
    if (puVar4 == puVar3) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    puVar2 = puVar3 + -3;
  } while (param_2 < (RuntimeCallStats *)puVar3[-2]);
  uVar6 = puVar3[-2];
  uVar1 = puVar3[-3];
  in_x8[2] = puVar3[-1];
  in_x8[1] = uVar6;
  *in_x8 = uVar1;
  return;
}

