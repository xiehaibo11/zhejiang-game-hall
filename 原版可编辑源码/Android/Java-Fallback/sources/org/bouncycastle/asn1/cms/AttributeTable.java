package org.bouncycastle.asn1.cms;

public class AttributeTable {
    private java.util.Hashtable attributes;

    public AttributeTable(java.util.Hashtable r2) {
            r1 = this;
            r1.<init>()
            java.util.Hashtable r0 = new java.util.Hashtable
            r0.<init>()
            r1.attributes = r0
            java.util.Hashtable r2 = r1.copyTable(r2)
            r1.attributes = r2
            return
    }

    public AttributeTable(org.bouncycastle.asn1.ASN1Set r4) {
            r3 = this;
            r3.<init>()
            java.util.Hashtable r0 = new java.util.Hashtable
            r0.<init>()
            r3.attributes = r0
            r0 = 0
        Lb:
            int r1 = r4.size()
            if (r0 == r1) goto L23
            org.bouncycastle.asn1.DEREncodable r1 = r4.getObjectAt(r0)
            org.bouncycastle.asn1.cms.Attribute r1 = org.bouncycastle.asn1.cms.Attribute.getInstance(r1)
            org.bouncycastle.asn1.DERObjectIdentifier r2 = r1.getAttrType()
            r3.addAttribute(r2, r1)
            int r0 = r0 + 1
            goto Lb
        L23:
            return
    }

    public AttributeTable(org.bouncycastle.asn1.DEREncodableVector r4) {
            r3 = this;
            r3.<init>()
            java.util.Hashtable r0 = new java.util.Hashtable
            r0.<init>()
            r3.attributes = r0
            r0 = 0
        Lb:
            int r1 = r4.size()
            if (r0 == r1) goto L23
            org.bouncycastle.asn1.DEREncodable r1 = r4.get(r0)
            org.bouncycastle.asn1.cms.Attribute r1 = org.bouncycastle.asn1.cms.Attribute.getInstance(r1)
            org.bouncycastle.asn1.DERObjectIdentifier r2 = r1.getAttrType()
            r3.addAttribute(r2, r1)
            int r0 = r0 + 1
            goto Lb
        L23:
            return
    }

    private void addAttribute(org.bouncycastle.asn1.DERObjectIdentifier r3, org.bouncycastle.asn1.cms.Attribute r4) {
            r2 = this;
            java.util.Hashtable r0 = r2.attributes
            java.lang.Object r0 = r0.get(r3)
            if (r0 != 0) goto Le
            java.util.Hashtable r0 = r2.attributes
            r0.put(r3, r4)
            goto L26
        Le:
            boolean r1 = r0 instanceof org.bouncycastle.asn1.cms.Attribute
            if (r1 == 0) goto L1b
            java.util.Vector r1 = new java.util.Vector
            r1.<init>()
            r1.addElement(r0)
            goto L1e
        L1b:
            r1 = r0
            java.util.Vector r1 = (java.util.Vector) r1
        L1e:
            r1.addElement(r4)
            java.util.Hashtable r4 = r2.attributes
            r4.put(r3, r1)
        L26:
            return
    }

    private java.util.Hashtable copyTable(java.util.Hashtable r5) {
            r4 = this;
            java.util.Hashtable r0 = new java.util.Hashtable
            r0.<init>()
            java.util.Enumeration r1 = r5.keys()
        L9:
            boolean r2 = r1.hasMoreElements()
            if (r2 == 0) goto L1b
            java.lang.Object r2 = r1.nextElement()
            java.lang.Object r3 = r5.get(r2)
            r0.put(r2, r3)
            goto L9
        L1b:
            return r0
    }

    public org.bouncycastle.asn1.cms.Attribute get(org.bouncycastle.asn1.DERObjectIdentifier r2) {
            r1 = this;
            java.util.Hashtable r0 = r1.attributes
            java.lang.Object r2 = r0.get(r2)
            boolean r0 = r2 instanceof java.util.Vector
            if (r0 == 0) goto L14
            java.util.Vector r2 = (java.util.Vector) r2
            r0 = 0
            java.lang.Object r2 = r2.elementAt(r0)
            org.bouncycastle.asn1.cms.Attribute r2 = (org.bouncycastle.asn1.cms.Attribute) r2
            return r2
        L14:
            org.bouncycastle.asn1.cms.Attribute r2 = (org.bouncycastle.asn1.cms.Attribute) r2
            return r2
    }

    public org.bouncycastle.asn1.ASN1EncodableVector getAll(org.bouncycastle.asn1.DERObjectIdentifier r3) {
            r2 = this;
            org.bouncycastle.asn1.ASN1EncodableVector r0 = new org.bouncycastle.asn1.ASN1EncodableVector
            r0.<init>()
            java.util.Hashtable r1 = r2.attributes
            java.lang.Object r3 = r1.get(r3)
            boolean r1 = r3 instanceof java.util.Vector
            if (r1 == 0) goto L25
            java.util.Vector r3 = (java.util.Vector) r3
            java.util.Enumeration r3 = r3.elements()
        L15:
            boolean r1 = r3.hasMoreElements()
            if (r1 == 0) goto L2c
            java.lang.Object r1 = r3.nextElement()
            org.bouncycastle.asn1.cms.Attribute r1 = (org.bouncycastle.asn1.cms.Attribute) r1
            r0.add(r1)
            goto L15
        L25:
            if (r3 == 0) goto L2c
            org.bouncycastle.asn1.cms.Attribute r3 = (org.bouncycastle.asn1.cms.Attribute) r3
            r0.add(r3)
        L2c:
            return r0
    }

    public org.bouncycastle.asn1.ASN1EncodableVector toASN1EncodableVector() {
            r4 = this;
            org.bouncycastle.asn1.ASN1EncodableVector r0 = new org.bouncycastle.asn1.ASN1EncodableVector
            r0.<init>()
            java.util.Hashtable r1 = r4.attributes
            java.util.Enumeration r1 = r1.elements()
        Lb:
            boolean r2 = r1.hasMoreElements()
            if (r2 == 0) goto L39
            java.lang.Object r2 = r1.nextElement()
            boolean r3 = r2 instanceof java.util.Vector
            if (r3 == 0) goto L31
            java.util.Vector r2 = (java.util.Vector) r2
            java.util.Enumeration r2 = r2.elements()
        L1f:
            boolean r3 = r2.hasMoreElements()
            if (r3 == 0) goto Lb
            java.lang.Object r3 = r2.nextElement()
            org.bouncycastle.asn1.cms.Attribute r3 = org.bouncycastle.asn1.cms.Attribute.getInstance(r3)
            r0.add(r3)
            goto L1f
        L31:
            org.bouncycastle.asn1.cms.Attribute r2 = org.bouncycastle.asn1.cms.Attribute.getInstance(r2)
            r0.add(r2)
            goto Lb
        L39:
            return r0
    }

    public java.util.Hashtable toHashtable() {
            r1 = this;
            java.util.Hashtable r0 = r1.attributes
            java.util.Hashtable r0 = r1.copyTable(r0)
            return r0
    }
}
