package org.bouncycastle.asn1.misc;

public class NetscapeRevocationURL extends org.bouncycastle.asn1.DERIA5String {
    public NetscapeRevocationURL(org.bouncycastle.asn1.DERIA5String r1) {
            r0 = this;
            java.lang.String r1 = r1.getString()
            r0.<init>(r1)
            return
    }

    @Override
    public java.lang.String toString() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "NetscapeRevocationURL: "
            r0.append(r1)
            java.lang.String r1 = r2.getString()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
