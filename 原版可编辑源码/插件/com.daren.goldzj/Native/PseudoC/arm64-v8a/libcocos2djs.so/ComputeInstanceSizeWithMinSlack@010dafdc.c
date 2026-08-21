
/* v8::internal::JSFunction::ComputeInstanceSizeWithMinSlack(v8::internal::Isolate*) */

int __thiscall
v8::internal::JSFunction::ComputeInstanceSizeWithMinSlack(JSFunction *this,Isolate *param_1)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  ulong local_8;
  
  uVar3 = *(ulong *)this & 0xffffffff00000000;
  local_8 = uVar3 | *(uint *)(*(ulong *)this + 0x1b);
  if (*(short *)((uVar3 | 7) + (ulong)*(uint *)(local_8 - 1)) == 0xa2) {
    if (*(uint *)(local_8 + 0xb) >> 0x1d == 0) {
      uVar2 = (uint)*(byte *)(local_8 + 3);
    }
    else {
      iVar1 = Map::ComputeMinObjectSlack((Map *)&local_8,param_1);
      uVar2 = (uint)*(byte *)((*(ulong *)this & 0xffffffff00000000 |
                              (ulong)*(uint *)(*(ulong *)this + 0x1b)) + 3) - iVar1;
    }
    return uVar2 << 2;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","has_initial_map()");
}

