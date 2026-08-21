
/* v8::internal::Factory::NewObjectBoilerplateDescription(int, int, int, bool) */

void __thiscall
v8::internal::Factory::NewObjectBoilerplateDescription
          (Factory *this,int param_1,int param_2,int param_3,bool param_4)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  
  iVar2 = (param_2 - param_3) - (uint)param_4;
  uVar1 = param_1 << 1 | 1;
  if (iVar2 != param_1) {
    uVar1 = uVar1 + 1;
  }
  plVar3 = (long *)NewFixedArrayWithFiller(this,0x29,uVar1,*(undefined8 *)(this + 0xa0),1);
  if (iVar2 != param_1) {
    if ((long)iVar2 + 0x40000000U >> 0x1f != 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","Smi::IsValid(backing_store_size)");
    }
    *(int *)(*plVar3 + (long)(int)((*(uint *)(*plVar3 + 3) & 0x7ffffffe) * 2 + -4) + 7) = iVar2 * 2;
  }
  *(undefined4 *)(*plVar3 + 7) = 0;
  return;
}

