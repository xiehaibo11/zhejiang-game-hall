package com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4;

public final class Track {
    public static final int TRANSFORMATION_CEA608_CDAT = 1;
    public static final int TRANSFORMATION_NONE = 0;
    public final long durationUs;
    public final long[] editListDurations;
    public final long[] editListMediaTimes;
    public final com.mbridge.msdk.playercommon.exoplayer2.Format format;
    public final int id;
    public final long movieTimescale;
    public final int nalUnitLengthFieldLength;
    private final com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.TrackEncryptionBox[] sampleDescriptionEncryptionBoxes;
    public final int sampleTransformation;
    public final long timescale;
    public final int type;

    public @interface Transformation {
    }

    public Track(int r1, int r2, long r3, long r5, long r7, com.mbridge.msdk.playercommon.exoplayer2.Format r9, int r10, com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.TrackEncryptionBox[] r11, int r12, long[] r13, long[] r14) {
            r0 = this;
            r0.<init>()
            r0.id = r1
            r0.type = r2
            r0.timescale = r3
            r0.movieTimescale = r5
            r0.durationUs = r7
            r0.format = r9
            r0.sampleTransformation = r10
            r0.sampleDescriptionEncryptionBoxes = r11
            r0.nalUnitLengthFieldLength = r12
            r0.editListDurations = r13
            r0.editListMediaTimes = r14
            return
    }

    public final com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.TrackEncryptionBox getSampleDescriptionEncryptionBox(int r2) {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.TrackEncryptionBox[] r0 = r1.sampleDescriptionEncryptionBoxes
            if (r0 != 0) goto L6
            r2 = 0
            goto L8
        L6:
            r2 = r0[r2]
        L8:
            return r2
    }
}
