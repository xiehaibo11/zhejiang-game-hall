package com.mbridge.msdk.playercommon.exoplayer2.mediacodec;

public final class MediaFormatUtil {
    private MediaFormatUtil() {
            r0 = this;
            r0.<init>()
            return
    }

    public static void maybeSetByteBuffer(android.media.MediaFormat r0, java.lang.String r1, byte[] r2) {
            if (r2 == 0) goto L9
            java.nio.ByteBuffer r2 = java.nio.ByteBuffer.wrap(r2)
            r0.setByteBuffer(r1, r2)
        L9:
            return
    }

    public static void maybeSetColorInfo(android.media.MediaFormat r2, com.mbridge.msdk.playercommon.exoplayer2.video.ColorInfo r3) {
            if (r3 == 0) goto L1e
            int r0 = r3.colorTransfer
            java.lang.String r1 = "color-transfer"
            maybeSetInteger(r2, r1, r0)
            int r0 = r3.colorSpace
            java.lang.String r1 = "color-standard"
            maybeSetInteger(r2, r1, r0)
            int r0 = r3.colorRange
            java.lang.String r1 = "color-range"
            maybeSetInteger(r2, r1, r0)
            byte[] r3 = r3.hdrStaticInfo
            java.lang.String r0 = "hdr-static-info"
            maybeSetByteBuffer(r2, r0, r3)
        L1e:
            return
    }

    public static void maybeSetFloat(android.media.MediaFormat r1, java.lang.String r2, float r3) {
            r0 = -1082130432(0xffffffffbf800000, float:-1.0)
            int r0 = (r3 > r0 ? 1 : (r3 == r0 ? 0 : -1))
            if (r0 == 0) goto L9
            r1.setFloat(r2, r3)
        L9:
            return
    }

    public static void maybeSetInteger(android.media.MediaFormat r1, java.lang.String r2, int r3) {
            r0 = -1
            if (r3 == r0) goto L6
            r1.setInteger(r2, r3)
        L6:
            return
    }

    public static void setCsdBuffers(android.media.MediaFormat r3, java.util.List<byte[]> r4) {
            r0 = 0
        L1:
            int r1 = r4.size()
            if (r0 >= r1) goto L28
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "csd-"
            r1.append(r2)
            r1.append(r0)
            java.lang.String r1 = r1.toString()
            java.lang.Object r2 = r4.get(r0)
            byte[] r2 = (byte[]) r2
            java.nio.ByteBuffer r2 = java.nio.ByteBuffer.wrap(r2)
            r3.setByteBuffer(r1, r2)
            int r0 = r0 + 1
            goto L1
        L28:
            return
    }

    public static void setString(android.media.MediaFormat r0, java.lang.String r1, java.lang.String r2) {
            r0.setString(r1, r2)
            return
    }
}
