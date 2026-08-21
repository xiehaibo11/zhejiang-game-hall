package org.bouncycastle.asn1;

public abstract class ASN1Generator {
    protected java.io.OutputStream _out;

    public ASN1Generator(java.io.OutputStream r1) {
            r0 = this;
            r0.<init>()
            r0._out = r1
            return
    }

    public abstract java.io.OutputStream getRawOutputStream();
}
