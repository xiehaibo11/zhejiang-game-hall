
/* v8::internal::TranslatedState::CreateNextTranslatedFrame(v8::internal::TranslationIterator*,
   v8::internal::FixedArray, unsigned long, __sFILE*) */

void v8::internal::TranslatedState::CreateNextTranslatedFrame
               (undefined8 *param_1,undefined8 param_2,long *param_3,ulong param_4,
               undefined8 param_5,__sFILE *param_6)

{
  uint uVar1;
  byte bVar2;
  void *pvVar3;
  undefined4 uVar4;
  uint *puVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  byte *pbVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  undefined8 local_58;
  void *local_50;
  ulong local_48;
  
  puVar5 = (uint *)(param_3 + 1);
  uVar7 = (ulong)(int)*puVar5;
  lVar8 = *param_3;
  uVar11 = 0;
  uVar9 = 0;
  pbVar10 = (byte *)(lVar8 + uVar7 + 7);
  do {
    uVar14 = (int)uVar7 + 1;
    uVar7 = (ulong)uVar14;
    *puVar5 = uVar14;
    bVar2 = *pbVar10;
    uVar9 = (uint)(bVar2 >> 1) << (ulong)(uVar11 & 0x1f) | uVar9;
    uVar11 = uVar11 + 7;
    pbVar10 = pbVar10 + 1;
  } while ((bVar2 & 1) != 0);
  uVar11 = -(uVar9 >> 1);
  if ((uVar9 & 1) == 0) {
    uVar11 = uVar9 >> 1;
  }
  switch(uVar11) {
  case 1:
    uVar11 = 0;
    uVar9 = 0;
    pbVar10 = (byte *)(lVar8 + (int)uVar14 + 7);
    do {
      uVar14 = (int)uVar7 + 1;
      uVar7 = (ulong)uVar14;
      *puVar5 = uVar14;
      bVar2 = *pbVar10;
      uVar9 = (uint)(bVar2 >> 1) << (ulong)(uVar11 & 0x1f) | uVar9;
      uVar11 = uVar11 + 7;
      pbVar10 = pbVar10 + 1;
    } while ((bVar2 & 1) != 0);
    uVar11 = 0;
    uVar13 = 0;
    pbVar10 = (byte *)(lVar8 + (int)uVar14 + 7);
    do {
      uVar14 = (int)uVar7 + 1;
      uVar7 = (ulong)uVar14;
      *puVar5 = uVar14;
      bVar2 = *pbVar10;
      uVar13 = (uint)(bVar2 >> 1) << (ulong)(uVar11 & 0x1f) | uVar13;
      uVar11 = uVar11 + 7;
      pbVar10 = pbVar10 + 1;
    } while ((bVar2 & 1) != 0);
    uVar11 = uVar9 >> 1;
    if ((uVar9 & 1) != 0) {
      uVar11 = -(uVar9 >> 1);
    }
    uVar9 = -(uVar13 >> 1);
    if ((uVar13 & 1) == 0) {
      uVar9 = uVar13 >> 1;
    }
    uVar13 = 0;
    uVar12 = 0;
    local_48 = param_4 & 0xffffffff00000000 |
               (ulong)*(uint *)(param_4 + (long)(int)(uVar9 << 2) + 7);
    pbVar10 = (byte *)(lVar8 + (int)uVar14 + 7);
    do {
      uVar9 = (int)uVar7 + 1;
      uVar7 = (ulong)uVar9;
      *puVar5 = uVar9;
      bVar2 = *pbVar10;
      uVar12 = (uint)(bVar2 >> 1) << (ulong)(uVar13 & 0x1f) | uVar12;
      uVar13 = uVar13 + 7;
      pbVar10 = pbVar10 + 1;
    } while ((bVar2 & 1) != 0);
    uVar14 = 0;
    uVar13 = 0;
    pbVar10 = (byte *)(lVar8 + (int)uVar9 + 7);
    do {
      iVar6 = (int)uVar7;
      uVar9 = iVar6 + 1;
      uVar7 = (ulong)uVar9;
      *puVar5 = uVar9;
      bVar2 = *pbVar10;
      uVar13 = (uint)(bVar2 >> 1) << (ulong)(uVar14 & 0x1f) | uVar13;
      uVar14 = uVar14 + 7;
      pbVar10 = pbVar10 + 1;
    } while ((bVar2 & 1) != 0);
    uVar14 = 0;
    uVar15 = 0;
    uVar1 = uVar12 >> 1;
    if ((uVar12 & 1) != 0) {
      uVar1 = -(uVar12 >> 1);
    }
    uVar12 = iVar6 + 2;
    pbVar10 = (byte *)(lVar8 + (int)uVar9 + 7);
    do {
      *puVar5 = uVar12;
      bVar2 = *pbVar10;
      uVar12 = uVar12 + 1;
      uVar9 = uVar14 & 0x1f;
      uVar14 = uVar14 + 7;
      uVar15 = (uint)(bVar2 >> 1) << (ulong)uVar9 | uVar15;
      pbVar10 = pbVar10 + 1;
    } while ((bVar2 & 1) != 0);
    uVar9 = uVar13 >> 1;
    if ((uVar13 & 1) != 0) {
      uVar9 = -(uVar13 >> 1);
    }
    uVar14 = -(uVar15 >> 1);
    if ((uVar15 & 1) == 0) {
      uVar14 = uVar15 >> 1;
    }
    if (param_6 != (__sFILE *)0x0) {
      local_58 = SharedFunctionInfo::DebugName((SharedFunctionInfo *)&local_48);
      String::ToCString(&local_50,&local_58,1,1,0);
      PrintF(param_6,"  reading input frame %s",local_50);
      PrintF(param_6," => bytecode_offset=%d, args=%d, height=%d, retval=%i(#%i); inputs:\n",
             (ulong)uVar11,(ulong)(*(ushort *)(local_48 + 0x15) + 1 & 0xffff),(ulong)uVar1,
             (ulong)uVar9,(ulong)uVar14);
      pvVar3 = local_50;
      local_50 = (void *)0x0;
      if (pvVar3 != (void *)0x0) {
        operator_delete__(pvVar3);
      }
    }
    param_1[1] = local_48;
    param_1[2] = 0;
    *(uint *)(param_1 + 3) = uVar1;
    *(uint *)((long)param_1 + 0x1c) = uVar9;
    *(uint *)(param_1 + 4) = uVar14;
    param_1[6] = 0;
    param_1[5] = 0;
    param_1[8] = 0;
    param_1[7] = 0;
    param_1[10] = 0;
    param_1[9] = 0;
    *(undefined4 *)param_1 = 0;
    *(uint *)((long)param_1 + 4) = uVar11;
    return;
  case 2:
    uVar11 = 0;
    uVar9 = 0;
    pbVar10 = (byte *)(lVar8 + (int)uVar14 + 7);
    do {
      uVar14 = (int)uVar7 + 1;
      uVar7 = (ulong)uVar14;
      *puVar5 = uVar14;
      bVar2 = *pbVar10;
      uVar9 = (uint)(bVar2 >> 1) << (ulong)(uVar11 & 0x1f) | uVar9;
      uVar11 = uVar11 + 7;
      pbVar10 = pbVar10 + 1;
    } while ((bVar2 & 1) != 0);
    uVar11 = 0;
    uVar13 = 0;
    pbVar10 = (byte *)(lVar8 + (int)uVar14 + 7);
    do {
      iVar6 = (int)uVar7;
      uVar14 = iVar6 + 1;
      uVar7 = (ulong)uVar14;
      *puVar5 = uVar14;
      bVar2 = *pbVar10;
      uVar13 = (uint)(bVar2 >> 1) << (ulong)(uVar11 & 0x1f) | uVar13;
      uVar11 = uVar11 + 7;
      pbVar10 = pbVar10 + 1;
    } while ((bVar2 & 1) != 0);
    uVar11 = uVar9 >> 1;
    if ((uVar9 & 1) != 0) {
      uVar11 = -(uVar9 >> 1);
    }
    uVar9 = -(uVar13 >> 1);
    if ((uVar13 & 1) == 0) {
      uVar9 = uVar13 >> 1;
    }
    uVar13 = 0;
    uVar12 = 0;
    local_48 = param_4 & 0xffffffff00000000 |
               (ulong)*(uint *)(param_4 + (long)(int)(uVar9 << 2) + 7);
    uVar9 = iVar6 + 2;
    pbVar10 = (byte *)(lVar8 + (int)uVar14 + 7);
    do {
      *puVar5 = uVar9;
      bVar2 = *pbVar10;
      uVar9 = uVar9 + 1;
      uVar14 = uVar13 & 0x1f;
      uVar13 = uVar13 + 7;
      uVar12 = (uint)(bVar2 >> 1) << (ulong)uVar14 | uVar12;
      pbVar10 = pbVar10 + 1;
    } while ((bVar2 & 1) != 0);
    uVar9 = -(uVar12 >> 1);
    if ((uVar12 & 1) == 0) {
      uVar9 = uVar12 >> 1;
    }
    if (param_6 != (__sFILE *)0x0) {
      local_58 = SharedFunctionInfo::DebugName((SharedFunctionInfo *)&local_48);
      String::ToCString(&local_50,&local_58,1,1,0);
      PrintF(param_6,"  reading builtin continuation frame %s",local_50);
      PrintF(param_6," => bailout_id=%d, height=%d; inputs:\n",(ulong)uVar11,(ulong)uVar9);
      pvVar3 = local_50;
      local_50 = (void *)0x0;
      if (pvVar3 != (void *)0x0) {
        operator_delete__(pvVar3);
      }
    }
    uVar4 = 3;
    break;
  case 3:
    uVar11 = 0;
    uVar9 = 0;
    pbVar10 = (byte *)(lVar8 + (int)uVar14 + 7);
    do {
      uVar14 = (int)uVar7 + 1;
      uVar7 = (ulong)uVar14;
      *puVar5 = uVar14;
      bVar2 = *pbVar10;
      uVar9 = (uint)(bVar2 >> 1) << (ulong)(uVar11 & 0x1f) | uVar9;
      uVar11 = uVar11 + 7;
      pbVar10 = pbVar10 + 1;
    } while ((bVar2 & 1) != 0);
    uVar11 = 0;
    uVar13 = 0;
    pbVar10 = (byte *)(lVar8 + (int)uVar14 + 7);
    do {
      iVar6 = (int)uVar7;
      uVar14 = iVar6 + 1;
      uVar7 = (ulong)uVar14;
      *puVar5 = uVar14;
      bVar2 = *pbVar10;
      uVar13 = (uint)(bVar2 >> 1) << (ulong)(uVar11 & 0x1f) | uVar13;
      uVar11 = uVar11 + 7;
      pbVar10 = pbVar10 + 1;
    } while ((bVar2 & 1) != 0);
    uVar11 = uVar9 >> 1;
    if ((uVar9 & 1) != 0) {
      uVar11 = -(uVar9 >> 1);
    }
    uVar9 = -(uVar13 >> 1);
    if ((uVar13 & 1) == 0) {
      uVar9 = uVar13 >> 1;
    }
    uVar13 = 0;
    uVar12 = 0;
    local_48 = param_4 & 0xffffffff00000000 |
               (ulong)*(uint *)(param_4 + (long)(int)(uVar9 << 2) + 7);
    uVar9 = iVar6 + 2;
    pbVar10 = (byte *)(lVar8 + (int)uVar14 + 7);
    do {
      *puVar5 = uVar9;
      bVar2 = *pbVar10;
      uVar9 = uVar9 + 1;
      uVar14 = uVar13 & 0x1f;
      uVar13 = uVar13 + 7;
      uVar12 = (uint)(bVar2 >> 1) << (ulong)uVar14 | uVar12;
      pbVar10 = pbVar10 + 1;
    } while ((bVar2 & 1) != 0);
    uVar9 = -(uVar12 >> 1);
    if ((uVar12 & 1) == 0) {
      uVar9 = uVar12 >> 1;
    }
    if (param_6 != (__sFILE *)0x0) {
      local_58 = SharedFunctionInfo::DebugName((SharedFunctionInfo *)&local_48);
      String::ToCString(&local_50,&local_58,1,1,0);
      PrintF(param_6,"  reading JavaScript builtin continuation frame %s",local_50);
      PrintF(param_6," => bailout_id=%d, height=%d; inputs:\n",(ulong)uVar11,(ulong)uVar9);
      pvVar3 = local_50;
      local_50 = (void *)0x0;
      if (pvVar3 != (void *)0x0) {
        operator_delete__(pvVar3);
      }
    }
    uVar4 = 4;
    break;
  case 4:
    uVar11 = 0;
    uVar9 = 0;
    pbVar10 = (byte *)(lVar8 + (int)uVar14 + 7);
    do {
      uVar14 = (int)uVar7 + 1;
      uVar7 = (ulong)uVar14;
      *puVar5 = uVar14;
      bVar2 = *pbVar10;
      uVar9 = (uint)(bVar2 >> 1) << (ulong)(uVar11 & 0x1f) | uVar9;
      uVar11 = uVar11 + 7;
      pbVar10 = pbVar10 + 1;
    } while ((bVar2 & 1) != 0);
    uVar11 = 0;
    uVar13 = 0;
    pbVar10 = (byte *)(lVar8 + (int)uVar14 + 7);
    do {
      iVar6 = (int)uVar7;
      uVar14 = iVar6 + 1;
      uVar7 = (ulong)uVar14;
      *puVar5 = uVar14;
      bVar2 = *pbVar10;
      uVar13 = (uint)(bVar2 >> 1) << (ulong)(uVar11 & 0x1f) | uVar13;
      uVar11 = uVar11 + 7;
      pbVar10 = pbVar10 + 1;
    } while ((bVar2 & 1) != 0);
    uVar11 = uVar9 >> 1;
    if ((uVar9 & 1) != 0) {
      uVar11 = -(uVar9 >> 1);
    }
    uVar9 = -(uVar13 >> 1);
    if ((uVar13 & 1) == 0) {
      uVar9 = uVar13 >> 1;
    }
    uVar13 = 0;
    uVar12 = 0;
    local_48 = param_4 & 0xffffffff00000000 |
               (ulong)*(uint *)(param_4 + (long)(int)(uVar9 << 2) + 7);
    uVar9 = iVar6 + 2;
    pbVar10 = (byte *)(lVar8 + (int)uVar14 + 7);
    do {
      *puVar5 = uVar9;
      bVar2 = *pbVar10;
      uVar9 = uVar9 + 1;
      uVar14 = uVar13 & 0x1f;
      uVar13 = uVar13 + 7;
      uVar12 = (uint)(bVar2 >> 1) << (ulong)uVar14 | uVar12;
      pbVar10 = pbVar10 + 1;
    } while ((bVar2 & 1) != 0);
    uVar9 = -(uVar12 >> 1);
    if ((uVar12 & 1) == 0) {
      uVar9 = uVar12 >> 1;
    }
    if (param_6 != (__sFILE *)0x0) {
      local_58 = SharedFunctionInfo::DebugName((SharedFunctionInfo *)&local_48);
      String::ToCString(&local_50,&local_58,1,1,0);
      PrintF(param_6,"  reading JavaScript builtin continuation frame with catch %s",local_50);
      PrintF(param_6," => bailout_id=%d, height=%d; inputs:\n",(ulong)uVar11,(ulong)uVar9);
      pvVar3 = local_50;
      local_50 = (void *)0x0;
      if (pvVar3 != (void *)0x0) {
        operator_delete__(pvVar3);
      }
    }
    uVar4 = 5;
    break;
  case 5:
    uVar11 = 0;
    uVar9 = 0;
    pbVar10 = (byte *)(lVar8 + (int)uVar14 + 7);
    do {
      uVar14 = (int)uVar7 + 1;
      uVar7 = (ulong)uVar14;
      *puVar5 = uVar14;
      bVar2 = *pbVar10;
      uVar9 = (uint)(bVar2 >> 1) << (ulong)(uVar11 & 0x1f) | uVar9;
      uVar11 = uVar11 + 7;
      pbVar10 = pbVar10 + 1;
    } while ((bVar2 & 1) != 0);
    uVar11 = 0;
    uVar13 = 0;
    pbVar10 = (byte *)(lVar8 + (int)uVar14 + 7);
    do {
      iVar6 = (int)uVar7;
      uVar14 = iVar6 + 1;
      uVar7 = (ulong)uVar14;
      *puVar5 = uVar14;
      bVar2 = *pbVar10;
      uVar13 = (uint)(bVar2 >> 1) << (ulong)(uVar11 & 0x1f) | uVar13;
      uVar11 = uVar11 + 7;
      pbVar10 = pbVar10 + 1;
    } while ((bVar2 & 1) != 0);
    uVar11 = uVar9 >> 1;
    if ((uVar9 & 1) != 0) {
      uVar11 = -(uVar9 >> 1);
    }
    uVar9 = -(uVar13 >> 1);
    if ((uVar13 & 1) == 0) {
      uVar9 = uVar13 >> 1;
    }
    uVar13 = 0;
    uVar12 = 0;
    local_48 = param_4 & 0xffffffff00000000 |
               (ulong)*(uint *)(param_4 + (long)(int)(uVar9 << 2) + 7);
    uVar9 = iVar6 + 2;
    pbVar10 = (byte *)(lVar8 + (int)uVar14 + 7);
    do {
      *puVar5 = uVar9;
      bVar2 = *pbVar10;
      uVar9 = uVar9 + 1;
      uVar14 = uVar13 & 0x1f;
      uVar13 = uVar13 + 7;
      uVar12 = (uint)(bVar2 >> 1) << (ulong)uVar14 | uVar12;
      pbVar10 = pbVar10 + 1;
    } while ((bVar2 & 1) != 0);
    uVar9 = -(uVar12 >> 1);
    if ((uVar12 & 1) == 0) {
      uVar9 = uVar12 >> 1;
    }
    if (param_6 != (__sFILE *)0x0) {
      local_58 = SharedFunctionInfo::DebugName((SharedFunctionInfo *)&local_48);
      String::ToCString(&local_50,&local_58,1,1,0);
      PrintF(param_6,"  reading construct stub frame %s",local_50);
      PrintF(param_6," => bailout_id=%d, height=%d; inputs:\n",(ulong)uVar11,(ulong)uVar9);
      pvVar3 = local_50;
      local_50 = (void *)0x0;
      if (pvVar3 != (void *)0x0) {
        operator_delete__(pvVar3);
      }
    }
    uVar4 = 2;
    break;
  case 6:
    uVar11 = 0;
    uVar9 = 0;
    pbVar10 = (byte *)(lVar8 + (int)uVar14 + 7);
    do {
      iVar6 = (int)uVar7;
      uVar14 = iVar6 + 1;
      uVar7 = (ulong)uVar14;
      *puVar5 = uVar14;
      bVar2 = *pbVar10;
      uVar9 = (uint)(bVar2 >> 1) << (ulong)(uVar11 & 0x1f) | uVar9;
      uVar11 = uVar11 + 7;
      pbVar10 = pbVar10 + 1;
    } while ((bVar2 & 1) != 0);
    uVar11 = -(uVar9 >> 1);
    if ((uVar9 & 1) == 0) {
      uVar11 = uVar9 >> 1;
    }
    uVar9 = 0;
    uVar13 = 0;
    local_48 = param_4 & 0xffffffff00000000 |
               (ulong)*(uint *)(param_4 + (long)(int)(uVar11 << 2) + 7);
    uVar11 = iVar6 + 2;
    pbVar10 = (byte *)(lVar8 + (int)uVar14 + 7);
    do {
      *puVar5 = uVar11;
      bVar2 = *pbVar10;
      uVar11 = uVar11 + 1;
      uVar14 = uVar9 & 0x1f;
      uVar9 = uVar9 + 7;
      uVar13 = (uint)(bVar2 >> 1) << (ulong)uVar14 | uVar13;
      pbVar10 = pbVar10 + 1;
    } while ((bVar2 & 1) != 0);
    uVar11 = -(uVar13 >> 1);
    if ((uVar13 & 1) == 0) {
      uVar11 = uVar13 >> 1;
    }
    if (param_6 != (__sFILE *)0x0) {
      local_58 = SharedFunctionInfo::DebugName((SharedFunctionInfo *)&local_48);
      String::ToCString(&local_50,&local_58,1,1,0);
      PrintF(param_6,"  reading arguments adaptor frame %s",local_50);
      PrintF(param_6," => height=%d; inputs:\n",(ulong)uVar11);
      pvVar3 = local_50;
      local_50 = (void *)0x0;
      if (pvVar3 != (void *)0x0) {
        operator_delete__(pvVar3);
      }
    }
    param_1[1] = local_48;
    param_1[2] = 0;
    *(undefined4 *)((long)param_1 + 0x1c) = 0;
    *(undefined4 *)(param_1 + 4) = 0;
    *(uint *)(param_1 + 3) = uVar11;
    param_1[6] = 0;
    param_1[5] = 0;
    param_1[8] = 0;
    param_1[7] = 0;
    *param_1 = 0xffffffff00000001;
    param_1[10] = 0;
    param_1[9] = 0;
    return;
  default:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("We should never get here - unexpected deopt info.");
  }
  param_1[1] = local_48;
  param_1[2] = 0;
  *(undefined4 *)((long)param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(uint *)(param_1 + 3) = uVar9;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  *(undefined4 *)param_1 = uVar4;
  *(uint *)((long)param_1 + 4) = uVar11;
  return;
}

