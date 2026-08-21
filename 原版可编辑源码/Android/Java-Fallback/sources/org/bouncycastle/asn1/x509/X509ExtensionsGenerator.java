package org.bouncycastle.asn1.x509;

public class X509ExtensionsGenerator {
    private java.util.Vector extOrdering;
    private java.util.Hashtable extensions;

    public X509ExtensionsGenerator() {
            r1 = this;
            r1.<init>()
            java.util.Hashtable r0 = new java.util.Hashtable
            r0.<init>()
            r1.extensions = r0
            java.util.Vector r0 = new java.util.Vector
            r0.<init>()
            r1.extOrdering = r0
            return
    }

    public void addExtension(org.bouncycastle.asn1.DERObjectIdentifier r3, boolean r4, org.bouncycastle.asn1.DEREncodable r5) {
            r2 = this;
            java.io.ByteArrayOutputStream r0 = new java.io.ByteArrayOutputStream
            r0.<init>()
            org.bouncycastle.asn1.DEROutputStream r1 = new org.bouncycastle.asn1.DEROutputStream
            r1.<init>(r0)
            r1.writeObject(r5)     // Catch: java.io.IOException -> L15
            byte[] r5 = r0.toByteArray()
            r2.addExtension(r3, r4, r5)
            return
        L15:
            r3 = move-exception
            java.lang.IllegalArgumentException r4 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r0 = "error encoding value: "
            r5.append(r0)
            r5.append(r3)
            java.lang.String r3 = r5.toString()
            r4.<init>(r3)
            throw r4
    }

    public void addExtension(org.bouncycastle.asn1.DERObjectIdentifier r4, boolean r5, byte[] r6) {
            r3 = this;
            java.util.Hashtable r0 = r3.extensions
            boolean r0 = r0.containsKey(r4)
            if (r0 != 0) goto L1d
            java.util.Vector r0 = r3.extOrdering
            r0.addElement(r4)
            java.util.Hashtable r0 = r3.extensions
            org.bouncycastle.asn1.x509.X509Extension r1 = new org.bouncycastle.asn1.x509.X509Extension
            org.bouncycastle.asn1.DEROctetString r2 = new org.bouncycastle.asn1.DEROctetString
            r2.<init>(r6)
            r1.<init>(r5, r2)
            r0.put(r4, r1)
            return
        L1d:
            java.lang.IllegalArgumentException r5 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            java.lang.String r0 = "extension "
            r6.append(r0)
            r6.append(r4)
            java.lang.String r4 = " already added"
            r6.append(r4)
            java.lang.String r4 = r6.toString()
            r5.<init>(r4)
            throw r5
    }

    public org.bouncycastle.asn1.x509.X509Extensions generate() {
            r3 = this;
            org.bouncycastle.asn1.x509.X509Extensions r0 = new org.bouncycastle.asn1.x509.X509Extensions
            java.util.Vector r1 = r3.extOrdering
            java.util.Hashtable r2 = r3.extensions
            r0.<init>(r1, r2)
            return r0
    }

    public boolean isEmpty() {
            r1 = this;
            java.util.Vector r0 = r1.extOrdering
            boolean r0 = r0.isEmpty()
            return r0
    }

    public void reset() {
            r1 = this;
            java.util.Hashtable r0 = new java.util.Hashtable
            r0.<init>()
            r1.extensions = r0
            java.util.Vector r0 = new java.util.Vector
            r0.<init>()
            r1.extOrdering = r0
            return
    }
}
