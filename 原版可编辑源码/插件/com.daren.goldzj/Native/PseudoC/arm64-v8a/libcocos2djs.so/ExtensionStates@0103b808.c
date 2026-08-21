
/* v8::internal::Genesis::ExtensionStates::ExtensionStates() */

void __thiscall v8::internal::Genesis::ExtensionStates::ExtensionStates(ExtensionStates *this)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  
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

