
/* std::__ndk1::vector<v8::internal::interpreter::BytecodeLabel,
   v8::internal::ZoneAllocator<v8::internal::interpreter::BytecodeLabel> >::__append(unsigned long)
    */

void __thiscall
std::__ndk1::
vector<v8::internal::interpreter::BytecodeLabel,v8::internal::ZoneAllocator<v8::internal::interpreter::BytecodeLabel>>
::__append(vector<v8::internal::interpreter::BytecodeLabel,v8::internal::ZoneAllocator<v8::internal::interpreter::BytecodeLabel>>
           *this,ulong param_1)

{
  ulong uVar1;
  undefined1 *puVar2;
  Zone *this_00;
  undefined1 *puVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  
  puVar3 = *(undefined1 **)(this + 8);
  if ((ulong)(*(long *)(this + 0x10) - (long)puVar3 >> 4) < param_1) {
    lVar7 = (long)puVar3 - *(long *)this >> 4;
    uVar1 = lVar7 + param_1;
    if (uVar1 >> 0x1b != 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar4 = *(long *)(this + 0x10) - *(long *)this;
    uVar5 = lVar4 >> 3;
    if (uVar1 <= uVar5) {
      uVar1 = uVar5;
    }
    if (0x3fffffe < (ulong)(lVar4 >> 4)) {
      uVar1 = 0x7ffffff;
    }
    if (uVar1 == 0) {
      lVar4 = 0;
    }
    else {
      this_00 = *(Zone **)(this + 0x18);
      uVar5 = uVar1 * 0x10;
      lVar4 = *(long *)(this_00 + 0x10);
      if (uVar5 < (ulong)(*(long *)(this_00 + 0x18) - lVar4) ||
          uVar5 - (*(long *)(this_00 + 0x18) - lVar4) == 0) {
        *(ulong *)(this_00 + 0x10) = lVar4 + uVar5;
      }
      else {
        lVar4 = v8::internal::Zone::NewExpand(this_00,uVar5);
      }
    }
    puVar2 = (undefined1 *)(lVar4 + lVar7 * 0x10);
    puVar3 = puVar2;
    do {
      *puVar3 = 0;
      *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
      param_1 = param_1 - 1;
      puVar3 = puVar3 + 0x10;
    } while (param_1 != 0);
    lVar7 = *(long *)this;
    for (lVar6 = *(long *)(this + 8); lVar6 != lVar7; lVar6 = lVar6 + -0x10) {
      uVar8 = *(undefined8 *)(lVar6 + -0x10);
      *(undefined8 *)(puVar2 + -8) = *(undefined8 *)(lVar6 + -8);
      *(undefined8 *)(puVar2 + -0x10) = uVar8;
      puVar2 = puVar2 + -0x10;
    }
    *(undefined1 **)this = puVar2;
    *(undefined1 **)(this + 8) = puVar3;
    *(ulong *)(this + 0x10) = lVar4 + uVar1 * 0x10;
  }
  else {
    do {
      *puVar3 = 0;
      *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
      param_1 = param_1 - 1;
      puVar3 = (undefined1 *)(*(long *)(this + 8) + 0x10);
      *(undefined1 **)(this + 8) = puVar3;
    } while (param_1 != 0);
  }
  return;
}

