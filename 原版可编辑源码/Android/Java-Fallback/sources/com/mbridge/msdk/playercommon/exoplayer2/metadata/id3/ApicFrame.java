package com.mbridge.msdk.playercommon.exoplayer2.metadata.id3;

public final class ApicFrame extends com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.Id3Frame {
    public static final android.os.Parcelable.Creator<com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.ApicFrame> CREATOR = null;
    public static final java.lang.String ID = "APIC";
    public final java.lang.String description;
    public final java.lang.String mimeType;
    public final byte[] pictureData;
    public final int pictureType;


    static {
            com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.ApicFrame$1 r0 = new com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.ApicFrame$1
            r0.<init>()
            com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.ApicFrame.CREATOR = r0
            return
    }

    ApicFrame(android.os.Parcel r2) {
            r1 = this;
            java.lang.String r0 = "APIC"
            r1.<init>(r0)
            java.lang.String r0 = r2.readString()
            r1.mimeType = r0
            java.lang.String r0 = r2.readString()
            r1.description = r0
            int r0 = r2.readInt()
            r1.pictureType = r0
            byte[] r2 = r2.createByteArray()
            r1.pictureData = r2
            return
    }

    public ApicFrame(java.lang.String r2, java.lang.String r3, int r4, byte[] r5) {
            r1 = this;
            java.lang.String r0 = "APIC"
            r1.<init>(r0)
            r1.mimeType = r2
            r1.description = r3
            r1.pictureType = r4
            r1.pictureData = r5
            return
    }

    public final boolean equals(java.lang.Object r5) {
            r4 = this;
            r0 = 1
            if (r4 != r5) goto L4
            return r0
        L4:
            r1 = 0
            if (r5 == 0) goto L3b
            java.lang.Class r2 = r4.getClass()
            java.lang.Class r3 = r5.getClass()
            if (r2 == r3) goto L12
            goto L3b
        L12:
            com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.ApicFrame r5 = (com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.ApicFrame) r5
            int r2 = r4.pictureType
            int r3 = r5.pictureType
            if (r2 != r3) goto L39
            java.lang.String r2 = r4.mimeType
            java.lang.String r3 = r5.mimeType
            boolean r2 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.areEqual(r2, r3)
            if (r2 == 0) goto L39
            java.lang.String r2 = r4.description
            java.lang.String r3 = r5.description
            boolean r2 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.areEqual(r2, r3)
            if (r2 == 0) goto L39
            byte[] r2 = r4.pictureData
            byte[] r5 = r5.pictureData
            boolean r5 = java.util.Arrays.equals(r2, r5)
            if (r5 == 0) goto L39
            goto L3a
        L39:
            r0 = r1
        L3a:
            return r0
        L3b:
            return r1
    }

    public final int hashCode() {
            r3 = this;
            int r0 = r3.pictureType
            r1 = 527(0x20f, float:7.38E-43)
            int r1 = r1 + r0
            int r1 = r1 * 31
            java.lang.String r0 = r3.mimeType
            r2 = 0
            if (r0 == 0) goto L11
            int r0 = r0.hashCode()
            goto L12
        L11:
            r0 = r2
        L12:
            int r1 = r1 + r0
            int r1 = r1 * 31
            java.lang.String r0 = r3.description
            if (r0 == 0) goto L1d
            int r2 = r0.hashCode()
        L1d:
            int r1 = r1 + r2
            int r1 = r1 * 31
            byte[] r0 = r3.pictureData
            int r0 = java.util.Arrays.hashCode(r0)
            int r1 = r1 + r0
            return r1
    }

    @Override
    public final java.lang.String toString() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = r2.id
            r0.append(r1)
            java.lang.String r1 = ": mimeType="
            r0.append(r1)
            java.lang.String r1 = r2.mimeType
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
            java.lang.String r2 = r0.mimeType
            r1.writeString(r2)
            java.lang.String r2 = r0.description
            r1.writeString(r2)
            int r2 = r0.pictureType
            r1.writeInt(r2)
            byte[] r2 = r0.pictureData
            r1.writeByteArray(r2)
            return
    }
}
