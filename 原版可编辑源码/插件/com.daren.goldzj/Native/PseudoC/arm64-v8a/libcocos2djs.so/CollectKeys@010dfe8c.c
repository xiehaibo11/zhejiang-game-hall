
/* v8::internal::KeyAccumulator::CollectKeys(v8::internal::Handle<v8::internal::JSReceiver>,
   v8::internal::Handle<v8::internal::JSReceiver>) */

void __thiscall
v8::internal::KeyAccumulator::CollectKeys(KeyAccumulator *this,undefined8 param_2,ulong *param_3)

{
  long lVar1;
  ulong *puVar2;
  char cVar3;
  ushort uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined8 local_60;
  undefined8 local_58;
  ulong *local_50;
  uint local_48;
  char local_44;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((*(int *)(this + 0x20) != 0) ||
     (*(short *)((*param_3 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*param_3 - 1)) != 0xa9)) {
    local_60 = *(undefined8 *)this;
    local_58 = 0;
    local_44 = '\0';
    local_48 = (uint)(*(int *)(this + 0x20) == 0);
    local_40 = 0;
    uVar5 = param_2;
    local_50 = param_3;
    if (param_3 == (ulong *)0x0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","!handle_.is_null()");
    }
    do {
      puVar2 = local_50;
      if (*(long *)(this + 0x18) != 0) {
        this[0x2a] = (KeyAccumulator)0x0;
      }
      if (*(short *)((*local_50 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*local_50 - 1)) != 0xa9
         ) {
        uVar4 = CollectOwnKeys(this,param_2,local_50);
        if ((uVar4 & 0xff) != 0) goto LAB_010dff88;
LAB_010dffc0:
        uVar5 = 0;
        goto LAB_010dffc4;
      }
      uVar4 = CollectOwnJSProxyKeys(this,uVar5,local_50);
      if ((uVar4 & 0xff) == 0) goto LAB_010dffc0;
LAB_010dff88:
      if (uVar4 < 0x100) goto LAB_010dffb8;
      auVar6 = PrototypeIterator::AdvanceFollowingProxiesIgnoringAccessChecks
                         ((PrototypeIterator *)&local_60);
      uVar5 = auVar6._8_8_;
      if ((auVar6._0_8_ & 1) == 0) goto LAB_010dffc0;
      if (((*(int **)(this + 0x10) != (int *)0x0) && (**(int **)(this + 0x10) == (int)*puVar2)) ||
         (local_44 != '\0')) goto LAB_010dffb8;
    } while( true );
  }
  cVar3 = CollectOwnJSProxyKeys(this);
  uVar5 = 0;
  if (cVar3 != '\0') {
    uVar5 = 0x101;
  }
LAB_010dffc4:
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar5);
  }
  return;
LAB_010dffb8:
  uVar5 = 0x101;
  goto LAB_010dffc4;
}

