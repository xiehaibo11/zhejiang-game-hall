package org.bouncycastle.asn1.misc;

public class IDEACBCPar extends org.bouncycastle.asn1.ASN1Encodable {
    org.bouncycastle.asn1.ASN1OctetString iv;

    public IDEACBCPar(org.bouncycastle.asn1.ASN1Sequence r3) {
            r2 = this;
            r2.<init>()
            int r0 = r3.size()
            r1 = 1
            if (r0 != r1) goto L12
            r0 = 0
            org.bouncycastle.asn1.DEREncodable r3 = r3.getObjectAt(r0)
            org.bouncycastle.asn1.ASN1OctetString r3 = (org.bouncycastle.asn1.ASN1OctetString) r3
            goto L13
        L12:
            r3 = 0
        L13:
            r2.iv = r3
            return
    }

    public IDEACBCPar(byte[] r2) {
            r1 = this;
            r1.<init>()
            org.bouncycastle.asn1.DEROctetString r0 = new org.bouncycastle.asn1.DEROctetString
            r0.<init>(r2)
            r1.iv = r0
            return
    }

    public static org.bouncycastle.asn1.misc.IDEACBCPar getInstance(java.lang.Object r1) {
            boolean r0 = r1 instanceof org.bouncycastle.asn1.misc.IDEACBCPar
            if (r0 == 0) goto L7
            org.bouncycastle.asn1.misc.IDEACBCPar r1 = (org.bouncycastle.asn1.misc.IDEACBCPar) r1
            return r1
        L7:
            boolean r0 = r1 instanceof org.bouncycastle.asn1.ASN1Sequence
            if (r0 == 0) goto L13
            org.bouncycastle.asn1.misc.IDEACBCPar r0 = new org.bouncycastle.asn1.misc.IDEACBCPar
            org.bouncycastle.asn1.ASN1Sequence r1 = (org.bouncycastle.asn1.ASN1Sequence) r1
            r0.<init>(r1)
            return r0
        L13:
            java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "unknown object in IDEACBCPar factory"
            r1.<init>(r0)
            throw r1
    }

    public byte[] getIV() {
            r1 = this;
            org.bouncycastle.asn1.ASN1OctetString r0 = r1.iv
            if (r0 == 0) goto L9
            byte[] r0 = r0.getOctets()
            return r0
        L9:
            r0 = 0
            return r0
    }

    @Override
    public org.bouncycastle.asn1.DERObject toASN1Object() {
            r2 = this;
            org.bouncycastle.asn1.ASN1EncodableVector r0 = new org.bouncycastle.asn1.ASN1EncodableVector
            r0.<init>()
            org.bouncycastle.asn1.ASN1OctetString r1 = r2.iv
            if (r1 == 0) goto Lc
            r0.add(r1)
        Lc:
            org.bouncycastle.asn1.DERSequence r1 = new org.bouncycastle.asn1.DERSequence
            r1.<init>(r0)
            return r1
    }
}
