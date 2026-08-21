package com.tkay.expressad.exoplayer.e.a;

public final class k {
    private static final java.lang.String f = "TrackEncryptionBox";
    public final boolean a;
    public final java.lang.String b;
    public final com.tkay.expressad.exoplayer.e.m.a c;
    public final int d;
    public final byte[] e;

    public k(boolean r5, java.lang.String r6, int r7, byte[] r8, int r9, int r10, byte[] r11) {
            r4 = this;
            r4.<init>()
            r0 = 0
            r1 = 1
            if (r7 != 0) goto L9
            r2 = r1
            goto La
        L9:
            r2 = r0
        La:
            if (r11 != 0) goto Le
            r3 = r1
            goto Lf
        Le:
            r3 = r0
        Lf:
            r2 = r2 ^ r3
            com.tkay.expressad.exoplayer.k.a.a(r2)
            r4.a = r5
            r4.b = r6
            r4.d = r7
            r4.e = r11
            com.tkay.expressad.exoplayer.e.m$a r5 = new com.tkay.expressad.exoplayer.e.m$a
            r7 = 2
            if (r6 != 0) goto L21
            goto L75
        L21:
            r11 = -1
            int r2 = r6.hashCode()
            r3 = 3
            switch(r2) {
                case 3046605: goto L48;
                case 3046671: goto L3e;
                case 3049879: goto L35;
                case 3049895: goto L2b;
                default: goto L2a;
            }
        L2a:
            goto L52
        L2b:
            java.lang.String r0 = "cens"
            boolean r0 = r6.equals(r0)
            if (r0 == 0) goto L52
            r0 = r1
            goto L53
        L35:
            java.lang.String r2 = "cenc"
            boolean r2 = r6.equals(r2)
            if (r2 == 0) goto L52
            goto L53
        L3e:
            java.lang.String r0 = "cbcs"
            boolean r0 = r6.equals(r0)
            if (r0 == 0) goto L52
            r0 = r3
            goto L53
        L48:
            java.lang.String r0 = "cbc1"
            boolean r0 = r6.equals(r0)
            if (r0 == 0) goto L52
            r0 = r7
            goto L53
        L52:
            r0 = r11
        L53:
            if (r0 == 0) goto L75
            if (r0 == r1) goto L75
            if (r0 == r7) goto L74
            if (r0 == r3) goto L74
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            java.lang.String r11 = "Unsupported protection scheme type '"
            r7.<init>(r11)
            r7.append(r6)
            java.lang.String r6 = "'. Assuming AES-CTR crypto mode."
            r7.append(r6)
            java.lang.String r6 = r7.toString()
            java.lang.String r7 = "TrackEncryptionBox"
            android.util.Log.w(r7, r6)
            goto L75
        L74:
            r1 = r7
        L75:
            r5.<init>(r1, r8, r9, r10)
            r4.c = r5
            return
    }

    private static int a(java.lang.String r5) {
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
            if (r1 == 0) goto L58
            if (r1 == r0) goto L58
            if (r1 == r4) goto L57
            if (r1 == r3) goto L57
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "Unsupported protection scheme type '"
            r1.<init>(r2)
            r1.append(r5)
            java.lang.String r5 = "'. Assuming AES-CTR crypto mode."
            r1.append(r5)
            java.lang.String r5 = r1.toString()
            java.lang.String r1 = "TrackEncryptionBox"
            android.util.Log.w(r1, r5)
            return r0
        L57:
            return r4
        L58:
            return r0
    }
}
