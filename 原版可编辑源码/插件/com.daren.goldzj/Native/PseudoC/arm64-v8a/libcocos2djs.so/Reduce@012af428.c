
/* v8::internal::compiler::RedundancyElimination::Reduce(v8::internal::compiler::Node*) */

undefined8 __thiscall
v8::internal::compiler::RedundancyElimination::Reduce(RedundancyElimination *this,Node *param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  if (((ulong)(*(long *)(this + 0x18) - *(long *)(this + 0x10) >> 3) <=
       ((ulong)*(uint *)(param_1 + 0x14) & 0xffffff)) ||
     (*(long *)(*(long *)(this + 0x10) + ((ulong)*(uint *)(param_1 + 0x14) & 0xffffff) * 8) == 0)) {
    lVar2 = *(long *)param_1;
    switch(*(undefined2 *)(lVar2 + 0x10)) {
    case 0:
      uVar1 = ReduceStart(this,param_1);
      return uVar1;
    default:
      if ((*(int *)(lVar2 + 0x18) == 1) && (*(char *)(lVar2 + 0x24) == '\x01')) {
        uVar1 = TakeChecksFromFirstEffect(this,param_1);
        return uVar1;
      }
      break;
    case 0x24:
      uVar1 = ReduceEffectPhi(this,param_1);
      return uVar1;
    case 0x3d:
      break;
    case 0x55:
    case 0x56:
    case 0x57:
    case 0x58:
    case 0x59:
    case 0x5a:
    case 0x5b:
    case 0x5c:
    case 0x5d:
    case 0x5e:
    case 0x5f:
    case 0x60:
    case 0x61:
    case 0x62:
    case 99:
    case 100:
    case 0x65:
    case 0x66:
    case 0x67:
    case 0x68:
    case 0x69:
    case 0x6a:
    case 0x6b:
    case 0x6c:
    case 0x6d:
    case 0x6e:
    case 0xbf:
    case 0xd4:
    case 0xd5:
    case 0xd7:
    case 0xd8:
    case 0xd9:
    case 0xda:
    case 0xdb:
    case 0xdc:
    case 0xdd:
    case 0xde:
    case 0xdf:
    case 0xe0:
    case 0xe1:
    case 0xe2:
      uVar1 = ReduceCheckNode(this,param_1);
      return uVar1;
    case 0x72:
    case 0x73:
    case 0x74:
      uVar1 = ReduceSpeculativeNumberComparison(this,param_1);
      return uVar1;
    case 0x8e:
    case 0x8f:
    case 0x99:
    case 0x9a:
    case 0xc0:
      uVar1 = ReduceSpeculativeNumberOperation(this,param_1);
      return uVar1;
    }
  }
  return 0;
}

