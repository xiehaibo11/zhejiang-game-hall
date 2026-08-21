package com.mbridge.msdk.playercommon.exoplayer2.extractor.flv;

abstract class TagPayloadReader {
    protected final com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput output;

    public static final class UnsupportedFormatException extends com.mbridge.msdk.playercommon.exoplayer2.ParserException {
        public UnsupportedFormatException(java.lang.String r1) {
                r0 = this;
                r0.<init>(r1)
                return
        }
    }

    protected TagPayloadReader(com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput r1) {
            r0 = this;
            r0.<init>()
            r0.output = r1
            return
    }

    public final void consume(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r2, long r3) throws com.mbridge.msdk.playercommon.exoplayer2.ParserException {
            r1 = this;
            boolean r0 = r1.parseHeader(r2)
            if (r0 == 0) goto L9
            r1.parsePayload(r2, r3)
        L9:
            return
    }

    protected abstract boolean parseHeader(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r1) throws com.mbridge.msdk.playercommon.exoplayer2.ParserException;

    protected abstract void parsePayload(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r1, long r2) throws com.mbridge.msdk.playercommon.exoplayer2.ParserException;

    public abstract void seek();
}
