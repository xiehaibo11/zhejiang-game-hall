package org.bouncycastle.ocsp;

public class RevokedStatus implements org.bouncycastle.ocsp.CertificateStatus {
    org.bouncycastle.asn1.ocsp.RevokedInfo info;

    public RevokedStatus(java.util.Date r3, int r4) {
            r2 = this;
            r2.<init>()
            org.bouncycastle.asn1.ocsp.RevokedInfo r0 = new org.bouncycastle.asn1.ocsp.RevokedInfo
            org.bouncycastle.asn1.DERGeneralizedTime r1 = new org.bouncycastle.asn1.DERGeneralizedTime
            r1.<init>(r3)
            org.bouncycastle.asn1.x509.CRLReason r3 = new org.bouncycastle.asn1.x509.CRLReason
            r3.<init>(r4)
            r0.<init>(r1, r3)
            r2.info = r0
            return
    }

    public RevokedStatus(org.bouncycastle.asn1.ocsp.RevokedInfo r1) {
            r0 = this;
            r0.<init>()
            r0.info = r1
            return
    }

    public int getRevocationReason() {
            r2 = this;
            org.bouncycastle.asn1.ocsp.RevokedInfo r0 = r2.info
            org.bouncycastle.asn1.x509.CRLReason r0 = r0.getRevocationReason()
            if (r0 == 0) goto L17
            org.bouncycastle.asn1.ocsp.RevokedInfo r0 = r2.info
            org.bouncycastle.asn1.x509.CRLReason r0 = r0.getRevocationReason()
            java.math.BigInteger r0 = r0.getValue()
            int r0 = r0.intValue()
            return r0
        L17:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.String r1 = "attempt to get a reason where none is available"
            r0.<init>(r1)
            throw r0
    }

    public java.util.Date getRevocationTime() {
            r4 = this;
            org.bouncycastle.asn1.ocsp.RevokedInfo r0 = r4.info     // Catch: java.text.ParseException -> Lb
            org.bouncycastle.asn1.DERGeneralizedTime r0 = r0.getRevocationTime()     // Catch: java.text.ParseException -> Lb
            java.util.Date r0 = r0.getDate()     // Catch: java.text.ParseException -> Lb
            return r0
        Lb:
            r0 = move-exception
            java.lang.IllegalStateException r1 = new java.lang.IllegalStateException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "ParseException:"
            r2.append(r3)
            java.lang.String r0 = r0.getMessage()
            r2.append(r0)
            java.lang.String r0 = r2.toString()
            r1.<init>(r0)
            throw r1
    }

    public boolean hasRevocationReason() {
            r1 = this;
            org.bouncycastle.asn1.ocsp.RevokedInfo r0 = r1.info
            org.bouncycastle.asn1.x509.CRLReason r0 = r0.getRevocationReason()
            if (r0 == 0) goto La
            r0 = 1
            goto Lb
        La:
            r0 = 0
        Lb:
            return r0
    }
}
