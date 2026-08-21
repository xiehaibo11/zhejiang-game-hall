
/* v8::internal::Parser::ParseWrapped(v8::internal::Isolate*, v8::internal::ParseInfo*,
   v8::internal::ScopedList<v8::internal::Statement*, void*>*, v8::internal::DeclarationScope*,
   v8::internal::Zone*) */

void __thiscall
v8::internal::Parser::ParseWrapped
          (Parser *this,Isolate *param_1,ParseInfo *param_2,ScopedList *param_3,
          DeclarationScope *param_4,Zone *param_5)

{
  undefined4 uVar1;
  undefined1 uVar2;
  long lVar3;
  undefined8 uVar4;
  vector<void*,std::__ndk1::allocator<void*>> *this_00;
  Zone *this_01;
  undefined8 *local_90;
  Parser *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 local_70;
  Parser *local_68;
  long local_60;
  DeclarationScope *pDStack_58;
  undefined4 local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  uStack_80 = *(undefined8 *)this;
  uVar1 = *(undefined4 *)(this + 0x2f0);
  *(undefined4 *)(this + 0x2f0) = 1;
  local_68 = this + 0x10;
  *(DeclarationScope **)this = param_4;
  local_70 = 0;
  local_78 = 0;
  local_60 = *(long *)(this + 0x10);
  local_50 = 0;
  *(Parser ***)(this + 0x10) = &local_88;
  if (local_60 != 0) {
    uVar2 = *(undefined1 *)(local_60 + 0x39);
    *(undefined1 *)(local_60 + 0x39) = 0;
    *(undefined1 *)(local_60 + 0x3a) = uVar2;
  }
  local_88 = this;
  pDStack_58 = param_4;
  uVar4 = PrepareWrappedArguments(this,param_1,param_2,param_5);
  uVar4 = ParseFunctionLiteral(this,0,0,1,0,0xffffffff,4,0,uVar4);
  this_01 = *(Zone **)(this + 0x68);
  local_90 = *(undefined8 **)(this_01 + 0x10);
  if ((ulong)(*(long *)(this_01 + 0x18) - (long)local_90) < 0x18) {
    local_90 = (undefined8 *)Zone::NewExpand(this_01,0x18);
  }
  else {
    *(undefined8 **)(this_01 + 0x10) = local_90 + 3;
  }
  local_90[1] = uVar4;
  *(undefined4 *)(local_90 + 2) = 0xffffffff;
  *local_90 = 0xfffffffff;
  this_00 = *(vector<void*,std::__ndk1::allocator<void*>> **)param_3;
  if (*(undefined8 **)(this_00 + 8) < *(undefined8 **)(this_00 + 0x10)) {
    **(undefined8 **)(this_00 + 8) = local_90;
    *(long *)(this_00 + 8) = *(long *)(this_00 + 8) + 8;
  }
  else {
    std::__ndk1::vector<void*,std::__ndk1::allocator<void*>>::__push_back_slow_path<void*>
              (this_00,&local_90);
  }
  *(long *)(param_3 + 0x10) = *(long *)(param_3 + 0x10) + 1;
  *(long *)local_68 = local_60;
  *(undefined8 *)local_88 = uStack_80;
  *(undefined4 *)(this + 0x2f0) = uVar1;
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

