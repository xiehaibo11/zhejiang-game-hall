
ulong FUN_014d6300(undefined8 param_1,Factory *param_2,undefined8 param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong *puVar6;
  char *pcVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong local_48;
  bool local_24 [4];
  
  puVar4 = (ulong *)v8::internal::String::Flatten(param_2,param_1,0);
  uVar5 = *puVar4;
  iVar3 = *(int *)(uVar5 + 7);
  uVar9 = uVar5;
  if (iVar3 != 0) {
    while( true ) {
      uVar1 = *(ushort *)((uVar9 & 0xffffffff00000000 | (ulong)*(uint *)(uVar9 - 1)) + 7);
      if ((uVar1 & 9) == 0) break;
      if ((uVar1 & 9) == 8) {
        puVar6 = (ulong *)v8::internal::Factory::NewRawOneByteString(param_2,iVar3,0);
        if (puVar6 == (ulong *)0x0) goto LAB_014d6488;
        local_48 = *puVar4;
        pcVar7 = (char *)v8::internal::String::GetFlatContent
                                   ((PerThreadAssertScopeDebugOnly *)&local_48);
        local_24[0] = false;
        iVar2 = v8::internal::FastAsciiConvert<true>((char *)(*puVar6 + 0xb),pcVar7,iVar3,local_24);
        if (iVar2 == iVar3) {
          if (local_24[0] != false) {
            puVar4 = puVar6;
          }
          return *puVar4;
        }
        uVar5 = *puVar4;
        break;
      }
      uVar9 = uVar9 & 0xffffffff00000000 | (ulong)*(uint *)(uVar9 + 0xb);
    }
    if ((*(byte *)((uVar5 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar5 - 1)) >> 3 & 1) == 0) {
      puVar8 = (undefined8 *)v8::internal::Factory::NewRawTwoByteString(param_2,iVar3,0);
    }
    else {
      puVar8 = (undefined8 *)v8::internal::Factory::NewRawOneByteString(param_2,iVar3,0);
    }
    if (puVar8 == (undefined8 *)0x0) {
LAB_014d6488:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","(location_) != nullptr");
    }
    uVar5 = FUN_014d64fc(param_2,*puVar4,*puVar8,iVar3,param_3);
    iVar3 = (int)uVar5;
    if (((uVar5 & 1) == 0) ||
       ((iVar3 != *(int *)(param_2 + 0x180) &&
        (0x3f < *(ushort *)((uVar5 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar5 - 1)))))) {
      iVar2 = iVar3 >> 1;
      if ((iVar3 < 2) ||
         ((*(ushort *)((*puVar4 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*puVar4 - 1)) >> 3 & 1)
          == 0)) {
        iVar3 = -iVar2;
        if (-1 < iVar2) {
          iVar3 = iVar2;
        }
        puVar8 = (undefined8 *)v8::internal::Factory::NewRawTwoByteString(param_2,iVar3,0);
        iVar2 = iVar3;
      }
      else {
        puVar8 = (undefined8 *)v8::internal::Factory::NewRawOneByteString(param_2,iVar2,0);
      }
      if (puVar8 == (undefined8 *)0x0) {
        uVar5 = *(ulong *)(param_2 + 0x180);
      }
      else {
        uVar5 = FUN_014d64fc(param_2,*puVar4,*puVar8,iVar2,param_3);
      }
    }
  }
  return uVar5;
}

