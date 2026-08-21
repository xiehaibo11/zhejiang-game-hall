
/* v8::internal::Runtime_StringReplaceOneCharWithString(int, unsigned long*, v8::internal::Isolate*)
    */

undefined8
v8::internal::Runtime_StringReplaceOneCharWithString(int param_1,ulong *param_2,Isolate *param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong *puVar6;
  ulong *puVar7;
  undefined1 local_34 [4];
  
  if (TracingFlags::runtime_stats != 0) {
    uVar3 = FUN_01592d54(param_1,param_2,param_3);
    return uVar3;
  }
  uVar3 = *(undefined8 *)(param_3 + 0x95a0);
  lVar1 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar4 = *param_2;
  if (((uVar4 & 1) == 0) ||
     (0x3f < *(ushort *)((uVar4 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar4 - 1)))) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[0].IsString()");
  }
  puVar6 = param_2 + -1;
  uVar4 = *puVar6;
  if (((uVar4 & 1) == 0) ||
     (0x3f < *(ushort *)((uVar4 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar4 - 1)))) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[1].IsString()");
  }
  puVar7 = param_2 + -2;
  uVar4 = *puVar7;
  if (((uVar4 & 1) == 0) ||
     (0x3f < *(ushort *)((uVar4 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar4 - 1)))) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[2].IsString()");
  }
  local_34[0] = 0;
  puVar2 = (undefined8 *)
           StringReplaceOneCharWithString(param_3,param_2,puVar6,puVar7,local_34,0x1000);
  if (puVar2 == (undefined8 *)0x0) {
    if (((*(ulong *)(param_3 + 0x2bd8) & 1) != 0) &&
       ((int)*(ulong *)(param_3 + 0x2bd8) == *(int *)(param_3 + 0xa8))) {
      uVar5 = String::Flatten(param_3,param_2,0);
      puVar2 = (undefined8 *)
               StringReplaceOneCharWithString(param_3,uVar5,puVar6,puVar7,local_34,0x1000);
      if (puVar2 != (undefined8 *)0x0) goto LAB_01592c40;
      if (((*(ulong *)(param_3 + 0x2bd8) & 1) != 0) &&
         ((int)*(ulong *)(param_3 + 0x2bd8) == *(int *)(param_3 + 0xa8))) {
        uVar5 = Isolate::StackOverflow(param_3);
        goto LAB_01592cb4;
      }
    }
    uVar5 = *(undefined8 *)(param_3 + 0x180);
  }
  else {
LAB_01592c40:
    uVar5 = *puVar2;
  }
LAB_01592cb4:
  *(undefined8 *)(param_3 + 0x95a0) = uVar3;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar1) {
    *(long *)(param_3 + 0x95a8) = lVar1;
    HandleScope::DeleteExtensions(param_3);
  }
  return uVar5;
}

