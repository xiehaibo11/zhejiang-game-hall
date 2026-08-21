package org.bouncycastle.jce.provider;

class PKCS12BagAttributeCarrierImpl implements org.bouncycastle.jce.interfaces.PKCS12BagAttributeCarrier {
    private java.util.Hashtable pkcs12Attributes;
    private java.util.Vector pkcs12Ordering;

    public PKCS12BagAttributeCarrierImpl() {
            r2 = this;
            java.util.Hashtable r0 = new java.util.Hashtable
            r0.<init>()
            java.util.Vector r1 = new java.util.Vector
            r1.<init>()
            r2.<init>(r0, r1)
            return
    }

    PKCS12BagAttributeCarrierImpl(java.util.Hashtable r1, java.util.Vector r2) {
            r0 = this;
            r0.<init>()
            r0.pkcs12Attributes = r1
            r0.pkcs12Ordering = r2
            return
    }

    java.util.Hashtable getAttributes() {
            r1 = this;
            java.util.Hashtable r0 = r1.pkcs12Attributes
            return r0
    }

    @Override
    public org.bouncycastle.asn1.DEREncodable getBagAttribute(org.bouncycastle.asn1.DERObjectIdentifier r2) {
            r1 = this;
            java.util.Hashtable r0 = r1.pkcs12Attributes
            java.lang.Object r2 = r0.get(r2)
            org.bouncycastle.asn1.DEREncodable r2 = (org.bouncycastle.asn1.DEREncodable) r2
            return r2
    }

    @Override
    public java.util.Enumeration getBagAttributeKeys() {
            r1 = this;
            java.util.Vector r0 = r1.pkcs12Ordering
            java.util.Enumeration r0 = r0.elements()
            return r0
    }

    java.util.Vector getOrdering() {
            r1 = this;
            java.util.Vector r0 = r1.pkcs12Ordering
            return r0
    }

    public void readObject(java.io.ObjectInputStream r3) throws java.io.IOException, java.lang.ClassNotFoundException {
            r2 = this;
            java.lang.Object r0 = r3.readObject()
            boolean r1 = r0 instanceof java.util.Hashtable
            if (r1 == 0) goto L15
            java.util.Hashtable r0 = (java.util.Hashtable) r0
            r2.pkcs12Attributes = r0
            java.lang.Object r3 = r3.readObject()
            java.util.Vector r3 = (java.util.Vector) r3
            r2.pkcs12Ordering = r3
            goto L2e
        L15:
            org.bouncycastle.asn1.ASN1InputStream r3 = new org.bouncycastle.asn1.ASN1InputStream
            byte[] r0 = (byte[]) r0
            byte[] r0 = (byte[]) r0
            r3.<init>(r0)
        L1e:
            org.bouncycastle.asn1.DERObject r0 = r3.readObject()
            org.bouncycastle.asn1.DERObjectIdentifier r0 = (org.bouncycastle.asn1.DERObjectIdentifier) r0
            if (r0 == 0) goto L2e
            org.bouncycastle.asn1.DERObject r1 = r3.readObject()
            r2.setBagAttribute(r0, r1)
            goto L1e
        L2e:
            return
    }

    @Override
    public void setBagAttribute(org.bouncycastle.asn1.DERObjectIdentifier r2, org.bouncycastle.asn1.DEREncodable r3) {
            r1 = this;
            java.util.Hashtable r0 = r1.pkcs12Attributes
            boolean r0 = r0.containsKey(r2)
            if (r0 == 0) goto Le
            java.util.Hashtable r0 = r1.pkcs12Attributes
            r0.put(r2, r3)
            goto L18
        Le:
            java.util.Hashtable r0 = r1.pkcs12Attributes
            r0.put(r2, r3)
            java.util.Vector r3 = r1.pkcs12Ordering
            r3.addElement(r2)
        L18:
            return
    }

    int size() {
            r1 = this;
            java.util.Vector r0 = r1.pkcs12Ordering
            int r0 = r0.size()
            return r0
    }

    public void writeObject(java.io.ObjectOutputStream r6) throws java.io.IOException {
            r5 = this;
            java.util.Vector r0 = r5.pkcs12Ordering
            int r0 = r0.size()
            if (r0 != 0) goto L19
            java.util.Hashtable r0 = new java.util.Hashtable
            r0.<init>()
            r6.writeObject(r0)
            java.util.Vector r0 = new java.util.Vector
            r0.<init>()
            r6.writeObject(r0)
            goto L47
        L19:
            java.io.ByteArrayOutputStream r0 = new java.io.ByteArrayOutputStream
            r0.<init>()
            org.bouncycastle.asn1.ASN1OutputStream r1 = new org.bouncycastle.asn1.ASN1OutputStream
            r1.<init>(r0)
            java.util.Enumeration r2 = r5.getBagAttributeKeys()
        L27:
            boolean r3 = r2.hasMoreElements()
            if (r3 == 0) goto L40
            java.lang.Object r3 = r2.nextElement()
            org.bouncycastle.asn1.DERObjectIdentifier r3 = (org.bouncycastle.asn1.DERObjectIdentifier) r3
            r1.writeObject(r3)
            java.util.Hashtable r4 = r5.pkcs12Attributes
            java.lang.Object r3 = r4.get(r3)
            r1.writeObject(r3)
            goto L27
        L40:
            byte[] r0 = r0.toByteArray()
            r6.writeObject(r0)
        L47:
            return
    }
}
