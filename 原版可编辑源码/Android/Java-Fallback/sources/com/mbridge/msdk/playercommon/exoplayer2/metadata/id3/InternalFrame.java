package com.mbridge.msdk.playercommon.exoplayer2.metadata.id3;

public final class InternalFrame extends com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.Id3Frame {
    public static final android.os.Parcelable.Creator<com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.InternalFrame> CREATOR = null;
    public static final java.lang.String ID = "----";
    public final java.lang.String description;
    public final java.lang.String domain;
    public final java.lang.String text;


    static {
            com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.InternalFrame$1 r0 = new com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.InternalFrame$1
            r0.<init>()
            com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.InternalFrame.CREATOR = r0
            return
    }

    InternalFrame(android.os.Parcel r2) {
            r1 = this;
            java.lang.String r0 = "----"
            r1.<init>(r0)
            java.lang.String r0 = r2.readString()
            java.lang.Object r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkNotNull(r0)
            java.lang.String r0 = (java.lang.String) r0
            r1.domain = r0
            java.lang.String r0 = r2.readString()
            java.lang.Object r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkNotNull(r0)
            java.lang.String r0 = (java.lang.String) r0
            r1.description = r0
            java.lang.String r2 = r2.readString()
            java.lang.Object r2 = com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkNotNull(r2)
            java.lang.String r2 = (java.lang.String) r2
            r1.text = r2
            return
    }

    public InternalFrame(java.lang.String r2, java.lang.String r3, java.lang.String r4) {
            r1 = this;
            java.lang.String r0 = "----"
            r1.<init>(r0)
            r1.domain = r2
            r1.description = r3
            r1.text = r4
            return
    }

    public final boolean equals(java.lang.Object r5) {
            r4 = this;
            r0 = 1
            if (r4 != r5) goto L4
            return r0
        L4:
            r1 = 0
            if (r5 == 0) goto L35
            java.lang.Class r2 = r4.getClass()
            java.lang.Class r3 = r5.getClass()
            if (r2 == r3) goto L12
            goto L35
        L12:
            com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.InternalFrame r5 = (com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.InternalFrame) r5
            java.lang.String r2 = r4.description
            java.lang.String r3 = r5.description
            boolean r2 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.areEqual(r2, r3)
            if (r2 == 0) goto L33
            java.lang.String r2 = r4.domain
            java.lang.String r3 = r5.domain
            boolean r2 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.areEqual(r2, r3)
            if (r2 == 0) goto L33
            java.lang.String r2 = r4.text
            java.lang.String r5 = r5.text
            boolean r5 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.areEqual(r2, r5)
            if (r5 == 0) goto L33
            goto L34
        L33:
            r0 = r1
        L34:
            return r0
        L35:
            return r1
    }

    public final int hashCode() {
            r3 = this;
            java.lang.String r0 = r3.domain
            r1 = 0
            if (r0 == 0) goto La
            int r0 = r0.hashCode()
            goto Lb
        La:
            r0 = r1
        Lb:
            r2 = 527(0x20f, float:7.38E-43)
            int r2 = r2 + r0
            int r2 = r2 * 31
            java.lang.String r0 = r3.description
            if (r0 == 0) goto L19
            int r0 = r0.hashCode()
            goto L1a
        L19:
            r0 = r1
        L1a:
            int r2 = r2 + r0
            int r2 = r2 * 31
            java.lang.String r0 = r3.text
            if (r0 == 0) goto L25
            int r1 = r0.hashCode()
        L25:
            int r2 = r2 + r1
            return r2
    }

    @Override
    public final java.lang.String toString() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = r2.id
            r0.append(r1)
            java.lang.String r1 = ": domain="
            r0.append(r1)
            java.lang.String r1 = r2.domain
            r0.append(r1)
            java.lang.String r1 = ", description="
            r0.append(r1)
            java.lang.String r1 = r2.description
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }

    @Override
    public final void writeToParcel(android.os.Parcel r1, int r2) {
            r0 = this;
            java.lang.String r2 = r0.id
            r1.writeString(r2)
            java.lang.String r2 = r0.domain
            r1.writeString(r2)
            java.lang.String r2 = r0.text
            r1.writeString(r2)
            return
    }
}
