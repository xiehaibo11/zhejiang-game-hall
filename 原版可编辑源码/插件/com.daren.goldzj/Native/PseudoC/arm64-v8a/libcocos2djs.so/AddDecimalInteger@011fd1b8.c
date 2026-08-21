
/* v8::internal::SimpleStringBuilder::AddDecimalInteger(int) */

void __thiscall
v8::internal::SimpleStringBuilder::AddDecimalInteger(SimpleStringBuilder *this,int param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  
  if (param_1 < 0) {
    iVar2 = *(int *)(this + 0x10);
    param_1 = -param_1;
    *(int *)(this + 0x10) = iVar2 + 1;
    *(undefined1 *)(*(long *)this + (long)iVar2) = 0x2d;
  }
  uVar6 = 1;
  if (9 < (uint)param_1) {
    uVar4 = 10;
    uVar5 = uVar6;
    do {
      uVar6 = uVar5 + 1;
      if (8 < uVar5) break;
      uVar4 = uVar4 * 10;
      uVar5 = uVar6;
    } while (uVar4 <= (uint)param_1);
  }
  iVar2 = *(int *)(this + 0x10);
  *(int *)(this + 0x10) = (int)((long)iVar2 + (long)(int)uVar6);
  *(byte *)((long)iVar2 + (long)(int)uVar6 + *(long *)this + -1) =
       (char)param_1 + (char)((uint)param_1 / 10) * -10 | 0x30;
  if (uVar6 != 1) {
    lVar7 = 0;
    uVar3 = (ulong)(uint)param_1;
    do {
      lVar1 = *(long *)this + (long)*(int *)(this + 0x10) + lVar7;
      lVar7 = lVar7 + -1;
      *(byte *)(lVar1 + -2) = (char)(uVar3 / 10) + (char)((uVar3 / 10) / 10) * -10 | 0x30;
      uVar3 = uVar3 / 10;
    } while (1 - uVar6 != (int)lVar7);
  }
  return;
}

