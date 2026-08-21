package com.mbridge.msdk.playercommon.exoplayer2.source;

public final class TrackGroupArray implements android.os.Parcelable {
    public static final android.os.Parcelable.Creator<com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroupArray> CREATOR = null;
    public static final com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroupArray EMPTY = null;
    private int hashCode;
    public final int length;
    private final com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroup[] trackGroups;


    static {
            com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroupArray r0 = new com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroupArray
            r1 = 0
            com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroup[] r1 = new com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroup[r1]
            r0.<init>(r1)
            com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroupArray.EMPTY = r0
            com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroupArray$1 r0 = new com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroupArray$1
            r0.<init>()
            com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroupArray.CREATOR = r0
            return
    }

    TrackGroupArray(android.os.Parcel r4) {
            r3 = this;
            r3.<init>()
            int r0 = r4.readInt()
            r3.length = r0
            com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroup[] r0 = new com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroup[r0]
            r3.trackGroups = r0
            r0 = 0
        Le:
            int r1 = r3.length
            if (r0 >= r1) goto L25
            com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroup[] r1 = r3.trackGroups
            java.lang.Class<com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroup> r2 = com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroup.class
            java.lang.ClassLoader r2 = r2.getClassLoader()
            android.os.Parcelable r2 = r4.readParcelable(r2)
            com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroup r2 = (com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroup) r2
            r1[r0] = r2
            int r0 = r0 + 1
            goto Le
        L25:
            return
    }

    public TrackGroupArray(com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroup... r1) {
            r0 = this;
            r0.<init>()
            r0.trackGroups = r1
            int r1 = r1.length
            r0.length = r1
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
            com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroupArray r5 = (com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroupArray) r5
            int r2 = r4.length
            int r3 = r5.length
            if (r2 != r3) goto L25
            com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroup[] r2 = r4.trackGroups
            com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroup[] r5 = r5.trackGroups
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

    public final com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroup get(int r2) {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroup[] r0 = r1.trackGroups
            r2 = r0[r2]
            return r2
    }

    public final int hashCode() {
            r1 = this;
            int r0 = r1.hashCode
            if (r0 != 0) goto Lc
            com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroup[] r0 = r1.trackGroups
            int r0 = java.util.Arrays.hashCode(r0)
            r1.hashCode = r0
        Lc:
            int r0 = r1.hashCode
            return r0
    }

    public final int indexOf(com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroup r3) {
            r2 = this;
            r0 = 0
        L1:
            int r1 = r2.length
            if (r0 >= r1) goto Lf
            com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroup[] r1 = r2.trackGroups
            r1 = r1[r0]
            if (r1 != r3) goto Lc
            return r0
        Lc:
            int r0 = r0 + 1
            goto L1
        Lf:
            r3 = -1
            return r3
    }

    public final boolean isEmpty() {
            r1 = this;
            int r0 = r1.length
            if (r0 != 0) goto L6
            r0 = 1
            goto L7
        L6:
            r0 = 0
        L7:
            return r0
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
            com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroup[] r1 = r2.trackGroups
            r1 = r1[r0]
            r3.writeParcelable(r1, r4)
            int r0 = r0 + 1
            goto L7
        L15:
            return
    }
}
