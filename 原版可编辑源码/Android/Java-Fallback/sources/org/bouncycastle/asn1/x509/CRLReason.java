package org.bouncycastle.asn1.x509;

public class CRLReason extends org.bouncycastle.asn1.DEREnumerated {
    public static final int AA_COMPROMISE = 10;
    public static final int AFFILIATION_CHANGED = 3;
    public static final int CA_COMPROMISE = 2;
    public static final int CERTIFICATE_HOLD = 6;
    public static final int CESSATION_OF_OPERATION = 5;
    public static final int KEY_COMPROMISE = 1;
    public static final int PRIVILEGE_WITHDRAWN = 9;
    public static final int REMOVE_FROM_CRL = 8;
    public static final int SUPERSEDED = 4;
    public static final int UNSPECIFIED = 0;
    public static final int aACompromise = 10;
    public static final int affiliationChanged = 3;
    public static final int cACompromise = 2;
    public static final int certificateHold = 6;
    public static final int cessationOfOperation = 5;
    public static final int keyCompromise = 1;
    public static final int privilegeWithdrawn = 9;
    private static final java.lang.String[] reasonString = null;
    public static final int removeFromCRL = 8;
    public static final int superseded = 4;
    public static final int unspecified = 0;

    static {
            java.lang.String r0 = "unspecified"
            java.lang.String r1 = "keyCompromise"
            java.lang.String r2 = "cACompromise"
            java.lang.String r3 = "affiliationChanged"
            java.lang.String r4 = "superseded"
            java.lang.String r5 = "cessationOfOperation"
            java.lang.String r6 = "certificateHold"
            java.lang.String r7 = "unknown"
            java.lang.String r8 = "removeFromCRL"
            java.lang.String r9 = "privilegeWithdrawn"
            java.lang.String r10 = "aACompromise"
            java.lang.String[] r0 = new java.lang.String[]{r0, r1, r2, r3, r4, r5, r6, r7, r8, r9, r10}
            org.bouncycastle.asn1.x509.CRLReason.reasonString = r0
            return
    }

    public CRLReason(int r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    public CRLReason(org.bouncycastle.asn1.DEREnumerated r1) {
            r0 = this;
            java.math.BigInteger r1 = r1.getValue()
            int r1 = r1.intValue()
            r0.<init>(r1)
            return
    }

    public java.lang.String toString() {
            r3 = this;
            java.math.BigInteger r0 = r3.getValue()
            int r0 = r0.intValue()
            if (r0 < 0) goto L14
            r1 = 10
            if (r0 <= r1) goto Lf
            goto L14
        Lf:
            java.lang.String[] r1 = org.bouncycastle.asn1.x509.CRLReason.reasonString
            r0 = r1[r0]
            goto L16
        L14:
            java.lang.String r0 = "invalid"
        L16:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "CRLReason: "
            r1.append(r2)
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            return r0
    }
}
