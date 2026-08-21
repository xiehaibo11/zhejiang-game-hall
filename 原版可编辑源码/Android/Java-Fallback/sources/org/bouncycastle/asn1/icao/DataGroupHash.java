package org.bouncycastle.asn1.icao;

public class DataGroupHash extends org.bouncycastle.asn1.ASN1Encodable {
    org.bouncycastle.asn1.ASN1OctetString dataGroupHashValue;
    org.bouncycastle.asn1.DERInteger dataGroupNumber;

    public DataGroupHash(int r2, org.bouncycastle.asn1.ASN1OctetString r3) {
            r1 = this;
            r1.<init>()
            org.bouncycastle.asn1.DERInteger r0 = new org.bouncycastle.asn1.DERInteger
            r0.<init>(r2)
            r1.dataGroupNumber = r0
            r1.dataGroupHashValue = r3
            return
    }

    public DataGroupHash(org.bouncycastle.asn1.ASN1Sequence r2) {
            r1 = this;
            r1.<init>()
            java.util.Enumeration r2 = r2.getObjects()
            java.lang.Object r0 = r2.nextElement()
            org.bouncycastle.asn1.DERInteger r0 = org.bouncycastle.asn1.DERInteger.getInstance(r0)
            r1.dataGroupNumber = r0
            java.lang.Object r2 = r2.nextElement()
            org.bouncycastle.asn1.ASN1OctetString r2 = org.bouncycastle.asn1.ASN1OctetString.getInstance(r2)
            r1.dataGroupHashValue = r2
            return
    }

    public static org.bouncycastle.asn1.icao.DataGroupHash getInstance(java.lang.Object r3) {
            if (r3 == 0) goto L34
            boolean r0 = r3 instanceof org.bouncycastle.asn1.icao.DataGroupHash
            if (r0 == 0) goto L7
            goto L34
        L7:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ASN1Sequence
            if (r0 == 0) goto L15
            org.bouncycastle.asn1.icao.DataGroupHash r0 = new org.bouncycastle.asn1.icao.DataGroupHash
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
            org.bouncycastle.asn1.icao.DataGroupHash r3 = (org.bouncycastle.asn1.icao.DataGroupHash) r3
            return r3
    }

    public org.bouncycastle.asn1.ASN1OctetString getDataGroupHashValue() {
            r1 = this;
            org.bouncycastle.asn1.ASN1OctetString r0 = r1.dataGroupHashValue
            return r0
    }

    public int getDataGroupNumber() {
            r1 = this;
            org.bouncycastle.asn1.DERInteger r0 = r1.dataGroupNumber
            java.math.BigInteger r0 = r0.getValue()
            int r0 = r0.intValue()
            return r0
    }

    @Override
    public org.bouncycastle.asn1.DERObject toASN1Object() {
            r2 = this;
            org.bouncycastle.asn1.ASN1EncodableVector r0 = new org.bouncycastle.asn1.ASN1EncodableVector
            r0.<init>()
            org.bouncycastle.asn1.DERInteger r1 = r2.dataGroupNumber
            r0.add(r1)
            org.bouncycastle.asn1.ASN1OctetString r1 = r2.dataGroupHashValue
            r0.add(r1)
            org.bouncycastle.asn1.DERSequence r1 = new org.bouncycastle.asn1.DERSequence
            r1.<init>(r0)
            return r1
    }
}
