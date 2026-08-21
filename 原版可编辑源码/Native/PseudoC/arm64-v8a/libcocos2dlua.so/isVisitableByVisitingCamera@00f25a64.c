
/* cocos2d::Node::isVisitableByVisitingCamera() const */

bool __thiscall cocos2d::Node::isVisitableByVisitingCamera(Node *this)

{
  bool bVar1;
  long lVar2;
  
  lVar2 = Camera::getVisitingCamera();
  if (lVar2 == 0) {
    bVar1 = true;
  }
  else {
                    /* try { // try from 00f25a7c to 01025aa7 has its CatchHandler @ 00f25a7c
                       catch() { ... } // from try @ 00f25a7c with catch @ 00f25a7c
                       catch() { ... } // from try @ 00f25b4c with catch @ 00f25a7c */
    bVar1 = (*(uint *)(lVar2 + 0x42c) & (uint)*(ushort *)(this + 0x222)) != 0;
  }
  return bVar1;
}

