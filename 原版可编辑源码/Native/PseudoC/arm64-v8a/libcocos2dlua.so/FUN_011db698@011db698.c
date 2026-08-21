
void FUN_011db698(long param_1,locale *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  long *plVar3;
  undefined8 uVar4;
  
  plVar3 = (long *)std::__ndk1::locale::use_facet
                             (param_2,(id *)&std::__ndk1::codecvt<char,char,mbstate_t>::id);
  *(long **)(param_1 + 0x48) = plVar3;
  uVar2 = (**(code **)(*plVar3 + 0x30))();
  *(undefined4 *)(param_1 + 0x58) = uVar2;
  bVar1 = (**(code **)(**(long **)(param_1 + 0x48) + 0x38))(*(long **)(param_1 + 0x48));
  *(byte *)(param_1 + 0x61) = bVar1 & 1;
  if (*(int *)(param_1 + 0x58) < 9) {
    return;
  }
  uVar4 = std::__ndk1::__throw_runtime_error("unsupported locale for standard input");
  FUN_011db83c(uVar4,0);
  return;
}

