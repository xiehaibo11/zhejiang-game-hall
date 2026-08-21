
/* void std::__ndk1::vector<v8::internal::compiler::ResumeJumpTarget,
   v8::internal::ZoneAllocator<v8::internal::compiler::ResumeJumpTarget>
   >::__push_back_slow_path<v8::internal::compiler::ResumeJumpTarget>(v8::internal::compiler::ResumeJumpTarget&&)
    */

void __thiscall
std::__ndk1::
vector<v8::internal::compiler::ResumeJumpTarget,v8::internal::ZoneAllocator<v8::internal::compiler::ResumeJumpTarget>>
::__push_back_slow_path<v8::internal::compiler::ResumeJumpTarget>
          (vector<v8::internal::compiler::ResumeJumpTarget,v8::internal::ZoneAllocator<v8::internal::compiler::ResumeJumpTarget>>
           *this,ResumeJumpTarget *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  Zone *this_00;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  
  lVar10 = *(long *)(this + 8) - *(long *)this >> 2;
  uVar1 = lVar10 * -0x5555555555555555 + 1;
  if (0xaaaaaaa < uVar1) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar7 = *(long *)(this + 0x10) - *(long *)this >> 2;
  uVar8 = lVar7 * 0x5555555555555556;
  if (uVar1 <= uVar8) {
    uVar1 = uVar8;
  }
  if (0x5555554 < (ulong)(lVar7 * -0x5555555555555555)) {
    uVar1 = 0xaaaaaaa;
  }
  if (uVar1 == 0) {
    lVar7 = 0;
  }
  else {
    this_00 = *(Zone **)(this + 0x18);
    lVar7 = *(long *)(this_00 + 0x10);
    uVar8 = uVar1 * 0xc + 7 & 0xfffffffffffffff8;
    if ((ulong)(*(long *)(this_00 + 0x18) - lVar7) < uVar8) {
      lVar7 = v8::internal::Zone::NewExpand(this_00,uVar8);
    }
    else {
      *(ulong *)(this_00 + 0x10) = lVar7 + uVar8;
    }
  }
  uVar9 = *(undefined8 *)param_1;
  puVar6 = (undefined8 *)(lVar7 + lVar10 * 4);
  *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(param_1 + 8);
  *puVar6 = uVar9;
  puVar2 = *(undefined8 **)this;
  puVar4 = puVar6;
  puVar5 = *(undefined8 **)(this + 8);
  while (puVar5 != puVar2) {
    uVar3 = *(undefined4 *)((long)puVar5 + -4);
    *(undefined8 *)((long)puVar4 + -0xc) = *(undefined8 *)((long)puVar5 + -0xc);
    *(undefined4 *)((long)puVar4 + -4) = uVar3;
    puVar4 = (undefined8 *)((long)puVar4 + -0xc);
    puVar5 = (undefined8 *)((long)puVar5 + -0xc);
  }
  *(undefined8 **)this = puVar4;
  *(long *)(this + 8) = (long)puVar6 + 0xc;
  *(ulong *)(this + 0x10) = lVar7 + uVar1 * 0xc;
  return;
}

