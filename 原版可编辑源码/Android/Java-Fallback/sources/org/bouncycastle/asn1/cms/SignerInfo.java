package org.bouncycastle.asn1.cms;

public class SignerInfo extends org.bouncycastle.asn1.ASN1Encodable {
    private org.bouncycastle.asn1.ASN1Set authenticatedAttributes;
    private org.bouncycastle.asn1.x509.AlgorithmIdentifier digAlgorithm;
    private org.bouncycastle.asn1.x509.AlgorithmIdentifier digEncryptionAlgorithm;
    private org.bouncycastle.asn1.ASN1OctetString encryptedDigest;
    private org.bouncycastle.asn1.cms.SignerIdentifier sid;
    private org.bouncycastle.asn1.ASN1Set unauthenticatedAttributes;
    private org.bouncycastle.asn1.DERInteger version;

    public SignerInfo(org.bouncycastle.asn1.ASN1Sequence r5) {
            r4 = this;
            r4.<init>()
            java.util.Enumeration r5 = r5.getObjects()
            java.lang.Object r0 = r5.nextElement()
            org.bouncycastle.asn1.DERInteger r0 = (org.bouncycastle.asn1.DERInteger) r0
            r4.version = r0
            java.lang.Object r0 = r5.nextElement()
            org.bouncycastle.asn1.cms.SignerIdentifier r0 = org.bouncycastle.asn1.cms.SignerIdentifier.getInstance(r0)
            r4.sid = r0
            java.lang.Object r0 = r5.nextElement()
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r0 = org.bouncycastle.asn1.x509.AlgorithmIdentifier.getInstance(r0)
            r4.digAlgorithm = r0
            java.lang.Object r0 = r5.nextElement()
            boolean r1 = r0 instanceof org.bouncycastle.asn1.ASN1TaggedObject
            r2 = 0
            r3 = 0
            if (r1 == 0) goto L3a
            org.bouncycastle.asn1.ASN1TaggedObject r0 = (org.bouncycastle.asn1.ASN1TaggedObject) r0
            org.bouncycastle.asn1.ASN1Set r0 = org.bouncycastle.asn1.ASN1Set.getInstance(r0, r2)
            r4.authenticatedAttributes = r0
            java.lang.Object r0 = r5.nextElement()
            goto L3c
        L3a:
            r4.authenticatedAttributes = r3
        L3c:
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r0 = org.bouncycastle.asn1.x509.AlgorithmIdentifier.getInstance(r0)
            r4.digEncryptionAlgorithm = r0
            java.lang.Object r0 = r5.nextElement()
            org.bouncycastle.asn1.ASN1OctetString r0 = org.bouncycastle.asn1.DEROctetString.getInstance(r0)
            r4.encryptedDigest = r0
            boolean r0 = r5.hasMoreElements()
            if (r0 == 0) goto L5f
            java.lang.Object r5 = r5.nextElement()
            org.bouncycastle.asn1.ASN1TaggedObject r5 = (org.bouncycastle.asn1.ASN1TaggedObject) r5
            org.bouncycastle.asn1.ASN1Set r5 = org.bouncycastle.asn1.ASN1Set.getInstance(r5, r2)
            r4.unauthenticatedAttributes = r5
            goto L61
        L5f:
            r4.unauthenticatedAttributes = r3
        L61:
            return
    }

    public SignerInfo(org.bouncycastle.asn1.cms.SignerIdentifier r3, org.bouncycastle.asn1.x509.AlgorithmIdentifier r4, org.bouncycastle.asn1.ASN1Set r5, org.bouncycastle.asn1.x509.AlgorithmIdentifier r6, org.bouncycastle.asn1.ASN1OctetString r7, org.bouncycastle.asn1.ASN1Set r8) {
            r2 = this;
            r2.<init>()
            boolean r0 = r3.isTagged()
            if (r0 == 0) goto L10
            org.bouncycastle.asn1.DERInteger r0 = new org.bouncycastle.asn1.DERInteger
            r1 = 3
            r0.<init>(r1)
            goto L16
        L10:
            org.bouncycastle.asn1.DERInteger r0 = new org.bouncycastle.asn1.DERInteger
            r1 = 1
            r0.<init>(r1)
        L16:
            r2.version = r0
            r2.sid = r3
            r2.digAlgorithm = r4
            r2.authenticatedAttributes = r5
            r2.digEncryptionAlgorithm = r6
            r2.encryptedDigest = r7
            r2.unauthenticatedAttributes = r8
            return
    }

    public static org.bouncycastle.asn1.cms.SignerInfo getInstance(java.lang.Object r3) throws java.lang.IllegalArgumentException {
            if (r3 == 0) goto L32
            boolean r0 = r3 instanceof org.bouncycastle.asn1.cms.SignerInfo
            if (r0 == 0) goto L7
            goto L32
        L7:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ASN1Sequence
            if (r0 == 0) goto L13
            org.bouncycastle.asn1.cms.SignerInfo r0 = new org.bouncycastle.asn1.cms.SignerInfo
            org.bouncycastle.asn1.ASN1Sequence r3 = (org.bouncycastle.asn1.ASN1Sequence) r3
            r0.<init>(r3)
            return r0
        L13:
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
        L32:
            org.bouncycastle.asn1.cms.SignerInfo r3 = (org.bouncycastle.asn1.cms.SignerInfo) r3
            return r3
    }

    public org.bouncycastle.asn1.ASN1Set getAuthenticatedAttributes() {
            r1 = this;
            org.bouncycastle.asn1.ASN1Set r0 = r1.authenticatedAttributes
            return r0
    }

    public org.bouncycastle.asn1.x509.AlgorithmIdentifier getDigestAlgorithm() {
            r1 = this;
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r0 = r1.digAlgorithm
            return r0
    }

    public org.bouncycastle.asn1.x509.AlgorithmIdentifier getDigestEncryptionAlgorithm() {
            r1 = this;
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r0 = r1.digEncryptionAlgorithm
            return r0
    }

    public org.bouncycastle.asn1.ASN1OctetString getEncryptedDigest() {
            r1 = this;
            org.bouncycastle.asn1.ASN1OctetString r0 = r1.encryptedDigest
            return r0
    }

    public org.bouncycastle.asn1.cms.SignerIdentifier getSID() {
            r1 = this;
            org.bouncycastle.asn1.cms.SignerIdentifier r0 = r1.sid
            return r0
    }

    public org.bouncycastle.asn1.ASN1Set getUnauthenticatedAttributes() {
            r1 = this;
            org.bouncycastle.asn1.ASN1Set r0 = r1.unauthenticatedAttributes
            return r0
    }

    public org.bouncycastle.asn1.DERInteger getVersion() {
            r1 = this;
            org.bouncycastle.asn1.DERInteger r0 = r1.version
            return r0
    }

    @Override
    public org.bouncycastle.asn1.DERObject toASN1Object() {
            r5 = this;
            org.bouncycastle.asn1.ASN1EncodableVector r0 = new org.bouncycastle.asn1.ASN1EncodableVector
            r0.<init>()
            org.bouncycastle.asn1.DERInteger r1 = r5.version
            r0.add(r1)
            org.bouncycastle.asn1.cms.SignerIdentifier r1 = r5.sid
            r0.add(r1)
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r1 = r5.digAlgorithm
            r0.add(r1)
            org.bouncycastle.asn1.ASN1Set r1 = r5.authenticatedAttributes
            r2 = 0
            if (r1 == 0) goto L23
            org.bouncycastle.asn1.DERTaggedObject r1 = new org.bouncycastle.asn1.DERTaggedObject
            org.bouncycastle.asn1.ASN1Set r3 = r5.authenticatedAttributes
            r1.<init>(r2, r2, r3)
            r0.add(r1)
        L23:
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r1 = r5.digEncryptionAlgorithm
            r0.add(r1)
            org.bouncycastle.asn1.ASN1OctetString r1 = r5.encryptedDigest
            r0.add(r1)
            org.bouncycastle.asn1.ASN1Set r1 = r5.unauthenticatedAttributes
            if (r1 == 0) goto L3c
            org.bouncycastle.asn1.DERTaggedObject r1 = new org.bouncycastle.asn1.DERTaggedObject
            r3 = 1
            org.bouncycastle.asn1.ASN1Set r4 = r5.unauthenticatedAttributes
            r1.<init>(r2, r3, r4)
            r0.add(r1)
        L3c:
            org.bouncycastle.asn1.DERSequence r1 = new org.bouncycastle.asn1.DERSequence
            r1.<init>(r0)
            return r1
    }
}
