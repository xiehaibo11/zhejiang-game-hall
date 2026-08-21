package com.mbridge.msdk.playercommon.exoplayer2.source;

public final class TrackGroup implements android.os.Parcelable {
    public static final android.os.Parcelable.Creator<com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroup> CREATOR = null;
    private final com.mbridge.msdk.playercommon.exoplayer2.Format[] formats;
    private int hashCode;
    public final int length;


    static {
            com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroup$1 r0 = new com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroup$1
            r0.<init>()
            com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroup.CREATOR = r0
            return
    }

    TrackGroup(android.os.Parcel r4) {
            r3 = this;
            r3.<init>()
            int r0 = r4.readInt()
            r3.length = r0
            com.mbridge.msdk.playercommon.exoplayer2.Format[] r0 = new com.mbridge.msdk.playercommon.exoplayer2.Format[r0]
            r3.formats = r0
            r0 = 0
        Le:
            int r1 = r3.length
            if (r0 >= r1) goto L25
            com.mbridge.msdk.playercommon.exoplayer2.Format[] r1 = r3.formats
            java.lang.Class<com.mbridge.msdk.playercommon.exoplayer2.Format> r2 = com.mbridge.msdk.playercommon.exoplayer2.Format.class
            java.lang.ClassLoader r2 = r2.getClassLoader()
            android.os.Parcelable r2 = r4.readParcelable(r2)
            com.mbridge.msdk.playercommon.exoplayer2.Format r2 = (com.mbridge.msdk.playercommon.exoplayer2.Format) r2
            r1[r0] = r2
            int r0 = r0 + 1
            goto Le
        L25:
            return
    }

    public TrackGroup(com.mbridge.msdk.playercommon.exoplayer2.Format... r2) {
            r1 = this;
            r1.<init>()
            int r0 = r2.length
            if (r0 <= 0) goto L8
            r0 = 1
            goto L9
        L8:
            r0 = 0
        L9:
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkState(r0)
            r1.formats = r2
            int r2 = r2.length
            r1.length = r2
            return
    }

    @Override
    public final int describeContents() {
            r1 = this;
            r0 = 0
            return r0
    }

    public final boolean equals(java.lang.Object r5) {
            r4 = this;
            r0 = 1
            if (r4 != r5) goto L4
            return r0
        L4:
            r1 = 0
            if (r5 == 0) goto L27
            java.lang.Class r2 = r4.getClass()
            java.lang.Class r3 = r5.getClass()
            if (r2 == r3) goto L12
            goto L27
        L12:
            com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroup r5 = (com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroup) r5
            int r2 = r4.length
            int r3 = r5.length
            if (r2 != r3) goto L25
            com.mbridge.msdk.playercommon.exoplayer2.Format[] r2 = r4.formats
            com.mbridge.msdk.playercommon.exoplayer2.Format[] r5 = r5.formats
            boolean r5 = java.util.Arrays.equals(r2, r5)
            if (r5 == 0) goto L25
            goto L26
        L25:
            r0 = r1
        L26:
            return r0
        L27:
            return r1
    }

    public final com.mbridge.msdk.playercommon.exoplayer2.Format getFormat(int r2) {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.Format[] r0 = r1.formats
            r2 = r0[r2]
            return r2
    }

    public final int hashCode() {
            r2 = this;
            int r0 = r2.hashCode
            if (r0 != 0) goto Lf
            r0 = 527(0x20f, float:7.38E-43)
            com.mbridge.msdk.playercommon.exoplayer2.Format[] r1 = r2.formats
            int r1 = java.util.Arrays.hashCode(r1)
            int r0 = r0 + r1
            r2.hashCode = r0
        Lf:
            int r0 = r2.hashCode
            return r0
    }

    public final int indexOf(com.mbridge.msdk.playercommon.exoplayer2.Format r4) {
            r3 = this;
            r0 = 0
        L1:
            com.mbridge.msdk.playercommon.exoplayer2.Format[] r1 = r3.formats
            int r2 = r1.length
            if (r0 >= r2) goto Le
            r1 = r1[r0]
            if (r4 != r1) goto Lb
            return r0
        Lb:
            int r0 = r0 + 1
            goto L1
        Le:
            r4 = -1
            return r4
    }

    @Override
    public final void writeToParcel(android.os.Parcel r3, int r4) {
            r2 = this;
            int r4 = r2.length
            r3.writeInt(r4)
            r4 = 0
            r0 = r4
        L7:
            int r1 = r2.length
            if (r0 >= r1) goto L15
            com.mbridge.msdk.playercommon.exoplayer2.Format[] r1 = r2.formats
            r1 = r1[r0]
            r3.writeParcelable(r1, r4)
            int r0 = r0 + 1
            goto L7
        L15:
            return
    }
}
