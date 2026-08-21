package com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4;

public final class TrackEncryptionBox {
    private static final java.lang.String TAG = "TrackEncryptionBox";
    public final com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput.CryptoData cryptoData;
    public final byte[] defaultInitializationVector;
    public final int initializationVectorSize;
    public final boolean isEncrypted;
    public final java.lang.String schemeType;

    public TrackEncryptionBox(boolean r4, java.lang.String r5, int r6, byte[] r7, int r8, int r9, byte[] r10) {
            r3 = this;
            r3.<init>()
            r0 = 1
            r1 = 0
            if (r6 != 0) goto L9
            r2 = r0
            goto La
        L9:
            r2 = r1
        La:
            if (r10 != 0) goto Ld
            goto Le
        Ld:
            r0 = r1
        Le:
            r0 = r0 ^ r2
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkArgument(r0)
            r3.isEncrypted = r4
            r3.schemeType = r5
            r3.initializationVectorSize = r6
            r3.defaultInitializationVector = r10
            com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput$CryptoData r4 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput$CryptoData
            int r5 = schemeToCryptoMode(r5)
            r4.<init>(r5, r7, r8, r9)
            r3.cryptoData = r4
            return
    }

    private static int schemeToCryptoMode(java.lang.String r5) {
            r0 = 1
            if (r5 != 0) goto L4
            return r0
        L4:
            r1 = -1
            int r2 = r5.hashCode()
            r3 = 3
            r4 = 2
            switch(r2) {
                case 3046605: goto L2d;
                case 3046671: goto L23;
                case 3049879: goto L19;
                case 3049895: goto Lf;
                default: goto Le;
            }
        Le:
            goto L36
        Lf:
            java.lang.String r2 = "cens"
            boolean r2 = r5.equals(r2)
            if (r2 == 0) goto L36
            r1 = r0
            goto L36
        L19:
            java.lang.String r2 = "cenc"
            boolean r2 = r5.equals(r2)
            if (r2 == 0) goto L36
            r1 = 0
            goto L36
        L23:
            java.lang.String r2 = "cbcs"
            boolean r2 = r5.equals(r2)
            if (r2 == 0) goto L36
            r1 = r3
            goto L36
        L2d:
            java.lang.String r2 = "cbc1"
            boolean r2 = r5.equals(r2)
            if (r2 == 0) goto L36
            r1 = r4
        L36:
            if (r1 == 0) goto L5b
            if (r1 == r0) goto L5b
            if (r1 == r4) goto L5a
            if (r1 == r3) goto L5a
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Unsupported protection scheme type '"
            r1.append(r2)
            r1.append(r5)
            java.lang.String r5 = "'. Assuming AES-CTR crypto mode."
            r1.append(r5)
            java.lang.String r5 = r1.toString()
            java.lang.String r1 = "TrackEncryptionBox"
            android.util.Log.w(r1, r5)
            return r0
        L5a:
            return r4
        L5b:
            return r0
    }
}
