
/* v8::internal::DisassemblingDecoder::VisitNEONCopy(v8::internal::Instruction*) */

void __thiscall
v8::internal::DisassemblingDecoder::VisitNEONCopy(DisassemblingDecoder *this,Instruction *param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  NEONFormatDecoder aNStack_a8 [112];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  NEONFormatDecoder::NEONFormatDecoder
            (aNStack_a8,param_1,(NEONFormatMap *)NEONFormatDecoder::TriangularFormatMap()::map,
             (NEONFormatMap *)NEONFormatDecoder::TriangularScalarFormatMap()::map);
  uVar2 = *(uint *)param_1;
  if ((uVar2 & 0x7fe08400) == 0x6e000400) {
    NEONFormatDecoder::SetFormatMap
              (aNStack_a8,0,(NEONFormatMap *)NEONFormatDecoder::TriangularScalarFormatMap()::map);
    pcVar5 = "\'Vd.%s[\'IVInsIndex1], \'Vn.%s[\'IVInsIndex2]";
  }
  else {
    if ((uVar2 & 0x7fe0fc00) != 0x4e001c00) {
      uVar1 = (uVar2 & 0x3fe0fc00) + 0xf1fffc00;
      pcVar6 = "dup";
      pcVar5 = "\'Vd.%s, \'Vn.%s[\'IVInsIndex1]";
      switch(uVar1 >> 0xb | uVar1 * 0x200000) {
      case 0:
        break;
      case 1:
        iVar4 = NEONFormatDecoder::GetVectorFormat(aNStack_a8,0);
        pcVar5 = "\'Vd.%s, \'Xn";
        if (iVar4 != 0x40c00000) {
          pcVar5 = "\'Vd.%s, \'Wn";
        }
        pcVar6 = "dup";
        break;
      default:
        pcVar6 = "unimplemented";
        pcVar5 = "(NEONCopy)";
        break;
      case 5:
        NEONFormatDecoder::SetFormatMap
                  (aNStack_a8,0,(NEONFormatMap *)NEONFormatDecoder::TriangularScalarFormatMap()::map
                  );
        pcVar6 = "smov";
        pcVar5 = "\'Rdq, \'Vn.%s[\'IVInsIndex1]";
        break;
      case 7:
        pcVar6 = "mov";
        if ((uVar2 & 0x70000) != 0x40000) {
          pcVar6 = "umov";
        }
        if ((uVar2 & 0x40000000) != 0) {
          pcVar6 = "mov";
        }
        NEONFormatDecoder::SetFormatMap
                  (aNStack_a8,0,(NEONFormatMap *)NEONFormatDecoder::TriangularScalarFormatMap()::map
                  );
        iVar4 = NEONFormatDecoder::GetVectorFormat(aNStack_a8,0);
        pcVar5 = "\'Xd, \'Vn.%s[\'IVInsIndex1]";
        if (iVar4 != 0x10c00000) {
          pcVar5 = "\'Wd, \'Vn.%s[\'IVInsIndex1]";
        }
      }
      goto switchD_01284cf4_caseD_0;
    }
    NEONFormatDecoder::SetFormatMap
              (aNStack_a8,0,(NEONFormatMap *)NEONFormatDecoder::TriangularScalarFormatMap()::map);
    iVar4 = NEONFormatDecoder::GetVectorFormat(aNStack_a8,0);
    pcVar5 = "\'Vd.%s[\'IVInsIndex1], \'Xn";
    if (iVar4 != 0x10c00000) {
      pcVar5 = "\'Vd.%s[\'IVInsIndex1], \'Wn";
    }
  }
  pcVar6 = "mov";
switchD_01284cf4_caseD_0:
  pcVar5 = (char *)NEONFormatDecoder::Substitute(aNStack_a8,pcVar5,1,1,1);
  Format(this,param_1,pcVar6,pcVar5);
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

