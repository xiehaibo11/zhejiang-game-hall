package org.bouncycastle.asn1.x509;

public class AuthorityKeyIdentifier extends org.bouncycastle.asn1.ASN1Encodable {
    org.bouncycastle.asn1.x509.GeneralNames certissuer;
    org.bouncycastle.asn1.DERInteger certserno;
    org.bouncycastle.asn1.ASN1OctetString keyidentifier;

    public AuthorityKeyIdentifier(org.bouncycastle.asn1.ASN1Sequence r5) {
            r4 = this;
            r4.<init>()
            r0 = 0
            r4.keyidentifier = r0
            r4.certissuer = r0
            r4.certserno = r0
            java.util.Enumeration r5 = r5.getObjects()
        Le:
            boolean r0 = r5.hasMoreElements()
            if (r0 == 0) goto L46
            java.lang.Object r0 = r5.nextElement()
            org.bouncycastle.asn1.ASN1TaggedObject r0 = org.bouncycastle.asn1.DERTaggedObject.getInstance(r0)
            int r1 = r0.getTagNo()
            r2 = 0
            if (r1 == 0) goto L3f
            r3 = 1
            if (r1 == r3) goto L38
            r3 = 2
            if (r1 != r3) goto L30
            org.bouncycastle.asn1.DERInteger r0 = org.bouncycastle.asn1.DERInteger.getInstance(r0, r2)
            r4.certserno = r0
            goto Le
        L30:
            java.lang.IllegalArgumentException r5 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "illegal tag"
            r5.<init>(r0)
            throw r5
        L38:
            org.bouncycastle.asn1.x509.GeneralNames r0 = org.bouncycastle.asn1.x509.GeneralNames.getInstance(r0, r2)
            r4.certissuer = r0
            goto Le
        L3f:
            org.bouncycastle.asn1.ASN1OctetString r0 = org.bouncycastle.asn1.ASN1OctetString.getInstance(r0, r2)
            r4.keyidentifier = r0
            goto Le
        L46:
            return
    }

    public AuthorityKeyIdentifier(org.bouncycastle.asn1.x509.GeneralNames r2, java.math.BigInteger r3) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.keyidentifier = r0
            r1.certissuer = r0
            r1.certserno = r0
            r1.keyidentifier = r0
            org.bouncycastle.asn1.DERObject r2 = r2.toASN1Object()
            org.bouncycastle.asn1.x509.GeneralNames r2 = org.bouncycastle.asn1.x509.GeneralNames.getInstance(r2)
            r1.certissuer = r2
            org.bouncycastle.asn1.DERInteger r2 = new org.bouncycastle.asn1.DERInteger
            r2.<init>(r3)
            r1.certserno = r2
            return
    }

    public AuthorityKeyIdentifier(org.bouncycastle.asn1.x509.SubjectPublicKeyInfo r5) {
            r4 = this;
            r4.<init>()
            r0 = 0
            r4.keyidentifier = r0
            r4.certissuer = r0
            r4.certserno = r0
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
            org.bouncycastle.asn1.DEROctetString r5 = new org.bouncycastle.asn1.DEROctetString
            r5.<init>(r1)
            r4.keyidentifier = r5
            return
    }

    public AuthorityKeyIdentifier(org.bouncycastle.asn1.x509.SubjectPublicKeyInfo r5, org.bouncycastle.asn1.x509.GeneralNames r6, java.math.BigInteger r7) {
            r4 = this;
            r4.<init>()
            r0 = 0
            r4.keyidentifier = r0
            r4.certissuer = r0
            r4.certserno = r0
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
            org.bouncycastle.asn1.DEROctetString r5 = new org.bouncycastle.asn1.DEROctetString
            r5.<init>(r1)
            r4.keyidentifier = r5
            org.bouncycastle.asn1.DERObject r5 = r6.toASN1Object()
            org.bouncycastle.asn1.x509.GeneralNames r5 = org.bouncycastle.asn1.x509.GeneralNames.getInstance(r5)
            r4.certissuer = r5
            org.bouncycastle.asn1.DERInteger r5 = new org.bouncycastle.asn1.DERInteger
            r5.<init>(r7)
            r4.certserno = r5
            return
    }

    public AuthorityKeyIdentifier(byte[] r3) {
            r2 = this;
            r2.<init>()
            r0 = 0
            r2.keyidentifier = r0
            r2.certissuer = r0
            r2.certserno = r0
            org.bouncycastle.asn1.DEROctetString r1 = new org.bouncycastle.asn1.DEROctetString
            r1.<init>(r3)
            r2.keyidentifier = r1
            r2.certissuer = r0
            r2.certserno = r0
            return
    }

    public AuthorityKeyIdentifier(byte[] r2, org.bouncycastle.asn1.x509.GeneralNames r3, java.math.BigInteger r4) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.keyidentifier = r0
            r1.certissuer = r0
            r1.certserno = r0
            org.bouncycastle.asn1.DEROctetString r0 = new org.bouncycastle.asn1.DEROctetString
            r0.<init>(r2)
            r1.keyidentifier = r0
            org.bouncycastle.asn1.DERObject r2 = r3.toASN1Object()
            org.bouncycastle.asn1.x509.GeneralNames r2 = org.bouncycastle.asn1.x509.GeneralNames.getInstance(r2)
            r1.certissuer = r2
            org.bouncycastle.asn1.DERInteger r2 = new org.bouncycastle.asn1.DERInteger
            r2.<init>(r4)
            r1.certserno = r2
            return
    }

    public static org.bouncycastle.asn1.x509.AuthorityKeyIdentifier getInstance(java.lang.Object r3) {
            boolean r0 = r3 instanceof org.bouncycastle.asn1.x509.AuthorityKeyIdentifier
            if (r0 == 0) goto L7
            org.bouncycastle.asn1.x509.AuthorityKeyIdentifier r3 = (org.bouncycastle.asn1.x509.AuthorityKeyIdentifier) r3
            return r3
        L7:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ASN1Sequence
            if (r0 == 0) goto L13
            org.bouncycastle.asn1.x509.AuthorityKeyIdentifier r0 = new org.bouncycastle.asn1.x509.AuthorityKeyIdentifier
            org.bouncycastle.asn1.ASN1Sequence r3 = (org.bouncycastle.asn1.ASN1Sequence) r3
            r0.<init>(r3)
            return r0
        L13:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.x509.X509Extension
            if (r0 == 0) goto L22
            org.bouncycastle.asn1.x509.X509Extension r3 = (org.bouncycastle.asn1.x509.X509Extension) r3
            org.bouncycastle.asn1.ASN1Object r3 = org.bouncycastle.asn1.x509.X509Extension.convertValueToObject(r3)
            org.bouncycastle.asn1.x509.AuthorityKeyIdentifier r3 = getInstance(r3)
            return r3
        L22:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "unknown object in factory: "
            r1.append(r2)
            java.lang.Class r3 = r3.getClass()
            java.lang.String r3 = r3.getName()
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            r0.<init>(r3)
            throw r0
    }

    public static org.bouncycastle.asn1.x509.AuthorityKeyIdentifier getInstance(org.bouncycastle.asn1.ASN1TaggedObject r0, boolean r1) {
            org.bouncycastle.asn1.ASN1Sequence r0 = org.bouncycastle.asn1.ASN1Sequence.getInstance(r0, r1)
            org.bouncycastle.asn1.x509.AuthorityKeyIdentifier r0 = getInstance(r0)
            return r0
    }

    public org.bouncycastle.asn1.x509.GeneralNames getAuthorityCertIssuer() {
            r1 = this;
            org.bouncycastle.asn1.x509.GeneralNames r0 = r1.certissuer
            return r0
    }

    public java.math.BigInteger getAuthorityCertSerialNumber() {
            r1 = this;
            org.bouncycastle.asn1.DERInteger r0 = r1.certserno
            if (r0 == 0) goto L9
            java.math.BigInteger r0 = r0.getValue()
            return r0
        L9:
            r0 = 0
            return r0
    }

    public byte[] getKeyIdentifier() {
            r1 = this;
            org.bouncycastle.asn1.ASN1OctetString r0 = r1.keyidentifier
            if (r0 == 0) goto L9
            byte[] r0 = r0.getOctets()
            return r0
        L9:
            r0 = 0
            return r0
    }

    @Override
    public org.bouncycastle.asn1.DERObject toASN1Object() {
            r5 = this;
            org.bouncycastle.asn1.ASN1EncodableVector r0 = new org.bouncycastle.asn1.ASN1EncodableVector
            r0.<init>()
            org.bouncycastle.asn1.ASN1OctetString r1 = r5.keyidentifier
            r2 = 0
            if (r1 == 0) goto L14
            org.bouncycastle.asn1.DERTaggedObject r1 = new org.bouncycastle.asn1.DERTaggedObject
            org.bouncycastle.asn1.ASN1OctetString r3 = r5.keyidentifier
            r1.<init>(r2, r2, r3)
            r0.add(r1)
        L14:
            org.bouncycastle.asn1.x509.GeneralNames r1 = r5.certissuer
            if (r1 == 0) goto L23
            org.bouncycastle.asn1.DERTaggedObject r1 = new org.bouncycastle.asn1.DERTaggedObject
            r3 = 1
            org.bouncycastle.asn1.x509.GeneralNames r4 = r5.certissuer
            r1.<init>(r2, r3, r4)
            r0.add(r1)
        L23:
            org.bouncycastle.asn1.DERInteger r1 = r5.certserno
            if (r1 == 0) goto L32
            org.bouncycastle.asn1.DERTaggedObject r1 = new org.bouncycastle.asn1.DERTaggedObject
            r3 = 2
            org.bouncycastle.asn1.DERInteger r4 = r5.certserno
            r1.<init>(r2, r3, r4)
            r0.add(r1)
        L32:
            org.bouncycastle.asn1.DERSequence r1 = new org.bouncycastle.asn1.DERSequence
            r1.<init>(r0)
            return r1
    }

    public java.lang.String toString() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "AuthorityKeyIdentifier: KeyID("
            r0.append(r1)
            org.bouncycastle.asn1.ASN1OctetString r1 = r2.keyidentifier
            byte[] r1 = r1.getOctets()
            r0.append(r1)
            java.lang.String r1 = ")"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
