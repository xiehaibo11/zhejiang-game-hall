package org.bouncycastle.asn1.pkcs;

public class AuthenticatedSafe extends org.bouncycastle.asn1.ASN1Encodable {
    org.bouncycastle.asn1.pkcs.ContentInfo[] info;

    public AuthenticatedSafe(org.bouncycastle.asn1.ASN1Sequence r4) {
            r3 = this;
            r3.<init>()
            int r0 = r4.size()
            org.bouncycastle.asn1.pkcs.ContentInfo[] r0 = new org.bouncycastle.asn1.pkcs.ContentInfo[r0]
            r3.info = r0
            r0 = 0
        Lc:
            org.bouncycastle.asn1.pkcs.ContentInfo[] r1 = r3.info
            int r2 = r1.length
            if (r0 == r2) goto L1e
            org.bouncycastle.asn1.DEREncodable r2 = r4.getObjectAt(r0)
            org.bouncycastle.asn1.pkcs.ContentInfo r2 = org.bouncycastle.asn1.pkcs.ContentInfo.getInstance(r2)
            r1[r0] = r2
            int r0 = r0 + 1
            goto Lc
        L1e:
            return
    }

    public AuthenticatedSafe(org.bouncycastle.asn1.pkcs.ContentInfo[] r1) {
            r0 = this;
            r0.<init>()
            r0.info = r1
            return
    }

    public org.bouncycastle.asn1.pkcs.ContentInfo[] getContentInfo() {
            r1 = this;
            org.bouncycastle.asn1.pkcs.ContentInfo[] r0 = r1.info
            return r0
    }

    @Override
    public org.bouncycastle.asn1.DERObject toASN1Object() {
            r4 = this;
            org.bouncycastle.asn1.ASN1EncodableVector r0 = new org.bouncycastle.asn1.ASN1EncodableVector
            r0.<init>()
            r1 = 0
        L6:
            org.bouncycastle.asn1.pkcs.ContentInfo[] r2 = r4.info
            int r3 = r2.length
            if (r1 == r3) goto L13
            r2 = r2[r1]
            r0.add(r2)
            int r1 = r1 + 1
            goto L6
        L13:
            org.bouncycastle.asn1.BERSequence r1 = new org.bouncycastle.asn1.BERSequence
            r1.<init>(r0)
            return r1
    }
}
