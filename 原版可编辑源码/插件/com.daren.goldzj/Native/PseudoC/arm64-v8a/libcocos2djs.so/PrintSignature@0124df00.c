
/* v8::internal::wasm::PrintSignature(v8::internal::Vector<char>,
   v8::internal::Signature<v8::internal::wasm::ValueType>*) */

long __thiscall v8::internal::wasm::PrintSignature(wasm *this,long param_2,long *param_3)

{
  wasm *pwVar1;
  long lVar2;
  undefined1 *puVar3;
  long lVar4;
  wasm wVar5;
  
  if (param_2 == 0) {
    return 0;
  }
  lVar2 = param_3[1];
  lVar4 = param_2;
  if (lVar2 != 0) {
    puVar3 = (undefined1 *)(param_3[2] + *param_3);
    pwVar1 = this;
    do {
      wVar5 = (wasm)0x69;
      switch(*puVar3) {
      case 0:
        wVar5 = (wasm)0x76;
      case 1:
        break;
      case 2:
        wVar5 = (wasm)0x6c;
        break;
      case 3:
        wVar5 = (wasm)0x66;
        break;
      case 4:
        wVar5 = (wasm)0x64;
        break;
      case 5:
        wVar5 = (wasm)0x73;
        break;
      case 6:
        wVar5 = (wasm)0x72;
        break;
      case 7:
        wVar5 = (wasm)0x61;
        break;
      default:
        wVar5 = (wasm)0x3f;
        break;
      case 10:
        wVar5 = (wasm)0x2a;
      }
      if (lVar4 == 1) {
        lVar4 = 1;
        this = pwVar1;
      }
      else {
        lVar4 = lVar4 + -1;
        this = pwVar1 + 1;
        *pwVar1 = wVar5;
      }
      lVar2 = lVar2 + -1;
      puVar3 = puVar3 + 1;
      pwVar1 = this;
    } while (lVar2 != 0);
  }
  lVar4 = lVar4 + -1;
  if (lVar4 == 0) {
    lVar4 = 1;
    lVar2 = *param_3;
  }
  else {
    *this = (wasm)0x3a;
    lVar2 = *param_3;
    this = this + 1;
  }
  if (lVar2 != 0) {
    puVar3 = (undefined1 *)param_3[2];
    pwVar1 = this;
    do {
      wVar5 = (wasm)0x69;
      switch(*puVar3) {
      case 0:
        wVar5 = (wasm)0x76;
      case 1:
        break;
      case 2:
        wVar5 = (wasm)0x6c;
        break;
      case 3:
        wVar5 = (wasm)0x66;
        break;
      case 4:
        wVar5 = (wasm)0x64;
        break;
      case 5:
        wVar5 = (wasm)0x73;
        break;
      case 6:
        wVar5 = (wasm)0x72;
        break;
      case 7:
        wVar5 = (wasm)0x61;
        break;
      default:
        wVar5 = (wasm)0x3f;
        break;
      case 10:
        wVar5 = (wasm)0x2a;
      }
      if (lVar4 == 1) {
        lVar4 = 1;
        this = pwVar1;
      }
      else {
        lVar4 = lVar4 + -1;
        this = pwVar1 + 1;
        *pwVar1 = wVar5;
      }
      lVar2 = lVar2 + -1;
      puVar3 = puVar3 + 1;
      pwVar1 = this;
    } while (lVar2 != 0);
  }
  *this = (wasm)0x0;
  return param_2 - lVar4;
}

