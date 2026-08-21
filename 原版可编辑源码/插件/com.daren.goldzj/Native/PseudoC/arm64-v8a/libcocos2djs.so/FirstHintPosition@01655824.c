
/* v8::internal::compiler::LiveRange::FirstHintPosition(int*) const */

void __thiscall v8::internal::compiler::LiveRange::FirstHintPosition(LiveRange *this,int *param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  
  lVar2 = *(long *)(this + 0x18);
  if (lVar2 == 0) {
    return;
  }
  puVar3 = *(undefined8 **)(lVar2 + 8);
  if (puVar3 != (undefined8 *)0x0) goto LAB_01655864;
switchD_01655884_caseD_0:
  do {
    lVar2 = *(long *)(lVar2 + 0x10);
    if (lVar2 == 0) {
      return;
    }
    puVar3 = *(undefined8 **)(lVar2 + 8);
  } while (puVar3 == (undefined8 *)0x0);
LAB_01655864:
  switch(*(uint *)(lVar2 + 0x1c) >> 2 & 7) {
  case 0:
  case 4:
    goto switchD_01655884_caseD_0;
  case 1:
    goto switchD_01655884_caseD_1;
  case 2:
    uVar1 = *(uint *)((long)puVar3 + 0x1c) >> 6 & 0x3f;
    break;
  case 3:
    uVar1 = *(uint *)(puVar3 + 6);
    break;
  default:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
  if (uVar1 != 0x20) {
    *param_1 = uVar1;
    return;
  }
  goto switchD_01655884_caseD_0;
switchD_01655884_caseD_1:
  *param_1 = (int)((long)*puVar3 >> 0x23);
  return;
}

