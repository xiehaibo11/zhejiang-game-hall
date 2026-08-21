
/* v8::internal::Decoder<v8::internal::DispatchingDecoderVisitor>::DecodeFP(v8::internal::Instruction*)
    */

void __thiscall
v8::internal::Decoder<v8::internal::DispatchingDecoderVisitor>::DecodeFP
          (Decoder<v8::internal::DispatchingDecoderVisitor> *this,Instruction *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)param_1;
  if ((uVar1 >> 0x1c & 1) == 0) {
    DecodeNEONVectorDataProcessing(this,param_1);
    return;
  }
  if (uVar1 >> 0x1e == 1) {
    DecodeNEONScalarDataProcessing(this,param_1);
    return;
  }
  if ((uVar1 >> 0x1e != 3) && ((uVar1 >> 0x1d & 1) == 0)) {
    if ((uVar1 >> 0x18 & 1) == 0) {
      if ((uVar1 >> 0x15 & 1) == 0) {
        if ((((((uVar1 >> 0x17 & 1) == 0) && ((uVar1 >> 0x12 & 1) == 0)) &&
             ((uVar1 & 0x80008000) != 0)) &&
            (((uVar1 & 0xe0000) != 0 && ((uVar1 & 0xe0000) != 0xa0000)))) &&
           (((uVar1 & 0x160000) != 0x120000 && ((uVar1 & 0x160000) != 0)))) {
          DispatchingDecoderVisitor::VisitFPFixedPointConvert
                    ((DispatchingDecoderVisitor *)this,param_1);
          return;
        }
      }
      else {
        uVar2 = uVar1 >> 10 & 0x3f;
        if (uVar2 == 0) {
          if (((((((~uVar1 & 0xc00000) != 0) && ((uVar1 & 0xe0000) != 0xa0000)) &&
                ((uVar1 & 0xe0000) != 0xc0000)) &&
               ((((uVar1 & 0x160000) != 0x120000 && ((uVar1 & 0x160000) != 0x140000)) &&
                (((uVar1 & 0x20c40000) != 0x800000 &&
                 (((uVar1 & 0x20c60000) != 0x840000 &&
                  (uVar2 = uVar1 & 0xa0c60000, uVar2 != 0x80060000)))))))) && (uVar2 != 0x460000))
             && ((((((uVar2 != 0x860000 && (uVar2 = uVar1 & 0xa0ce0000, uVar2 != 0x804e0000)) &&
                    (uVar2 != 0x80860000)) &&
                   ((uVar2 != 0xe0000 && (uVar1 = uVar1 & 0xa0d60000, uVar1 != 0x80560000)))) &&
                  (uVar1 != 0x160000)) && (uVar1 != 0x80960000)))) {
            DispatchingDecoderVisitor::VisitFPIntegerConvert
                      ((DispatchingDecoderVisitor *)this,param_1);
            return;
          }
        }
        else if (uVar2 != 0x20) {
          if ((uVar1 & 0x7c00) == 0x4000) {
            if ((uVar1 & 0x80180000) == 0) {
              uVar2 = uVar1 & 0xa0df8000;
              if ((int)uVar2 < 0x428000) {
                if (((uVar2 == 0x20000) || (uVar2 == 0x30000)) || (uVar2 == 0x68000))
                goto LAB_0128a694;
              }
              else if (((uVar2 == 0x428000) || (uVar2 == 0x430000)) || (uVar2 == 0x468000))
              goto LAB_0128a694;
              if ((((uVar1 & 0xa0dc0000) != 0xc40000) && ((uVar1 & 0xa0df0000) != 0xc30000)) &&
                 (((uVar1 & 0xa0d80000) != 0x800000 && ((uVar1 & 0xa0de0000) != 0xc00000)))) {
                DispatchingDecoderVisitor::VisitFPDataProcessing1Source
                          ((DispatchingDecoderVisitor *)this,param_1);
                return;
              }
            }
          }
          else if ((uVar1 & 0x3c00) == 0x2000) {
            if ((uVar1 & 0x8080c007) == 0) {
              DispatchingDecoderVisitor::VisitFPCompare((DispatchingDecoderVisitor *)this,param_1);
              return;
            }
          }
          else if ((uVar1 & 0x1c00) == 0x1000) {
            if ((uVar1 & 0x808003e0) == 0) {
              DispatchingDecoderVisitor::VisitFPImmediate((DispatchingDecoderVisitor *)this,param_1)
              ;
              return;
            }
          }
          else if ((uVar1 & 0x80800000) == 0) {
            uVar2 = uVar1 >> 10 & 3;
            if (uVar2 == 3) {
              DispatchingDecoderVisitor::VisitFPConditionalSelect
                        ((DispatchingDecoderVisitor *)this,param_1);
              return;
            }
            if (uVar2 != 2) {
              if (uVar2 != 1) {
                    /* WARNING: Subroutine does not return */
                V8_Fatal("unreachable code");
              }
              DispatchingDecoderVisitor::VisitFPConditionalCompare
                        ((DispatchingDecoderVisitor *)this,param_1);
              return;
            }
            if (((((uVar1 ^ 0xffffffff) & 0xa000) != 0) && ((uVar1 & 0xc000) != 0xc000)) &&
               ((uVar1 & 0x9000) != 0x9000)) {
              DispatchingDecoderVisitor::VisitFPDataProcessing2Source
                        ((DispatchingDecoderVisitor *)this,param_1);
              return;
            }
          }
        }
      }
    }
    else if ((uVar1 & 0xa0800000) == 0) {
      DispatchingDecoderVisitor::VisitFPDataProcessing3Source
                ((DispatchingDecoderVisitor *)this,param_1);
      return;
    }
  }
LAB_0128a694:
  DispatchingDecoderVisitor::VisitUnallocated((DispatchingDecoderVisitor *)this,param_1);
  return;
}

