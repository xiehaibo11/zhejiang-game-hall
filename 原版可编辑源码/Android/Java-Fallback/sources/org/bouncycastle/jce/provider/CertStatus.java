package org.bouncycastle.jce.provider;

class CertStatus {
    public static final int UNDETERMINED = 12;
    public static final int UNREVOKED = 11;
    int certStatus;
    java.util.Date revocationDate;

    CertStatus() {
            r1 = this;
            r1.<init>()
            r0 = 11
            r1.certStatus = r0
            r0 = 0
            r1.revocationDate = r0
            return
    }

    public int getCertStatus() {
            r1 = this;
            int r0 = r1.certStatus
            return r0
    }

    public java.util.Date getRevocationDate() {
            r1 = this;
            java.util.Date r0 = r1.revocationDate
            return r0
    }

    public void setCertStatus(int r1) {
            r0 = this;
            r0.certStatus = r1
            return
    }

    public void setRevocationDate(java.util.Date r1) {
            r0 = this;
            r0.revocationDate = r1
            return
    }
}
