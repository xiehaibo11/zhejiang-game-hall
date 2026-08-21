package org.bouncycastle.jce;

public class X509KeyUsage extends org.bouncycastle.asn1.ASN1Encodable {
    public static final int cRLSign = 2;
    public static final int dataEncipherment = 16;
    public static final int decipherOnly = 32768;
    public static final int digitalSignature = 128;
    public static final int encipherOnly = 1;
    public static final int keyAgreement = 8;
    public static final int keyCertSign = 4;
    public static final int keyEncipherment = 32;
    public static final int nonRepudiation = 64;
    private int usage;

    public X509KeyUsage(int r2) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.usage = r0
            r1.usage = r2
            return
    }

    @Override
    public org.bouncycastle.asn1.DERObject toASN1Object() {
            r2 = this;
            org.bouncycastle.asn1.x509.KeyUsage r0 = new org.bouncycastle.asn1.x509.KeyUsage
            int r1 = r2.usage
            r0.<init>(r1)
            return r0
    }
}
