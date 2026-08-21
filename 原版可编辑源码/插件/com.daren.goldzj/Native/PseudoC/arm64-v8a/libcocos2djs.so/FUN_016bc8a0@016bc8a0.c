
ulong FUN_016bc8a0(Operator *param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  int iVar4;
  double dVar5;
  double dVar6;
  long local_28;
  
  local_28 = *(long *)(param_2 + 8);
  if ((local_28 == 0xc5f) ||
     (uVar2 = v8::internal::compiler::Type::SlowIs((Type *)&local_28,0xc5f), (uVar2 & 1) != 0)) {
    dVar5 = (double)v8::internal::compiler::Type::Max((Type *)&local_28);
    dVar6 = (double)v8::internal::compiler::Type::Min((Type *)&local_28);
    iVar4 = (int)dVar6;
    if (-1 < iVar4) {
      if (dVar6 != (double)iVar4) {
        return 0;
      }
      if (dVar5 != (double)iVar4) {
        return 0;
      }
      lVar3 = v8::internal::compiler::ElementAccessOf(param_1);
      uVar1 = *(byte *)(lVar3 + 0x10) - 1;
      if (uVar1 < 0xd) {
        return (ulong)(uint)((iVar4 << (ulong)(*(uint *)(&DAT_01a5c16c + (long)(char)uVar1 * 4) &
                                              0x1f)) + *(int *)(lVar3 + 4)) << 0x20 | 1;
      }
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
  }
  return 0;
}

