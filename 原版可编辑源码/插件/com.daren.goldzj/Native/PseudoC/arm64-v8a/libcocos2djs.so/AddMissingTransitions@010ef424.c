
/* v8::internal::Map::AddMissingTransitions(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::Map>, v8::internal::Handle<v8::internal::DescriptorArray>,
   v8::internal::Handle<v8::internal::LayoutDescriptor>) */

ulong * v8::internal::Map::AddMissingTransitions(undefined8 param_1,ulong *param_2,long *param_3)

{
  uint uVar1;
  uint uVar2;
  short sVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong local_38;
  
  uVar2 = *(uint *)(*param_2 + 0xb);
  sVar3 = *(short *)(*param_3 + 5);
  puVar4 = (ulong *)CopyDropDescriptors();
  local_38 = *puVar4;
  SetInstanceDescriptors((Map *)&local_38,param_1,*param_3,(int)*(short *)(*param_3 + 5));
  uVar6 = *puVar4;
  if (*(ushort *)(uVar6 + 7) < 0xaa) {
    *(undefined1 *)(uVar6 + 5) = 0;
  }
  else {
    uVar1 = ((uint)*(byte *)(uVar6 + 3) - (uint)*(byte *)(uVar6 + 4)) + (uint)*(byte *)(uVar6 + 4);
    if (0xff < uVar1) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","static_cast<unsigned>(value) <= 255");
    }
    *(char *)(uVar6 + 5) = (char)uVar1;
  }
  uVar7 = (long)sVar3 - 1;
  *(uint *)(*puVar4 + 0xb) = *(uint *)(*puVar4 + 0xb) | 0x10000000;
  for (uVar6 = (ulong)(uVar2 >> 10) & 0x3ff; uVar7 != uVar6; uVar6 = uVar6 + 1) {
    puVar5 = (ulong *)CopyDropDescriptors(param_1,param_2);
    InstallDescriptors(param_1,param_2,puVar5,uVar6,param_3);
    param_2 = puVar5;
  }
  uVar6 = *param_2;
  if ((*(uint *)(uVar6 + 0xb) >> 0x19 & 1) == 0) {
    *(uint *)(uVar6 + 0xb) = *(uint *)(uVar6 + 0xb) | 0x2000000;
    local_38 = uVar6 & 0xffffffff00000000 | (ulong)*(uint *)(uVar6 + 0x1b);
    DependentCode::DeoptimizeDependentCodeGroup(&local_38,param_1,1);
  }
  *(uint *)(*puVar4 + 0xb) = *(uint *)(*puVar4 + 0xb) & 0xefffffff;
  InstallDescriptors(param_1,param_2,puVar4,uVar7,param_3);
  return puVar4;
}

