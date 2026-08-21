package org.bouncycastle.asn1.misc;

public class NetscapeCertType extends org.bouncycastle.asn1.DERBitString {
    public static final int objectSigning = 16;
    public static final int objectSigningCA = 1;
    public static final int reserved = 8;
    public static final int smime = 32;
    public static final int smimeCA = 2;
    public static final int sslCA = 4;
    public static final int sslClient = 128;
    public static final int sslServer = 64;

    public NetscapeCertType(int r2) {
            r1 = this;
            byte[] r0 = getBytes(r2)
            int r2 = getPadBits(r2)
            r1.<init>(r0, r2)
            return
    }

    public NetscapeCertType(org.bouncycastle.asn1.DERBitString r2) {
            r1 = this;
            byte[] r0 = r2.getBytes()
            int r2 = r2.getPadBits()
            r1.<init>(r0, r2)
            return
    }

    @Override
    public java.lang.String toString() {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "NetscapeCertType: 0x"
            r0.append(r1)
            byte[] r1 = r3.data
            r2 = 0
            r1 = r1[r2]
            r1 = r1 & 255(0xff, float:3.57E-43)
            java.lang.String r1 = java.lang.Integer.toHexString(r1)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
