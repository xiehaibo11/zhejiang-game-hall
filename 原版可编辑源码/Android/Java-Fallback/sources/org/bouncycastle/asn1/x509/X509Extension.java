package org.bouncycastle.asn1.x509;

public class X509Extension {
    boolean critical;
    org.bouncycastle.asn1.ASN1OctetString value;

    public X509Extension(org.bouncycastle.asn1.DERBoolean r1, org.bouncycastle.asn1.ASN1OctetString r2) {
            r0 = this;
            r0.<init>()
            boolean r1 = r1.isTrue()
            r0.critical = r1
            r0.value = r2
            return
    }

    public X509Extension(boolean r1, org.bouncycastle.asn1.ASN1OctetString r2) {
            r0 = this;
            r0.<init>()
            r0.critical = r1
            r0.value = r2
            return
    }

    public static org.bouncycastle.asn1.ASN1Object convertValueToObject(org.bouncycastle.asn1.x509.X509Extension r3) throws java.lang.IllegalArgumentException {
            org.bouncycastle.asn1.ASN1OctetString r3 = r3.getValue()     // Catch: java.io.IOException -> Ld
            byte[] r3 = r3.getOctets()     // Catch: java.io.IOException -> Ld
            org.bouncycastle.asn1.ASN1Object r3 = org.bouncycastle.asn1.ASN1Object.fromByteArray(r3)     // Catch: java.io.IOException -> Ld
            return r3
        Ld:
            r3 = move-exception
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "can't convert extension: "
            r1.append(r2)
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            r0.<init>(r3)
            throw r0
    }

    public boolean equals(java.lang.Object r4) {
            r3 = this;
            boolean r0 = r4 instanceof org.bouncycastle.asn1.x509.X509Extension
            r1 = 0
            if (r0 != 0) goto L6
            return r1
        L6:
            org.bouncycastle.asn1.x509.X509Extension r4 = (org.bouncycastle.asn1.x509.X509Extension) r4
            org.bouncycastle.asn1.ASN1OctetString r0 = r4.getValue()
            org.bouncycastle.asn1.ASN1OctetString r2 = r3.getValue()
            boolean r0 = r0.equals(r2)
            if (r0 == 0) goto L21
            boolean r4 = r4.isCritical()
            boolean r0 = r3.isCritical()
            if (r4 != r0) goto L21
            r1 = 1
        L21:
            return r1
    }

    public org.bouncycastle.asn1.ASN1OctetString getValue() {
            r1 = this;
            org.bouncycastle.asn1.ASN1OctetString r0 = r1.value
            return r0
    }

    public int hashCode() {
            r1 = this;
            boolean r0 = r1.isCritical()
            if (r0 == 0) goto Lf
            org.bouncycastle.asn1.ASN1OctetString r0 = r1.getValue()
            int r0 = r0.hashCode()
            return r0
        Lf:
            org.bouncycastle.asn1.ASN1OctetString r0 = r1.getValue()
            int r0 = r0.hashCode()
            int r0 = ~r0
            return r0
    }

    public boolean isCritical() {
            r1 = this;
            boolean r0 = r1.critical
            return r0
    }
}
