package com.mbridge.msdk.playercommon.exoplayer2.text.cea;

public final class CeaUtil {
    private static final int COUNTRY_CODE = 181;
    private static final int PAYLOAD_TYPE_CC = 4;
    private static final int PROVIDER_CODE_ATSC = 49;
    private static final int PROVIDER_CODE_DIRECTV = 47;
    private static final java.lang.String TAG = "CeaUtil";
    private static final int USER_DATA_TYPE_CODE = 3;
    private static final int USER_ID_DTG1 = 0;
    private static final int USER_ID_GA94 = 0;

    static {
            java.lang.String r0 = "GA94"
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getIntegerCodeForString(r0)
            com.mbridge.msdk.playercommon.exoplayer2.text.cea.CeaUtil.USER_ID_GA94 = r0
            java.lang.String r0 = "DTG1"
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getIntegerCodeForString(r0)
            com.mbridge.msdk.playercommon.exoplayer2.text.cea.CeaUtil.USER_ID_DTG1 = r0
            return
    }

    private CeaUtil() {
            r0 = this;
            r0.<init>()
            return
    }

    public static void consume(long r20, com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r22, com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput[] r23) {
            r0 = r22
            r1 = r23
        L4:
            int r2 = r22.bytesLeft()
            r3 = 1
            if (r2 <= r3) goto La0
            int r2 = readNon255TerminatedValue(r22)
            int r4 = readNon255TerminatedValue(r22)
            int r5 = r22.getPosition()
            int r5 = r5 + r4
            r6 = -1
            if (r4 == r6) goto L90
            int r6 = r22.bytesLeft()
            if (r4 <= r6) goto L23
            goto L90
        L23:
            r6 = 4
            if (r2 != r6) goto L9b
            r2 = 8
            if (r4 < r2) goto L9b
            int r2 = r22.readUnsignedByte()
            int r4 = r22.readUnsignedShort()
            r6 = 49
            r7 = 0
            if (r4 != r6) goto L3c
            int r8 = r22.readInt()
            goto L3d
        L3c:
            r8 = r7
        L3d:
            int r9 = r22.readUnsignedByte()
            r10 = 47
            if (r4 != r10) goto L48
            r0.skipBytes(r3)
        L48:
            r11 = 181(0xb5, float:2.54E-43)
            r12 = 3
            if (r2 != r11) goto L55
            if (r4 == r6) goto L51
            if (r4 != r10) goto L55
        L51:
            if (r9 != r12) goto L55
            r2 = r3
            goto L56
        L55:
            r2 = r7
        L56:
            if (r4 != r6) goto L65
            int r4 = com.mbridge.msdk.playercommon.exoplayer2.text.cea.CeaUtil.USER_ID_GA94
            if (r8 == r4) goto L63
            int r4 = com.mbridge.msdk.playercommon.exoplayer2.text.cea.CeaUtil.USER_ID_DTG1
            if (r8 != r4) goto L61
            goto L63
        L61:
            r4 = r7
            goto L64
        L63:
            r4 = r3
        L64:
            r2 = r2 & r4
        L65:
            if (r2 == 0) goto L9b
            int r2 = r22.readUnsignedByte()
            r2 = r2 & 31
            r0.skipBytes(r3)
            int r2 = r2 * r12
            int r3 = r22.getPosition()
            int r4 = r1.length
        L76:
            if (r7 >= r4) goto L9b
            r13 = r1[r7]
            r0.setPosition(r3)
            r13.sampleData(r0, r2)
            r16 = 1
            r18 = 0
            r19 = 0
            r14 = r20
            r17 = r2
            r13.sampleMetadata(r14, r16, r17, r18, r19)
            int r7 = r7 + 1
            goto L76
        L90:
            java.lang.String r2 = "CeaUtil"
            java.lang.String r3 = "Skipping remainder of malformed SEI NAL unit."
            android.util.Log.w(r2, r3)
            int r5 = r22.limit()
        L9b:
            r0.setPosition(r5)
            goto L4
        La0:
            return
    }

    private static int readNon255TerminatedValue(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r3) {
            r0 = 0
        L1:
            int r1 = r3.bytesLeft()
            if (r1 != 0) goto L9
            r3 = -1
            return r3
        L9:
            int r1 = r3.readUnsignedByte()
            int r0 = r0 + r1
            r2 = 255(0xff, float:3.57E-43)
            if (r1 == r2) goto L1
            return r0
    }
}
