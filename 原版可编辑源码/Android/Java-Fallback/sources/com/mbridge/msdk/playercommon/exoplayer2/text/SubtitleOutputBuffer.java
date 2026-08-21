package com.mbridge.msdk.playercommon.exoplayer2.text;

public abstract class SubtitleOutputBuffer extends com.mbridge.msdk.playercommon.exoplayer2.decoder.OutputBuffer implements com.mbridge.msdk.playercommon.exoplayer2.text.Subtitle {
    private long subsampleOffsetUs;
    private com.mbridge.msdk.playercommon.exoplayer2.text.Subtitle subtitle;

    public SubtitleOutputBuffer() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public void clear() {
            r1 = this;
            super.clear()
            r0 = 0
            r1.subtitle = r0
            return
    }

    @Override
    public java.util.List<com.mbridge.msdk.playercommon.exoplayer2.text.Cue> getCues(long r4) {
            r3 = this;
            com.mbridge.msdk.playercommon.exoplayer2.text.Subtitle r0 = r3.subtitle
            long r1 = r3.subsampleOffsetUs
            long r4 = r4 - r1
            java.util.List r4 = r0.getCues(r4)
            return r4
    }

    @Override
    public long getEventTime(int r5) {
            r4 = this;
            com.mbridge.msdk.playercommon.exoplayer2.text.Subtitle r0 = r4.subtitle
            long r0 = r0.getEventTime(r5)
            long r2 = r4.subsampleOffsetUs
            long r0 = r0 + r2
            return r0
    }

    @Override
    public int getEventTimeCount() {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.text.Subtitle r0 = r1.subtitle
            int r0 = r0.getEventTimeCount()
            return r0
    }

    @Override
    public int getNextEventTimeIndex(long r4) {
            r3 = this;
            com.mbridge.msdk.playercommon.exoplayer2.text.Subtitle r0 = r3.subtitle
            long r1 = r3.subsampleOffsetUs
            long r4 = r4 - r1
            int r4 = r0.getNextEventTimeIndex(r4)
            return r4
    }

    @Override
    public abstract void release();

    public void setContent(long r1, com.mbridge.msdk.playercommon.exoplayer2.text.Subtitle r3, long r4) {
            r0 = this;
            r0.timeUs = r1
            r0.subtitle = r3
            r1 = 9223372036854775807(0x7fffffffffffffff, double:NaN)
            int r1 = (r4 > r1 ? 1 : (r4 == r1 ? 0 : -1))
            if (r1 != 0) goto Lf
            long r4 = r0.timeUs
        Lf:
            r0.subsampleOffsetUs = r4
            return
    }
}
