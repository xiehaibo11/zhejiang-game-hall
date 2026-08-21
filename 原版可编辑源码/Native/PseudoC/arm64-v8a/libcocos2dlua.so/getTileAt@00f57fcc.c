
/* cocos2d::TileMapAtlas::getTileAt(cocos2d::Vec2 const&) const */

ulong __thiscall cocos2d::TileMapAtlas::getTileAt(TileMapAtlas *this,Vec2 *param_1)

{
                    /* catch() { ... } // from try @ 00f57a88 with catch @ 00f57fcc */
                    /* catch() { ... } // from try @ 00f57ae8 with catch @ 00f57fd4
                       catch() { ... } // from try @ 00f57c98 with catch @ 00f57fd4 */
                    /* catch() { ... } // from try @ 00f57ccc with catch @ 00f57fd8
                       catch() { ... } // from try @ 00f57d5c with catch @ 00f57fd8
                       catch() { ... } // from try @ 00f57e34 with catch @ 00f57fd8 */
                    /* catch() { ... } // from try @ 00f57b64 with catch @ 00f57fdc */
                    /* catch() { ... } // from try @ 00f57b58 with catch @ 00f57fec */
                    /* catch() { ... } // from try @ 00f57b2c with catch @ 00f57ff0 */
                    /* catch() { ... } // from try @ 00f57c14 with catch @ 00f57ff4 */
                    /* catch() { ... } // from try @ 00f57bc0 with catch @ 00f57ff8 */
  return (ulong)*(uint3 *)(*(long *)(*(long *)(this + 0x418) + 0x10) +
                          (ulong)(uint)(int)(*(float *)param_1 +
                                            *(float *)(param_1 + 4) *
                                            (float)(int)*(short *)(*(long *)(this + 0x418) + 6)) * 3
                          );
}

