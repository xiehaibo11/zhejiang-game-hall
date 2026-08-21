package org.bouncycastle.asn1.pkcs;

public class RSASSAPSSparams extends org.bouncycastle.asn1.ASN1Encodable {
    public static final org.bouncycastle.asn1.x509.AlgorithmIdentifier DEFAULT_HASH_ALGORITHM = null;
    public static final org.bouncycastle.asn1.x509.AlgorithmIdentifier DEFAULT_MASK_GEN_FUNCTION = null;
    public static final org.bouncycastle.asn1.DERInteger DEFAULT_SALT_LENGTH = null;
    public static final org.bouncycastle.asn1.DERInteger DEFAULT_TRAILER_FIELD = null;
    private org.bouncycastle.asn1.x509.AlgorithmIdentifier hashAlgorithm;
    private org.bouncycastle.asn1.x509.AlgorithmIdentifier maskGenAlgorithm;
    private org.bouncycastle.asn1.DERInteger saltLength;
    private org.bouncycastle.asn1.DERInteger trailerField;

    static {
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r0 = new org.bouncycastle.asn1.x509.AlgorithmIdentifier
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.oiw.OIWObjectIdentifiers.idSHA1
            org.bouncycastle.asn1.DERNull r2 = new org.bouncycastle.asn1.DERNull
            r2.<init>()
            r0.<init>(r1, r2)
            org.bouncycastle.asn1.pkcs.RSASSAPSSparams.DEFAULT_HASH_ALGORITHM = r0
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r0 = new org.bouncycastle.asn1.x509.AlgorithmIdentifier
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers.id_mgf1
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r2 = org.bouncycastle.asn1.pkcs.RSASSAPSSparams.DEFAULT_HASH_ALGORITHM
            r0.<init>(r1, r2)
            org.bouncycastle.asn1.pkcs.RSASSAPSSparams.DEFAULT_MASK_GEN_FUNCTION = r0
            org.bouncycastle.asn1.DERInteger r0 = new org.bouncycastle.asn1.DERInteger
            r1 = 20
            r0.<init>(r1)
            org.bouncycastle.asn1.pkcs.RSASSAPSSparams.DEFAULT_SALT_LENGTH = r0
            org.bouncycastle.asn1.DERInteger r0 = new org.bouncycastle.asn1.DERInteger
            r1 = 1
            r0.<init>(r1)
            org.bouncycastle.asn1.pkcs.RSASSAPSSparams.DEFAULT_TRAILER_FIELD = r0
            return
    }

    public RSASSAPSSparams() {
            r1 = this;
            r1.<init>()
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r0 = org.bouncycastle.asn1.pkcs.RSASSAPSSparams.DEFAULT_HASH_ALGORITHM
            r1.hashAlgorithm = r0
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r0 = org.bouncycastle.asn1.pkcs.RSASSAPSSparams.DEFAULT_MASK_GEN_FUNCTION
            r1.maskGenAlgorithm = r0
            org.bouncycastle.asn1.DERInteger r0 = org.bouncycastle.asn1.pkcs.RSASSAPSSparams.DEFAULT_SALT_LENGTH
            r1.saltLength = r0
            org.bouncycastle.asn1.DERInteger r0 = org.bouncycastle.asn1.pkcs.RSASSAPSSparams.DEFAULT_TRAILER_FIELD
            r1.trailerField = r0
            return
    }

    public RSASSAPSSparams(org.bouncycastle.asn1.ASN1Sequence r6) {
            r5 = this;
            r5.<init>()
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r0 = org.bouncycastle.asn1.pkcs.RSASSAPSSparams.DEFAULT_HASH_ALGORITHM
            r5.hashAlgorithm = r0
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r0 = org.bouncycastle.asn1.pkcs.RSASSAPSSparams.DEFAULT_MASK_GEN_FUNCTION
            r5.maskGenAlgorithm = r0
            org.bouncycastle.asn1.DERInteger r0 = org.bouncycastle.asn1.pkcs.RSASSAPSSparams.DEFAULT_SALT_LENGTH
            r5.saltLength = r0
            org.bouncycastle.asn1.DERInteger r0 = org.bouncycastle.asn1.pkcs.RSASSAPSSparams.DEFAULT_TRAILER_FIELD
            r5.trailerField = r0
            r0 = 0
        L14:
            int r1 = r6.size()
            if (r0 == r1) goto L55
            org.bouncycastle.asn1.DEREncodable r1 = r6.getObjectAt(r0)
            org.bouncycastle.asn1.ASN1TaggedObject r1 = (org.bouncycastle.asn1.ASN1TaggedObject) r1
            int r2 = r1.getTagNo()
            r3 = 1
            if (r2 == 0) goto L4c
            if (r2 == r3) goto L45
            r4 = 2
            if (r2 == r4) goto L3e
            r4 = 3
            if (r2 != r4) goto L36
            org.bouncycastle.asn1.DERInteger r1 = org.bouncycastle.asn1.DERInteger.getInstance(r1, r3)
            r5.trailerField = r1
            goto L52
        L36:
            java.lang.IllegalArgumentException r6 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "unknown tag"
            r6.<init>(r0)
            throw r6
        L3e:
            org.bouncycastle.asn1.DERInteger r1 = org.bouncycastle.asn1.DERInteger.getInstance(r1, r3)
            r5.saltLength = r1
            goto L52
        L45:
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r1 = org.bouncycastle.asn1.x509.AlgorithmIdentifier.getInstance(r1, r3)
            r5.maskGenAlgorithm = r1
            goto L52
        L4c:
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r1 = org.bouncycastle.asn1.x509.AlgorithmIdentifier.getInstance(r1, r3)
            r5.hashAlgorithm = r1
        L52:
            int r0 = r0 + 1
            goto L14
        L55:
            return
    }

    public RSASSAPSSparams(org.bouncycastle.asn1.x509.AlgorithmIdentifier r1, org.bouncycastle.asn1.x509.AlgorithmIdentifier r2, org.bouncycastle.asn1.DERInteger r3, org.bouncycastle.asn1.DERInteger r4) {
            r0 = this;
            r0.<init>()
            r0.hashAlgorithm = r1
            r0.maskGenAlgorithm = r2
            r0.saltLength = r3
            r0.trailerField = r4
            return
    }

    public static org.bouncycastle.asn1.pkcs.RSASSAPSSparams getInstance(java.lang.Object r3) {
            boolean r0 = r3 instanceof org.bouncycastle.asn1.pkcs.RSASSAPSSparams
            if (r0 == 0) goto L7
            org.bouncycastle.asn1.pkcs.RSASSAPSSparams r3 = (org.bouncycastle.asn1.pkcs.RSASSAPSSparams) r3
            return r3
        L7:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ASN1Sequence
            if (r0 == 0) goto L13
            org.bouncycastle.asn1.pkcs.RSASSAPSSparams r0 = new org.bouncycastle.asn1.pkcs.RSASSAPSSparams
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
    }

    public org.bouncycastle.asn1.x509.AlgorithmIdentifier getHashAlgorithm() {
            r1 = this;
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r0 = r1.hashAlgorithm
            return r0
    }

    public org.bouncycastle.asn1.x509.AlgorithmIdentifier getMaskGenAlgorithm() {
            r1 = this;
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r0 = r1.maskGenAlgorithm
            return r0
    }

    public org.bouncycastle.asn1.DERInteger getSaltLength() {
            r1 = this;
            org.bouncycastle.asn1.DERInteger r0 = r1.saltLength
            return r0
    }

    public org.bouncycastle.asn1.DERInteger getTrailerField() {
            r1 = this;
            org.bouncycastle.asn1.DERInteger r0 = r1.trailerField
            return r0
    }

    @Override
    public org.bouncycastle.asn1.DERObject toASN1Object() {
            r5 = this;
            org.bouncycastle.asn1.ASN1EncodableVector r0 = new org.bouncycastle.asn1.ASN1EncodableVector
            r0.<init>()
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r1 = r5.hashAlgorithm
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r2 = org.bouncycastle.asn1.pkcs.RSASSAPSSparams.DEFAULT_HASH_ALGORITHM
            boolean r1 = r1.equals(r2)
            r2 = 1
            if (r1 != 0) goto L1b
            org.bouncycastle.asn1.DERTaggedObject r1 = new org.bouncycastle.asn1.DERTaggedObject
            r3 = 0
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r4 = r5.hashAlgorithm
            r1.<init>(r2, r3, r4)
            r0.add(r1)
        L1b:
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r1 = r5.maskGenAlgorithm
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r3 = org.bouncycastle.asn1.pkcs.RSASSAPSSparams.DEFAULT_MASK_GEN_FUNCTION
            boolean r1 = r1.equals(r3)
            if (r1 != 0) goto L2f
            org.bouncycastle.asn1.DERTaggedObject r1 = new org.bouncycastle.asn1.DERTaggedObject
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r3 = r5.maskGenAlgorithm
            r1.<init>(r2, r2, r3)
            r0.add(r1)
        L2f:
            org.bouncycastle.asn1.DERInteger r1 = r5.saltLength
            org.bouncycastle.asn1.DERInteger r3 = org.bouncycastle.asn1.pkcs.RSASSAPSSparams.DEFAULT_SALT_LENGTH
            boolean r1 = r1.equals(r3)
            if (r1 != 0) goto L44
            org.bouncycastle.asn1.DERTaggedObject r1 = new org.bouncycastle.asn1.DERTaggedObject
            r3 = 2
            org.bouncycastle.asn1.DERInteger r4 = r5.saltLength
            r1.<init>(r2, r3, r4)
            r0.add(r1)
        L44:
            org.bouncycastle.asn1.DERInteger r1 = r5.trailerField
            org.bouncycastle.asn1.DERInteger r3 = org.bouncycastle.asn1.pkcs.RSASSAPSSparams.DEFAULT_TRAILER_FIELD
            boolean r1 = r1.equals(r3)
            if (r1 != 0) goto L59
            org.bouncycastle.asn1.DERTaggedObject r1 = new org.bouncycastle.asn1.DERTaggedObject
            r3 = 3
            org.bouncycastle.asn1.DERInteger r4 = r5.trailerField
            r1.<init>(r2, r3, r4)
            r0.add(r1)
        L59:
            org.bouncycastle.asn1.DERSequence r1 = new org.bouncycastle.asn1.DERSequence
            r1.<init>(r0)
            return r1
    }
}
