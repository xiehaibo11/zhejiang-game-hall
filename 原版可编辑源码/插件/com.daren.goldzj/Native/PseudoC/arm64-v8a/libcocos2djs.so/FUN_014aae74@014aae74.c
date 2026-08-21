
void FUN_014aae74(Isolate *param_1,ulong *param_2,int *param_3,int param_4,int param_5)

{
  undefined8 uVar1;
  byte bVar2;
  int iVar3;
  byte bVar4;
  long lVar5;
  ulong uVar6;
  
  iVar3 = *param_3 + -4;
  if ((param_4 < iVar3) &&
     (bVar2 = *(byte *)((*param_2 & 0xffffffff00000000 | 10) + (ulong)*(uint *)(*param_2 - 1)),
     (bVar2 & 0xf0) != 0x10)) {
    if (param_5 + param_4 <= iVar3) {
      iVar3 = param_5 + param_4;
    }
    if (param_4 < iVar3) {
      bVar2 = bVar2 >> 3;
      lVar5 = (long)param_4;
      param_4 = param_4 << 3;
      bVar4 = bVar2;
      do {
        uVar6 = *(ulong *)(*(long *)(param_3 + 2) - (long)param_4);
        if ((uVar6 & 1) != 0) {
          if (*(short *)((uVar6 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar6 - 1)) != 0x42) {
            bVar4 = 2;
            break;
          }
          bVar4 = 4;
        }
        lVar5 = lVar5 + 1;
        param_4 = param_4 + 8;
      } while (lVar5 < iVar3);
      if (bVar2 != bVar4) {
        uVar1 = *(undefined8 *)(param_1 + 0x95a0);
        lVar5 = *(long *)(param_1 + 0x95a8);
        *(int *)(param_1 + 0x95b0) = *(int *)(param_1 + 0x95b0) + 1;
        v8::internal::JSObject::TransitionElementsKind(param_2,bVar4);
        if (param_1 != (Isolate *)0x0) {
          *(undefined8 *)(param_1 + 0x95a0) = uVar1;
          *(int *)(param_1 + 0x95b0) = *(int *)(param_1 + 0x95b0) + -1;
          if (*(long *)(param_1 + 0x95a8) != lVar5) {
            *(long *)(param_1 + 0x95a8) = lVar5;
            v8::internal::HandleScope::DeleteExtensions(param_1);
            return;
          }
        }
      }
    }
  }
  return;
}

