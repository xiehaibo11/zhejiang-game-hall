
/* v8::String::GetExternalStringResourceBaseSlow(v8::String::Encoding*) const */

undefined8 __thiscall v8::String::GetExternalStringResourceBaseSlow(String *this,Encoding *param_1)

{
  ulong uVar1;
  ulong uVar2;
  uint *puVar3;
  
  uVar1 = *(ulong *)this;
  uVar2 = uVar1 & 0xffffffff00000000;
  puVar3 = (uint *)(uVar1 - 1);
  if ((*(ushort *)((uVar2 | 7) + (ulong)*(uint *)(uVar1 - 1)) < 0x40) &&
     ((*(ushort *)((uVar2 | 7) + (ulong)*puVar3) & 7) == 5)) {
    uVar1 = uVar2 | *(uint *)(uVar1 + 0xb);
    puVar3 = (uint *)(uVar1 - 1);
  }
  *(uint *)param_1 = *(ushort *)((uVar2 | 7) + (long)(int)*puVar3) & 8;
  if (((*(ushort *)((uVar2 | *puVar3) + 7) & 0xf) != 10) &&
     ((*(ushort *)((uVar2 | *puVar3) + 7) & 0xf) != 2)) {
    return 0;
  }
  return *(undefined8 *)(uVar1 + 0xb);
}

