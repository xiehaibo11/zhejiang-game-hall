package com.mbridge.msdk.playercommon.exoplayer2.metadata.id3;

public final class ChapterTocFrame extends com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.Id3Frame {
    public static final android.os.Parcelable.Creator<com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.ChapterTocFrame> CREATOR = null;
    public static final java.lang.String ID = "CTOC";
    public final java.lang.String[] children;
    public final java.lang.String elementId;
    public final boolean isOrdered;
    public final boolean isRoot;
    private final com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.Id3Frame[] subFrames;


    static {
            com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.ChapterTocFrame$1 r0 = new com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.ChapterTocFrame$1
            r0.<init>()
            com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.ChapterTocFrame.CREATOR = r0
            return
    }

    ChapterTocFrame(android.os.Parcel r5) {
            r4 = this;
            java.lang.String r0 = "CTOC"
            r4.<init>(r0)
            java.lang.String r0 = r5.readString()
            r4.elementId = r0
            byte r0 = r5.readByte()
            r1 = 1
            r2 = 0
            if (r0 == 0) goto L15
            r0 = r1
            goto L16
        L15:
            r0 = r2
        L16:
            r4.isRoot = r0
            byte r0 = r5.readByte()
            if (r0 == 0) goto L1f
            goto L20
        L1f:
            r1 = r2
        L20:
            r4.isOrdered = r1
            java.lang.String[] r0 = r5.createStringArray()
            r4.children = r0
            int r0 = r5.readInt()
            com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.Id3Frame[] r1 = new com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.Id3Frame[r0]
            r4.subFrames = r1
        L30:
            if (r2 >= r0) goto L45
            com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.Id3Frame[] r1 = r4.subFrames
            java.lang.Class<com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.Id3Frame> r3 = com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.Id3Frame.class
            java.lang.ClassLoader r3 = r3.getClassLoader()
            android.os.Parcelable r3 = r5.readParcelable(r3)
            com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.Id3Frame r3 = (com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.Id3Frame) r3
            r1[r2] = r3
            int r2 = r2 + 1
            goto L30
        L45:
            return
    }

    public ChapterTocFrame(java.lang.String r2, boolean r3, boolean r4, java.lang.String[] r5, com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.Id3Frame[] r6) {
            r1 = this;
            java.lang.String r0 = "CTOC"
            r1.<init>(r0)
            r1.elementId = r2
            r1.isRoot = r3
            r1.isOrdered = r4
            r1.children = r5
            r1.subFrames = r6
            return
    }

    public final boolean equals(java.lang.Object r5) {
            r4 = this;
            r0 = 1
            if (r4 != r5) goto L4
            return r0
        L4:
            r1 = 0
            if (r5 == 0) goto L41
            java.lang.Class r2 = r4.getClass()
            java.lang.Class r3 = r5.getClass()
            if (r2 == r3) goto L12
            goto L41
        L12:
            com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.ChapterTocFrame r5 = (com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.ChapterTocFrame) r5
            boolean r2 = r4.isRoot
            boolean r3 = r5.isRoot
            if (r2 != r3) goto L3f
            boolean r2 = r4.isOrdered
            boolean r3 = r5.isOrdered
            if (r2 != r3) goto L3f
            java.lang.String r2 = r4.elementId
            java.lang.String r3 = r5.elementId
            boolean r2 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.areEqual(r2, r3)
            if (r2 == 0) goto L3f
            java.lang.String[] r2 = r4.children
            java.lang.String[] r3 = r5.children
            boolean r2 = java.util.Arrays.equals(r2, r3)
            if (r2 == 0) goto L3f
            com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.Id3Frame[] r2 = r4.subFrames
            com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.Id3Frame[] r5 = r5.subFrames
            boolean r5 = java.util.Arrays.equals(r2, r5)
            if (r5 == 0) goto L3f
            goto L40
        L3f:
            r0 = r1
        L40:
            return r0
        L41:
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
            r2 = this;
            boolean r0 = r2.isRoot
            r1 = 527(0x20f, float:7.38E-43)
            int r1 = r1 + r0
            int r1 = r1 * 31
            boolean r0 = r2.isOrdered
            int r1 = r1 + r0
            int r1 = r1 * 31
            java.lang.String r0 = r2.elementId
            if (r0 == 0) goto L15
            int r0 = r0.hashCode()
            goto L16
        L15:
            r0 = 0
        L16:
            int r1 = r1 + r0
            return r1
    }

    @Override
    public final void writeToParcel(android.os.Parcel r5, int r6) {
            r4 = this;
            java.lang.String r6 = r4.elementId
            r5.writeString(r6)
            boolean r6 = r4.isRoot
            byte r6 = (byte) r6
            r5.writeByte(r6)
            boolean r6 = r4.isOrdered
            byte r6 = (byte) r6
            r5.writeByte(r6)
            java.lang.String[] r6 = r4.children
            r5.writeStringArray(r6)
            com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.Id3Frame[] r6 = r4.subFrames
            int r6 = r6.length
            r5.writeInt(r6)
            com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.Id3Frame[] r6 = r4.subFrames
            int r0 = r6.length
            r1 = 0
            r2 = r1
        L21:
            if (r2 >= r0) goto L2b
            r3 = r6[r2]
            r5.writeParcelable(r3, r1)
            int r2 = r2 + 1
            goto L21
        L2b:
            return
    }
}
