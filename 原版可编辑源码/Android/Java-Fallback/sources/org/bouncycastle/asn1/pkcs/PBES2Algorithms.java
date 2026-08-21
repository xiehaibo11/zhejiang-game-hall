package org.bouncycastle.asn1.pkcs;

public class PBES2Algorithms extends org.bouncycastle.asn1.x509.AlgorithmIdentifier implements org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers {
    private org.bouncycastle.asn1.pkcs.KeyDerivationFunc func;
    private org.bouncycastle.asn1.DERObjectIdentifier objectId;
    private org.bouncycastle.asn1.pkcs.EncryptionScheme scheme;

    public PBES2Algorithms(org.bouncycastle.asn1.ASN1Sequence r5) {
            r4 = this;
            r4.<init>(r5)
            java.util.Enumeration r5 = r5.getObjects()
            java.lang.Object r0 = r5.nextElement()
            org.bouncycastle.asn1.DERObjectIdentifier r0 = (org.bouncycastle.asn1.DERObjectIdentifier) r0
            r4.objectId = r0
            java.lang.Object r5 = r5.nextElement()
            org.bouncycastle.asn1.ASN1Sequence r5 = (org.bouncycastle.asn1.ASN1Sequence) r5
            java.util.Enumeration r5 = r5.getObjects()
            java.lang.Object r0 = r5.nextElement()
            org.bouncycastle.asn1.ASN1Sequence r0 = (org.bouncycastle.asn1.ASN1Sequence) r0
            r1 = 0
            org.bouncycastle.asn1.DEREncodable r1 = r0.getObjectAt(r1)
            org.bouncycastle.asn1.DERObjectIdentifier r2 = org.bouncycastle.asn1.pkcs.PBES2Algorithms.id_PBKDF2
            boolean r1 = r1.equals(r2)
            if (r1 == 0) goto L3d
            org.bouncycastle.asn1.pkcs.KeyDerivationFunc r1 = new org.bouncycastle.asn1.pkcs.KeyDerivationFunc
            org.bouncycastle.asn1.DERObjectIdentifier r2 = org.bouncycastle.asn1.pkcs.PBES2Algorithms.id_PBKDF2
            r3 = 1
            org.bouncycastle.asn1.DEREncodable r0 = r0.getObjectAt(r3)
            org.bouncycastle.asn1.pkcs.PBKDF2Params r0 = org.bouncycastle.asn1.pkcs.PBKDF2Params.getInstance(r0)
            r1.<init>(r2, r0)
            goto L42
        L3d:
            org.bouncycastle.asn1.pkcs.KeyDerivationFunc r1 = new org.bouncycastle.asn1.pkcs.KeyDerivationFunc
            r1.<init>(r0)
        L42:
            r4.func = r1
            org.bouncycastle.asn1.pkcs.EncryptionScheme r0 = new org.bouncycastle.asn1.pkcs.EncryptionScheme
            java.lang.Object r5 = r5.nextElement()
            org.bouncycastle.asn1.ASN1Sequence r5 = (org.bouncycastle.asn1.ASN1Sequence) r5
            r0.<init>(r5)
            r4.scheme = r0
            return
    }

    @Override
    public org.bouncycastle.asn1.DERObject getDERObject() {
            r3 = this;
            org.bouncycastle.asn1.ASN1EncodableVector r0 = new org.bouncycastle.asn1.ASN1EncodableVector
            r0.<init>()
            org.bouncycastle.asn1.ASN1EncodableVector r1 = new org.bouncycastle.asn1.ASN1EncodableVector
            r1.<init>()
            org.bouncycastle.asn1.DERObjectIdentifier r2 = r3.objectId
            r0.add(r2)
            org.bouncycastle.asn1.pkcs.KeyDerivationFunc r2 = r3.func
            r1.add(r2)
            org.bouncycastle.asn1.pkcs.EncryptionScheme r2 = r3.scheme
            r1.add(r2)
            org.bouncycastle.asn1.DERSequence r2 = new org.bouncycastle.asn1.DERSequence
            r2.<init>(r1)
            r0.add(r2)
            org.bouncycastle.asn1.DERSequence r1 = new org.bouncycastle.asn1.DERSequence
            r1.<init>(r0)
            return r1
    }

    public org.bouncycastle.asn1.pkcs.EncryptionScheme getEncryptionScheme() {
            r1 = this;
            org.bouncycastle.asn1.pkcs.EncryptionScheme r0 = r1.scheme
            return r0
    }

    public org.bouncycastle.asn1.pkcs.KeyDerivationFunc getKeyDerivationFunc() {
            r1 = this;
            org.bouncycastle.asn1.pkcs.KeyDerivationFunc r0 = r1.func
            return r0
    }

    @Override
    public org.bouncycastle.asn1.DERObjectIdentifier getObjectId() {
            r1 = this;
            org.bouncycastle.asn1.DERObjectIdentifier r0 = r1.objectId
            return r0
    }
}
