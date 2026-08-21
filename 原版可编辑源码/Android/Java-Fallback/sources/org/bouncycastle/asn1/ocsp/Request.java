package org.bouncycastle.asn1.ocsp;

public class Request extends org.bouncycastle.asn1.ASN1Encodable {
    org.bouncycastle.asn1.ocsp.CertID reqCert;
    org.bouncycastle.asn1.x509.X509Extensions singleRequestExtensions;

    public Request(org.bouncycastle.asn1.ASN1Sequence r3) {
            r2 = this;
            r2.<init>()
            r0 = 0
            org.bouncycastle.asn1.DEREncodable r0 = r3.getObjectAt(r0)
            org.bouncycastle.asn1.ocsp.CertID r0 = org.bouncycastle.asn1.ocsp.CertID.getInstance(r0)
            r2.reqCert = r0
            int r0 = r3.size()
            r1 = 2
            if (r0 != r1) goto L22
            r0 = 1
            org.bouncycastle.asn1.DEREncodable r3 = r3.getObjectAt(r0)
            org.bouncycastle.asn1.ASN1TaggedObject r3 = (org.bouncycastle.asn1.ASN1TaggedObject) r3
            org.bouncycastle.asn1.x509.X509Extensions r3 = org.bouncycastle.asn1.x509.X509Extensions.getInstance(r3, r0)
            r2.singleRequestExtensions = r3
        L22:
            return
    }

    public Request(org.bouncycastle.asn1.ocsp.CertID r1, org.bouncycastle.asn1.x509.X509Extensions r2) {
            r0 = this;
            r0.<init>()
            r0.reqCert = r1
            r0.singleRequestExtensions = r2
            return
    }

    public static org.bouncycastle.asn1.ocsp.Request getInstance(java.lang.Object r3) {
            if (r3 == 0) goto L32
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ocsp.Request
            if (r0 == 0) goto L7
            goto L32
        L7:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ASN1Sequence
            if (r0 == 0) goto L13
            org.bouncycastle.asn1.ocsp.Request r0 = new org.bouncycastle.asn1.ocsp.Request
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
        L32:
            org.bouncycastle.asn1.ocsp.Request r3 = (org.bouncycastle.asn1.ocsp.Request) r3
            return r3
    }

    public static org.bouncycastle.asn1.ocsp.Request getInstance(org.bouncycastle.asn1.ASN1TaggedObject r0, boolean r1) {
            org.bouncycastle.asn1.ASN1Sequence r0 = org.bouncycastle.asn1.ASN1Sequence.getInstance(r0, r1)
            org.bouncycastle.asn1.ocsp.Request r0 = getInstance(r0)
            return r0
    }

    public org.bouncycastle.asn1.ocsp.CertID getReqCert() {
            r1 = this;
            org.bouncycastle.asn1.ocsp.CertID r0 = r1.reqCert
            return r0
    }

    public org.bouncycastle.asn1.x509.X509Extensions getSingleRequestExtensions() {
            r1 = this;
            org.bouncycastle.asn1.x509.X509Extensions r0 = r1.singleRequestExtensions
            return r0
    }

    @Override
    public org.bouncycastle.asn1.DERObject toASN1Object() {
            r5 = this;
            org.bouncycastle.asn1.ASN1EncodableVector r0 = new org.bouncycastle.asn1.ASN1EncodableVector
            r0.<init>()
            org.bouncycastle.asn1.ocsp.CertID r1 = r5.reqCert
            r0.add(r1)
            org.bouncycastle.asn1.x509.X509Extensions r1 = r5.singleRequestExtensions
            if (r1 == 0) goto L1a
            org.bouncycastle.asn1.DERTaggedObject r1 = new org.bouncycastle.asn1.DERTaggedObject
            r2 = 1
            r3 = 0
            org.bouncycastle.asn1.x509.X509Extensions r4 = r5.singleRequestExtensions
            r1.<init>(r2, r3, r4)
            r0.add(r1)
        L1a:
            org.bouncycastle.asn1.DERSequence r1 = new org.bouncycastle.asn1.DERSequence
            r1.<init>(r0)
            return r1
    }
}
