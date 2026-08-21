package org.bouncycastle.asn1.crmf;

public class CertTemplate extends org.bouncycastle.asn1.ASN1Encodable {
    private org.bouncycastle.asn1.x509.X509Extensions extensions;
    private org.bouncycastle.asn1.x509.X509Name issuer;
    private org.bouncycastle.asn1.DERBitString issuerUID;
    private org.bouncycastle.asn1.x509.SubjectPublicKeyInfo publicKey;
    private org.bouncycastle.asn1.DERInteger serialNumber;
    private org.bouncycastle.asn1.x509.AlgorithmIdentifier signingAlg;
    private org.bouncycastle.asn1.x509.X509Name subject;
    private org.bouncycastle.asn1.DERBitString subjectUID;
    private org.bouncycastle.asn1.crmf.OptionalValidity validity;
    private org.bouncycastle.asn1.DERInteger version;

    private CertTemplate(org.bouncycastle.asn1.ASN1Sequence r4) {
            r3 = this;
            r3.<init>()
            java.util.Enumeration r4 = r4.getObjects()
        L7:
            boolean r0 = r4.hasMoreElements()
            if (r0 == 0) goto L80
            java.lang.Object r0 = r4.nextElement()
            org.bouncycastle.asn1.ASN1TaggedObject r0 = (org.bouncycastle.asn1.ASN1TaggedObject) r0
            int r1 = r0.getTagNo()
            r2 = 0
            switch(r1) {
                case 0: goto L79;
                case 1: goto L72;
                case 2: goto L6b;
                case 3: goto L64;
                case 4: goto L59;
                case 5: goto L52;
                case 6: goto L4b;
                case 7: goto L44;
                case 8: goto L3d;
                case 9: goto L36;
                default: goto L1b;
            }
        L1b:
            java.lang.IllegalArgumentException r4 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "unknown tag: "
            r1.append(r2)
            int r0 = r0.getTagNo()
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            r4.<init>(r0)
            throw r4
        L36:
            org.bouncycastle.asn1.x509.X509Extensions r0 = org.bouncycastle.asn1.x509.X509Extensions.getInstance(r0, r2)
            r3.extensions = r0
            goto L7
        L3d:
            org.bouncycastle.asn1.DERBitString r0 = org.bouncycastle.asn1.DERBitString.getInstance(r0, r2)
            r3.subjectUID = r0
            goto L7
        L44:
            org.bouncycastle.asn1.DERBitString r0 = org.bouncycastle.asn1.DERBitString.getInstance(r0, r2)
            r3.issuerUID = r0
            goto L7
        L4b:
            org.bouncycastle.asn1.x509.SubjectPublicKeyInfo r0 = org.bouncycastle.asn1.x509.SubjectPublicKeyInfo.getInstance(r0, r2)
            r3.publicKey = r0
            goto L7
        L52:
            org.bouncycastle.asn1.x509.X509Name r0 = org.bouncycastle.asn1.x509.X509Name.getInstance(r0, r2)
            r3.subject = r0
            goto L7
        L59:
            org.bouncycastle.asn1.ASN1Sequence r0 = org.bouncycastle.asn1.ASN1Sequence.getInstance(r0, r2)
            org.bouncycastle.asn1.crmf.OptionalValidity r0 = org.bouncycastle.asn1.crmf.OptionalValidity.getInstance(r0)
            r3.validity = r0
            goto L7
        L64:
            org.bouncycastle.asn1.x509.X509Name r0 = org.bouncycastle.asn1.x509.X509Name.getInstance(r0, r2)
            r3.issuer = r0
            goto L7
        L6b:
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r0 = org.bouncycastle.asn1.x509.AlgorithmIdentifier.getInstance(r0, r2)
            r3.signingAlg = r0
            goto L7
        L72:
            org.bouncycastle.asn1.DERInteger r0 = org.bouncycastle.asn1.DERInteger.getInstance(r0, r2)
            r3.serialNumber = r0
            goto L7
        L79:
            org.bouncycastle.asn1.DERInteger r0 = org.bouncycastle.asn1.DERInteger.getInstance(r0, r2)
            r3.version = r0
            goto L7
        L80:
            return
    }

    private void addOptional(org.bouncycastle.asn1.ASN1EncodableVector r3, int r4, org.bouncycastle.asn1.ASN1Encodable r5) {
            r2 = this;
            if (r5 == 0) goto Lb
            org.bouncycastle.asn1.DERTaggedObject r0 = new org.bouncycastle.asn1.DERTaggedObject
            r1 = 0
            r0.<init>(r1, r4, r5)
            r3.add(r0)
        Lb:
            return
    }

    public static org.bouncycastle.asn1.crmf.CertTemplate getInstance(java.lang.Object r3) {
            boolean r0 = r3 instanceof org.bouncycastle.asn1.crmf.CertTemplate
            if (r0 == 0) goto L7
            org.bouncycastle.asn1.crmf.CertTemplate r3 = (org.bouncycastle.asn1.crmf.CertTemplate) r3
            return r3
        L7:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ASN1Sequence
            if (r0 == 0) goto L13
            org.bouncycastle.asn1.crmf.CertTemplate r0 = new org.bouncycastle.asn1.crmf.CertTemplate
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

    @Override
    public org.bouncycastle.asn1.DERObject toASN1Object() {
            r3 = this;
            org.bouncycastle.asn1.ASN1EncodableVector r0 = new org.bouncycastle.asn1.ASN1EncodableVector
            r0.<init>()
            org.bouncycastle.asn1.DERInteger r1 = r3.version
            r2 = 0
            r3.addOptional(r0, r2, r1)
            org.bouncycastle.asn1.DERInteger r1 = r3.serialNumber
            r2 = 1
            r3.addOptional(r0, r2, r1)
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r1 = r3.signingAlg
            r2 = 2
            r3.addOptional(r0, r2, r1)
            org.bouncycastle.asn1.x509.X509Name r1 = r3.issuer
            r2 = 3
            r3.addOptional(r0, r2, r1)
            org.bouncycastle.asn1.crmf.OptionalValidity r1 = r3.validity
            r2 = 4
            r3.addOptional(r0, r2, r1)
            org.bouncycastle.asn1.x509.X509Name r1 = r3.subject
            r2 = 5
            r3.addOptional(r0, r2, r1)
            org.bouncycastle.asn1.x509.SubjectPublicKeyInfo r1 = r3.publicKey
            r2 = 6
            r3.addOptional(r0, r2, r1)
            org.bouncycastle.asn1.DERBitString r1 = r3.issuerUID
            r2 = 7
            r3.addOptional(r0, r2, r1)
            org.bouncycastle.asn1.DERBitString r1 = r3.subjectUID
            r2 = 8
            r3.addOptional(r0, r2, r1)
            org.bouncycastle.asn1.x509.X509Extensions r1 = r3.extensions
            r2 = 9
            r3.addOptional(r0, r2, r1)
            org.bouncycastle.asn1.DERSequence r1 = new org.bouncycastle.asn1.DERSequence
            r1.<init>(r0)
            return r1
    }
}
