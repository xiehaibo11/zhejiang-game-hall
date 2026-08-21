
/* v8::internal::StringsStorage::StringsStorage() */

void __thiscall v8::internal::StringsStorage::StringsStorage(StringsStorage *this)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  
  *(code **)(this + 0x10) = StringsMatch;
  puVar1 = malloc(0xc0);
  *(undefined8 **)this = puVar1;
  if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Out of memory: HashMap::Initialize");
  }
  *(undefined4 *)(this + 8) = 8;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[6] = 0;
  puVar1[9] = 0;
  uVar2 = 4;
  lVar3 = 0x60;
  do {
    uVar2 = uVar2 + 1;
    *(undefined8 *)(*(long *)this + lVar3) = 0;
    lVar3 = lVar3 + 0x18;
  } while (uVar2 < *(uint *)(this + 8));
  *(undefined4 *)(this + 0xc) = 0;
  return;
}

