
/* v8::internal::ParseInfo::GetOrCreateAstValueFactory() */

AstValueFactory * __thiscall v8::internal::ParseInfo::GetOrCreateAstValueFactory(ParseInfo *this)

{
  uint uVar1;
  void *__dest;
  AstValueFactory *this_00;
  size_t __size;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  this_00 = *(AstValueFactory **)(this + 0x70);
  if (this_00 == (AstValueFactory *)0x0) {
    this_00 = operator_new(0x458);
    lVar3 = *(long *)(this + 0x78);
    uVar4 = *(undefined8 *)this;
    uVar5 = *(undefined8 *)(this + 0x28);
    uVar1 = *(uint *)(lVar3 + 0x48);
    *(uint *)(this_00 + 8) = uVar1;
    __size = (ulong)uVar1 * 0x18;
    *(undefined4 *)(this_00 + 0xc) = *(undefined4 *)(lVar3 + 0x4c);
    *(undefined8 *)(this_00 + 0x10) = *(undefined8 *)(lVar3 + 0x50);
    __dest = malloc(__size);
    *(void **)this_00 = __dest;
    memcpy(__dest,*(void **)(lVar3 + 0x40),__size);
    *(undefined8 *)(this_00 + 0x18) = 0;
    *(AstValueFactory **)(this_00 + 0x20) = this_00 + 0x18;
    *(undefined8 *)(this_00 + 0x28) = 0;
    *(long *)(this_00 + 0x38) = lVar3;
    *(undefined8 *)(this_00 + 0x40) = 0;
    *(undefined8 *)(this_00 + 0x448) = uVar4;
    *(undefined8 *)(this_00 + 0x450) = uVar5;
    *(AstValueFactory **)(this_00 + 0x30) = this_00 + 0x28;
    memset(this_00 + 0x48,0,0x400);
    uVar4 = AstValueFactory::NewConsString(this_00);
    *(undefined8 *)(this_00 + 0x40) = uVar4;
    puVar2 = *(undefined8 **)(this + 0x70);
    *(AstValueFactory **)(this + 0x70) = this_00;
    if (puVar2 != (undefined8 *)0x0) {
      free((void *)*puVar2);
      operator_delete(puVar2);
      this_00 = *(AstValueFactory **)(this + 0x70);
    }
  }
  return this_00;
}

