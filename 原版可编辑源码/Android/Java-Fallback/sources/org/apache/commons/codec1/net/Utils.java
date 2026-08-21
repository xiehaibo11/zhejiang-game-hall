package org.apache.commons.codec1.net;

class Utils {
    Utils() {
            r0 = this;
            r0.<init>()
            return
    }

    static int digit16(byte r3) throws org.apache.commons.codec1.DecoderException {
            char r0 = (char) r3
            r1 = 16
            int r0 = java.lang.Character.digit(r0, r1)
            r1 = -1
            if (r0 == r1) goto Lb
            return r0
        Lb:
            org.apache.commons.codec1.DecoderException r0 = new org.apache.commons.codec1.DecoderException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "Invalid URL encoding: not a valid digit (radix 16): "
            r1.<init>(r2)
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            r0.<init>(r3)
            throw r0
    }
}
