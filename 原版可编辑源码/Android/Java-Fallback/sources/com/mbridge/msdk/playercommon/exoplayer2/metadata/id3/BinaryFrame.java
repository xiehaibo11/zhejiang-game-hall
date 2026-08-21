package com.mbridge.msdk.playercommon.exoplayer2.metadata.id3;

public final class BinaryFrame extends com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.Id3Frame {
    public static final android.os.Parcelable.Creator<com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.BinaryFrame> CREATOR = null;
    public final byte[] data;


    static {
            com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.BinaryFrame$1 r0 = new com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.BinaryFrame$1
            r0.<init>()
            com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.BinaryFrame.CREATOR = r0
            return
    }

    BinaryFrame(android.os.Parcel r2) {
            r1 = this;
            java.lang.String r0 = r2.readString()
            r1.<init>(r0)
            byte[] r2 = r2.createByteArray()
            r1.data = r2
            return
    }

    public BinaryFrame(java.lang.String r1, byte[] r2) {
            r0 = this;
            r0.<init>(r1)
            r0.data = r2
            return
    }

    public final boolean equals(java.lang.Object r5) {
            r4 = this;
            r0 = 1
            if (r4 != r5) goto L4
            return r0
        L4:
            r1 = 0
            if (r5 == 0) goto L2b
            java.lang.Class r2 = r4.getClass()
            java.lang.Class r3 = r5.getClass()
            if (r2 == r3) goto L12
            goto L2b
        L12:
            com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.BinaryFrame r5 = (com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.BinaryFrame) r5
            java.lang.String r2 = r4.id
            java.lang.String r3 = r5.id
            boolean r2 = r2.equals(r3)
            if (r2 == 0) goto L29
            byte[] r2 = r4.data
            byte[] r5 = r5.data
            boolean r5 = java.util.Arrays.equals(r2, r5)
            if (r5 == 0) goto L29
            goto L2a
        L29:
            r0 = r1
        L2a:
            return r0
        L2b:
            return r1
    }

    public final int hashCode() {
            r2 = this;
            java.lang.String r0 = r2.id
            int r0 = r0.hashCode()
            r1 = 527(0x20f, float:7.38E-43)
            int r1 = r1 + r0
            int r1 = r1 * 31
            byte[] r0 = r2.data
            int r0 = java.util.Arrays.hashCode(r0)
            int r1 = r1 + r0
            return r1
    }

    @Override
    public final void writeToParcel(android.os.Parcel r1, int r2) {
            r0 = this;
            java.lang.String r2 = r0.id
            r1.writeString(r2)
            byte[] r2 = r0.data
            r1.writeByteArray(r2)
            return
    }
}
