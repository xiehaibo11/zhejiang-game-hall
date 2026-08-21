package org.bouncycastle.jce;

public class X509Principal extends org.bouncycastle.asn1.x509.X509Name implements java.security.Principal {
    public X509Principal(java.lang.String r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    public X509Principal(java.util.Hashtable r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    public X509Principal(java.util.Vector r1, java.util.Hashtable r2) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    public X509Principal(java.util.Vector r1, java.util.Vector r2) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    public X509Principal(org.bouncycastle.asn1.x509.X509Name r1) {
            r0 = this;
            org.bouncycastle.asn1.DERObject r1 = r1.getDERObject()
            org.bouncycastle.asn1.ASN1Sequence r1 = (org.bouncycastle.asn1.ASN1Sequence) r1
            r0.<init>(r1)
            return
    }

    public X509Principal(boolean r1, java.lang.String r2) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    public X509Principal(boolean r1, java.util.Hashtable r2, java.lang.String r3) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            return
    }

    public X509Principal(byte[] r2) throws java.io.IOException {
            r1 = this;
            org.bouncycastle.asn1.ASN1InputStream r0 = new org.bouncycastle.asn1.ASN1InputStream
            r0.<init>(r2)
            org.bouncycastle.asn1.ASN1Sequence r2 = readSequence(r0)
            r1.<init>(r2)
            return
    }

    private static org.bouncycastle.asn1.ASN1Sequence readSequence(org.bouncycastle.asn1.ASN1InputStream r3) throws java.io.IOException {
            org.bouncycastle.asn1.DERObject r3 = r3.readObject()     // Catch: java.lang.IllegalArgumentException -> L9
            org.bouncycastle.asn1.ASN1Sequence r3 = org.bouncycastle.asn1.ASN1Sequence.getInstance(r3)     // Catch: java.lang.IllegalArgumentException -> L9
            return r3
        L9:
            r3 = move-exception
            java.io.IOException r0 = new java.io.IOException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "not an ASN.1 Sequence: "
            r1.append(r2)
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            r0.<init>(r3)
            throw r0
    }

    @Override
    public byte[] getEncoded() {
            r2 = this;
            java.io.ByteArrayOutputStream r0 = new java.io.ByteArrayOutputStream
            r0.<init>()
            org.bouncycastle.asn1.DEROutputStream r1 = new org.bouncycastle.asn1.DEROutputStream
            r1.<init>(r0)
            r1.writeObject(r2)     // Catch: java.io.IOException -> L12
            byte[] r0 = r0.toByteArray()
            return r0
        L12:
            r0 = move-exception
            java.lang.RuntimeException r1 = new java.lang.RuntimeException
            java.lang.String r0 = r0.toString()
            r1.<init>(r0)
            throw r1
    }

    @Override
    public java.lang.String getName() {
            r1 = this;
            java.lang.String r0 = r1.toString()
            return r0
    }
}
