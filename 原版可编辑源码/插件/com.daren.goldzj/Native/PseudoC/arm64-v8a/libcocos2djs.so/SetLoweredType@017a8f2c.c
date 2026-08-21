
/* v8::internal::compiler::SimdScalarLowering::SetLoweredType(v8::internal::compiler::Node*,
   v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::SimdScalarLowering::SetLoweredType
          (SimdScalarLowering *this,Node *param_1,Node *param_2)

{
  long lVar1;
  undefined1 uVar2;
  
  switch(*(undefined2 *)(*(long *)param_1 + 0x10)) {
  case 0x10:
  case 0x31:
  case 0x32:
  case 0x21e:
  case 0x21f:
  case 0x220:
  case 0x221:
  case 0x222:
  case 0x223:
  case 0x23c:
  case 0x23d:
  case 0x23e:
  case 0x23f:
  case 0x240:
  case 0x241:
  case 0x242:
  case 0x243:
  case 0x244:
  case 0x245:
  case 0x246:
  case 0x247:
  case 0x248:
  case 0x249:
  case 0x24a:
  case 0x24b:
  case 0x24c:
  case 0x24d:
  case 0x24e:
  case 0x24f:
  case 0x250:
  case 0x251:
  case 0x252:
  case 0x253:
  case 0x254:
  case 0x255:
  case 0x256:
  case 599:
  case 600:
  case 0x259:
  case 0x25a:
  case 0x2a1:
  case 0x2a2:
  case 0x2a3:
  case 0x2a4:
  case 0x2aa:
  case 0x2ab:
  case 0x2ac:
  case 0x2ad:
  case 0x2ae:
  case 0x2af:
switchD_017a8f54_caseD_10:
    lVar1 = *(long *)(this + 0x60);
    uVar2 = 3;
    break;
  default:
    switch(*(undefined2 *)(*(long *)param_2 + 0x10)) {
    case 0x210:
    case 0x211:
    case 0x264:
    case 0x276:
    case 0x2a5:
      goto switchD_017a8f54_caseD_10;
    default:
      lVar1 = *(long *)(this + 0x60);
      uVar2 = *(undefined1 *)(lVar1 + ((ulong)*(uint *)(param_2 + 0x14) & 0xffffff) * 0x10 + 8);
      break;
    case 0x21e:
    case 0x21f:
    case 0x220:
    case 0x221:
    case 0x222:
    case 0x223:
    case 0x23f:
    case 0x251:
      goto switchD_017a8f54_caseD_20d;
    case 0x240:
    case 0x241:
    case 0x252:
    case 0x253:
    case 0x283:
    case 0x294:
      goto switchD_017a8f54_caseD_25b;
    case 0x25f:
    case 0x260:
    case 0x273:
    case 0x274:
      goto switchD_017a8f54_caseD_27f;
    }
  case 0x1f9:
    lVar1 = *(long *)(this + 0x60);
    uVar2 = 0;
    break;
  case 0x20d:
  case 0x20e:
  case 0x20f:
  case 0x210:
  case 0x211:
  case 0x212:
  case 0x213:
  case 0x214:
  case 0x215:
  case 0x216:
  case 0x217:
  case 0x218:
  case 0x219:
  case 0x21a:
  case 0x21b:
  case 0x21c:
  case 0x21d:
switchD_017a8f54_caseD_20d:
    lVar1 = *(long *)(this + 0x60);
    uVar2 = 1;
    break;
  case 0x226:
    lVar1 = *(long *)(this + 0x60);
    uVar2 = 2;
    break;
  case 0x25b:
  case 0x25c:
  case 0x25d:
  case 0x25e:
  case 0x25f:
  case 0x260:
  case 0x261:
  case 0x262:
  case 0x263:
  case 0x264:
  case 0x265:
  case 0x266:
  case 0x267:
  case 0x268:
  case 0x269:
  case 0x26a:
  case 0x26b:
  case 0x26c:
  case 0x26d:
  case 0x26e:
  case 0x26f:
  case 0x270:
  case 0x273:
  case 0x274:
  case 0x275:
  case 0x276:
  case 0x277:
  case 0x278:
  case 0x279:
  case 0x27a:
  case 0x27b:
  case 0x27c:
switchD_017a8f54_caseD_25b:
    lVar1 = *(long *)(this + 0x60);
    uVar2 = 4;
    break;
  case 0x27f:
  case 0x280:
  case 0x281:
  case 0x282:
  case 0x283:
  case 0x284:
  case 0x285:
  case 0x286:
  case 0x287:
  case 0x288:
  case 0x289:
  case 0x28a:
  case 0x28b:
  case 0x28c:
  case 0x28d:
  case 0x28e:
  case 0x28f:
  case 0x290:
  case 0x291:
  case 0x294:
  case 0x295:
  case 0x296:
  case 0x297:
  case 0x298:
  case 0x299:
  case 0x29a:
  case 0x29b:
  case 0x2a6:
  case 0x2a7:
switchD_017a8f54_caseD_27f:
    lVar1 = *(long *)(this + 0x60);
    uVar2 = 5;
  }
  *(undefined1 *)(lVar1 + ((ulong)*(uint *)(param_1 + 0x14) & 0xffffff) * 0x10 + 8) = uVar2;
  return;
}

