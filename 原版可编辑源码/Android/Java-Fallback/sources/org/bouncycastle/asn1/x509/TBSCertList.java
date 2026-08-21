package org.bouncycastle.asn1.x509;

public class TBSCertList extends org.bouncycastle.asn1.ASN1Encodable {
    org.bouncycastle.asn1.x509.X509Extensions crlExtensions;
    org.bouncycastle.asn1.x509.X509Name issuer;
    org.bouncycastle.asn1.x509.Time nextUpdate;
    org.bouncycastle.asn1.ASN1Sequence revokedCertificates;
    org.bouncycastle.asn1.ASN1Sequence seq;
    org.bouncycastle.asn1.x509.AlgorithmIdentifier signature;
    org.bouncycastle.asn1.x509.Time thisUpdate;
    org.bouncycastle.asn1.DERInteger version;

    static class 1 {
    }

    public class CRLEntry extends org.bouncycastle.asn1.ASN1Encodable {
        org.bouncycastle.asn1.x509.X509Extensions crlEntryExtensions;
        org.bouncycastle.asn1.x509.Time revocationDate;
        org.bouncycastle.asn1.ASN1Sequence seq;
        final org.bouncycastle.asn1.x509.TBSCertList this$0;
        org.bouncycastle.asn1.DERInteger userCertificate;

        public CRLEntry(org.bouncycastle.asn1.x509.TBSCertList r3, org.bouncycastle.asn1.ASN1Sequence r4) {
                r2 = this;
                r2.this$0 = r3
                r2.<init>()
                int r3 = r4.size()
                r0 = 2
                if (r3 < r0) goto L2c
                int r3 = r4.size()
                r0 = 3
                if (r3 > r0) goto L2c
                r2.seq = r4
                r3 = 0
                org.bouncycastle.asn1.DEREncodable r3 = r4.getObjectAt(r3)
                org.bouncycastle.asn1.DERInteger r3 = org.bouncycastle.asn1.DERInteger.getInstance(r3)
                r2.userCertificate = r3
                r3 = 1
                org.bouncycastle.asn1.DEREncodable r3 = r4.getObjectAt(r3)
                org.bouncycastle.asn1.x509.Time r3 = org.bouncycastle.asn1.x509.Time.getInstance(r3)
                r2.revocationDate = r3
                return
            L2c:
                java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = "Bad sequence size: "
                r0.append(r1)
                int r4 = r4.size()
                r0.append(r4)
                java.lang.String r4 = r0.toString()
                r3.<init>(r4)
                throw r3
        }

        public org.bouncycastle.asn1.x509.X509Extensions getExtensions() {
                r2 = this;
                org.bouncycastle.asn1.x509.X509Extensions r0 = r2.crlEntryExtensions
                if (r0 != 0) goto L1a
                org.bouncycastle.asn1.ASN1Sequence r0 = r2.seq
                int r0 = r0.size()
                r1 = 3
                if (r0 != r1) goto L1a
                org.bouncycastle.asn1.ASN1Sequence r0 = r2.seq
                r1 = 2
                org.bouncycastle.asn1.DEREncodable r0 = r0.getObjectAt(r1)
                org.bouncycastle.asn1.x509.X509Extensions r0 = org.bouncycastle.asn1.x509.X509Extensions.getInstance(r0)
                r2.crlEntryExtensions = r0
            L1a:
                org.bouncycastle.asn1.x509.X509Extensions r0 = r2.crlEntryExtensions
                return r0
        }

        public org.bouncycastle.asn1.x509.Time getRevocationDate() {
                r1 = this;
                org.bouncycastle.asn1.x509.Time r0 = r1.revocationDate
                return r0
        }

        public org.bouncycastle.asn1.DERInteger getUserCertificate() {
                r1 = this;
                org.bouncycastle.asn1.DERInteger r0 = r1.userCertificate
                return r0
        }

        @Override
        public org.bouncycastle.asn1.DERObject toASN1Object() {
                r1 = this;
                org.bouncycastle.asn1.ASN1Sequence r0 = r1.seq
                return r0
        }
    }

    private class EmptyEnumeration implements java.util.Enumeration {
        final org.bouncycastle.asn1.x509.TBSCertList this$0;

        private EmptyEnumeration(org.bouncycastle.asn1.x509.TBSCertList r1) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>()
                return
        }

        EmptyEnumeration(org.bouncycastle.asn1.x509.TBSCertList r1, org.bouncycastle.asn1.x509.TBSCertList.1 r2) {
                r0 = this;
                r0.<init>(r1)
                return
        }

        @Override
        public boolean hasMoreElements() {
                r1 = this;
                r0 = 0
                return r0
        }

        @Override
        public java.lang.Object nextElement() {
                r1 = this;
                r0 = 0
                return r0
        }
    }

    private class RevokedCertificatesEnumeration implements java.util.Enumeration {
        private final java.util.Enumeration en;
        final org.bouncycastle.asn1.x509.TBSCertList this$0;

        RevokedCertificatesEnumeration(org.bouncycastle.asn1.x509.TBSCertList r1, java.util.Enumeration r2) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>()
                r0.en = r2
                return
        }

        @Override
        public boolean hasMoreElements() {
                r1 = this;
                java.util.Enumeration r0 = r1.en
                boolean r0 = r0.hasMoreElements()
                return r0
        }

        @Override
        public java.lang.Object nextElement() {
                r3 = this;
                org.bouncycastle.asn1.x509.TBSCertList$CRLEntry r0 = new org.bouncycastle.asn1.x509.TBSCertList$CRLEntry
                org.bouncycastle.asn1.x509.TBSCertList r1 = r3.this$0
                java.util.Enumeration r2 = r3.en
                java.lang.Object r2 = r2.nextElement()
                org.bouncycastle.asn1.ASN1Sequence r2 = org.bouncycastle.asn1.ASN1Sequence.getInstance(r2)
                r0.<init>(r1, r2)
                return r0
        }
    }

    public TBSCertList(org.bouncycastle.asn1.ASN1Sequence r4) {
            r3 = this;
            r3.<init>()
            int r0 = r4.size()
            r1 = 3
            if (r0 < r1) goto Lb2
            int r0 = r4.size()
            r1 = 7
            if (r0 > r1) goto Lb2
            r3.seq = r4
            r0 = 0
            org.bouncycastle.asn1.DEREncodable r1 = r4.getObjectAt(r0)
            boolean r1 = r1 instanceof org.bouncycastle.asn1.DERInteger
            if (r1 == 0) goto L28
            org.bouncycastle.asn1.DEREncodable r0 = r4.getObjectAt(r0)
            org.bouncycastle.asn1.DERInteger r0 = org.bouncycastle.asn1.DERInteger.getInstance(r0)
            r3.version = r0
            r0 = 1
            goto L2f
        L28:
            org.bouncycastle.asn1.DERInteger r1 = new org.bouncycastle.asn1.DERInteger
            r1.<init>(r0)
            r3.version = r1
        L2f:
            int r1 = r0 + 1
            org.bouncycastle.asn1.DEREncodable r0 = r4.getObjectAt(r0)
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r0 = org.bouncycastle.asn1.x509.AlgorithmIdentifier.getInstance(r0)
            r3.signature = r0
            int r0 = r1 + 1
            org.bouncycastle.asn1.DEREncodable r1 = r4.getObjectAt(r1)
            org.bouncycastle.asn1.x509.X509Name r1 = org.bouncycastle.asn1.x509.X509Name.getInstance(r1)
            r3.issuer = r1
            int r1 = r0 + 1
            org.bouncycastle.asn1.DEREncodable r0 = r4.getObjectAt(r0)
            org.bouncycastle.asn1.x509.Time r0 = org.bouncycastle.asn1.x509.Time.getInstance(r0)
            r3.thisUpdate = r0
            int r0 = r4.size()
            if (r1 >= r0) goto L7e
            org.bouncycastle.asn1.DEREncodable r0 = r4.getObjectAt(r1)
            boolean r0 = r0 instanceof org.bouncycastle.asn1.DERUTCTime
            if (r0 != 0) goto L71
            org.bouncycastle.asn1.DEREncodable r0 = r4.getObjectAt(r1)
            boolean r0 = r0 instanceof org.bouncycastle.asn1.DERGeneralizedTime
            if (r0 != 0) goto L71
            org.bouncycastle.asn1.DEREncodable r0 = r4.getObjectAt(r1)
            boolean r0 = r0 instanceof org.bouncycastle.asn1.x509.Time
            if (r0 == 0) goto L7e
        L71:
            int r0 = r1 + 1
            org.bouncycastle.asn1.DEREncodable r1 = r4.getObjectAt(r1)
            org.bouncycastle.asn1.x509.Time r1 = org.bouncycastle.asn1.x509.Time.getInstance(r1)
            r3.nextUpdate = r1
            r1 = r0
        L7e:
            int r0 = r4.size()
            if (r1 >= r0) goto L99
            org.bouncycastle.asn1.DEREncodable r0 = r4.getObjectAt(r1)
            boolean r0 = r0 instanceof org.bouncycastle.asn1.DERTaggedObject
            if (r0 != 0) goto L99
            int r0 = r1 + 1
            org.bouncycastle.asn1.DEREncodable r1 = r4.getObjectAt(r1)
            org.bouncycastle.asn1.ASN1Sequence r1 = org.bouncycastle.asn1.ASN1Sequence.getInstance(r1)
            r3.revokedCertificates = r1
            r1 = r0
        L99:
            int r0 = r4.size()
            if (r1 >= r0) goto Lb1
            org.bouncycastle.asn1.DEREncodable r0 = r4.getObjectAt(r1)
            boolean r0 = r0 instanceof org.bouncycastle.asn1.DERTaggedObject
            if (r0 == 0) goto Lb1
            org.bouncycastle.asn1.DEREncodable r4 = r4.getObjectAt(r1)
            org.bouncycastle.asn1.x509.X509Extensions r4 = org.bouncycastle.asn1.x509.X509Extensions.getInstance(r4)
            r3.crlExtensions = r4
        Lb1:
            return
        Lb2:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Bad sequence size: "
            r1.append(r2)
            int r4 = r4.size()
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            r0.<init>(r4)
            throw r0
    }

    public static org.bouncycastle.asn1.x509.TBSCertList getInstance(java.lang.Object r3) {
            boolean r0 = r3 instanceof org.bouncycastle.asn1.x509.TBSCertList
            if (r0 == 0) goto L7
            org.bouncycastle.asn1.x509.TBSCertList r3 = (org.bouncycastle.asn1.x509.TBSCertList) r3
            return r3
        L7:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ASN1Sequence
            if (r0 == 0) goto L13
            org.bouncycastle.asn1.x509.TBSCertList r0 = new org.bouncycastle.asn1.x509.TBSCertList
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
    }

    public static org.bouncycastle.asn1.x509.TBSCertList getInstance(org.bouncycastle.asn1.ASN1TaggedObject r0, boolean r1) {
            org.bouncycastle.asn1.ASN1Sequence r0 = org.bouncycastle.asn1.ASN1Sequence.getInstance(r0, r1)
            org.bouncycastle.asn1.x509.TBSCertList r0 = getInstance(r0)
            return r0
    }

    public org.bouncycastle.asn1.x509.X509Extensions getExtensions() {
            r1 = this;
            org.bouncycastle.asn1.x509.X509Extensions r0 = r1.crlExtensions
            return r0
    }

    public org.bouncycastle.asn1.x509.X509Name getIssuer() {
            r1 = this;
            org.bouncycastle.asn1.x509.X509Name r0 = r1.issuer
            return r0
    }

    public org.bouncycastle.asn1.x509.Time getNextUpdate() {
            r1 = this;
            org.bouncycastle.asn1.x509.Time r0 = r1.nextUpdate
            return r0
    }

    public java.util.Enumeration getRevokedCertificateEnumeration() {
            r2 = this;
            org.bouncycastle.asn1.ASN1Sequence r0 = r2.revokedCertificates
            if (r0 != 0) goto Lb
            org.bouncycastle.asn1.x509.TBSCertList$EmptyEnumeration r0 = new org.bouncycastle.asn1.x509.TBSCertList$EmptyEnumeration
            r1 = 0
            r0.<init>(r2, r1)
            return r0
        Lb:
            org.bouncycastle.asn1.x509.TBSCertList$RevokedCertificatesEnumeration r0 = new org.bouncycastle.asn1.x509.TBSCertList$RevokedCertificatesEnumeration
            org.bouncycastle.asn1.ASN1Sequence r1 = r2.revokedCertificates
            java.util.Enumeration r1 = r1.getObjects()
            r0.<init>(r2, r1)
            return r0
    }

    public org.bouncycastle.asn1.x509.TBSCertList.CRLEntry[] getRevokedCertificates() {
            r5 = this;
            org.bouncycastle.asn1.ASN1Sequence r0 = r5.revokedCertificates
            r1 = 0
            if (r0 != 0) goto L8
            org.bouncycastle.asn1.x509.TBSCertList$CRLEntry[] r0 = new org.bouncycastle.asn1.x509.TBSCertList.CRLEntry[r1]
            return r0
        L8:
            int r0 = r0.size()
            org.bouncycastle.asn1.x509.TBSCertList$CRLEntry[] r2 = new org.bouncycastle.asn1.x509.TBSCertList.CRLEntry[r0]
        Le:
            if (r1 >= r0) goto L24
            org.bouncycastle.asn1.x509.TBSCertList$CRLEntry r3 = new org.bouncycastle.asn1.x509.TBSCertList$CRLEntry
            org.bouncycastle.asn1.ASN1Sequence r4 = r5.revokedCertificates
            org.bouncycastle.asn1.DEREncodable r4 = r4.getObjectAt(r1)
            org.bouncycastle.asn1.ASN1Sequence r4 = org.bouncycastle.asn1.ASN1Sequence.getInstance(r4)
            r3.<init>(r5, r4)
            r2[r1] = r3
            int r1 = r1 + 1
            goto Le
        L24:
            return r2
    }

    public org.bouncycastle.asn1.x509.AlgorithmIdentifier getSignature() {
            r1 = this;
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r0 = r1.signature
            return r0
    }

    public org.bouncycastle.asn1.x509.Time getThisUpdate() {
            r1 = this;
            org.bouncycastle.asn1.x509.Time r0 = r1.thisUpdate
            return r0
    }

    public int getVersion() {
            r1 = this;
            org.bouncycastle.asn1.DERInteger r0 = r1.version
            java.math.BigInteger r0 = r0.getValue()
            int r0 = r0.intValue()
            int r0 = r0 + 1
            return r0
    }

    public org.bouncycastle.asn1.DERInteger getVersionNumber() {
            r1 = this;
            org.bouncycastle.asn1.DERInteger r0 = r1.version
            return r0
    }

    @Override
    public org.bouncycastle.asn1.DERObject toASN1Object() {
            r1 = this;
            org.bouncycastle.asn1.ASN1Sequence r0 = r1.seq
            return r0
    }
}
