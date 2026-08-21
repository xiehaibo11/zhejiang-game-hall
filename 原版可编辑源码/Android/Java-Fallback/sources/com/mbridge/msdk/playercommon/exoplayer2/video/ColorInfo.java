package com.mbridge.msdk.playercommon.exoplayer2.video;

public final class ColorInfo implements android.os.Parcelable {
    public static final android.os.Parcelable.Creator<com.mbridge.msdk.playercommon.exoplayer2.video.ColorInfo> CREATOR = null;
    public final int colorRange;
    public final int colorSpace;
    public final int colorTransfer;
    private int hashCode;
    public final byte[] hdrStaticInfo;


    static {
            com.mbridge.msdk.playercommon.exoplayer2.video.ColorInfo$1 r0 = new com.mbridge.msdk.playercommon.exoplayer2.video.ColorInfo$1
            r0.<init>()
            com.mbridge.msdk.playercommon.exoplayer2.video.ColorInfo.CREATOR = r0
            return
    }

    public ColorInfo(int r1, int r2, int r3, byte[] r4) {
            r0 = this;
            r0.<init>()
            r0.colorSpace = r1
            r0.colorRange = r2
            r0.colorTransfer = r3
            r0.hdrStaticInfo = r4
            return
    }

    ColorInfo(android.os.Parcel r2) {
            r1 = this;
            r1.<init>()
            int r0 = r2.readInt()
            r1.colorSpace = r0
            int r0 = r2.readInt()
            r1.colorRange = r0
            int r0 = r2.readInt()
            r1.colorTransfer = r0
            boolean r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.readBoolean(r2)
            if (r0 == 0) goto L20
            byte[] r2 = r2.createByteArray()
            goto L21
        L20:
            r2 = 0
        L21:
            r1.hdrStaticInfo = r2
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
            if (r5 == 0) goto L33
            java.lang.Class r2 = r4.getClass()
            java.lang.Class r3 = r5.getClass()
            if (r2 == r3) goto L12
            goto L33
        L12:
            com.mbridge.msdk.playercommon.exoplayer2.video.ColorInfo r5 = (com.mbridge.msdk.playercommon.exoplayer2.video.ColorInfo) r5
            int r2 = r4.colorSpace
            int r3 = r5.colorSpace
            if (r2 != r3) goto L31
            int r2 = r4.colorRange
            int r3 = r5.colorRange
            if (r2 != r3) goto L31
            int r2 = r4.colorTransfer
            int r3 = r5.colorTransfer
            if (r2 != r3) goto L31
            byte[] r2 = r4.hdrStaticInfo
            byte[] r5 = r5.hdrStaticInfo
            boolean r5 = java.util.Arrays.equals(r2, r5)
            if (r5 == 0) goto L31
            goto L32
        L31:
            r0 = r1
        L32:
            return r0
        L33:
            return r1
    }

    public final int hashCode() {
            r2 = this;
            int r0 = r2.hashCode
            if (r0 != 0) goto L1e
            r0 = 527(0x20f, float:7.38E-43)
            int r1 = r2.colorSpace
            int r0 = r0 + r1
            int r0 = r0 * 31
            int r1 = r2.colorRange
            int r0 = r0 + r1
            int r0 = r0 * 31
            int r1 = r2.colorTransfer
            int r0 = r0 + r1
            int r0 = r0 * 31
            byte[] r1 = r2.hdrStaticInfo
            int r1 = java.util.Arrays.hashCode(r1)
            int r0 = r0 + r1
            r2.hashCode = r0
        L1e:
            int r0 = r2.hashCode
            return r0
    }

    public final java.lang.String toString() {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "ColorInfo("
            r0.append(r1)
            int r1 = r3.colorSpace
            r0.append(r1)
            java.lang.String r1 = ", "
            r0.append(r1)
            int r2 = r3.colorRange
            r0.append(r2)
            r0.append(r1)
            int r2 = r3.colorTransfer
            r0.append(r2)
            r0.append(r1)
            byte[] r1 = r3.hdrStaticInfo
            if (r1 == 0) goto L2a
            r1 = 1
            goto L2b
        L2a:
            r1 = 0
        L2b:
            r0.append(r1)
            java.lang.String r1 = ")"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }

    @Override
    public final void writeToParcel(android.os.Parcel r1, int r2) {
            r0 = this;
            int r2 = r0.colorSpace
            r1.writeInt(r2)
            int r2 = r0.colorRange
            r1.writeInt(r2)
            int r2 = r0.colorTransfer
            r1.writeInt(r2)
            byte[] r2 = r0.hdrStaticInfo
            if (r2 == 0) goto L15
            r2 = 1
            goto L16
        L15:
            r2 = 0
        L16:
            com.mbridge.msdk.playercommon.exoplayer2.util.Util.writeBoolean(r1, r2)
            byte[] r2 = r0.hdrStaticInfo
            if (r2 == 0) goto L20
            r1.writeByteArray(r2)
        L20:
            return
    }
}
