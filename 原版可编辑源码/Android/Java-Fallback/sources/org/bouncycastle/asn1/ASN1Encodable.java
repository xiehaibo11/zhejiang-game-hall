package org.bouncycastle.asn1;

public abstract class ASN1Encodable implements org.bouncycastle.asn1.DEREncodable {
    public static final java.lang.String BER = "BER";
    public static final java.lang.String DER = "DER";

    public ASN1Encodable() {
            r0 = this;
            r0.<init>()
            return
    }

    public boolean equals(java.lang.Object r2) {
            r1 = this;
            if (r1 != r2) goto L4
            r2 = 1
            return r2
        L4:
            boolean r0 = r2 instanceof org.bouncycastle.asn1.DEREncodable
            if (r0 != 0) goto La
            r2 = 0
            return r2
        La:
            org.bouncycastle.asn1.DEREncodable r2 = (org.bouncycastle.asn1.DEREncodable) r2
            org.bouncycastle.asn1.DERObject r0 = r1.toASN1Object()
            org.bouncycastle.asn1.DERObject r2 = r2.getDERObject()
            boolean r2 = r0.equals(r2)
            return r2
    }

    public byte[] getDEREncoded() {
            r1 = this;
            java.lang.String r0 = "DER"
            byte[] r0 = r1.getEncoded(r0)     // Catch: java.io.IOException -> L7
            return r0
        L7:
            r0 = 0
            return r0
    }

    @Override
    public org.bouncycastle.asn1.DERObject getDERObject() {
            r1 = this;
            org.bouncycastle.asn1.DERObject r0 = r1.toASN1Object()
            return r0
    }

    public byte[] getEncoded() throws java.io.IOException {
            r2 = this;
            java.io.ByteArrayOutputStream r0 = new java.io.ByteArrayOutputStream
            r0.<init>()
            org.bouncycastle.asn1.ASN1OutputStream r1 = new org.bouncycastle.asn1.ASN1OutputStream
            r1.<init>(r0)
            r1.writeObject(r2)
            byte[] r0 = r0.toByteArray()
            return r0
    }

    public byte[] getEncoded(java.lang.String r2) throws java.io.IOException {
            r1 = this;
            java.lang.String r0 = "DER"
            boolean r2 = r2.equals(r0)
            if (r2 == 0) goto L1a
            java.io.ByteArrayOutputStream r2 = new java.io.ByteArrayOutputStream
            r2.<init>()
            org.bouncycastle.asn1.DEROutputStream r0 = new org.bouncycastle.asn1.DEROutputStream
            r0.<init>(r2)
            r0.writeObject(r1)
            byte[] r2 = r2.toByteArray()
            return r2
        L1a:
            byte[] r2 = r1.getEncoded()
            return r2
    }

    public int hashCode() {
            r1 = this;
            org.bouncycastle.asn1.DERObject r0 = r1.toASN1Object()
            int r0 = r0.hashCode()
            return r0
    }

    public abstract org.bouncycastle.asn1.DERObject toASN1Object();
}
