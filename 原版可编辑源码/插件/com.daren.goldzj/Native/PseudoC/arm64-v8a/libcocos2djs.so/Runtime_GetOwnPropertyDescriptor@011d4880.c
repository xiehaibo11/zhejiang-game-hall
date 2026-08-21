
/* v8::internal::Runtime_GetOwnPropertyDescriptor(int, unsigned long*, v8::internal::Isolate*) */

undefined8
v8::internal::Runtime_GetOwnPropertyDescriptor(int param_1,ulong *param_2,Isolate *param_3)

{
  long lVar1;
  ushort uVar2;
  Isolate *pIVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  PropertyDescriptor local_68 [8];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if (TracingFlags::runtime_stats != 0) {
    uVar4 = FUN_011d49dc(param_1,param_2,param_3);
    return uVar4;
  }
  uVar4 = *(undefined8 *)(param_3 + 0x95a0);
  lVar1 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar5 = *param_2;
  if (((uVar5 & 1) != 0) &&
     (0xa8 < *(ushort *)((uVar5 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar5 - 1)))) {
    uVar5 = param_2[-1];
    if (((uVar5 & 1) != 0) &&
       (*(ushort *)((uVar5 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar5 - 1)) < 0x41)) {
      local_68[0] = (PropertyDescriptor)0x0;
      uStack_58 = 0;
      local_60 = 0;
      uStack_48 = 0;
      uStack_50 = 0;
      uVar2 = JSReceiver::GetOwnPropertyDescriptor(param_3,param_2,param_2 + -1,local_68);
      if ((uVar2 & 0xff) == 0) {
        pIVar3 = param_3 + 0x180;
      }
      else if (uVar2 < 0x100) {
        pIVar3 = param_3 + 0xa0;
      }
      else {
        pIVar3 = (Isolate *)PropertyDescriptor::ToPropertyDescriptorObject(local_68,param_3);
      }
      uVar6 = *(undefined8 *)pIVar3;
      *(undefined8 *)(param_3 + 0x95a0) = uVar4;
      *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
      if (*(long *)(param_3 + 0x95a8) != lVar1) {
        *(long *)(param_3 + 0x95a8) = lVar1;
        HandleScope::DeleteExtensions(param_3);
      }
      return uVar6;
    }
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[1].IsName()");
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","args[0].IsJSReceiver()");
}

