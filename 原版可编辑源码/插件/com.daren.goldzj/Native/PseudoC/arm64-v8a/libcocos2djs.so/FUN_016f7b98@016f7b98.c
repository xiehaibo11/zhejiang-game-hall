
void FUN_016f7b98(long param_1)

{
  undefined8 uVar1;
  GraphAssembler *pGVar2;
  
  pGVar2 = *(GraphAssembler **)(param_1 + 8);
  uVar1 = v8::internal::compiler::GraphAssembler::NumberAdd
                    (pGVar2,**(undefined8 **)(param_1 + 0x10),**(undefined8 **)(param_1 + 0x18));
  v8::internal::compiler::GraphAssembler::NumberMax(pGVar2,uVar1,**(undefined8 **)(param_1 + 0x20));
  return;
}

