package org.bouncycastle.asn1.x509.qualified;

public class QCStatement extends org.bouncycastle.asn1.ASN1Encodable implements org.bouncycastle.asn1.x509.qualified.ETSIQCObjectIdentifiers, org.bouncycastle.asn1.x509.qualified.RFC3739QCObjectIdentifiers {
    org.bouncycastle.asn1.DERObjectIdentifier qcStatementId;
    org.bouncycastle.asn1.ASN1Encodable qcStatementInfo;

    public QCStatement(org.bouncycastle.asn1.ASN1Sequence r2) {
            r1 = this;
            r1.<init>()
            java.util.Enumeration r2 = r2.getObjects()
            java.lang.Object r0 = r2.nextElement()
            org.bouncycastle.asn1.DERObjectIdentifier r0 = org.bouncycastle.asn1.DERObjectIdentifier.getInstance(r0)
            r1.qcStatementId = r0
            boolean r0 = r2.hasMoreElements()
            if (r0 == 0) goto L1f
            java.lang.Object r2 = r2.nextElement()
            org.bouncycastle.asn1.ASN1Encodable r2 = (org.bouncycastle.asn1.ASN1Encodable) r2
            r1.qcStatementInfo = r2
        L1f:
            return
    }

    public QCStatement(org.bouncycastle.asn1.DERObjectIdentifier r1) {
            r0 = this;
            r0.<init>()
            r0.qcStatementId = r1
            r1 = 0
            r0.qcStatementInfo = r1
            return
    }

    public QCStatement(org.bouncycastle.asn1.DERObjectIdentifier r1, org.bouncycastle.asn1.ASN1Encodable r2) {
            r0 = this;
            r0.<init>()
            r0.qcStatementId = r1
            r0.qcStatementInfo = r2
            return
    }

    public static org.bouncycastle.asn1.x509.qualified.QCStatement getInstance(java.lang.Object r1) {
            if (r1 == 0) goto L1d
            boolean r0 = r1 instanceof org.bouncycastle.asn1.x509.qualified.QCStatement
            if (r0 == 0) goto L7
            goto L1d
        L7:
            boolean r0 = r1 instanceof org.bouncycastle.asn1.ASN1Sequence
            if (r0 == 0) goto L15
            org.bouncycastle.asn1.x509.qualified.QCStatement r0 = new org.bouncycastle.asn1.x509.qualified.QCStatement
            org.bouncycastle.asn1.ASN1Sequence r1 = org.bouncycastle.asn1.ASN1Sequence.getInstance(r1)
            r0.<init>(r1)
            return r0
        L15:
            java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "unknown object in getInstance"
            r1.<init>(r0)
            throw r1
        L1d:
            org.bouncycastle.asn1.x509.qualified.QCStatement r1 = (org.bouncycastle.asn1.x509.qualified.QCStatement) r1
            return r1
    }

    public org.bouncycastle.asn1.DERObjectIdentifier getStatementId() {
            r1 = this;
            org.bouncycastle.asn1.DERObjectIdentifier r0 = r1.qcStatementId
            return r0
    }

    public org.bouncycastle.asn1.ASN1Encodable getStatementInfo() {
            r1 = this;
            org.bouncycastle.asn1.ASN1Encodable r0 = r1.qcStatementInfo
            return r0
    }

    @Override
    public org.bouncycastle.asn1.DERObject toASN1Object() {
            r2 = this;
            org.bouncycastle.asn1.ASN1EncodableVector r0 = new org.bouncycastle.asn1.ASN1EncodableVector
            r0.<init>()
            org.bouncycastle.asn1.DERObjectIdentifier r1 = r2.qcStatementId
            r0.add(r1)
            org.bouncycastle.asn1.ASN1Encodable r1 = r2.qcStatementInfo
            if (r1 == 0) goto L11
            r0.add(r1)
        L11:
            org.bouncycastle.asn1.DERSequence r1 = new org.bouncycastle.asn1.DERSequence
            r1.<init>(r0)
            return r1
    }
}
