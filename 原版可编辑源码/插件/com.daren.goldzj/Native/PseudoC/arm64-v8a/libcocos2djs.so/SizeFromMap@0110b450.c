
/* v8::internal::HeapObject::SizeFromMap(v8::internal::Map) const */

uint __thiscall v8::internal::HeapObject::SizeFromMap(HeapObject *this,long param_2)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  
  if (*(byte *)(param_2 + 3) != 0) {
    return (uint)*(byte *)(param_2 + 3) << 2;
  }
  uVar1 = *(ushort *)(param_2 + 7);
  if (0xe < uVar1 - 0x76) {
    if (uVar1 - 0x88 < 10) {
      if (uVar1 == 0x8f) {
        return 0x42c;
      }
      uVar2 = *(uint *)(*(long *)this + 3);
      goto LAB_0110b480;
    }
    uVar2 = (uint)uVar1;
    if (uVar2 < 0x28) {
      if (uVar2 != 0) {
        if (uVar2 == 8) goto LAB_0110b530;
        if (uVar2 != 0x20) goto switchD_0110b4d4_caseD_88;
      }
      iVar3 = *(int *)(*(long *)this + 7) << 1;
LAB_0110b53c:
      return iVar3 + 0xfU & 0xfffffffc;
    }
    switch(uVar2) {
    case 0x85:
      return (*(int *)(*(long *)this + 3) >> 1) + 0xbU & 0xfffffffc;
    case 0x86:
      return (*(int *)(*(long *)this + 3) >> 1) + 0x25U & 0xfffffffc;
    case 0x87:
      uVar2 = *(uint *)(*(long *)this + 3);
      goto LAB_0110b5bc;
    case 0x88:
    case 0x89:
    case 0x8a:
    case 0x8b:
    case 0x8c:
    case 0x8d:
    case 0x8e:
    case 0x8f:
    case 0x90:
    case 0x91:
    case 0x92:
    case 0x93:
    case 0x94:
    case 0x95:
    case 0x96:
    case 0x97:
    case 0x98:
    case 0x99:
    case 0x9a:
    case 0x9b:
    case 0x9d:
    case 0x9f:
    case 0xa0:
      goto switchD_0110b4d4_caseD_88;
    case 0x9c:
      return *(short *)(*(long *)this + 3) * 0xc + 0x10;
    case 0x9e:
      if (*(int *)(*(long *)this + 3) != 0) {
        return ((*(int *)(*(long *)this + 3) + -1) / 6) * 4 + 0x10;
      }
      return 0xc;
    case 0xa1:
      return *(int *)(*(long *)this + 3) >> 1;
    default:
      if (uVar2 == 0x28) {
LAB_0110b530:
        iVar3 = *(int *)(*(long *)this + 7);
        goto LAB_0110b53c;
      }
switchD_0110b4d4_caseD_88:
      if (1 < uVar2 - 0x97) {
        switch(uVar1) {
        case 0x92:
          return (uint)*(byte *)(*(long *)this + 5) * 0x13 + 0xb & 0x3ffc;
        case 0x93:
          return (uint)*(byte *)(*(long *)this + 5) * 0xb + 0xb & 0x1ffc;
        case 0x94:
          return (uint)*(byte *)(*(long *)this + 9) * 0x1b + 0xf & 0x3ffc;
        default:
          uVar2 = *(uint *)(*(long *)this + 3);
          break;
        case 0x9a:
          lVar4 = *(long *)this;
          iVar3 = *(int *)(lVar4 + 0x13);
          if ((*(byte *)(lVar4 + 0x17) & 1) != 0) {
            uVar5 = (long)(iVar3 + 0x47) & 0xfffffffffffffff8;
            iVar3 = (int)uVar5 + *(int *)(lVar4 + uVar5 + -1) + -0x38;
          }
          return (iVar3 + 3U & 0xfffffffc) + 0x5f & 0xffffffe0;
        case 0x9f:
          return *(int *)(*(long *)this + 0xf) * 4 + 0x20;
        case 0xa3:
          return (*(int *)(*(long *)this + 3) + 0xfU & 0xfffffffc) + *(int *)(*(long *)this + 7) * 4
          ;
        case 0xa4:
          return (*(uint *)(*(long *)this + 3) & 0x7fe) * 2 + 8;
        case 0xa7:
          return (*(uint *)(*(long *)this + 3) & 0x7ffffffe) * 2 + 0xc;
        }
LAB_0110b5bc:
        return (uVar2 & 0x3ffffffe) * 4 + 8;
      }
    }
  }
  uVar2 = *(uint *)(*(long *)this + 3);
LAB_0110b480:
  return (uVar2 & 0x7ffffffe) * 2 + 8;
}

