
/* v8::internal::wasm::AsmJsParser::GatherCases(v8::internal::ZoneVector<int>*) */

void __thiscall v8::internal::wasm::AsmJsParser::GatherCases(AsmJsParser *this,ZoneVector *param_1)

{
  AsmJsScanner *this_00;
  uint uVar1;
  bool bVar2;
  ulong uVar3;
  int iVar4;
  int local_54;
  
  uVar3 = *(ulong *)(this + 0x20);
  iVar4 = 0;
  this_00 = (AsmJsScanner *)(this + 8);
  do {
    uVar1 = *(uint *)(this + 0x10);
    if (uVar1 == 0x7d) {
      if (iVar4 < 2) goto LAB_01488650;
      iVar4 = iVar4 + -1;
    }
    else if (uVar1 == 0x7b) {
      iVar4 = iVar4 + 1;
    }
    else if ((iVar4 == 1) && (uVar1 == 0xffffd919)) {
      AsmJsScanner::Next(this_00);
      iVar4 = *(int *)(this + 0x10);
      bVar2 = iVar4 != 0x2d;
      if (!bVar2) {
        AsmJsScanner::Next(this_00);
        iVar4 = *(int *)(this + 0x10);
      }
      if (iVar4 != -3) {
LAB_01488650:
        AsmJsScanner::Seek(this_00,uVar3);
        return;
      }
      iVar4 = *(int *)(this + 0xe8);
      AsmJsScanner::Next(this_00);
      local_54 = -iVar4;
      if (bVar2 || iVar4 == -0x80000000) {
        local_54 = iVar4;
      }
      if (*(int **)(param_1 + 8) == *(int **)(param_1 + 0x10)) {
        std::__ndk1::vector<int,v8::internal::ZoneAllocator<int>>::__push_back_slow_path<int_const&>
                  ((vector<int,v8::internal::ZoneAllocator<int>> *)param_1,&local_54);
        iVar4 = 1;
      }
      else {
        **(int **)(param_1 + 8) = local_54;
        iVar4 = 1;
        *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 4;
      }
    }
    else if (0xfffffffd < uVar1) goto LAB_01488650;
    AsmJsScanner::Next(this_00);
  } while( true );
}

