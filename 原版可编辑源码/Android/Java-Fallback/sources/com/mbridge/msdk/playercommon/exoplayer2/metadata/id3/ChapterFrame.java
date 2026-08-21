package com.mbridge.msdk.playercommon.exoplayer2.metadata.id3;

public final class ChapterFrame extends com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.Id3Frame {
    public static final android.os.Parcelable.Creator<com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.ChapterFrame> CREATOR = null;
    public static final java.lang.String ID = "CHAP";
    public final java.lang.String chapterId;
    public final long endOffset;
    public final int endTimeMs;
    public final long startOffset;
    public final int startTimeMs;
    private final com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.Id3Frame[] subFrames;


    static {
            com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.ChapterFrame$1 r0 = new com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.ChapterFrame$1
            r0.<init>()
            com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.ChapterFrame.CREATOR = r0
            return
    }

    ChapterFrame(android.os.Parcel r5) {
            r4 = this;
            java.lang.String r0 = "CHAP"
            r4.<init>(r0)
            java.lang.String r0 = r5.readString()
            r4.chapterId = r0
            int r0 = r5.readInt()
            r4.startTimeMs = r0
            int r0 = r5.readInt()
            r4.endTimeMs = r0
            long r0 = r5.readLong()
            r4.startOffset = r0
            long r0 = r5.readLong()
            r4.endOffset = r0
            int r0 = r5.readInt()
            com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.Id3Frame[] r1 = new com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.Id3Frame[r0]
            r4.subFrames = r1
            r1 = 0
        L2c:
            if (r1 >= r0) goto L41
            com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.Id3Frame[] r2 = r4.subFrames
            java.lang.Class<com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.Id3Frame> r3 = com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.Id3Frame.class
            java.lang.ClassLoader r3 = r3.getClassLoader()
            android.os.Parcelable r3 = r5.readParcelable(r3)
            com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.Id3Frame r3 = (com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.Id3Frame) r3
            r2[r1] = r3
            int r1 = r1 + 1
            goto L2c
        L41:
            return
    }

    public ChapterFrame(java.lang.String r2, int r3, int r4, long r5, long r7, com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.Id3Frame[] r9) {
            r1 = this;
            java.lang.String r0 = "CHAP"
            r1.<init>(r0)
            r1.chapterId = r2
            r1.startTimeMs = r3
            r1.endTimeMs = r4
            r1.startOffset = r5
            r1.endOffset = r7
            r1.subFrames = r9
            return
    }

    @Override
    public final int describeContents() {
            r1 = this;
            r0 = 0
            return r0
    }

    public final boolean equals(java.lang.Object r7) {
            r6 = this;
            r0 = 1
            if (r6 != r7) goto L4
            return r0
        L4:
            r1 = 0
            if (r7 == 0) goto L47
            java.lang.Class r2 = r6.getClass()
            java.lang.Class r3 = r7.getClass()
            if (r2 == r3) goto L12
            goto L47
        L12:
            com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.ChapterFrame r7 = (com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.ChapterFrame) r7
            int r2 = r6.startTimeMs
            int r3 = r7.startTimeMs
            if (r2 != r3) goto L45
            int r2 = r6.endTimeMs
            int r3 = r7.endTimeMs
            if (r2 != r3) goto L45
            long r2 = r6.startOffset
            long r4 = r7.startOffset
            int r2 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r2 != 0) goto L45
            long r2 = r6.endOffset
            long r4 = r7.endOffset
            int r2 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r2 != 0) goto L45
            java.lang.String r2 = r6.chapterId
            java.lang.String r3 = r7.chapterId
            boolean r2 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.areEqual(r2, r3)
            if (r2 == 0) goto L45
            com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.Id3Frame[] r2 = r6.subFrames
            com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.Id3Frame[] r7 = r7.subFrames
            boolean r7 = java.util.Arrays.equals(r2, r7)
            if (r7 == 0) goto L45
            goto L46
        L45:
            r0 = r1
        L46:
            return r0
        L47:
            return r1
    }

    public final com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.Id3Frame getSubFrame(int r2) {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.Id3Frame[] r0 = r1.subFrames
            r2 = r0[r2]
            return r2
    }

    public final int getSubFrameCount() {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.Id3Frame[] r0 = r1.subFrames
            int r0 = r0.length
            return r0
    }

    public final int hashCode() {
            r4 = this;
            int r0 = r4.startTimeMs
            r1 = 527(0x20f, float:7.38E-43)
            int r1 = r1 + r0
            int r1 = r1 * 31
            int r0 = r4.endTimeMs
            int r1 = r1 + r0
            int r1 = r1 * 31
            long r2 = r4.startOffset
            int r0 = (int) r2
            int r1 = r1 + r0
            int r1 = r1 * 31
            long r2 = r4.endOffset
            int r0 = (int) r2
            int r1 = r1 + r0
            int r1 = r1 * 31
            java.lang.String r0 = r4.chapterId
            if (r0 == 0) goto L21
            int r0 = r0.hashCode()
            goto L22
        L21:
            r0 = 0
        L22:
            int r1 = r1 + r0
            return r1
    }

    @Override
    public final void writeToParcel(android.os.Parcel r5, int r6) {
            r4 = this;
            java.lang.String r6 = r4.chapterId
            r5.writeString(r6)
            int r6 = r4.startTimeMs
            r5.writeInt(r6)
            int r6 = r4.endTimeMs
            r5.writeInt(r6)
            long r0 = r4.startOffset
            r5.writeLong(r0)
            long r0 = r4.endOffset
            r5.writeLong(r0)
            com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.Id3Frame[] r6 = r4.subFrames
            int r6 = r6.length
            r5.writeInt(r6)
            com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.Id3Frame[] r6 = r4.subFrames
            int r0 = r6.length
            r1 = 0
            r2 = r1
        L24:
            if (r2 >= r0) goto L2e
            r3 = r6[r2]
            r5.writeParcelable(r3, r1)
            int r2 = r2 + 1
            goto L24
        L2e:
            return
    }
}
