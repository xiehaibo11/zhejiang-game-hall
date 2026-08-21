package com.mbridge.msdk.playercommon.exoplayer2.metadata;

public final class Metadata implements android.os.Parcelable {
    public static final android.os.Parcelable.Creator<com.mbridge.msdk.playercommon.exoplayer2.metadata.Metadata> CREATOR = null;
    private final com.mbridge.msdk.playercommon.exoplayer2.metadata.Metadata.Entry[] entries;


    public interface Entry extends android.os.Parcelable {
    }

    static {
            com.mbridge.msdk.playercommon.exoplayer2.metadata.Metadata$1 r0 = new com.mbridge.msdk.playercommon.exoplayer2.metadata.Metadata$1
            r0.<init>()
            com.mbridge.msdk.playercommon.exoplayer2.metadata.Metadata.CREATOR = r0
            return
    }

    Metadata(android.os.Parcel r4) {
            r3 = this;
            r3.<init>()
            int r0 = r4.readInt()
            com.mbridge.msdk.playercommon.exoplayer2.metadata.Metadata$Entry[] r0 = new com.mbridge.msdk.playercommon.exoplayer2.metadata.Metadata.Entry[r0]
            r3.entries = r0
            r0 = 0
        Lc:
            com.mbridge.msdk.playercommon.exoplayer2.metadata.Metadata$Entry[] r1 = r3.entries
            int r2 = r1.length
            if (r0 >= r2) goto L22
            java.lang.Class<com.mbridge.msdk.playercommon.exoplayer2.metadata.Metadata$Entry> r2 = com.mbridge.msdk.playercommon.exoplayer2.metadata.Metadata.Entry.class
            java.lang.ClassLoader r2 = r2.getClassLoader()
            android.os.Parcelable r2 = r4.readParcelable(r2)
            com.mbridge.msdk.playercommon.exoplayer2.metadata.Metadata$Entry r2 = (com.mbridge.msdk.playercommon.exoplayer2.metadata.Metadata.Entry) r2
            r1[r0] = r2
            int r0 = r0 + 1
            goto Lc
        L22:
            return
    }

    public Metadata(java.util.List<? extends com.mbridge.msdk.playercommon.exoplayer2.metadata.Metadata.Entry> r2) {
            r1 = this;
            r1.<init>()
            if (r2 == 0) goto L11
            int r0 = r2.size()
            com.mbridge.msdk.playercommon.exoplayer2.metadata.Metadata$Entry[] r0 = new com.mbridge.msdk.playercommon.exoplayer2.metadata.Metadata.Entry[r0]
            r1.entries = r0
            r2.toArray(r0)
            goto L16
        L11:
            r2 = 0
            com.mbridge.msdk.playercommon.exoplayer2.metadata.Metadata$Entry[] r2 = new com.mbridge.msdk.playercommon.exoplayer2.metadata.Metadata.Entry[r2]
            r1.entries = r2
        L16:
            return
    }

    public Metadata(com.mbridge.msdk.playercommon.exoplayer2.metadata.Metadata.Entry... r1) {
            r0 = this;
            r0.<init>()
            if (r1 != 0) goto L8
            r1 = 0
            com.mbridge.msdk.playercommon.exoplayer2.metadata.Metadata$Entry[] r1 = new com.mbridge.msdk.playercommon.exoplayer2.metadata.Metadata.Entry[r1]
        L8:
            r0.entries = r1
            return
    }

    @Override
    public final int describeContents() {
            r1 = this;
            r0 = 0
            return r0
    }

    public final boolean equals(java.lang.Object r3) {
            r2 = this;
            if (r2 != r3) goto L4
            r3 = 1
            return r3
        L4:
            if (r3 == 0) goto L1c
            java.lang.Class r0 = r2.getClass()
            java.lang.Class r1 = r3.getClass()
            if (r0 == r1) goto L11
            goto L1c
        L11:
            com.mbridge.msdk.playercommon.exoplayer2.metadata.Metadata r3 = (com.mbridge.msdk.playercommon.exoplayer2.metadata.Metadata) r3
            com.mbridge.msdk.playercommon.exoplayer2.metadata.Metadata$Entry[] r0 = r2.entries
            com.mbridge.msdk.playercommon.exoplayer2.metadata.Metadata$Entry[] r3 = r3.entries
            boolean r3 = java.util.Arrays.equals(r0, r3)
            return r3
        L1c:
            r3 = 0
            return r3
    }

    public final com.mbridge.msdk.playercommon.exoplayer2.metadata.Metadata.Entry get(int r2) {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.metadata.Metadata$Entry[] r0 = r1.entries
            r2 = r0[r2]
            return r2
    }

    public final int hashCode() {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.metadata.Metadata$Entry[] r0 = r1.entries
            int r0 = java.util.Arrays.hashCode(r0)
            return r0
    }

    public final int length() {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.metadata.Metadata$Entry[] r0 = r1.entries
            int r0 = r0.length
            return r0
    }

    @Override
    public final void writeToParcel(android.os.Parcel r5, int r6) {
            r4 = this;
            com.mbridge.msdk.playercommon.exoplayer2.metadata.Metadata$Entry[] r6 = r4.entries
            int r6 = r6.length
            r5.writeInt(r6)
            com.mbridge.msdk.playercommon.exoplayer2.metadata.Metadata$Entry[] r6 = r4.entries
            int r0 = r6.length
            r1 = 0
            r2 = r1
        Lb:
            if (r2 >= r0) goto L15
            r3 = r6[r2]
            r5.writeParcelable(r3, r1)
            int r2 = r2 + 1
            goto Lb
        L15:
            return
    }
}
