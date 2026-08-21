package org.bouncycastle.asn1.icao;

public class LDSSecurityObject extends org.bouncycastle.asn1.ASN1Encodable implements org.bouncycastle.asn1.icao.ICAOObjectIdentifiers {
    public static final int ub_DataGroups = 16;
    org.bouncycastle.asn1.icao.DataGroupHash[] datagroupHash;
    org.bouncycastle.asn1.x509.AlgorithmIdentifier digestAlgorithmIdentifier;
    org.bouncycastle.asn1.DERInteger version;

    public LDSSecurityObject(org.bouncycastle.asn1.ASN1Sequence r4) {
            r3 = this;
            r3.<init>()
            org.bouncycastle.asn1.DERInteger r0 = new org.bouncycastle.asn1.DERInteger
            r1 = 0
            r0.<init>(r1)
            r3.version = r0
            if (r4 == 0) goto L58
            int r0 = r4.size()
            if (r0 == 0) goto L58
            java.util.Enumeration r4 = r4.getObjects()
            java.lang.Object r0 = r4.nextElement()
            org.bouncycastle.asn1.DERInteger r0 = org.bouncycastle.asn1.DERInteger.getInstance(r0)
            r3.version = r0
            java.lang.Object r0 = r4.nextElement()
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r0 = org.bouncycastle.asn1.x509.AlgorithmIdentifier.getInstance(r0)
            r3.digestAlgorithmIdentifier = r0
            java.lang.Object r4 = r4.nextElement()
            org.bouncycastle.asn1.ASN1Sequence r4 = org.bouncycastle.asn1.ASN1Sequence.getInstance(r4)
            int r0 = r4.size()
            r3.checkDatagroupHashSeqSize(r0)
            int r0 = r4.size()
            org.bouncycastle.asn1.icao.DataGroupHash[] r0 = new org.bouncycastle.asn1.icao.DataGroupHash[r0]
            r3.datagroupHash = r0
        L42:
            int r0 = r4.size()
            if (r1 >= r0) goto L57
            org.bouncycastle.asn1.icao.DataGroupHash[] r0 = r3.datagroupHash
            org.bouncycastle.asn1.DEREncodable r2 = r4.getObjectAt(r1)
            org.bouncycastle.asn1.icao.DataGroupHash r2 = org.bouncycastle.asn1.icao.DataGroupHash.getInstance(r2)
            r0[r1] = r2
            int r1 = r1 + 1
            goto L42
        L57:
            return
        L58:
            java.lang.IllegalArgumentException r4 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "null or empty sequence passed."
            r4.<init>(r0)
            throw r4
    }

    public LDSSecurityObject(org.bouncycastle.asn1.x509.AlgorithmIdentifier r3, org.bouncycastle.asn1.icao.DataGroupHash[] r4) {
            r2 = this;
            r2.<init>()
            org.bouncycastle.asn1.DERInteger r0 = new org.bouncycastle.asn1.DERInteger
            r1 = 0
            r0.<init>(r1)
            r2.version = r0
            r2.digestAlgorithmIdentifier = r3
            r2.datagroupHash = r4
            int r3 = r4.length
            r2.checkDatagroupHashSeqSize(r3)
            return
    }

    private void checkDatagroupHashSeqSize(int r2) {
            r1 = this;
            r0 = 2
            if (r2 < r0) goto L8
            r0 = 16
            if (r2 > r0) goto L8
            return
        L8:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "wrong size in DataGroupHashValues : not in (2..16)"
            r2.<init>(r0)
            throw r2
    }

    public static org.bouncycastle.asn1.icao.LDSSecurityObject getInstance(java.lang.Object r3) {
            if (r3 == 0) goto L34
            boolean r0 = r3 instanceof org.bouncycastle.asn1.icao.LDSSecurityObject
            if (r0 == 0) goto L7
            goto L34
        L7:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ASN1Sequence
            if (r0 == 0) goto L15
            org.bouncycastle.asn1.icao.LDSSecurityObject r0 = new org.bouncycastle.asn1.icao.LDSSecurityObject
            org.bouncycastle.asn1.ASN1Sequence r3 = org.bouncycastle.asn1.ASN1Sequence.getInstance(r3)
            r0.<init>(r3)
            return r0
        L15:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "unknown object in getInstance: "
            r1.append(r2)
            java.lang.Class r3 = r3.getClass()
            java.lang.String r3 = r3.getName()
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            r0.<init>(r3)
            throw r0
        L34:
            org.bouncycastle.asn1.icao.LDSSecurityObject r3 = (org.bouncycastle.asn1.icao.LDSSecurityObject) r3
            return r3
    }

    public org.bouncycastle.asn1.icao.DataGroupHash[] getDatagroupHash() {
            r1 = this;
            org.bouncycastle.asn1.icao.DataGroupHash[] r0 = r1.datagroupHash
            return r0
    }

    public org.bouncycastle.asn1.x509.AlgorithmIdentifier getDigestAlgorithmIdentifier() {
            r1 = this;
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r0 = r1.digestAlgorithmIdentifier
            return r0
    }

    @Override
    public org.bouncycastle.asn1.DERObject toASN1Object() {
            r5 = this;
            org.bouncycastle.asn1.ASN1EncodableVector r0 = new org.bouncycastle.asn1.ASN1EncodableVector
            r0.<init>()
            org.bouncycastle.asn1.DERInteger r1 = r5.version
            r0.add(r1)
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r1 = r5.digestAlgorithmIdentifier
            r0.add(r1)
            org.bouncycastle.asn1.ASN1EncodableVector r1 = new org.bouncycastle.asn1.ASN1EncodableVector
            r1.<init>()
            r2 = 0
        L15:
            org.bouncycastle.asn1.icao.DataGroupHash[] r3 = r5.datagroupHash
            int r4 = r3.length
            if (r2 >= r4) goto L22
            r3 = r3[r2]
            r1.add(r3)
            int r2 = r2 + 1
            goto L15
        L22:
            org.bouncycastle.asn1.DERSequence r2 = new org.bouncycastle.asn1.DERSequence
            r2.<init>(r1)
            r0.add(r2)
            org.bouncycastle.asn1.DERSequence r1 = new org.bouncycastle.asn1.DERSequence
            r1.<init>(r0)
            return r1
    }
}
