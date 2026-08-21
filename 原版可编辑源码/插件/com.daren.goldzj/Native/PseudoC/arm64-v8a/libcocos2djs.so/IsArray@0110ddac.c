
/* v8::internal::JSProxy::IsArray(v8::internal::Handle<v8::internal::JSProxy>) */

undefined8 v8::internal::JSProxy::IsArray(ulong *param_1)

{
  ulong *puVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  Isolate *this;
  int iVar6;
  char *local_60;
  undefined8 uStack_58;
  
  uVar4 = *param_1;
  this = (Isolate *)(uVar4 & 0xffffffff00000000);
  iVar6 = 0x19000;
  do {
    uVar5 = uVar4 & 0xffffffff00000000;
    if (*(ushort *)((uVar5 | 7) + (ulong)*(uint *)((uVar5 | *(uint *)(uVar4 + 0xb)) - 1)) < 0xa9) {
      uStack_58 = __strlen_chk("IsArray",8);
      local_60 = "IsArray";
      lVar2 = Factory::NewStringFromOneByte(this,&local_60,0);
      if (lVar2 != 0) {
        puVar3 = (undefined8 *)Factory::NewTypeError((Factory *)this,0x90,lVar2,0,0);
        Isolate::Throw(this,*puVar3,0);
        return 0;
      }
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","(location_) != nullptr");
    }
    uVar5 = uVar5 | *(uint *)(uVar4 + 7);
    if (*(CanonicalHandleScope **)((ulong)this | 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar1 = *(ulong **)((ulong)this | 0x95a0);
      if (puVar1 == *(ulong **)((ulong)this | 0x95a8)) {
        puVar1 = (ulong *)HandleScope::Extend(this);
      }
      *(ulong **)((ulong)this | 0x95a0) = puVar1 + 1;
      *puVar1 = uVar5;
    }
    else {
      puVar1 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)((ulong)this | 0x95b8),uVar5);
    }
    uVar4 = *puVar1;
    uVar5 = uVar4 & 0xffffffff00000000 | 7;
    if (*(short *)(uVar5 + *(uint *)(uVar4 - 1)) == 0x423) {
      return 0x101;
    }
    if (*(short *)(uVar5 + *(uint *)(uVar4 - 1)) != 0xa9) {
      return 1;
    }
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  Isolate::StackOverflow(this);
  return 0;
}

