package com.mbridge.msdk.playercommon.exoplayer2.text.dvb;

public final class DvbDecoder extends com.mbridge.msdk.playercommon.exoplayer2.text.SimpleSubtitleDecoder {
    private final com.mbridge.msdk.playercommon.exoplayer2.text.dvb.DvbParser parser;

    public DvbDecoder(java.util.List<byte[]> r3) {
            r2 = this;
            java.lang.String r0 = "DvbDecoder"
            r2.<init>(r0)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r0 = new com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray
            r1 = 0
            java.lang.Object r3 = r3.get(r1)
            byte[] r3 = (byte[]) r3
            r0.<init>(r3)
            int r3 = r0.readUnsignedShort()
            int r0 = r0.readUnsignedShort()
            com.mbridge.msdk.playercommon.exoplayer2.text.dvb.DvbParser r1 = new com.mbridge.msdk.playercommon.exoplayer2.text.dvb.DvbParser
            r1.<init>(r3, r0)
            r2.parser = r1
            return
    }

    @Override
    protected final com.mbridge.msdk.playercommon.exoplayer2.text.Subtitle decode(byte[] r1, int r2, boolean r3) throws com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleDecoderException {
            r0 = this;
            com.mbridge.msdk.playercommon.exoplayer2.text.dvb.DvbSubtitle r1 = r0.decode(r1, r2, r3)
            return r1
    }

    @Override
    protected final com.mbridge.msdk.playercommon.exoplayer2.text.dvb.DvbSubtitle decode(byte[] r2, int r3, boolean r4) {
            r1 = this;
            if (r4 == 0) goto L7
            com.mbridge.msdk.playercommon.exoplayer2.text.dvb.DvbParser r4 = r1.parser
            r4.reset()
        L7:
            com.mbridge.msdk.playercommon.exoplayer2.text.dvb.DvbSubtitle r4 = new com.mbridge.msdk.playercommon.exoplayer2.text.dvb.DvbSubtitle
            com.mbridge.msdk.playercommon.exoplayer2.text.dvb.DvbParser r0 = r1.parser
            java.util.List r2 = r0.decode(r2, r3)
            r4.<init>(r2)
            return r4
    }
}
