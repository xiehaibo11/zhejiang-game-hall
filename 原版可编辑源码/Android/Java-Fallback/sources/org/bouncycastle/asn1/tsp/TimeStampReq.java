package org.bouncycastle.asn1.tsp;

public class TimeStampReq extends org.bouncycastle.asn1.ASN1Encodable {
    org.bouncycastle.asn1.DERBoolean certReq;
    org.bouncycastle.asn1.x509.X509Extensions extensions;
    org.bouncycastle.asn1.tsp.MessageImprint messageImprint;
    org.bouncycastle.asn1.DERInteger nonce;
    org.bouncycastle.asn1.DERObjectIdentifier tsaPolicy;
    org.bouncycastle.asn1.DERInteger version;

    public TimeStampReq(org.bouncycastle.asn1.ASN1Sequence r6) {
            r5 = this;
            r5.<init>()
            int r0 = r6.size()
            r1 = 0
            org.bouncycastle.asn1.DEREncodable r2 = r6.getObjectAt(r1)
            org.bouncycastle.asn1.DERInteger r2 = org.bouncycastle.asn1.DERInteger.getInstance(r2)
            r5.version = r2
            r2 = 1
            org.bouncycastle.asn1.DEREncodable r2 = r6.getObjectAt(r2)
            org.bouncycastle.asn1.tsp.MessageImprint r2 = org.bouncycastle.asn1.tsp.MessageImprint.getInstance(r2)
            r5.messageImprint = r2
            r2 = 2
        L1e:
            if (r2 >= r0) goto L76
            org.bouncycastle.asn1.DEREncodable r3 = r6.getObjectAt(r2)
            boolean r3 = r3 instanceof org.bouncycastle.asn1.DERObjectIdentifier
            if (r3 == 0) goto L33
            org.bouncycastle.asn1.DEREncodable r3 = r6.getObjectAt(r2)
            org.bouncycastle.asn1.DERObjectIdentifier r3 = org.bouncycastle.asn1.DERObjectIdentifier.getInstance(r3)
            r5.tsaPolicy = r3
            goto L73
        L33:
            org.bouncycastle.asn1.DEREncodable r3 = r6.getObjectAt(r2)
            boolean r3 = r3 instanceof org.bouncycastle.asn1.DERInteger
            if (r3 == 0) goto L46
            org.bouncycastle.asn1.DEREncodable r3 = r6.getObjectAt(r2)
            org.bouncycastle.asn1.DERInteger r3 = org.bouncycastle.asn1.DERInteger.getInstance(r3)
            r5.nonce = r3
            goto L73
        L46:
            org.bouncycastle.asn1.DEREncodable r3 = r6.getObjectAt(r2)
            boolean r3 = r3 instanceof org.bouncycastle.asn1.DERBoolean
            if (r3 == 0) goto L59
            org.bouncycastle.asn1.DEREncodable r3 = r6.getObjectAt(r2)
            org.bouncycastle.asn1.DERBoolean r3 = org.bouncycastle.asn1.DERBoolean.getInstance(r3)
            r5.certReq = r3
            goto L73
        L59:
            org.bouncycastle.asn1.DEREncodable r3 = r6.getObjectAt(r2)
            boolean r3 = r3 instanceof org.bouncycastle.asn1.ASN1TaggedObject
            if (r3 == 0) goto L73
            org.bouncycastle.asn1.DEREncodable r3 = r6.getObjectAt(r2)
            org.bouncycastle.asn1.ASN1TaggedObject r3 = (org.bouncycastle.asn1.ASN1TaggedObject) r3
            int r4 = r3.getTagNo()
            if (r4 != 0) goto L73
            org.bouncycastle.asn1.x509.X509Extensions r3 = org.bouncycastle.asn1.x509.X509Extensions.getInstance(r3, r1)
            r5.extensions = r3
        L73:
            int r2 = r2 + 1
            goto L1e
        L76:
            return
    }

    public TimeStampReq(org.bouncycastle.asn1.tsp.MessageImprint r3, org.bouncycastle.asn1.DERObjectIdentifier r4, org.bouncycastle.asn1.DERInteger r5, org.bouncycastle.asn1.DERBoolean r6, org.bouncycastle.asn1.x509.X509Extensions r7) {
            r2 = this;
            r2.<init>()
            org.bouncycastle.asn1.DERInteger r0 = new org.bouncycastle.asn1.DERInteger
            r1 = 1
            r0.<init>(r1)
            r2.version = r0
            r2.messageImprint = r3
            r2.tsaPolicy = r4
            r2.nonce = r5
            r2.certReq = r6
            r2.extensions = r7
            return
    }

    public static org.bouncycastle.asn1.tsp.TimeStampReq getInstance(java.lang.Object r3) {
            if (r3 == 0) goto L37
            boolean r0 = r3 instanceof org.bouncycastle.asn1.tsp.TimeStampReq
            if (r0 == 0) goto L7
            goto L37
        L7:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ASN1Sequence
            if (r0 == 0) goto L13
            org.bouncycastle.asn1.tsp.TimeStampReq r0 = new org.bouncycastle.asn1.tsp.TimeStampReq
            org.bouncycastle.asn1.ASN1Sequence r3 = (org.bouncycastle.asn1.ASN1Sequence) r3
            r0.<init>(r3)
            return r0
        L13:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Unknown object in 'TimeStampReq' factory : "
            r1.append(r2)
            java.lang.Class r3 = r3.getClass()
            java.lang.String r3 = r3.getName()
            r1.append(r3)
            java.lang.String r3 = "."
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            r0.<init>(r3)
            throw r0
        L37:
            org.bouncycastle.asn1.tsp.TimeStampReq r3 = (org.bouncycastle.asn1.tsp.TimeStampReq) r3
            return r3
    }

    public org.bouncycastle.asn1.DERBoolean getCertReq() {
            r1 = this;
            org.bouncycastle.asn1.DERBoolean r0 = r1.certReq
            return r0
    }

    public org.bouncycastle.asn1.x509.X509Extensions getExtensions() {
            r1 = this;
            org.bouncycastle.asn1.x509.X509Extensions r0 = r1.extensions
            return r0
    }

    public org.bouncycastle.asn1.tsp.MessageImprint getMessageImprint() {
            r1 = this;
            org.bouncycastle.asn1.tsp.MessageImprint r0 = r1.messageImprint
            return r0
    }

    public org.bouncycastle.asn1.DERInteger getNonce() {
            r1 = this;
            org.bouncycastle.asn1.DERInteger r0 = r1.nonce
            return r0
    }

    public org.bouncycastle.asn1.DERObjectIdentifier getReqPolicy() {
            r1 = this;
            org.bouncycastle.asn1.DERObjectIdentifier r0 = r1.tsaPolicy
            return r0
    }

    public org.bouncycastle.asn1.DERInteger getVersion() {
            r1 = this;
            org.bouncycastle.asn1.DERInteger r0 = r1.version
            return r0
    }

    @Override
    public org.bouncycastle.asn1.DERObject toASN1Object() {
            r4 = this;
            org.bouncycastle.asn1.ASN1EncodableVector r0 = new org.bouncycastle.asn1.ASN1EncodableVector
            r0.<init>()
            org.bouncycastle.asn1.DERInteger r1 = r4.version
            r0.add(r1)
            org.bouncycastle.asn1.tsp.MessageImprint r1 = r4.messageImprint
            r0.add(r1)
            org.bouncycastle.asn1.DERObjectIdentifier r1 = r4.tsaPolicy
            if (r1 == 0) goto L16
            r0.add(r1)
        L16:
            org.bouncycastle.asn1.DERInteger r1 = r4.nonce
            if (r1 == 0) goto L1d
            r0.add(r1)
        L1d:
            org.bouncycastle.asn1.DERBoolean r1 = r4.certReq
            if (r1 == 0) goto L2c
            boolean r1 = r1.isTrue()
            if (r1 == 0) goto L2c
            org.bouncycastle.asn1.DERBoolean r1 = r4.certReq
            r0.add(r1)
        L2c:
            org.bouncycastle.asn1.x509.X509Extensions r1 = r4.extensions
            if (r1 == 0) goto L3b
            org.bouncycastle.asn1.DERTaggedObject r1 = new org.bouncycastle.asn1.DERTaggedObject
            org.bouncycastle.asn1.x509.X509Extensions r2 = r4.extensions
            r3 = 0
            r1.<init>(r3, r3, r2)
            r0.add(r1)
        L3b:
            org.bouncycastle.asn1.DERSequence r1 = new org.bouncycastle.asn1.DERSequence
            r1.<init>(r0)
            return r1
    }
}
