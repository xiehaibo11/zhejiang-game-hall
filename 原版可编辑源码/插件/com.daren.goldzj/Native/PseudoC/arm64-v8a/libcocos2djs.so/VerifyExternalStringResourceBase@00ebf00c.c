
/* v8::String::VerifyExternalStringResourceBase(v8::String::ExternalStringResourceBase*,
   v8::String::Encoding) const */

void __thiscall v8::String::VerifyExternalStringResourceBase(String *this,long param_1,uint param_3)

{
  ulong uVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  uint *puVar5;
  
  uVar1 = *(ulong *)this;
  uVar4 = uVar1 & 0xffffffff00000000;
  puVar5 = (uint *)(uVar1 - 1);
  if ((*(ushort *)((uVar4 | 7) + (ulong)*(uint *)(uVar1 - 1)) < 0x40) &&
     ((*(ushort *)((uVar4 | 7) + (ulong)*puVar5) & 7) == 5)) {
    uVar1 = uVar4 | *(uint *)(uVar1 + 0xb);
    puVar5 = (uint *)(uVar1 - 1);
  }
  if ((*(ushort *)((uVar4 | *puVar5) + 7) & 0xf) == 10) {
    lVar2 = *(long *)(uVar1 + 0xb);
    uVar3 = 8;
  }
  else {
    if ((*(ushort *)((uVar4 | *puVar5) + 7) & 0xf) != 2) {
      uVar3 = *(ushort *)((uVar4 | 7) + (ulong)*puVar5) & 8;
      if (param_1 != 0) goto LAB_00ebf0d4;
      goto LAB_00ebf07c;
    }
    lVar2 = *(long *)(uVar1 + 0xb);
    uVar3 = 0;
  }
  if (lVar2 != param_1) {
LAB_00ebf0d4:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","expected == value");
  }
LAB_00ebf07c:
  if (uVar3 == param_3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","expectedEncoding == encoding");
}

