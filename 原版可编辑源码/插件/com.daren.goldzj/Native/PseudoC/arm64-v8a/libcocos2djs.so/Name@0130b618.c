
/* v8::internal::compiler::BitsetType::Name(unsigned int) */

char * v8::internal::compiler::BitsetType::Name(uint param_1)

{
  char *pcVar1;
  
  if ((int)param_1 < 0x6020) {
    if ((int)param_1 < 0xc06) {
      if ((int)param_1 < 0x180) {
        pcVar1 = "None";
        switch(param_1) {
        case 0:
          goto switchD_0130b65c_caseD_0;
        case 2:
          return "OtherUnsigned31";
        case 4:
          return "OtherUnsigned32";
        case 8:
          return "OtherSigned32";
        case 0x10:
          return "OtherNumber";
        case 0x20:
          return "OtherString";
        case 0x40:
          return "Negative31";
        case 0x48:
          return "Negative32";
        case 0xfffffffe:
          return "Any";
        case 0xffffffff:
        case 1:
        case 3:
        case 5:
        case 6:
        case 7:
        case 9:
        case 10:
        case 0xb:
        case 0xc:
        case 0xd:
        case 0xe:
        case 0xf:
        case 0x11:
        case 0x12:
        case 0x13:
        case 0x14:
        case 0x15:
        case 0x16:
        case 0x17:
        case 0x18:
        case 0x19:
        case 0x1a:
        case 0x1b:
        case 0x1c:
        case 0x1d:
        case 0x1e:
        case 0x1f:
        case 0x21:
        case 0x22:
        case 0x23:
        case 0x24:
        case 0x25:
        case 0x26:
        case 0x27:
        case 0x28:
        case 0x29:
        case 0x2a:
        case 0x2b:
        case 0x2c:
        case 0x2d:
        case 0x2e:
        case 0x2f:
        case 0x30:
        case 0x31:
        case 0x32:
        case 0x33:
        case 0x34:
        case 0x35:
        case 0x36:
        case 0x37:
        case 0x38:
        case 0x39:
        case 0x3a:
        case 0x3b:
        case 0x3c:
        case 0x3d:
        case 0x3e:
        case 0x3f:
        case 0x41:
        case 0x42:
        case 0x43:
        case 0x44:
        case 0x45:
        case 0x46:
        case 0x47:
          break;
        default:
          if (param_1 == 0x80) {
            return "Null";
          }
          if (param_1 == 0x100) {
            return "Undefined";
          }
        }
      }
      else if ((int)param_1 < 0x406) {
        if ((int)param_1 < 0x380) {
          if (param_1 == 0x180) {
            return "NullOrUndefined";
          }
          if (param_1 == 0x200) {
            return "Boolean";
          }
        }
        else {
          if (param_1 == 0x380) {
            return "BooleanOrNullOrUndefined";
          }
          if (param_1 == 0x400) {
            return "Unsigned30";
          }
          if (param_1 == 0x402) {
            return "Unsigned31";
          }
        }
      }
      else {
        switch(param_1) {
        case 0x440:
          return "Signed31";
        case 0x441:
        case 0x442:
        case 0x443:
        case 0x444:
        case 0x445:
        case 0x446:
        case 0x447:
        case 0x448:
        case 0x449:
        case 1099:
        case 0x44c:
        case 0x44d:
        case 0x44f:
        case 0x450:
        case 0x451:
        case 0x452:
        case 0x453:
        case 0x454:
        case 0x455:
        case 0x456:
        case 0x457:
        case 0x458:
        case 0x459:
        case 0x45a:
        case 0x45b:
        case 0x45c:
        case 0x45d:
          break;
        case 0x44a:
          return "Signed32";
        case 0x44e:
          return "Integral32";
        case 0x45e:
          return "PlainNumber";
        default:
          if (param_1 == 0x406) {
            return "Unsigned32";
          }
          if (param_1 == 0x800) {
            return "MinusZero";
          }
        }
      }
    }
    else if ((int)param_1 < 0x1cde) {
      if ((int)param_1 < 0x1800) {
        if ((int)param_1 < 0xc4e) {
          if (param_1 == 0xc06) {
            return "Unsigned32OrMinusZero";
          }
          if (param_1 == 0xc4a) {
            return "Signed32OrMinusZero";
          }
        }
        else {
          if (param_1 == 0xc4e) {
            return "Integral32OrMinusZero";
          }
          if (param_1 == 0xc5e) {
            return "OrderedNumber";
          }
          if (param_1 == 0x1000) {
            return "NaN";
          }
        }
      }
      else if ((int)param_1 < 0x1c4a) {
        if (param_1 == 0x1800) {
          return "MinusZeroOrNaN";
        }
        if (param_1 == 0x1c06) {
          return "Unsigned32OrMinusZeroOrNaN";
        }
      }
      else {
        if (param_1 == 0x1c4a) {
          return "Signed32OrMinusZeroOrNaN";
        }
        if (param_1 == 0x1c4e) {
          return "Integral32OrMinusZeroOrNaN";
        }
        if (param_1 == 0x1c5e) {
          return "Number";
        }
      }
    }
    else if ((int)param_1 < 0x2000) {
      if ((int)param_1 < 0x1e5e) {
        if (param_1 == 0x1cde) {
          return "NullOrNumber";
        }
        if (param_1 == 0x1d5e) {
          return "NumberOrUndefined";
        }
      }
      else {
        if (param_1 == 0x1e5e) {
          return "BooleanOrNumber";
        }
        if (param_1 == 0x1ede) {
          return "BooleanOrNullOrNumber";
        }
        if (param_1 == 0x1fde) {
          return "NumberOrUndefinedOrNullOrBoolean";
        }
      }
    }
    else if ((int)param_1 < 0x4080) {
      if (param_1 == 0x2000) {
        return "Symbol";
      }
      if (param_1 == 0x4000) {
        return "InternalizedString";
      }
      if (param_1 == 0x4020) {
        return "String";
      }
    }
    else {
      if (param_1 == 0x4080) {
        return "InternalizedStringOrNull";
      }
      if (param_1 == 0x5ffe) {
        return "PlainPrimitive";
      }
      if (param_1 == 0x6000) {
        return "UniqueName";
      }
    }
  }
  else if ((int)param_1 < 0x4000000) {
    if ((int)param_1 < 0x200000) {
      if ((int)param_1 < 0x40100) {
        if ((int)param_1 < 0x10000) {
          if (param_1 == 0x6020) {
            return "Name";
          }
          if (param_1 == 0x7ffe) {
            return "NonBigIntPrimitive";
          }
        }
        else {
          if (param_1 == 0x10000) {
            return "OtherCallable";
          }
          if (param_1 == 0x20000) {
            return "OtherObject";
          }
          if (param_1 == 0x40000) {
            return "OtherUndetectable";
          }
        }
      }
      else if ((int)param_1 < 0x80000) {
        if (param_1 == 0x40100) {
          return "OtherUndetectableOrUndefined";
        }
        if (param_1 == 0x40180) {
          return "Undetectable";
        }
      }
      else {
        if (param_1 == 0x80000) {
          return "CallableProxy";
        }
        if (param_1 == 0x100000) {
          return "OtherProxy";
        }
        if (param_1 == 0x180000) {
          return "Proxy";
        }
      }
    }
    else if ((int)param_1 < 0x800380) {
      if ((int)param_1 < 0x690000) {
        if (param_1 == 0x200000) {
          return "Function";
        }
        if (param_1 == 0x400000) {
          return "BoundFunction";
        }
      }
      else {
        if (param_1 == 0x690000) {
          return "DetectableCallable";
        }
        if (param_1 == 0x6d0000) {
          return "Callable";
        }
        if (param_1 == 0x800000) {
          return "Hole";
        }
      }
    }
    else if ((int)param_1 < 0x1000000) {
      if (param_1 == 0x800380) {
        return "Oddball";
      }
      if (param_1 == 0x801c5e) {
        return "NumberOrHole";
      }
      if (param_1 == 0x801fde) {
        return "NumberOrOddball";
      }
    }
    else {
      if (param_1 == 0x1000000) {
        return "OtherInternal";
      }
      if (param_1 == 0x2000000) {
        return "ExternalPointer";
      }
      if (param_1 == 0x3800000) {
        return "Internal";
      }
    }
  }
  else if ((int)param_1 < 0x47f0180) {
    if ((int)param_1 < 0x4630000) {
      if ((int)param_1 < 0x4120000) {
        if (param_1 == 0x4000000) {
          return "Array";
        }
        if (param_1 == 0x4020000) {
          return "ArrayOrOtherObject";
        }
      }
      else {
        if (param_1 == 0x4120000) {
          return "NonCallable";
        }
        if (param_1 == 0x4120080) {
          return "NonCallableOrNull";
        }
        if (param_1 == 0x4180000) {
          return "ArrayOrProxy";
        }
      }
    }
    else if ((int)param_1 < 0x47b0080) {
      if (param_1 == 0x4630000) {
        return "DetectableObject";
      }
      if (param_1 == 0x4670000) {
        return "Object";
      }
      if (param_1 == 0x47b0000) {
        return "DetectableReceiver";
      }
    }
    else {
      if (param_1 == 0x47b0080) {
        return "DetectableReceiverOrNull";
      }
      if (param_1 == 0x47f0000) {
        return "Receiver";
      }
      if (param_1 == 0x47f0100) {
        return "ReceiverOrUndefined";
      }
    }
  }
  else if ((int)param_1 < 0x8000000) {
    if ((int)param_1 < 0x47f4020) {
      if (param_1 == 0x47f0180) {
        return "ReceiverOrNullOrUndefined";
      }
      if (param_1 == 0x47f2000) {
        return "SymbolOrReceiver";
      }
    }
    else {
      if (param_1 == 0x47f4020) {
        return "StringOrReceiver";
      }
      if (param_1 == 0x47f6380) {
        return "Unique";
      }
      if (param_1 == 0x47f7ffe) {
        return "NonBigInt";
      }
    }
  }
  else if ((int)param_1 < 0x8007ffe) {
    if (param_1 == 0x8000000) {
      return "BigInt";
    }
    if (param_1 == 0x8001c5e) {
      return "Numeric";
    }
    if (param_1 == 0x8005c7e) {
      return "NumericOrString";
    }
  }
  else {
    if (param_1 == 0x8007ffe) {
      return "Primitive";
    }
    if (param_1 == 0xc7f7ffe) {
      return "NonInternal";
    }
    if (param_1 == 0xfff63a0) {
      return "NonNumber";
    }
  }
  pcVar1 = (char *)0x0;
switchD_0130b65c_caseD_0:
  return pcVar1;
}

