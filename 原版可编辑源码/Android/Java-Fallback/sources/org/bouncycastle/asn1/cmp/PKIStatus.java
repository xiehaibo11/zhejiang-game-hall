package org.bouncycastle.asn1.cmp;

public class PKIStatus extends org.bouncycastle.asn1.ASN1Encodable {
    public static final int GRANTED = 0;
    public static final int GRANTED_WITH_MODS = 1;
    public static final int KEY_UPDATE_WARNING = 6;
    public static final int REJECTION = 2;
    public static final int REVOCATION_NOTIFICATION = 5;
    public static final int REVOCATION_WARNING = 4;
    public static final int WAITING = 3;
    public static final org.bouncycastle.asn1.cmp.PKIStatus granted = null;
    public static final org.bouncycastle.asn1.cmp.PKIStatus grantedWithMods = null;
    public static final org.bouncycastle.asn1.cmp.PKIStatus keyUpdateWaiting = null;
    public static final org.bouncycastle.asn1.cmp.PKIStatus rejection = null;
    public static final org.bouncycastle.asn1.cmp.PKIStatus revocationNotification = null;
    public static final org.bouncycastle.asn1.cmp.PKIStatus revocationWarning = null;
    public static final org.bouncycastle.asn1.cmp.PKIStatus waiting = null;
    private org.bouncycastle.asn1.DERInteger value;

    static {
            org.bouncycastle.asn1.cmp.PKIStatus r0 = new org.bouncycastle.asn1.cmp.PKIStatus
            r1 = 0
            r0.<init>(r1)
            org.bouncycastle.asn1.cmp.PKIStatus.granted = r0
            org.bouncycastle.asn1.cmp.PKIStatus r0 = new org.bouncycastle.asn1.cmp.PKIStatus
            r1 = 1
            r0.<init>(r1)
            org.bouncycastle.asn1.cmp.PKIStatus.grantedWithMods = r0
            org.bouncycastle.asn1.cmp.PKIStatus r0 = new org.bouncycastle.asn1.cmp.PKIStatus
            r1 = 2
            r0.<init>(r1)
            org.bouncycastle.asn1.cmp.PKIStatus.rejection = r0
            org.bouncycastle.asn1.cmp.PKIStatus r0 = new org.bouncycastle.asn1.cmp.PKIStatus
            r1 = 3
            r0.<init>(r1)
            org.bouncycastle.asn1.cmp.PKIStatus.waiting = r0
            org.bouncycastle.asn1.cmp.PKIStatus r0 = new org.bouncycastle.asn1.cmp.PKIStatus
            r1 = 4
            r0.<init>(r1)
            org.bouncycastle.asn1.cmp.PKIStatus.revocationWarning = r0
            org.bouncycastle.asn1.cmp.PKIStatus r0 = new org.bouncycastle.asn1.cmp.PKIStatus
            r1 = 5
            r0.<init>(r1)
            org.bouncycastle.asn1.cmp.PKIStatus.revocationNotification = r0
            org.bouncycastle.asn1.cmp.PKIStatus r0 = new org.bouncycastle.asn1.cmp.PKIStatus
            r1 = 6
            r0.<init>(r1)
            org.bouncycastle.asn1.cmp.PKIStatus.keyUpdateWaiting = r0
            return
    }

    private PKIStatus(int r2) {
            r1 = this;
            org.bouncycastle.asn1.DERInteger r0 = new org.bouncycastle.asn1.DERInteger
            r0.<init>(r2)
            r1.<init>(r0)
            return
    }

    private PKIStatus(org.bouncycastle.asn1.DERInteger r1) {
            r0 = this;
            r0.<init>()
            r0.value = r1
            return
    }

    public static org.bouncycastle.asn1.cmp.PKIStatus getInstance(java.lang.Object r3) {
            boolean r0 = r3 instanceof org.bouncycastle.asn1.cmp.PKIStatus
            if (r0 == 0) goto L7
            org.bouncycastle.asn1.cmp.PKIStatus r3 = (org.bouncycastle.asn1.cmp.PKIStatus) r3
            return r3
        L7:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.DERInteger
            if (r0 == 0) goto L13
            org.bouncycastle.asn1.cmp.PKIStatus r0 = new org.bouncycastle.asn1.cmp.PKIStatus
            org.bouncycastle.asn1.DERInteger r3 = (org.bouncycastle.asn1.DERInteger) r3
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
            r1 = this;
            org.bouncycastle.asn1.DERInteger r0 = r1.value
            return r0
    }
}
