package org.bouncycastle.asn1.cmp;

public class CertRepMessage extends org.bouncycastle.asn1.ASN1Encodable {
    private org.bouncycastle.asn1.ASN1Sequence caPubs;
    private org.bouncycastle.asn1.ASN1Sequence response;

    private CertRepMessage(org.bouncycastle.asn1.ASN1Sequence r4) {
            r3 = this;
            r3.<init>()
            int r0 = r4.size()
            r1 = 1
            r2 = 0
            if (r0 <= r1) goto L18
            org.bouncycastle.asn1.DEREncodable r0 = r4.getObjectAt(r2)
            org.bouncycastle.asn1.ASN1TaggedObject r0 = (org.bouncycastle.asn1.ASN1TaggedObject) r0
            org.bouncycastle.asn1.ASN1Sequence r0 = org.bouncycastle.asn1.ASN1Sequence.getInstance(r0, r1)
            r3.caPubs = r0
            goto L19
        L18:
            r1 = 0
        L19:
            org.bouncycastle.asn1.DEREncodable r4 = r4.getObjectAt(r1)
            org.bouncycastle.asn1.ASN1Sequence r4 = org.bouncycastle.asn1.ASN1Sequence.getInstance(r4)
            r3.response = r4
            return
    }

    public static org.bouncycastle.asn1.cmp.CertRepMessage getInstance(java.lang.Object r3) {
            boolean r0 = r3 instanceof org.bouncycastle.asn1.cmp.CertRepMessage
            if (r0 == 0) goto L7
            org.bouncycastle.asn1.cmp.CertRepMessage r3 = (org.bouncycastle.asn1.cmp.CertRepMessage) r3
            return r3
        L7:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ASN1Sequence
            if (r0 == 0) goto L13
            org.bouncycastle.asn1.cmp.CertRepMessage r0 = new org.bouncycastle.asn1.cmp.CertRepMessage
            org.bouncycastle.asn1.ASN1Sequence r3 = (org.bouncycastle.asn1.ASN1Sequence) r3
            r0.<init>(r3)
            return r0
        L13:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Invalid object: "
            r1.append(r2)
            java.lang.Class r3 = r3.getClass()
            java.lang.String r3 = r3.getName()
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            r0.<init>(r3)
            throw r0
    }

    public org.bouncycastle.asn1.cmp.CMPCertificate[] getCaPubs() {
            r4 = this;
            org.bouncycastle.asn1.ASN1Sequence r0 = r4.caPubs
            if (r0 != 0) goto L6
            r0 = 0
            return r0
        L6:
            int r0 = r0.size()
            org.bouncycastle.asn1.cmp.CMPCertificate[] r1 = new org.bouncycastle.asn1.cmp.CMPCertificate[r0]
            r2 = 0
        Ld:
            if (r2 == r0) goto L1e
            org.bouncycastle.asn1.ASN1Sequence r3 = r4.caPubs
            org.bouncycastle.asn1.DEREncodable r3 = r3.getObjectAt(r2)
            org.bouncycastle.asn1.cmp.CMPCertificate r3 = org.bouncycastle.asn1.cmp.CMPCertificate.getInstance(r3)
            r1[r2] = r3
            int r2 = r2 + 1
            goto Ld
        L1e:
            return r1
    }

    public org.bouncycastle.asn1.cmp.CertResponse[] getResponse() {
            r4 = this;
            org.bouncycastle.asn1.ASN1Sequence r0 = r4.caPubs
            int r0 = r0.size()
            org.bouncycastle.asn1.cmp.CertResponse[] r1 = new org.bouncycastle.asn1.cmp.CertResponse[r0]
            r2 = 0
        L9:
            if (r2 == r0) goto L1a
            org.bouncycastle.asn1.ASN1Sequence r3 = r4.caPubs
            org.bouncycastle.asn1.DEREncodable r3 = r3.getObjectAt(r2)
            org.bouncycastle.asn1.cmp.CertResponse r3 = org.bouncycastle.asn1.cmp.CertResponse.getInstance(r3)
            r1[r2] = r3
            int r2 = r2 + 1
            goto L9
        L1a:
            return r1
    }

    @Override
    public org.bouncycastle.asn1.DERObject toASN1Object() {
            r4 = this;
            org.bouncycastle.asn1.ASN1EncodableVector r0 = new org.bouncycastle.asn1.ASN1EncodableVector
            r0.<init>()
            org.bouncycastle.asn1.ASN1Sequence r1 = r4.caPubs
            if (r1 == 0) goto L14
            org.bouncycastle.asn1.DERTaggedObject r1 = new org.bouncycastle.asn1.DERTaggedObject
            org.bouncycastle.asn1.ASN1Sequence r2 = r4.caPubs
            r3 = 1
            r1.<init>(r3, r3, r2)
            r0.add(r1)
        L14:
            org.bouncycastle.asn1.ASN1Sequence r1 = r4.response
            r0.add(r1)
            org.bouncycastle.asn1.DERSequence r1 = new org.bouncycastle.asn1.DERSequence
            r1.<init>(r0)
            return r1
    }
}
