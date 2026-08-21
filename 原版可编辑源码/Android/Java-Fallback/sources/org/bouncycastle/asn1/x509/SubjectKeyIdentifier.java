package org.bouncycastle.asn1.x509;

public class SubjectKeyIdentifier extends org.bouncycastle.asn1.ASN1Encodable {
    private byte[] keyidentifier;

    public SubjectKeyIdentifier(org.bouncycastle.asn1.ASN1OctetString r1) {
            r0 = this;
            r0.<init>()
            byte[] r1 = r1.getOctets()
            r0.keyidentifier = r1
            return
    }

    public SubjectKeyIdentifier(org.bouncycastle.asn1.x509.SubjectPublicKeyInfo r5) {
            r4 = this;
            r4.<init>()
            org.bouncycastle.crypto.digests.SHA1Digest r0 = new org.bouncycastle.crypto.digests.SHA1Digest
            r0.<init>()
            int r1 = r0.getDigestSize()
            byte[] r1 = new byte[r1]
            org.bouncycastle.asn1.DERBitString r5 = r5.getPublicKeyData()
            byte[] r5 = r5.getBytes()
            int r2 = r5.length
            r3 = 0
            r0.update(r5, r3, r2)
            r0.doFinal(r1, r3)
            r4.keyidentifier = r1
            return
    }

    public SubjectKeyIdentifier(byte[] r1) {
            r0 = this;
            r0.<init>()
            r0.keyidentifier = r1
            return
    }

    public static org.bouncycastle.asn1.x509.SubjectKeyIdentifier getInstance(java.lang.Object r3) {
            boolean r0 = r3 instanceof org.bouncycastle.asn1.x509.SubjectKeyIdentifier
            if (r0 == 0) goto L7
            org.bouncycastle.asn1.x509.SubjectKeyIdentifier r3 = (org.bouncycastle.asn1.x509.SubjectKeyIdentifier) r3
            return r3
        L7:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.x509.SubjectPublicKeyInfo
            if (r0 == 0) goto L13
            org.bouncycastle.asn1.x509.SubjectKeyIdentifier r0 = new org.bouncycastle.asn1.x509.SubjectKeyIdentifier
            org.bouncycastle.asn1.x509.SubjectPublicKeyInfo r3 = (org.bouncycastle.asn1.x509.SubjectPublicKeyInfo) r3
            r0.<init>(r3)
            return r0
        L13:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ASN1OctetString
            if (r0 == 0) goto L1f
            org.bouncycastle.asn1.x509.SubjectKeyIdentifier r0 = new org.bouncycastle.asn1.x509.SubjectKeyIdentifier
            org.bouncycastle.asn1.ASN1OctetString r3 = (org.bouncycastle.asn1.ASN1OctetString) r3
            r0.<init>(r3)
            return r0
        L1f:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.x509.X509Extension
            if (r0 == 0) goto L2e
            org.bouncycastle.asn1.x509.X509Extension r3 = (org.bouncycastle.asn1.x509.X509Extension) r3
            org.bouncycastle.asn1.ASN1Object r3 = org.bouncycastle.asn1.x509.X509Extension.convertValueToObject(r3)
            org.bouncycastle.asn1.x509.SubjectKeyIdentifier r3 = getInstance(r3)
            return r3
        L2e:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Invalid SubjectKeyIdentifier: "
            r1.append(r2)
            java.lang.Class r3 = r3.getClass()
            java.lang.String r3 = r3.getName()
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            r0.<init>(r3)
            throw r0
    }

    public static org.bouncycastle.asn1.x509.SubjectKeyIdentifier getInstance(org.bouncycastle.asn1.ASN1TaggedObject r0, boolean r1) {
            org.bouncycastle.asn1.ASN1OctetString r0 = org.bouncycastle.asn1.ASN1OctetString.getInstance(r0, r1)
            org.bouncycastle.asn1.x509.SubjectKeyIdentifier r0 = getInstance(r0)
            return r0
    }

    public byte[] getKeyIdentifier() {
            r1 = this;
            byte[] r0 = r1.keyidentifier
            return r0
    }

    @Override
    public org.bouncycastle.asn1.DERObject toASN1Object() {
            r2 = this;
            org.bouncycastle.asn1.DEROctetString r0 = new org.bouncycastle.asn1.DEROctetString
            byte[] r1 = r2.keyidentifier
            r0.<init>(r1)
            return r0
    }
}
