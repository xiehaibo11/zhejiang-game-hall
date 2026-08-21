package org.bouncycastle.asn1.cmp;

public class CertOrEncCert extends org.bouncycastle.asn1.ASN1Encodable implements org.bouncycastle.asn1.ASN1Choice {
    private org.bouncycastle.asn1.cmp.CMPCertificate certificate;
    private org.bouncycastle.asn1.crmf.EncryptedValue encryptedCert;

    private CertOrEncCert(org.bouncycastle.asn1.ASN1TaggedObject r4) {
            r3 = this;
            r3.<init>()
            int r0 = r4.getTagNo()
            if (r0 != 0) goto L14
            org.bouncycastle.asn1.DERObject r4 = r4.getObject()
            org.bouncycastle.asn1.cmp.CMPCertificate r4 = org.bouncycastle.asn1.cmp.CMPCertificate.getInstance(r4)
            r3.certificate = r4
            goto L25
        L14:
            int r0 = r4.getTagNo()
            r1 = 1
            if (r0 != r1) goto L26
            org.bouncycastle.asn1.DERObject r4 = r4.getObject()
            org.bouncycastle.asn1.crmf.EncryptedValue r4 = org.bouncycastle.asn1.crmf.EncryptedValue.getInstance(r4)
            r3.encryptedCert = r4
        L25:
            return
        L26:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "unknown tag: "
            r1.append(r2)
            int r4 = r4.getTagNo()
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            r0.<init>(r4)
            throw r0
    }

    public static org.bouncycastle.asn1.cmp.CertOrEncCert getInstance(java.lang.Object r3) {
            boolean r0 = r3 instanceof org.bouncycastle.asn1.cmp.CertOrEncCert
            if (r0 == 0) goto L7
            org.bouncycastle.asn1.cmp.CertOrEncCert r3 = (org.bouncycastle.asn1.cmp.CertOrEncCert) r3
            return r3
        L7:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ASN1TaggedObject
            if (r0 == 0) goto L13
            org.bouncycastle.asn1.cmp.CertOrEncCert r0 = new org.bouncycastle.asn1.cmp.CertOrEncCert
            org.bouncycastle.asn1.ASN1TaggedObject r3 = (org.bouncycastle.asn1.ASN1TaggedObject) r3
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

    public org.bouncycastle.asn1.cmp.CMPCertificate getCertificate() {
            r1 = this;
            org.bouncycastle.asn1.cmp.CMPCertificate r0 = r1.certificate
            return r0
    }

    public org.bouncycastle.asn1.crmf.EncryptedValue getEncryptedCert() {
            r1 = this;
            org.bouncycastle.asn1.crmf.EncryptedValue r0 = r1.encryptedCert
            return r0
    }

    @Override
    public org.bouncycastle.asn1.DERObject toASN1Object() {
            r4 = this;
            org.bouncycastle.asn1.cmp.CMPCertificate r0 = r4.certificate
            r1 = 1
            if (r0 == 0) goto Le
            org.bouncycastle.asn1.DERTaggedObject r0 = new org.bouncycastle.asn1.DERTaggedObject
            r2 = 0
            org.bouncycastle.asn1.cmp.CMPCertificate r3 = r4.certificate
            r0.<init>(r1, r2, r3)
            return r0
        Le:
            org.bouncycastle.asn1.DERTaggedObject r0 = new org.bouncycastle.asn1.DERTaggedObject
            org.bouncycastle.asn1.crmf.EncryptedValue r2 = r4.encryptedCert
            r0.<init>(r1, r1, r2)
            return r0
    }
}
