
/* v8::internal::compiler::BytecodeLivenessMap::BytecodeLivenessMap(int, v8::internal::Zone*) */

void __thiscall
v8::internal::compiler::BytecodeLivenessMap::BytecodeLivenessMap
          (BytecodeLivenessMap *this,int param_1,Zone *param_2)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  
  iVar1 = param_1 + 3;
  if (-1 < param_1) {
    iVar1 = param_1;
  }
  uVar2 = base::bits::RoundUpToPowerOfTwo32((iVar1 >> 2) + 1);
  lVar4 = *(long *)(param_2 + 0x10);
  uVar3 = (ulong)uVar2 * 0x20;
  if (uVar3 < (ulong)(*(long *)(param_2 + 0x18) - lVar4) ||
      uVar3 - (*(long *)(param_2 + 0x18) - lVar4) == 0) {
    *(ulong *)(param_2 + 0x10) = uVar3 + lVar4;
    *(long *)this = lVar4;
  }
  else {
    lVar4 = Zone::NewExpand(param_2,uVar3);
    *(long *)this = lVar4;
  }
  if (lVar4 != 0) {
    *(uint *)(this + 8) = uVar2;
    if ((uVar2 != 0) && (*(undefined1 *)(lVar4 + 0x1c) = 0, 1 < *(uint *)(this + 8))) {
      uVar3 = 1;
      lVar4 = 0x3c;
      do {
        uVar3 = uVar3 + 1;
        *(undefined1 *)(*(long *)this + lVar4) = 0;
        lVar4 = lVar4 + 0x20;
      } while (uVar3 < *(uint *)(this + 8));
    }
    *(undefined4 *)(this + 0xc) = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Out of memory: HashMap::Initialize");
}

