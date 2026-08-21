
/* v8::internal::GlobalHandles::PostScavengeProcessing(unsigned int) */

long __thiscall
v8::internal::GlobalHandles::PostScavengeProcessing(GlobalHandles *this,uint param_1)

{
  undefined8 *puVar1;
  Node NVar2;
  long lVar3;
  Node *this_00;
  undefined8 *puVar4;
  
  puVar4 = *(undefined8 **)(this + 0x10);
  puVar1 = *(undefined8 **)(this + 0x18);
  if (puVar4 == puVar1) {
    lVar3 = 0;
  }
  else {
    lVar3 = 0;
    do {
      this_00 = (Node *)*puVar4;
      NVar2 = this_00[0xb];
      if ((((byte)NVar2 & 7) != 0) && ((((byte)NVar2 & 7) != 4 || (((byte)NVar2 & 0x30) == 0)))) {
        if (((byte)NVar2 & 7) == 3) {
          Node::PostGarbageCollectionProcessing(this_00,*(Isolate **)this);
        }
        if (*(uint *)(this + 0xa4) != param_1) {
          return lVar3;
        }
        NVar2 = this_00[0xb];
        if (((byte)NVar2 & 7) == 4) {
          if (((byte)NVar2 & 0x30) != 0) goto LAB_00f67600;
        }
        else if (((byte)NVar2 & 7) == 0) {
LAB_00f67600:
          lVar3 = lVar3 + 1;
        }
      }
      puVar4 = puVar4 + 1;
    } while (puVar1 != puVar4);
  }
  return lVar3;
}

