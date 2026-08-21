
/* v8::internal::GlobalHandles::RecordStats(v8::internal::HeapStats*) */

void __thiscall v8::internal::GlobalHandles::RecordStats(GlobalHandles *this,HeapStats *param_1)

{
  long lVar1;
  ulong uVar2;
  HeapStats *pHVar3;
  
  **(undefined8 **)(param_1 + 0x68) = 0;
  **(undefined8 **)(param_1 + 0x70) = 0;
  **(undefined8 **)(param_1 + 0x78) = 0;
  **(undefined8 **)(param_1 + 0x80) = 0;
  **(undefined8 **)(param_1 + 0x88) = 0;
  lVar1 = *(long *)(*(long *)(this + 8) + 0x10);
  if (lVar1 != 0) {
    uVar2 = 0;
    do {
      **(long **)(param_1 + 0x68) = **(long **)(param_1 + 0x68) + 1;
      pHVar3 = param_1 + 0x70;
      switch(*(byte *)(lVar1 + uVar2 * 0x20 + 0xb) & 7) {
      case 0:
        pHVar3 = param_1 + 0x88;
        break;
      default:
        goto switchD_00f68860_caseD_1;
      case 2:
        break;
      case 3:
        pHVar3 = param_1 + 0x78;
        break;
      case 4:
        pHVar3 = param_1 + 0x80;
      }
      **(long **)pHVar3 = **(long **)pHVar3 + 1;
switchD_00f68860_caseD_1:
      uVar2 = uVar2 + 1;
      if (0xff < uVar2) {
        lVar1 = *(long *)(lVar1 + 0x2018);
        uVar2 = 0;
      }
    } while (lVar1 != 0);
  }
  return;
}

