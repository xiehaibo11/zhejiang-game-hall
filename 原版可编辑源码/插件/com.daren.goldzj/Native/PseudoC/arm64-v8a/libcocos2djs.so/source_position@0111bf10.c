
/* v8::internal::JSGeneratorObject::source_position() const */

void __thiscall v8::internal::JSGeneratorObject::source_position(JSGeneratorObject *this)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong local_18;
  
  uVar2 = *(ulong *)this;
  if (-1 < *(int *)(uVar2 + 0x1f)) {
    local_18 = uVar2 & 0xffffffff00000000;
    uVar3 = local_18 | *(uint *)((local_18 | *(uint *)(uVar2 + 0xb)) + 0xb);
    uVar5 = local_18 | *(uint *)(uVar3 + 0xf);
    uVar4 = local_18 | 7;
    if ((*(short *)(uVar4 + *(uint *)(uVar5 - 1)) == 0x5b) &&
       (*(short *)(uVar4 + *(uint *)((local_18 | *(uint *)(uVar5 + 0x13)) - 1)) == 0x86)) {
      uVar1 = *(uint *)(uVar5 + 0xf);
    }
    else {
      uVar1 = *(uint *)(uVar3 + 3);
      if (((uVar1 & 1) == 0) || (*(short *)(uVar4 + *(uint *)((local_18 | uVar1) - 1)) != 0x86)) {
        uVar1 = *(uint *)((local_18 | *(uint *)(uVar3 + 3)) + 3);
      }
      else {
        uVar1 = *(uint *)(uVar3 + 3);
      }
    }
    local_18 = local_18 | uVar1;
    AbstractCode::SourcePosition((AbstractCode *)&local_18,(*(int *)(uVar2 + 0x17) >> 1) + -0x21);
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","is_suspended()");
}

