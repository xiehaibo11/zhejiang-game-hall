package org.apache.commons.codec1.digest;

class B64 {
    static final java.lang.String B64T = "./0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

    B64() {
            r0 = this;
            r0.<init>()
            return
    }

    static void b64from24bit(byte r1, byte r2, byte r3, int r4, java.lang.StringBuilder r5) {
            int r1 = r1 << 16
            r0 = 16777215(0xffffff, float:2.3509886E-38)
            r1 = r1 & r0
            int r2 = r2 << 8
            r0 = 65535(0xffff, float:9.1834E-41)
            r2 = r2 & r0
            r1 = r1 | r2
            r2 = r3 & 255(0xff, float:3.57E-43)
            r1 = r1 | r2
        L10:
            int r2 = r4 + (-1)
            if (r4 > 0) goto L15
            return
        L15:
            r3 = r1 & 63
            java.lang.String r4 = "./0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"
            char r3 = r4.charAt(r3)
            r5.append(r3)
            int r1 = r1 >> 6
            r4 = r2
            goto L10
    }

    static java.lang.String getRandomSalt(int r4) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r1 = 1
        L6:
            if (r1 <= r4) goto Ld
            java.lang.String r4 = r0.toString()
            return r4
        Ld:
            java.util.Random r2 = new java.util.Random
            r2.<init>()
            r3 = 64
            int r2 = r2.nextInt(r3)
            java.lang.String r3 = "./0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"
            char r2 = r3.charAt(r2)
            r0.append(r2)
            int r1 = r1 + 1
            goto L6
    }
}
