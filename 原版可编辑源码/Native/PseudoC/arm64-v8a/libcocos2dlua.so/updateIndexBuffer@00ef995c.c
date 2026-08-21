
/* cocos2d::experimental::TMXLayer::updateIndexBuffer() */

void __thiscall cocos2d::experimental::TMXLayer::updateIndexBuffer(TMXLayer *this)

{
  IndexBuffer *this_00;
  Ref *this_01;
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ef9920 with catch @ 00ef9964
                        */
  this_00 = *(IndexBuffer **)(this + 0x4a0);
  if (this_00 == (IndexBuffer *)0x0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ef989c with catch @ 00ef9978
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ef9878 with catch @ 00ef997c
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ef9844 with catch @ 00ef998c
                        */
    this_01 = (Ref *)IndexBuffer::create(0,(ulong)(*(long *)(this + 0x420) - *(long *)(this + 0x418)
                                                  ) >> 1,0x88e4,1);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ef97f0 with catch @ 00ef9990
                        */
    *(Ref **)(this + 0x4a0) = this_01;
    this_00 = (IndexBuffer *)0x0;
    if (this_01 != (Ref *)0x0) {
      Ref::retain(this_01);
      this_00 = *(IndexBuffer **)(this + 0x4a0);
    }
  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ef97e0 with catch @ 00ef99b0
                        */
  IndexBuffer::updateIndices
            (this_00,*(void **)(this + 0x418),
             (int)((ulong)(*(long *)(this + 0x420) - (long)*(void **)(this + 0x418)) >> 1),0,0);
  return;
}

