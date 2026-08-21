
/* v8::internal::CallOptimization::IsCompatibleReceiverMap(v8::internal::Handle<v8::internal::Map>,
   v8::internal::Handle<v8::internal::JSObject>) const */

undefined8 __thiscall
v8::internal::CallOptimization::IsCompatibleReceiverMap
          (CallOptimization *this,undefined8 param_2,ulong *param_3)

{
  uint uVar1;
  ulong *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  int local_4;
  
  puVar2 = (ulong *)LookupHolderOfExpectedType(this,param_2,&local_4);
  if (local_4 == 0) {
LAB_017b06ac:
    uVar3 = 0;
  }
  else {
    if (local_4 == 2) {
      if ((puVar2 != param_3) &&
         (((uVar4 = *puVar2, param_3 == (ulong *)0x0 || (puVar2 == (ulong *)0x0)) ||
          (uVar4 != *param_3)))) {
        do {
          uVar5 = uVar4 & 0xffffffff00000000;
          uVar1 = *(uint *)((uVar5 | *(uint *)(uVar4 - 1)) + 0xf);
          if (((uVar1 & 1) == 0) ||
             (uVar4 = uVar5 | uVar1, *(ushort *)((uVar5 | 7) + (ulong)*(uint *)(uVar4 - 1)) < 0xaa))
          goto LAB_017b06ac;
        } while (uVar1 != (uint)*param_3);
      }
    }
    else if (local_4 != 1) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    uVar3 = 1;
  }
  return uVar3;
}

