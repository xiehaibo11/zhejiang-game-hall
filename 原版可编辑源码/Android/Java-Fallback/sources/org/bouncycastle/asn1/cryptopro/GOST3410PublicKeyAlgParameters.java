package org.bouncycastle.asn1.cryptopro;

public class GOST3410PublicKeyAlgParameters extends org.bouncycastle.asn1.ASN1Encodable {
    private org.bouncycastle.asn1.DERObjectIdentifier digestParamSet;
    private org.bouncycastle.asn1.DERObjectIdentifier encryptionParamSet;
    private org.bouncycastle.asn1.DERObjectIdentifier publicKeyParamSet;

    public GOST3410PublicKeyAlgParameters(org.bouncycastle.asn1.ASN1Sequence r3) {
            r2 = this;
            r2.<init>()
            r0 = 0
            org.bouncycastle.asn1.DEREncodable r0 = r3.getObjectAt(r0)
            org.bouncycastle.asn1.DERObjectIdentifier r0 = (org.bouncycastle.asn1.DERObjectIdentifier) r0
            r2.publicKeyParamSet = r0
            r0 = 1
            org.bouncycastle.asn1.DEREncodable r0 = r3.getObjectAt(r0)
            org.bouncycastle.asn1.DERObjectIdentifier r0 = (org.bouncycastle.asn1.DERObjectIdentifier) r0
            r2.digestParamSet = r0
            int r0 = r3.size()
            r1 = 2
            if (r0 <= r1) goto L24
            org.bouncycastle.asn1.DEREncodable r3 = r3.getObjectAt(r1)
            org.bouncycastle.asn1.DERObjectIdentifier r3 = (org.bouncycastle.asn1.DERObjectIdentifier) r3
            r2.encryptionParamSet = r3
        L24:
            return
    }

    public GOST3410PublicKeyAlgParameters(org.bouncycastle.asn1.DERObjectIdentifier r1, org.bouncycastle.asn1.DERObjectIdentifier r2) {
            r0 = this;
            r0.<init>()
            r0.publicKeyParamSet = r1
            r0.digestParamSet = r2
            r1 = 0
            r0.encryptionParamSet = r1
            return
    }

    public GOST3410PublicKeyAlgParameters(org.bouncycastle.asn1.DERObjectIdentifier r1, org.bouncycastle.asn1.DERObjectIdentifier r2, org.bouncycastle.asn1.DERObjectIdentifier r3) {
            r0 = this;
            r0.<init>()
            r0.publicKeyParamSet = r1
            r0.digestParamSet = r2
            r0.encryptionParamSet = r3
            return
    }

    public static org.bouncycastle.asn1.cryptopro.GOST3410PublicKeyAlgParameters getInstance(java.lang.Object r3) {
            if (r3 == 0) goto L32
            boolean r0 = r3 instanceof org.bouncycastle.asn1.cryptopro.GOST3410PublicKeyAlgParameters
            if (r0 == 0) goto L7
            goto L32
        L7:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ASN1Sequence
            if (r0 == 0) goto L13
            org.bouncycastle.asn1.cryptopro.GOST3410PublicKeyAlgParameters r0 = new org.bouncycastle.asn1.cryptopro.GOST3410PublicKeyAlgParameters
            org.bouncycastle.asn1.ASN1Sequence r3 = (org.bouncycastle.asn1.ASN1Sequence) r3
            r0.<init>(r3)
            return r0
        L13:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Invalid GOST3410Parameter: "
            r1.append(r2)
            java.lang.Class r3 = r3.getClass()
            java.lang.String r3 = r3.getName()
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            r0.<init>(r3)
            throw r0
        L32:
            org.bouncycastle.asn1.cryptopro.GOST3410PublicKeyAlgParameters r3 = (org.bouncycastle.asn1.cryptopro.GOST3410PublicKeyAlgParameters) r3
            return r3
    }

    public static org.bouncycastle.asn1.cryptopro.GOST3410PublicKeyAlgParameters getInstance(org.bouncycastle.asn1.ASN1TaggedObject r0, boolean r1) {
            org.bouncycastle.asn1.ASN1Sequence r0 = org.bouncycastle.asn1.ASN1Sequence.getInstance(r0, r1)
            org.bouncycastle.asn1.cryptopro.GOST3410PublicKeyAlgParameters r0 = getInstance(r0)
            return r0
    }

    public org.bouncycastle.asn1.DERObjectIdentifier getDigestParamSet() {
            r1 = this;
            org.bouncycastle.asn1.DERObjectIdentifier r0 = r1.digestParamSet
            return r0
    }

    public org.bouncycastle.asn1.DERObjectIdentifier getEncryptionParamSet() {
            r1 = this;
            org.bouncycastle.asn1.DERObjectIdentifier r0 = r1.encryptionParamSet
            return r0
    }

    public org.bouncycastle.asn1.DERObjectIdentifier getPublicKeyParamSet() {
            r1 = this;
            org.bouncycastle.asn1.DERObjectIdentifier r0 = r1.publicKeyParamSet
            return r0
    }

    @Override
    public org.bouncycastle.asn1.DERObject toASN1Object() {
            r2 = this;
            org.bouncycastle.asn1.ASN1EncodableVector r0 = new org.bouncycastle.asn1.ASN1EncodableVector
            r0.<init>()
            org.bouncycastle.asn1.DERObjectIdentifier r1 = r2.publicKeyParamSet
            r0.add(r1)
            org.bouncycastle.asn1.DERObjectIdentifier r1 = r2.digestParamSet
            r0.add(r1)
            org.bouncycastle.asn1.DERObjectIdentifier r1 = r2.encryptionParamSet
            if (r1 == 0) goto L16
            r0.add(r1)
        L16:
            org.bouncycastle.asn1.DERSequence r1 = new org.bouncycastle.asn1.DERSequence
            r1.<init>(r0)
            return r1
    }
}
