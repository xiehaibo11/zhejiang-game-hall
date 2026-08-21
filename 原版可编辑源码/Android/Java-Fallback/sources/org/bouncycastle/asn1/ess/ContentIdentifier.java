package org.bouncycastle.asn1.ess;

public class ContentIdentifier extends org.bouncycastle.asn1.ASN1Encodable {
    org.bouncycastle.asn1.ASN1OctetString value;

    public ContentIdentifier(org.bouncycastle.asn1.ASN1OctetString r1) {
            r0 = this;
            r0.<init>()
            r0.value = r1
            return
    }

    public ContentIdentifier(byte[] r2) {
            r1 = this;
            org.bouncycastle.asn1.DEROctetString r0 = new org.bouncycastle.asn1.DEROctetString
            r0.<init>(r2)
            r1.<init>(r0)
            return
    }

    public static org.bouncycastle.asn1.ess.ContentIdentifier getInstance(java.lang.Object r3) {
            if (r3 == 0) goto L37
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ess.ContentIdentifier
            if (r0 == 0) goto L7
            goto L37
        L7:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ASN1OctetString
            if (r0 == 0) goto L13
            org.bouncycastle.asn1.ess.ContentIdentifier r0 = new org.bouncycastle.asn1.ess.ContentIdentifier
            org.bouncycastle.asn1.ASN1OctetString r3 = (org.bouncycastle.asn1.ASN1OctetString) r3
            r0.<init>(r3)
            return r0
        L13:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "unknown object in 'ContentIdentifier' factory : "
            r1.append(r2)
            java.lang.Class r3 = r3.getClass()
            java.lang.String r3 = r3.getName()
            r1.append(r3)
            java.lang.String r3 = "."
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            r0.<init>(r3)
            throw r0
        L37:
            org.bouncycastle.asn1.ess.ContentIdentifier r3 = (org.bouncycastle.asn1.ess.ContentIdentifier) r3
            return r3
    }

    public org.bouncycastle.asn1.ASN1OctetString getValue() {
            r1 = this;
            org.bouncycastle.asn1.ASN1OctetString r0 = r1.value
            return r0
    }

    @Override
    public org.bouncycastle.asn1.DERObject toASN1Object() {
            r1 = this;
            org.bouncycastle.asn1.ASN1OctetString r0 = r1.value
            return r0
    }
}
