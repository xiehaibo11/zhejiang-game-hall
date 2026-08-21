package org.bouncycastle.x509;

public class X509CollectionStoreParameters implements org.bouncycastle.x509.X509StoreParameters {
    private java.util.Collection collection;

    public X509CollectionStoreParameters(java.util.Collection r2) {
            r1 = this;
            r1.<init>()
            if (r2 == 0) goto L8
            r1.collection = r2
            return
        L8:
            java.lang.NullPointerException r2 = new java.lang.NullPointerException
            java.lang.String r0 = "collection cannot be null"
            r2.<init>(r0)
            throw r2
    }

    public java.lang.Object clone() {
            r2 = this;
            org.bouncycastle.x509.X509CollectionStoreParameters r0 = new org.bouncycastle.x509.X509CollectionStoreParameters
            java.util.Collection r1 = r2.collection
            r0.<init>(r1)
            return r0
    }

    public java.util.Collection getCollection() {
            r2 = this;
            java.util.ArrayList r0 = new java.util.ArrayList
            java.util.Collection r1 = r2.collection
            r0.<init>(r1)
            return r0
    }

    public java.lang.String toString() {
            r3 = this;
            java.lang.StringBuffer r0 = new java.lang.StringBuffer
            r0.<init>()
            java.lang.String r1 = "X509CollectionStoreParameters: [\n"
            r0.append(r1)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "  collection: "
            r1.append(r2)
            java.util.Collection r2 = r3.collection
            r1.append(r2)
            java.lang.String r2 = "\n"
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.append(r1)
            java.lang.String r1 = "]"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
