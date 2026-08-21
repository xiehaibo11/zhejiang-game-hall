package org.bouncycastle.asn1.x509;

public class TargetInformation extends org.bouncycastle.asn1.ASN1Encodable {
    private org.bouncycastle.asn1.ASN1Sequence targets;

    private TargetInformation(org.bouncycastle.asn1.ASN1Sequence r1) {
            r0 = this;
            r0.<init>()
            r0.targets = r1
            return
    }

    public TargetInformation(org.bouncycastle.asn1.x509.Targets r2) {
            r1 = this;
            r1.<init>()
            org.bouncycastle.asn1.DERSequence r0 = new org.bouncycastle.asn1.DERSequence
            r0.<init>(r2)
            r1.targets = r0
            return
    }

    public TargetInformation(org.bouncycastle.asn1.x509.Target[] r2) {
            r1 = this;
            org.bouncycastle.asn1.x509.Targets r0 = new org.bouncycastle.asn1.x509.Targets
            r0.<init>(r2)
            r1.<init>(r0)
            return
    }

    public static org.bouncycastle.asn1.x509.TargetInformation getInstance(java.lang.Object r3) {
            boolean r0 = r3 instanceof org.bouncycastle.asn1.x509.TargetInformation
            if (r0 == 0) goto L7
            org.bouncycastle.asn1.x509.TargetInformation r3 = (org.bouncycastle.asn1.x509.TargetInformation) r3
            return r3
        L7:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ASN1Sequence
            if (r0 == 0) goto L13
            org.bouncycastle.asn1.x509.TargetInformation r0 = new org.bouncycastle.asn1.x509.TargetInformation
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
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            r0.<init>(r3)
            throw r0
    }

    public org.bouncycastle.asn1.x509.Targets[] getTargetsObjects() {
            r5 = this;
            org.bouncycastle.asn1.ASN1Sequence r0 = r5.targets
            int r0 = r0.size()
            org.bouncycastle.asn1.x509.Targets[] r0 = new org.bouncycastle.asn1.x509.Targets[r0]
            org.bouncycastle.asn1.ASN1Sequence r1 = r5.targets
            java.util.Enumeration r1 = r1.getObjects()
            r2 = 0
        Lf:
            boolean r3 = r1.hasMoreElements()
            if (r3 == 0) goto L23
            int r3 = r2 + 1
            java.lang.Object r4 = r1.nextElement()
            org.bouncycastle.asn1.x509.Targets r4 = org.bouncycastle.asn1.x509.Targets.getInstance(r4)
            r0[r2] = r4
            r2 = r3
            goto Lf
        L23:
            return r0
    }

    @Override
    public org.bouncycastle.asn1.DERObject toASN1Object() {
            r1 = this;
            org.bouncycastle.asn1.ASN1Sequence r0 = r1.targets
            return r0
    }
}
