package org.bouncycastle.asn1;

class LazyDERConstructionEnumeration implements java.util.Enumeration {
    private org.bouncycastle.asn1.ASN1InputStream aIn;
    private java.lang.Object nextObj;

    public LazyDERConstructionEnumeration(byte[] r3) {
            r2 = this;
            r2.<init>()
            org.bouncycastle.asn1.ASN1InputStream r0 = new org.bouncycastle.asn1.ASN1InputStream
            r1 = 1
            r0.<init>(r3, r1)
            r2.aIn = r0
            java.lang.Object r3 = r2.readObject()
            r2.nextObj = r3
            return
    }

    private java.lang.Object readObject() {
            r4 = this;
            org.bouncycastle.asn1.ASN1InputStream r0 = r4.aIn     // Catch: java.io.IOException -> L7
            org.bouncycastle.asn1.DERObject r0 = r0.readObject()     // Catch: java.io.IOException -> L7
            return r0
        L7:
            r0 = move-exception
            java.lang.IllegalStateException r1 = new java.lang.IllegalStateException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "malformed DER construction: "
            r2.append(r3)
            r2.append(r0)
            java.lang.String r0 = r2.toString()
            r1.<init>(r0)
            throw r1
    }

    @Override
    public boolean hasMoreElements() {
            r1 = this;
            java.lang.Object r0 = r1.nextObj
            if (r0 == 0) goto L6
            r0 = 1
            goto L7
        L6:
            r0 = 0
        L7:
            return r0
    }

    @Override
    public java.lang.Object nextElement() {
            r2 = this;
            java.lang.Object r0 = r2.nextObj
            java.lang.Object r1 = r2.readObject()
            r2.nextObj = r1
            return r0
    }
}
