
/* v8::internal::Factory::GlobalConstantFor(v8::internal::Handle<v8::internal::Name>) */

Factory * __thiscall v8::internal::Factory::GlobalConstantFor(Factory *this,Factory *param_2)

{
  Factory *pFVar1;
  ulong uVar2;
  ulong uVar3;
  
  pFVar1 = this + 0xaa8;
  if (((param_2 == pFVar1) ||
      ((uVar2 = *(ulong *)param_2, param_2 != (Factory *)0x0 && (uVar2 == *(ulong *)pFVar1)))) ||
     (((uVar3 = uVar2 & 0xffffffff00000000 | 7, 0x1f < *(ushort *)(uVar3 + *(uint *)(uVar2 - 1)) ||
       (0x1f < *(ushort *)
                ((*(ulong *)pFVar1 & 0xffffffff00000000 | 7) +
                (ulong)*(uint *)(*(ulong *)pFVar1 - 1)))) &&
      (((*(short *)(uVar3 + *(uint *)(uVar2 - 1)) != 0x40 &&
        (*(short *)((*(ulong *)pFVar1 & 0xffffffff00000000 | 7) +
                   (ulong)*(uint *)(*(ulong *)pFVar1 - 1)) != 0x40)) &&
       (uVar2 = String::SlowEquals(this,param_2), (uVar2 & 1) != 0)))))) {
    this = this + 0xa0;
  }
  else {
    pFVar1 = this + 0x828;
    if (((param_2 == pFVar1) ||
        ((uVar2 = *(ulong *)param_2, param_2 != (Factory *)0x0 && (uVar2 == *(ulong *)pFVar1)))) ||
       (((uVar3 = uVar2 & 0xffffffff00000000 | 7, 0x1f < *(ushort *)(uVar3 + *(uint *)(uVar2 - 1))
         || (0x1f < *(ushort *)
                     ((*(ulong *)pFVar1 & 0xffffffff00000000 | 7) +
                     (ulong)*(uint *)(*(ulong *)pFVar1 - 1)))) &&
        (((*(short *)(uVar3 + *(uint *)(uVar2 - 1)) != 0x40 &&
          (*(short *)((*(ulong *)pFVar1 & 0xffffffff00000000 | 7) +
                     (ulong)*(uint *)(*(ulong *)pFVar1 - 1)) != 0x40)) &&
         (uVar2 = String::SlowEquals(this,param_2), (uVar2 & 1) != 0)))))) {
      this = this + 0x430;
    }
    else {
      pFVar1 = this + 0x760;
      if (((param_2 == pFVar1) ||
          ((uVar2 = *(ulong *)param_2, param_2 != (Factory *)0x0 && (uVar2 == *(ulong *)pFVar1))))
         || (((uVar3 = uVar2 & 0xffffffff00000000 | 7,
              0x1f < *(ushort *)(uVar3 + *(uint *)(uVar2 - 1)) ||
              (0x1f < *(ushort *)
                       ((*(ulong *)pFVar1 & 0xffffffff00000000 | 7) +
                       (ulong)*(uint *)(*(ulong *)pFVar1 - 1)))) &&
             (((*(short *)(uVar3 + *(uint *)(uVar2 - 1)) != 0x40 &&
               (*(short *)((*(ulong *)pFVar1 & 0xffffffff00000000 | 7) +
                          (ulong)*(uint *)(*(ulong *)pFVar1 - 1)) != 0x40)) &&
              (uVar2 = String::SlowEquals(this,param_2), (uVar2 & 1) != 0)))))) {
        this = this + 0x440;
      }
      else {
        this = (Factory *)0x0;
      }
    }
  }
  return this;
}

