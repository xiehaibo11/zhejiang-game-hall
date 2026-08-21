
/* std::__ndk1::vector<v8::internal::compiler::PushParameter,
   v8::internal::ZoneAllocator<v8::internal::compiler::PushParameter> >::__append(unsigned long) */

void __thiscall
std::__ndk1::
vector<v8::internal::compiler::PushParameter,v8::internal::ZoneAllocator<v8::internal::compiler::PushParameter>>
::__append(vector<v8::internal::compiler::PushParameter,v8::internal::ZoneAllocator<v8::internal::compiler::PushParameter>>
           *this,ulong param_1)

{
  ulong uVar1;
  Zone *this_00;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 *puVar5;
  
  puVar2 = *(undefined8 **)(this + 8);
  if ((ulong)(*(long *)(this + 0x10) - (long)puVar2 >> 4) < param_1) {
    lVar8 = (long)puVar2 - *(long *)this >> 4;
    uVar1 = lVar8 + param_1;
    if (uVar1 >> 0x1b != 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar3 = *(long *)(this + 0x10) - *(long *)this;
    uVar6 = lVar3 >> 3;
    if (uVar1 <= uVar6) {
      uVar1 = uVar6;
    }
    if (0x3fffffe < (ulong)(lVar3 >> 4)) {
      uVar1 = 0x7ffffff;
    }
    if (uVar1 == 0) {
      lVar3 = 0;
    }
    else {
      this_00 = *(Zone **)(this + 0x18);
      uVar6 = uVar1 * 0x10;
      lVar3 = *(long *)(this_00 + 0x10);
      if (uVar6 < (ulong)(*(long *)(this_00 + 0x18) - lVar3) ||
          uVar6 - (*(long *)(this_00 + 0x18) - lVar3) == 0) {
        *(ulong *)(this_00 + 0x10) = lVar3 + uVar6;
      }
      else {
        lVar3 = v8::internal::Zone::NewExpand(this_00,uVar6);
      }
    }
    puVar2 = (undefined8 *)(lVar3 + lVar8 * 0x10);
    puVar4 = puVar2;
    do {
      puVar5 = puVar4 + 2;
      *puVar4 = 0;
      puVar4[1] = 0xfffffffe;
      param_1 = param_1 - 1;
      puVar4 = puVar5;
    } while (param_1 != 0);
    lVar8 = *(long *)this;
    for (lVar7 = *(long *)(this + 8); lVar7 != lVar8; lVar7 = lVar7 + -0x10) {
      uVar9 = *(undefined8 *)(lVar7 + -0x10);
      puVar2[-1] = *(undefined8 *)(lVar7 + -8);
      puVar2[-2] = uVar9;
      puVar2 = puVar2 + -2;
    }
    *(undefined8 **)this = puVar2;
    *(undefined8 **)(this + 8) = puVar5;
    *(ulong *)(this + 0x10) = lVar3 + uVar1 * 0x10;
  }
  else {
    do {
      *puVar2 = 0;
      puVar2[1] = 0xfffffffe;
      param_1 = param_1 - 1;
      puVar2 = (undefined8 *)(*(long *)(this + 8) + 0x10);
      *(undefined8 **)(this + 8) = puVar2;
    } while (param_1 != 0);
  }
  return;
}

