package com.alipay.sdk.m.n;

public class c {
    public c() {
            r0 = this;
            r0.<init>()
            return
    }

    public static byte[] a(javax.crypto.Cipher r6, java.lang.String r7) {
            java.security.SecureRandom r0 = new java.security.SecureRandom
            r0.<init>()
            int r6 = r6.getBlockSize()
            boolean r1 = android.text.TextUtils.isEmpty(r7)
            if (r1 == 0) goto L17
            double r1 = r0.nextDouble()
            java.lang.String r7 = java.lang.String.valueOf(r1)
        L17:
            int r1 = r6 * 2
            byte[] r2 = new byte[r1]
            byte[] r3 = new byte[r6]
            r0.nextBytes(r3)
            r0 = 1
        L21:
            r4 = 0
            if (r0 >= r1) goto L40
            int r5 = r7.length()
            int r5 = r0 % r5
            int r5 = r7.codePointAt(r5)
            r5 = r5 & 127(0x7f, float:1.78E-43)
            byte r5 = (byte) r5
            r2[r0] = r5
            if (r0 < r6) goto L3d
            r5 = r2[r0]
            r4 = r2[r4]
            r4 = r4 & r5
            byte r4 = (byte) r4
            r2[r0] = r4
        L3d:
            int r0 = r0 + 1
            goto L21
        L40:
            java.lang.System.arraycopy(r2, r6, r3, r4, r6)
            return r3
    }
}
