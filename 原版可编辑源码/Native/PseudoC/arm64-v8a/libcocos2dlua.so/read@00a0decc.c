
/* universe::network::LuanLe::read(universe::network::OStream&) */

void __thiscall universe::network::LuanLe::read(LuanLe *this,OStream *param_1)

{
  OStream::operator>>(param_1,(ushort *)(this + 8));
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a0de54 with catch @ 00a0deec
                       catch(type#1 @ 00000000) { ... } // from try @ 00a0de7c with catch @ 00a0deec
                       catch(type#1 @ 00000000) { ... } // from try @ 00a0dea4 with catch @ 00a0deec
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a0ddf4 with catch @ 00a0def0
                       catch(type#1 @ 00000000) { ... } // from try @ 00a0de20 with catch @ 00a0def0
                        */
  OStream::operator>>(param_1,(ushort *)(this + 10));
  OStream::operator>>(param_1,(ushort *)(this + 0xc));
  OStream::operator>>(param_1,(ushort *)(this + 0xe));
  OStream::operator>>(param_1,(uint *)(this + 0x10));
  return;
}

