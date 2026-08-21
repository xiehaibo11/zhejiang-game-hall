
/* v8::internal::JSProxy::JSProxyVerify(v8::internal::Isolate*) */

void __thiscall v8::internal::JSProxy::JSProxyVerify(JSProxy *this,Isolate *param_1)

{
  uint *puVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  TorqueGeneratedClassVerifiers::JSProxyVerify(*(undefined8 *)this);
  uVar3 = *(ulong *)this;
  uVar4 = uVar3 & 0xffffffff00000000;
  uVar2 = *(uint *)((uVar4 | *(uint *)(uVar3 - 1)) + 0x13);
  uVar5 = uVar4 | uVar2;
  if ((uVar2 & 1) != 0) {
    do {
      if (*(short *)((uVar4 | 7) + (ulong)*(uint *)(uVar5 - 1)) != 0xa2) break;
      puVar1 = (uint *)(uVar5 + 0x13);
      uVar5 = uVar4 | *puVar1;
    } while ((*puVar1 & 1) != 0);
  }
  if (((uVar5 & 1) == 0) ||
     (*(short *)((uVar5 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar5 - 1)) != 0x439)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","map().GetConstructor().IsJSFunction()");
  }
  if (0xa8 < *(ushort *)((uVar4 | 7) + (ulong)*(uint *)((uVar4 | *(uint *)(uVar3 + 0xb)) - 1))) {
    uVar5 = uVar4 | *(uint *)(uVar3 + 7);
    if ((uint)((*(byte *)((uVar4 | 9) + (ulong)*(uint *)(uVar5 - 1)) & 2) == 0) ==
        (*(byte *)((uVar4 | *(uint *)(uVar3 - 1)) + 9) & 2) >> 1) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","target().IsCallable() == map().is_callable()");
    }
    if ((uint)((*(byte *)((uVar4 | 9) + (ulong)*(uint *)(uVar5 - 1)) & 0x40) == 0) ==
        (*(byte *)((uVar4 | *(uint *)(uVar3 - 1)) + 9) & 0x40) >> 6) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","target().IsConstructor() == map().is_constructor()");
    }
  }
  if (*(int *)((uVar4 | *(uint *)(uVar3 - 1)) + 0xf) != *(int *)(param_1 + 0xb0)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","map().prototype().IsNull(isolate)");
  }
  if ((*(uint *)((uVar4 | *(uint *)(uVar3 - 1)) + 0xb) & 0xffc00) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","0 == map().NumberOfOwnDescriptors()");
}

