package org.bouncycastle.asn1;

abstract class LimitedInputStream extends java.io.InputStream {
    protected final java.io.InputStream _in;

    LimitedInputStream(java.io.InputStream r1) {
            r0 = this;
            r0.<init>()
            r0._in = r1
            return
    }

    protected void setParentEofDetect(boolean r3) {
            r2 = this;
            java.io.InputStream r0 = r2._in
            boolean r1 = r0 instanceof org.bouncycastle.asn1.IndefiniteLengthInputStream
            if (r1 == 0) goto Lb
            org.bouncycastle.asn1.IndefiniteLengthInputStream r0 = (org.bouncycastle.asn1.IndefiniteLengthInputStream) r0
            r0.setEofOn00(r3)
        Lb:
            return
    }
}
