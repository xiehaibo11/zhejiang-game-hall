
/* v8::internal::AstValueFactory::GetString(v8::internal::Handle<v8::internal::String>) */

void __thiscall v8::internal::AstValueFactory::GetString(AstValueFactory *this,undefined8 *param_2)

{
  byte bVar1;
  uint uVar2;
  ushort *puVar3;
  undefined8 uVar4;
  int iVar5;
  long lVar6;
  undefined1 auVar7 [16];
  undefined8 local_38;
  
  local_38 = *param_2;
  auVar7 = String::GetFlatContent((PerThreadAssertScopeDebugOnly *)&local_38);
  puVar3 = auVar7._0_8_;
  iVar5 = auVar7._8_4_;
  if (auVar7._8_8_ >> 0x20 == 1) {
    lVar6 = (long)iVar5;
    if ((iVar5 == 1) && (bVar1 = (byte)*puVar3, -1 < (char)bVar1)) {
      if (*(long *)(this + (ulong)bVar1 * 8 + 0x48) != 0) {
        return;
      }
      uVar2 = bVar1 - 0x30;
      if (uVar2 < 10) {
        uVar2 = StringHasher::MakeArrayIndexHash(uVar2,1);
      }
      else {
        uVar2 = (*(int *)(this + 0x450) + (uint)bVar1) * 0x401;
        uVar2 = (uVar2 ^ uVar2 >> 6) * 9;
        uVar2 = (uVar2 ^ uVar2 >> 0xb) * 0x8001;
        uVar2 = ((int)((uVar2 & 0x1fffffff) - 1) >> 0x1f & 0x1bU | uVar2) << 3 | 6;
      }
      uVar4 = GetString(this,uVar2,1,puVar3,1);
      *(undefined8 *)(this + (ulong)bVar1 * 8 + 0x48) = uVar4;
      return;
    }
    uVar2 = StringHasher::HashSequentialString<unsigned_char>
                      ((uchar *)puVar3,iVar5,*(ulong *)(this + 0x450));
    uVar4 = 1;
  }
  else {
    uVar2 = StringHasher::HashSequentialString<unsigned_short>
                      (puVar3,iVar5,*(ulong *)(this + 0x450));
    lVar6 = (long)(auVar7._8_8_ << 0x20) >> 0x1f;
    uVar4 = 0;
  }
  GetString(this,uVar2,uVar4,puVar3,lVar6);
  return;
}

