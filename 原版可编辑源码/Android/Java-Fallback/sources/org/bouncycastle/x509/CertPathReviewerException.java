package org.bouncycastle.x509;

public class CertPathReviewerException extends org.bouncycastle.i18n.LocalizedException {
    private java.security.cert.CertPath certPath;
    private int index;

    public CertPathReviewerException(org.bouncycastle.i18n.ErrorBundle r1) {
            r0 = this;
            r0.<init>(r1)
            r1 = -1
            r0.index = r1
            r1 = 0
            r0.certPath = r1
            return
    }

    public CertPathReviewerException(org.bouncycastle.i18n.ErrorBundle r1, java.lang.Throwable r2) {
            r0 = this;
            r0.<init>(r1, r2)
            r1 = -1
            r0.index = r1
            r1 = 0
            r0.certPath = r1
            return
    }

    public CertPathReviewerException(org.bouncycastle.i18n.ErrorBundle r1, java.lang.Throwable r2, java.security.cert.CertPath r3, int r4) {
            r0 = this;
            r0.<init>(r1, r2)
            r1 = -1
            r0.index = r1
            r2 = 0
            r0.certPath = r2
            if (r3 == 0) goto L26
            if (r4 == r1) goto L26
            if (r4 < r1) goto L20
            if (r3 == 0) goto L1b
            java.util.List r1 = r3.getCertificates()
            int r1 = r1.size()
            if (r4 >= r1) goto L20
        L1b:
            r0.certPath = r3
            r0.index = r4
            return
        L20:
            java.lang.IndexOutOfBoundsException r1 = new java.lang.IndexOutOfBoundsException
            r1.<init>()
            throw r1
        L26:
            java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
            r1.<init>()
            throw r1
    }

    public CertPathReviewerException(org.bouncycastle.i18n.ErrorBundle r2, java.security.cert.CertPath r3, int r4) {
            r1 = this;
            r1.<init>(r2)
            r2 = -1
            r1.index = r2
            r0 = 0
            r1.certPath = r0
            if (r3 == 0) goto L26
            if (r4 == r2) goto L26
            if (r4 < r2) goto L20
            if (r3 == 0) goto L1b
            java.util.List r2 = r3.getCertificates()
            int r2 = r2.size()
            if (r4 >= r2) goto L20
        L1b:
            r1.certPath = r3
            r1.index = r4
            return
        L20:
            java.lang.IndexOutOfBoundsException r2 = new java.lang.IndexOutOfBoundsException
            r2.<init>()
            throw r2
        L26:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            r2.<init>()
            throw r2
    }

    public java.security.cert.CertPath getCertPath() {
            r1 = this;
            java.security.cert.CertPath r0 = r1.certPath
            return r0
    }

    public int getIndex() {
            r1 = this;
            int r0 = r1.index
            return r0
    }
}
