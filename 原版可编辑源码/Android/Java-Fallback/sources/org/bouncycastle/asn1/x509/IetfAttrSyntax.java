package org.bouncycastle.asn1.x509;

public class IetfAttrSyntax extends org.bouncycastle.asn1.ASN1Encodable {
    public static final int VALUE_OCTETS = 1;
    public static final int VALUE_OID = 2;
    public static final int VALUE_UTF8 = 3;
    org.bouncycastle.asn1.x509.GeneralNames policyAuthority;
    int valueChoice;
    java.util.Vector values;

    public IetfAttrSyntax(org.bouncycastle.asn1.ASN1Sequence r6) {
            r5 = this;
            r5.<init>()
            r0 = 0
            r5.policyAuthority = r0
            java.util.Vector r0 = new java.util.Vector
            r0.<init>()
            r5.values = r0
            r0 = -1
            r5.valueChoice = r0
            r0 = 0
            org.bouncycastle.asn1.DEREncodable r1 = r6.getObjectAt(r0)
            boolean r1 = r1 instanceof org.bouncycastle.asn1.ASN1TaggedObject
            r2 = 2
            r3 = 1
            if (r1 == 0) goto L29
            org.bouncycastle.asn1.DEREncodable r1 = r6.getObjectAt(r0)
            org.bouncycastle.asn1.ASN1TaggedObject r1 = (org.bouncycastle.asn1.ASN1TaggedObject) r1
            org.bouncycastle.asn1.x509.GeneralNames r0 = org.bouncycastle.asn1.x509.GeneralNames.getInstance(r1, r0)
        L25:
            r5.policyAuthority = r0
            r0 = 1
            goto L38
        L29:
            int r1 = r6.size()
            if (r1 != r2) goto L38
            org.bouncycastle.asn1.DEREncodable r0 = r6.getObjectAt(r0)
            org.bouncycastle.asn1.x509.GeneralNames r0 = org.bouncycastle.asn1.x509.GeneralNames.getInstance(r0)
            goto L25
        L38:
            org.bouncycastle.asn1.DEREncodable r1 = r6.getObjectAt(r0)
            boolean r1 = r1 instanceof org.bouncycastle.asn1.ASN1Sequence
            if (r1 == 0) goto L88
            org.bouncycastle.asn1.DEREncodable r6 = r6.getObjectAt(r0)
            org.bouncycastle.asn1.ASN1Sequence r6 = (org.bouncycastle.asn1.ASN1Sequence) r6
            java.util.Enumeration r6 = r6.getObjects()
        L4a:
            boolean r0 = r6.hasMoreElements()
            if (r0 == 0) goto L87
            java.lang.Object r0 = r6.nextElement()
            org.bouncycastle.asn1.DERObject r0 = (org.bouncycastle.asn1.DERObject) r0
            boolean r1 = r0 instanceof org.bouncycastle.asn1.DERObjectIdentifier
            if (r1 == 0) goto L5c
            r1 = 2
            goto L67
        L5c:
            boolean r1 = r0 instanceof org.bouncycastle.asn1.DERUTF8String
            if (r1 == 0) goto L62
            r1 = 3
            goto L67
        L62:
            boolean r1 = r0 instanceof org.bouncycastle.asn1.DEROctetString
            if (r1 == 0) goto L7f
            r1 = 1
        L67:
            int r4 = r5.valueChoice
            if (r4 >= 0) goto L6d
            r5.valueChoice = r1
        L6d:
            int r4 = r5.valueChoice
            if (r1 != r4) goto L77
            java.util.Vector r1 = r5.values
            r1.addElement(r0)
            goto L4a
        L77:
            java.lang.IllegalArgumentException r6 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "Mix of value types in IetfAttrSyntax"
            r6.<init>(r0)
            throw r6
        L7f:
            java.lang.IllegalArgumentException r6 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "Bad value type encoding IetfAttrSyntax"
            r6.<init>(r0)
            throw r6
        L87:
            return
        L88:
            java.lang.IllegalArgumentException r6 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "Non-IetfAttrSyntax encoding"
            r6.<init>(r0)
            throw r6
    }

    public org.bouncycastle.asn1.x509.GeneralNames getPolicyAuthority() {
            r1 = this;
            org.bouncycastle.asn1.x509.GeneralNames r0 = r1.policyAuthority
            return r0
    }

    public int getValueType() {
            r1 = this;
            int r0 = r1.valueChoice
            return r0
    }

    public java.lang.Object[] getValues() {
            r4 = this;
            int r0 = r4.getValueType()
            r1 = 0
            r2 = 1
            if (r0 != r2) goto L20
            java.util.Vector r0 = r4.values
            int r0 = r0.size()
            org.bouncycastle.asn1.ASN1OctetString[] r2 = new org.bouncycastle.asn1.ASN1OctetString[r0]
        L10:
            if (r1 == r0) goto L1f
            java.util.Vector r3 = r4.values
            java.lang.Object r3 = r3.elementAt(r1)
            org.bouncycastle.asn1.ASN1OctetString r3 = (org.bouncycastle.asn1.ASN1OctetString) r3
            r2[r1] = r3
            int r1 = r1 + 1
            goto L10
        L1f:
            return r2
        L20:
            int r0 = r4.getValueType()
            r2 = 2
            if (r0 != r2) goto L3f
            java.util.Vector r0 = r4.values
            int r0 = r0.size()
            org.bouncycastle.asn1.DERObjectIdentifier[] r2 = new org.bouncycastle.asn1.DERObjectIdentifier[r0]
        L2f:
            if (r1 == r0) goto L3e
            java.util.Vector r3 = r4.values
            java.lang.Object r3 = r3.elementAt(r1)
            org.bouncycastle.asn1.DERObjectIdentifier r3 = (org.bouncycastle.asn1.DERObjectIdentifier) r3
            r2[r1] = r3
            int r1 = r1 + 1
            goto L2f
        L3e:
            return r2
        L3f:
            java.util.Vector r0 = r4.values
            int r0 = r0.size()
            org.bouncycastle.asn1.DERUTF8String[] r2 = new org.bouncycastle.asn1.DERUTF8String[r0]
        L47:
            if (r1 == r0) goto L56
            java.util.Vector r3 = r4.values
            java.lang.Object r3 = r3.elementAt(r1)
            org.bouncycastle.asn1.DERUTF8String r3 = (org.bouncycastle.asn1.DERUTF8String) r3
            r2[r1] = r3
            int r1 = r1 + 1
            goto L47
        L56:
            return r2
    }

    @Override
    public org.bouncycastle.asn1.DERObject toASN1Object() {
            r4 = this;
            org.bouncycastle.asn1.ASN1EncodableVector r0 = new org.bouncycastle.asn1.ASN1EncodableVector
            r0.<init>()
            org.bouncycastle.asn1.x509.GeneralNames r1 = r4.policyAuthority
            if (r1 == 0) goto L14
            org.bouncycastle.asn1.DERTaggedObject r1 = new org.bouncycastle.asn1.DERTaggedObject
            r2 = 0
            org.bouncycastle.asn1.x509.GeneralNames r3 = r4.policyAuthority
            r1.<init>(r2, r3)
            r0.add(r1)
        L14:
            org.bouncycastle.asn1.ASN1EncodableVector r1 = new org.bouncycastle.asn1.ASN1EncodableVector
            r1.<init>()
            java.util.Vector r2 = r4.values
            java.util.Enumeration r2 = r2.elements()
        L1f:
            boolean r3 = r2.hasMoreElements()
            if (r3 == 0) goto L2f
            java.lang.Object r3 = r2.nextElement()
            org.bouncycastle.asn1.ASN1Encodable r3 = (org.bouncycastle.asn1.ASN1Encodable) r3
            r1.add(r3)
            goto L1f
        L2f:
            org.bouncycastle.asn1.DERSequence r2 = new org.bouncycastle.asn1.DERSequence
            r2.<init>(r1)
            r0.add(r2)
            org.bouncycastle.asn1.DERSequence r1 = new org.bouncycastle.asn1.DERSequence
            r1.<init>(r0)
            return r1
    }
}
