
/* v8::internal::SyntheticModule::SyntheticModuleVerify(v8::internal::Isolate*) */

void __thiscall
v8::internal::SyntheticModule::SyntheticModuleVerify(SyntheticModule *this,Isolate *param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  long lVar6;
  
  TorqueGeneratedClassVerifiers::SyntheticModuleVerify(*(undefined8 *)this);
  uVar3 = *(ulong *)this & 0xffffffff00000000;
  uVar4 = uVar3 | *(uint *)(*(ulong *)this + 0x1b);
  uVar1 = *(uint *)(uVar4 + 3);
  if (1 < (int)uVar1) {
    iVar5 = 0;
    lVar6 = 0;
    do {
      uVar2 = *(uint *)(uVar4 + (long)iVar5 + 7);
      if (((uVar2 & 1) == 0) ||
         (0x3f < *(ushort *)((uVar3 | 7) + (ulong)*(uint *)((uVar3 | uVar2) - 1)))) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","export_names().get(i).IsString()");
      }
      lVar6 = lVar6 + 1;
      iVar5 = iVar5 + 4;
    } while (lVar6 < (long)((ulong)uVar1 << 0x20) >> 0x21);
  }
  return;
}

