package org.bouncycastle.asn1.x509;

public class KeyUsage extends org.bouncycastle.asn1.DERBitString {
    public static final int cRLSign = 2;
    public static final int dataEncipherment = 16;
    public static final int decipherOnly = 32768;
    public static final int digitalSignature = 128;
    public static final int encipherOnly = 1;
    public static final int keyAgreement = 8;
    public static final int keyCertSign = 4;
    public static final int keyEncipherment = 32;
    public static final int nonRepudiation = 64;

    public KeyUsage(int r2) {
            r1 = this;
            byte[] r0 = getBytes(r2)
            int r2 = getPadBits(r2)
            r1.<init>(r0, r2)
            return
    }

    public KeyUsage(org.bouncycastle.asn1.DERBitString r2) {
            r1 = this;
            byte[] r0 = r2.getBytes()
            int r2 = r2.getPadBits()
            r1.<init>(r0, r2)
            return
    }

    public static org.bouncycastle.asn1.DERBitString getInstance(java.lang.Object r1) {
            boolean r0 = r1 instanceof org.bouncycastle.asn1.x509.KeyUsage
            if (r0 == 0) goto L7
            org.bouncycastle.asn1.x509.KeyUsage r1 = (org.bouncycastle.asn1.x509.KeyUsage) r1
            return r1
        L7:
            boolean r0 = r1 instanceof org.bouncycastle.asn1.x509.X509Extension
            if (r0 == 0) goto L1b
            org.bouncycastle.asn1.x509.KeyUsage r0 = new org.bouncycastle.asn1.x509.KeyUsage
            org.bouncycastle.asn1.x509.X509Extension r1 = (org.bouncycastle.asn1.x509.X509Extension) r1
            org.bouncycastle.asn1.ASN1Object r1 = org.bouncycastle.asn1.x509.X509Extension.convertValueToObject(r1)
            org.bouncycastle.asn1.DERBitString r1 = org.bouncycastle.asn1.DERBitString.getInstance(r1)
            r0.<init>(r1)
            return r0
        L1b:
            org.bouncycastle.asn1.x509.KeyUsage r0 = new org.bouncycastle.asn1.x509.KeyUsage
            org.bouncycastle.asn1.DERBitString r1 = org.bouncycastle.asn1.DERBitString.getInstance(r1)
            r0.<init>(r1)
            return r0
    }

    @Override
    public java.lang.String toString() {
            r4 = this;
            byte[] r0 = r4.data
            int r0 = r0.length
            r1 = 0
            java.lang.String r2 = "KeyUsage: 0x"
            r3 = 1
            if (r0 != r3) goto L23
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r2)
            byte[] r2 = r4.data
            r1 = r2[r1]
            r1 = r1 & 255(0xff, float:3.57E-43)
        L17:
            java.lang.String r1 = java.lang.Integer.toHexString(r1)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
        L23:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r2)
            byte[] r2 = r4.data
            r2 = r2[r3]
            r2 = r2 & 255(0xff, float:3.57E-43)
            int r2 = r2 << 8
            byte[] r3 = r4.data
            r1 = r3[r1]
            r1 = r1 & 255(0xff, float:3.57E-43)
            r1 = r1 | r2
            goto L17
    }
}
