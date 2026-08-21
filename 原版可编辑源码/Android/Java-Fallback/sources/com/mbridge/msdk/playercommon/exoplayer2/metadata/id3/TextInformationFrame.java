package com.mbridge.msdk.playercommon.exoplayer2.metadata.id3;

public final class TextInformationFrame extends com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.Id3Frame {
    public static final android.os.Parcelable.Creator<com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.TextInformationFrame> CREATOR = null;
    public final java.lang.String description;
    public final java.lang.String value;


    static {
            com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.TextInformationFrame$1 r0 = new com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.TextInformationFrame$1
            r0.<init>()
            com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.TextInformationFrame.CREATOR = r0
            return
    }

    TextInformationFrame(android.os.Parcel r2) {
            r1 = this;
            java.lang.String r0 = r2.readString()
            r1.<init>(r0)
            java.lang.String r0 = r2.readString()
            r1.description = r0
            java.lang.String r2 = r2.readString()
            r1.value = r2
            return
    }

    public TextInformationFrame(java.lang.String r1, java.lang.String r2, java.lang.String r3) {
            r0 = this;
            r0.<init>(r1)
            r0.description = r2
            r0.value = r3
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
            com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.TextInformationFrame r5 = (com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.TextInformationFrame) r5
            java.lang.String r2 = r4.id
            java.lang.String r3 = r5.id
            boolean r2 = r2.equals(r3)
            if (r2 == 0) goto L33
            java.lang.String r2 = r4.description
            java.lang.String r3 = r5.description
            boolean r2 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.areEqual(r2, r3)
            if (r2 == 0) goto L33
            java.lang.String r2 = r4.value
            java.lang.String r5 = r5.value
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
            java.lang.String r0 = r3.id
            int r0 = r0.hashCode()
            r1 = 527(0x20f, float:7.38E-43)
            int r1 = r1 + r0
            int r1 = r1 * 31
            java.lang.String r0 = r3.description
            r2 = 0
            if (r0 == 0) goto L15
            int r0 = r0.hashCode()
            goto L16
        L15:
            r0 = r2
        L16:
            int r1 = r1 + r0
            int r1 = r1 * 31
            java.lang.String r0 = r3.value
            if (r0 == 0) goto L21
            int r2 = r0.hashCode()
        L21:
            int r1 = r1 + r2
            return r1
    }

    @Override
    public final java.lang.String toString() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = r2.id
            r0.append(r1)
            java.lang.String r1 = ": value="
            r0.append(r1)
            java.lang.String r1 = r2.value
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }

    @Override
    public final void writeToParcel(android.os.Parcel r1, int r2) {
            r0 = this;
            java.lang.String r2 = r0.id
            r1.writeString(r2)
            java.lang.String r2 = r0.description
            r1.writeString(r2)
            java.lang.String r2 = r0.value
            r1.writeString(r2)
            return
    }
}
