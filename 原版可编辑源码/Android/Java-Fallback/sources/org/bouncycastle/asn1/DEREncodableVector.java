package org.bouncycastle.asn1;

public class DEREncodableVector {
    java.util.Vector v;

    public DEREncodableVector() {
            r1 = this;
            r1.<init>()
            java.util.Vector r0 = new java.util.Vector
            r0.<init>()
            r1.v = r0
            return
    }

    public void add(org.bouncycastle.asn1.DEREncodable r2) {
            r1 = this;
            java.util.Vector r0 = r1.v
            r0.addElement(r2)
            return
    }

    public org.bouncycastle.asn1.DEREncodable get(int r2) {
            r1 = this;
            java.util.Vector r0 = r1.v
            java.lang.Object r2 = r0.elementAt(r2)
            org.bouncycastle.asn1.DEREncodable r2 = (org.bouncycastle.asn1.DEREncodable) r2
            return r2
    }

    public int size() {
            r1 = this;
            java.util.Vector r0 = r1.v
            int r0 = r0.size()
            return r0
    }
}
