package org.bouncycastle.asn1.x509.qualified;

public class BiometricData extends org.bouncycastle.asn1.ASN1Encodable {
    org.bouncycastle.asn1.ASN1OctetString biometricDataHash;
    org.bouncycastle.asn1.x509.AlgorithmIdentifier hashAlgorithm;
    org.bouncycastle.asn1.DERIA5String sourceDataUri;
    org.bouncycastle.asn1.x509.qualified.TypeOfBiometricData typeOfBiometricData;

    public BiometricData(org.bouncycastle.asn1.ASN1Sequence r2) {
            r1 = this;
            r1.<init>()
            java.util.Enumeration r2 = r2.getObjects()
            java.lang.Object r0 = r2.nextElement()
            org.bouncycastle.asn1.x509.qualified.TypeOfBiometricData r0 = org.bouncycastle.asn1.x509.qualified.TypeOfBiometricData.getInstance(r0)
            r1.typeOfBiometricData = r0
            java.lang.Object r0 = r2.nextElement()
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r0 = org.bouncycastle.asn1.x509.AlgorithmIdentifier.getInstance(r0)
            r1.hashAlgorithm = r0
            java.lang.Object r0 = r2.nextElement()
            org.bouncycastle.asn1.ASN1OctetString r0 = org.bouncycastle.asn1.ASN1OctetString.getInstance(r0)
            r1.biometricDataHash = r0
            boolean r0 = r2.hasMoreElements()
            if (r0 == 0) goto L35
            java.lang.Object r2 = r2.nextElement()
            org.bouncycastle.asn1.DERIA5String r2 = org.bouncycastle.asn1.DERIA5String.getInstance(r2)
            r1.sourceDataUri = r2
        L35:
            return
    }

    public BiometricData(org.bouncycastle.asn1.x509.qualified.TypeOfBiometricData r1, org.bouncycastle.asn1.x509.AlgorithmIdentifier r2, org.bouncycastle.asn1.ASN1OctetString r3) {
            r0 = this;
            r0.<init>()
            r0.typeOfBiometricData = r1
            r0.hashAlgorithm = r2
            r0.biometricDataHash = r3
            r1 = 0
            r0.sourceDataUri = r1
            return
    }

    public BiometricData(org.bouncycastle.asn1.x509.qualified.TypeOfBiometricData r1, org.bouncycastle.asn1.x509.AlgorithmIdentifier r2, org.bouncycastle.asn1.ASN1OctetString r3, org.bouncycastle.asn1.DERIA5String r4) {
            r0 = this;
            r0.<init>()
            r0.typeOfBiometricData = r1
            r0.hashAlgorithm = r2
            r0.biometricDataHash = r3
            r0.sourceDataUri = r4
            return
    }

    public static org.bouncycastle.asn1.x509.qualified.BiometricData getInstance(java.lang.Object r1) {
            if (r1 == 0) goto L1d
            boolean r0 = r1 instanceof org.bouncycastle.asn1.x509.qualified.BiometricData
            if (r0 == 0) goto L7
            goto L1d
        L7:
            boolean r0 = r1 instanceof org.bouncycastle.asn1.ASN1Sequence
            if (r0 == 0) goto L15
            org.bouncycastle.asn1.x509.qualified.BiometricData r0 = new org.bouncycastle.asn1.x509.qualified.BiometricData
            org.bouncycastle.asn1.ASN1Sequence r1 = org.bouncycastle.asn1.ASN1Sequence.getInstance(r1)
            r0.<init>(r1)
            return r0
        L15:
            java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "unknown object in getInstance"
            r1.<init>(r0)
            throw r1
        L1d:
            org.bouncycastle.asn1.x509.qualified.BiometricData r1 = (org.bouncycastle.asn1.x509.qualified.BiometricData) r1
            return r1
    }

    public org.bouncycastle.asn1.ASN1OctetString getBiometricDataHash() {
            r1 = this;
            org.bouncycastle.asn1.ASN1OctetString r0 = r1.biometricDataHash
            return r0
    }

    public org.bouncycastle.asn1.x509.AlgorithmIdentifier getHashAlgorithm() {
            r1 = this;
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r0 = r1.hashAlgorithm
            return r0
    }

    public org.bouncycastle.asn1.DERIA5String getSourceDataUri() {
            r1 = this;
            org.bouncycastle.asn1.DERIA5String r0 = r1.sourceDataUri
            return r0
    }

    public org.bouncycastle.asn1.x509.qualified.TypeOfBiometricData getTypeOfBiometricData() {
            r1 = this;
            org.bouncycastle.asn1.x509.qualified.TypeOfBiometricData r0 = r1.typeOfBiometricData
            return r0
    }

    @Override
    public org.bouncycastle.asn1.DERObject toASN1Object() {
            r2 = this;
            org.bouncycastle.asn1.ASN1EncodableVector r0 = new org.bouncycastle.asn1.ASN1EncodableVector
            r0.<init>()
            org.bouncycastle.asn1.x509.qualified.TypeOfBiometricData r1 = r2.typeOfBiometricData
            r0.add(r1)
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r1 = r2.hashAlgorithm
            r0.add(r1)
            org.bouncycastle.asn1.ASN1OctetString r1 = r2.biometricDataHash
            r0.add(r1)
            org.bouncycastle.asn1.DERIA5String r1 = r2.sourceDataUri
            if (r1 == 0) goto L1b
            r0.add(r1)
        L1b:
            org.bouncycastle.asn1.DERSequence r1 = new org.bouncycastle.asn1.DERSequence
            r1.<init>(r0)
            return r1
    }
}
