
/* std::__ndk1::vector<v8::internal::compiler::TurbolizerInstructionStartInfo,
   v8::internal::ZoneAllocator<v8::internal::compiler::TurbolizerInstructionStartInfo>
   >::assign(unsigned long, v8::internal::compiler::TurbolizerInstructionStartInfo const&) */

void __thiscall
std::__ndk1::
vector<v8::internal::compiler::TurbolizerInstructionStartInfo,v8::internal::ZoneAllocator<v8::internal::compiler::TurbolizerInstructionStartInfo>>
::assign(vector<v8::internal::compiler::TurbolizerInstructionStartInfo,v8::internal::ZoneAllocator<v8::internal::compiler::TurbolizerInstructionStartInfo>>
         *this,ulong param_1,TurbolizerInstructionStartInfo *param_2)

{
  ulong uVar1;
  bool bVar2;
  undefined8 *puVar3;
  Zone *this_00;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  
  lVar4 = *(long *)(this + 0x10);
  puVar3 = *(undefined8 **)this;
  if (param_1 <= (ulong)((lVar4 - (long)puVar3 >> 2) * -0x5555555555555555)) {
    uVar6 = (*(long *)(this + 8) - (long)puVar3 >> 2) * -0x5555555555555555;
    uVar1 = uVar6;
    if (param_1 <= uVar6) {
      uVar1 = param_1;
    }
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
      uVar5 = *(undefined8 *)param_2;
      *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(param_2 + 8);
      *puVar3 = uVar5;
      puVar3 = (undefined8 *)((long)puVar3 + 0xc);
    }
    lVar4 = uVar6 - param_1;
    if (uVar6 < param_1) {
      puVar3 = *(undefined8 **)(this + 8);
      do {
        uVar5 = *(undefined8 *)param_2;
        bVar2 = lVar4 != -1;
        lVar4 = lVar4 + 1;
        *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(param_2 + 8);
        *puVar3 = uVar5;
        puVar3 = (undefined8 *)(*(long *)(this + 8) + 0xc);
        *(undefined8 **)(this + 8) = puVar3;
      } while (bVar2);
    }
    else {
      *(ulong *)(this + 8) = *(long *)this + param_1 * 0xc;
    }
    return;
  }
  if (puVar3 != (undefined8 *)0x0) {
    lVar4 = 0;
    *(undefined8 *)this = 0;
    *(undefined8 *)(this + 8) = 0;
    *(undefined8 *)(this + 0x10) = 0;
  }
  if (param_1 < 0xaaaaaab) {
    uVar6 = (lVar4 >> 2) * 0x5555555555555556;
    uVar1 = param_1;
    if (param_1 <= uVar6) {
      uVar1 = uVar6;
    }
    if (0x5555554 < (ulong)((lVar4 >> 2) * -0x5555555555555555)) {
      uVar1 = 0xaaaaaaa;
    }
    if (uVar1 < 0xaaaaaab) {
      this_00 = *(Zone **)(this + 0x18);
      puVar3 = *(undefined8 **)(this_00 + 0x10);
      uVar6 = uVar1 * 0xc + 7 & 0xfffffffffffffff8;
      if ((ulong)(*(long *)(this_00 + 0x18) - (long)puVar3) < uVar6) {
        puVar3 = (undefined8 *)v8::internal::Zone::NewExpand(this_00,uVar6);
      }
      else {
        *(ulong *)(this_00 + 0x10) = (long)puVar3 + uVar6;
      }
      *(undefined8 **)this = puVar3;
      *(undefined8 **)(this + 8) = puVar3;
      *(ulong *)(this + 0x10) = (long)puVar3 + uVar1 * 0xc;
      do {
        uVar5 = *(undefined8 *)param_2;
        param_1 = param_1 - 1;
        *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(param_2 + 8);
        *puVar3 = uVar5;
        puVar3 = (undefined8 *)(*(long *)(this + 8) + 0xc);
        *(undefined8 **)(this + 8) = puVar3;
      } while (param_1 != 0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

