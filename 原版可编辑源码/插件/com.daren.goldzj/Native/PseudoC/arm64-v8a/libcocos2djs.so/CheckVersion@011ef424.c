
/* v8::internal::Snapshot::CheckVersion(v8::StartupData const*) */

void v8::internal::Snapshot::CheckVersion(StartupData *param_1)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uStack_58 = 0;
  local_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  if (*(uint *)(param_1 + 8) < 0x4d) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.",
             "kVersionStringOffset + kVersionStringLength < static_cast<uint32_t>(data->raw_size)");
  }
  Version::GetString((Version *)&local_80,0x40);
  lVar5 = *(long *)param_1;
  iVar3 = strncmp((char *)&local_80,(char *)(lVar5 + 0xc),0x40);
  if (iVar3 == 0) {
    if (*(long *)(lVar2 + 0x28) == local_38) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  uVar1 = *(uint *)(param_1 + 8);
  uVar4 = ExtractNumContexts(param_1);
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Version mismatch between V8 binary and snapshot.\n#   V8 binary version: %.*s\n#    Snapshot version: %.*s\n# The snapshot consists of %d bytes and contains %d context(s)."
           ,0x40,&local_80,0x40,(char *)(lVar5 + 0xc),(ulong)uVar1,uVar4 & 0xffffffff);
}

