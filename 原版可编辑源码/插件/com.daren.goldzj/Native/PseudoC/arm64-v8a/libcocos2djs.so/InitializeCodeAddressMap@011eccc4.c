
/* v8::internal::Serializer::InitializeCodeAddressMap() */

void __thiscall v8::internal::Serializer::InitializeCodeAddressMap(Serializer *this)

{
  CodeEventLogger *this_00;
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  Isolate *pIVar4;
  
  Isolate::InitializeLoggingAndCounters(*(Isolate **)(this + 0x68));
  this_00 = operator_new(0x30);
  pIVar4 = *(Isolate **)(this + 0x68);
  CodeEventLogger::CodeEventLogger(this_00,pIVar4);
  *(undefined ***)this_00 = &PTR__CodeAddressMap_01cbbab0;
  puVar1 = malloc(0xc0);
  *(undefined8 **)(this_00 + 0x18) = puVar1;
  if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Out of memory: HashMap::Initialize");
  }
  *(undefined4 *)(this_00 + 0x20) = 8;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[6] = 0;
  puVar1[9] = 0;
  puVar1[0xc] = 0;
  puVar1[0xf] = 0;
  uVar2 = 6;
  lVar3 = 0x90;
  do {
    uVar2 = uVar2 + 1;
    *(undefined8 *)(*(long *)(this_00 + 0x18) + lVar3) = 0;
    lVar3 = lVar3 + 0x18;
  } while (uVar2 < *(uint *)(this_00 + 0x20));
  *(undefined4 *)(this_00 + 0x24) = 0;
  Logger::AddCodeEventListener(*(Logger **)(pIVar4 + 0x9558),(CodeEventListener *)this_00);
  *(CodeEventLogger **)(this + 0x98) = this_00;
  return;
}

