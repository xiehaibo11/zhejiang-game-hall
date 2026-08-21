
void FUN_010951a0(long param_1,long param_2,int param_3,long param_4,undefined1 param_5,int param_6,
                 uint param_7)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 *puVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  
  switch(param_5) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
    break;
  case 4:
  case 5:
    FUN_0108232c();
    return;
  case 0xc:
    FUN_01082628();
    return;
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  default:
    goto switchD_010951cc_default;
  }
  if ((int)param_7 < 0) {
    iVar2 = *(int *)(param_4 + 3) >> 1;
    param_7 = (*(int *)(param_2 + 3) >> 1) - param_3;
    uVar4 = iVar2 - param_6;
    if (uVar4 <= param_7) {
      param_7 = uVar4;
    }
    uVar4 = iVar2 - (param_7 + param_6);
    if (0 < (int)uVar4) {
      uVar3 = *(undefined4 *)(param_1 + 0xa8);
      lVar1 = param_4 + (int)((param_7 + param_6) * 4);
      uVar6 = (ulong)uVar4;
      if (uVar4 < 8) {
        uVar8 = 0;
      }
      else {
        uVar8 = uVar6 & 0xfffffff8;
        puVar9 = (undefined8 *)(lVar1 + 0x17);
        uVar10 = uVar8;
        do {
          puVar9[-1] = CONCAT44(uVar3,uVar3);
          puVar9[-2] = CONCAT44(uVar3,uVar3);
          puVar9[1] = CONCAT44(uVar3,uVar3);
          *puVar9 = CONCAT44(uVar3,uVar3);
          uVar10 = uVar10 - 8;
          puVar9 = puVar9 + 4;
        } while (uVar10 != 0);
        if (uVar8 == uVar6) goto LAB_01095274;
      }
      lVar7 = uVar6 - uVar8;
      puVar5 = (undefined4 *)(lVar1 + 7 + uVar8 * 4);
      do {
        lVar7 = lVar7 + -1;
        *puVar5 = uVar3;
        puVar5 = puVar5 + 1;
      } while (lVar7 != 0);
    }
  }
LAB_01095274:
  if (param_7 != 0) {
    v8::internal::Heap::CopyRange<v8::internal::CompressedObjectSlot>
              ((Heap *)(param_1 + 0x8850),param_4,param_4 + (param_6 << 2) + 7,
               param_2 + (param_3 << 2) + 7,param_7,0);
    return;
  }
switchD_010951cc_default:
  return;
}

