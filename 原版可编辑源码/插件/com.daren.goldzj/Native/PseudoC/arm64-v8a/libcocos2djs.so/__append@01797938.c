
/* std::__ndk1::vector<v8::internal::compiler::NodeOrigin,
   v8::internal::ZoneAllocator<v8::internal::compiler::NodeOrigin> >::__append(unsigned long,
   v8::internal::compiler::NodeOrigin const&) */

void __thiscall
std::__ndk1::
vector<v8::internal::compiler::NodeOrigin,v8::internal::ZoneAllocator<v8::internal::compiler::NodeOrigin>>
::__append(vector<v8::internal::compiler::NodeOrigin,v8::internal::ZoneAllocator<v8::internal::compiler::NodeOrigin>>
           *this,ulong param_1,NodeOrigin *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  Zone *this_00;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  puVar3 = *(undefined8 **)(this + 8);
  if ((ulong)(*(long *)(this + 0x10) - (long)puVar3 >> 5) < param_1) {
    lVar8 = (long)puVar3 - *(long *)this >> 5;
    uVar1 = lVar8 + param_1;
    if (uVar1 >> 0x1a != 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar4 = *(long *)(this + 0x10) - *(long *)this;
    uVar7 = lVar4 >> 4;
    if (uVar1 <= uVar7) {
      uVar1 = uVar7;
    }
    if (0x1fffffe < (ulong)(lVar4 >> 5)) {
      uVar1 = 0x3ffffff;
    }
    if (uVar1 == 0) {
      lVar4 = 0;
    }
    else {
      this_00 = *(Zone **)(this + 0x18);
      uVar7 = uVar1 * 0x20;
      lVar4 = *(long *)(this_00 + 0x10);
      if (uVar7 < (ulong)(*(long *)(this_00 + 0x18) - lVar4) ||
          uVar7 - (*(long *)(this_00 + 0x18) - lVar4) == 0) {
        *(ulong *)(this_00 + 0x10) = lVar4 + uVar7;
      }
      else {
        lVar4 = v8::internal::Zone::NewExpand(this_00,uVar7);
      }
    }
    puVar3 = (undefined8 *)(lVar4 + lVar8 * 0x20);
    puVar5 = puVar3;
    do {
      uVar9 = *(undefined8 *)param_2;
      uVar11 = *(undefined8 *)(param_2 + 0x18);
      uVar10 = *(undefined8 *)(param_2 + 0x10);
      param_1 = param_1 - 1;
      puVar6 = puVar5 + 4;
      puVar5[1] = *(undefined8 *)(param_2 + 8);
      *puVar5 = uVar9;
      puVar5[3] = uVar11;
      puVar5[2] = uVar10;
      puVar5 = puVar6;
    } while (param_1 != 0);
    puVar5 = *(undefined8 **)this;
    puVar2 = *(undefined8 **)(this + 8);
    while (puVar2 != puVar5) {
      uVar9 = puVar2[-4];
      uVar11 = puVar2[-1];
      uVar10 = puVar2[-2];
      puVar3[-3] = puVar2[-3];
      puVar3[-4] = uVar9;
      puVar3[-1] = uVar11;
      puVar3[-2] = uVar10;
      puVar3 = puVar3 + -4;
      puVar2 = puVar2 + -4;
    }
    *(undefined8 **)this = puVar3;
    *(undefined8 **)(this + 8) = puVar6;
    *(ulong *)(this + 0x10) = lVar4 + uVar1 * 0x20;
  }
  else {
    do {
      uVar9 = *(undefined8 *)param_2;
      uVar11 = *(undefined8 *)(param_2 + 0x18);
      uVar10 = *(undefined8 *)(param_2 + 0x10);
      param_1 = param_1 - 1;
      puVar3[1] = *(undefined8 *)(param_2 + 8);
      *puVar3 = uVar9;
      puVar3[3] = uVar11;
      puVar3[2] = uVar10;
      puVar3 = (undefined8 *)(*(long *)(this + 8) + 0x20);
      *(undefined8 **)(this + 8) = puVar3;
    } while (param_1 != 0);
  }
  return;
}

