package org.bouncycastle.asn1.util;

public class ASN1Dump {
    private static final java.lang.String TAB = "    ";

    public ASN1Dump() {
            r0 = this;
            r0.<init>()
            return
    }

    static java.lang.String _dumpAsString(java.lang.String r6, org.bouncycastle.asn1.DERObject r7) {
            boolean r0 = r7 instanceof org.bouncycastle.asn1.ASN1Sequence
            java.lang.String r1 = "NULL"
            java.lang.String r2 = "    "
            java.lang.String r3 = "line.separator"
            if (r0 == 0) goto L87
            java.lang.StringBuffer r0 = new java.lang.StringBuffer
            r0.<init>()
            r4 = r7
            org.bouncycastle.asn1.ASN1Sequence r4 = (org.bouncycastle.asn1.ASN1Sequence) r4
            java.util.Enumeration r4 = r4.getObjects()
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            r5.append(r6)
            r5.append(r2)
            java.lang.String r2 = r5.toString()
            r0.append(r6)
            boolean r6 = r7 instanceof org.bouncycastle.asn1.BERConstructedSequence
            if (r6 == 0) goto L32
            java.lang.String r6 = "BER ConstructedSequence"
        L2e:
            r0.append(r6)
            goto L4a
        L32:
            boolean r6 = r7 instanceof org.bouncycastle.asn1.DERConstructedSequence
            if (r6 == 0) goto L39
            java.lang.String r6 = "DER ConstructedSequence"
            goto L2e
        L39:
            boolean r6 = r7 instanceof org.bouncycastle.asn1.BERSequence
            if (r6 == 0) goto L40
            java.lang.String r6 = "BER Sequence"
            goto L2e
        L40:
            boolean r6 = r7 instanceof org.bouncycastle.asn1.DERSequence
            if (r6 == 0) goto L47
            java.lang.String r6 = "DER Sequence"
            goto L2e
        L47:
            java.lang.String r6 = "Sequence"
            goto L2e
        L4a:
            java.lang.String r6 = java.lang.System.getProperty(r3)
        L4e:
            r0.append(r6)
            boolean r6 = r4.hasMoreElements()
            if (r6 == 0) goto L82
            java.lang.Object r6 = r4.nextElement()
            if (r6 == 0) goto L7b
            org.bouncycastle.asn1.DERNull r7 = new org.bouncycastle.asn1.DERNull
            r7.<init>()
            boolean r7 = r6.equals(r7)
            if (r7 == 0) goto L69
            goto L7b
        L69:
            boolean r7 = r6 instanceof org.bouncycastle.asn1.DERObject
            if (r7 == 0) goto L70
            org.bouncycastle.asn1.DERObject r6 = (org.bouncycastle.asn1.DERObject) r6
            goto L76
        L70:
            org.bouncycastle.asn1.DEREncodable r6 = (org.bouncycastle.asn1.DEREncodable) r6
            org.bouncycastle.asn1.DERObject r6 = r6.getDERObject()
        L76:
            java.lang.String r6 = _dumpAsString(r2, r6)
            goto L4e
        L7b:
            r0.append(r2)
            r0.append(r1)
            goto L4a
        L82:
            java.lang.String r6 = r0.toString()
            return r6
        L87:
            boolean r0 = r7 instanceof org.bouncycastle.asn1.DERTaggedObject
            if (r0 == 0) goto Lf5
            java.lang.StringBuffer r0 = new java.lang.StringBuffer
            r0.<init>()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r6)
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.append(r6)
            boolean r6 = r7 instanceof org.bouncycastle.asn1.BERTaggedObject
            if (r6 == 0) goto La9
            java.lang.String r6 = "BER Tagged ["
            goto Lab
        La9:
            java.lang.String r6 = "Tagged ["
        Lab:
            r0.append(r6)
            org.bouncycastle.asn1.DERTaggedObject r7 = (org.bouncycastle.asn1.DERTaggedObject) r7
            int r6 = r7.getTagNo()
            java.lang.String r6 = java.lang.Integer.toString(r6)
            r0.append(r6)
            r6 = 93
            r0.append(r6)
            boolean r6 = r7.isExplicit()
            if (r6 != 0) goto Lcb
            java.lang.String r6 = " IMPLICIT "
            r0.append(r6)
        Lcb:
            java.lang.String r6 = java.lang.System.getProperty(r3)
            r0.append(r6)
            boolean r6 = r7.isEmpty()
            if (r6 == 0) goto Le5
            r0.append(r1)
            java.lang.String r6 = "EMPTY"
            r0.append(r6)
            java.lang.String r6 = java.lang.System.getProperty(r3)
            goto Led
        Le5:
            org.bouncycastle.asn1.DERObject r6 = r7.getObject()
            java.lang.String r6 = _dumpAsString(r1, r6)
        Led:
            r0.append(r6)
            java.lang.String r6 = r0.toString()
            return r6
        Lf5:
            boolean r0 = r7 instanceof org.bouncycastle.asn1.DERConstructedSet
            if (r0 == 0) goto L14c
            java.lang.StringBuffer r0 = new java.lang.StringBuffer
            r0.<init>()
            org.bouncycastle.asn1.ASN1Set r7 = (org.bouncycastle.asn1.ASN1Set) r7
            java.util.Enumeration r7 = r7.getObjects()
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            r4.append(r6)
            r4.append(r2)
            java.lang.String r2 = r4.toString()
            r0.append(r6)
            java.lang.String r6 = "ConstructedSet"
            r0.append(r6)
        L11b:
            java.lang.String r6 = java.lang.System.getProperty(r3)
        L11f:
            r0.append(r6)
            boolean r6 = r7.hasMoreElements()
            if (r6 == 0) goto L147
            java.lang.Object r6 = r7.nextElement()
            if (r6 != 0) goto L135
            r0.append(r2)
            r0.append(r1)
            goto L11b
        L135:
            boolean r4 = r6 instanceof org.bouncycastle.asn1.DERObject
            if (r4 == 0) goto L13c
            org.bouncycastle.asn1.DERObject r6 = (org.bouncycastle.asn1.DERObject) r6
            goto L142
        L13c:
            org.bouncycastle.asn1.DEREncodable r6 = (org.bouncycastle.asn1.DEREncodable) r6
            org.bouncycastle.asn1.DERObject r6 = r6.getDERObject()
        L142:
            java.lang.String r6 = _dumpAsString(r2, r6)
            goto L11f
        L147:
            java.lang.String r6 = r0.toString()
            return r6
        L14c:
            boolean r0 = r7 instanceof org.bouncycastle.asn1.BERSet
            if (r0 == 0) goto L1a3
            java.lang.StringBuffer r0 = new java.lang.StringBuffer
            r0.<init>()
            org.bouncycastle.asn1.ASN1Set r7 = (org.bouncycastle.asn1.ASN1Set) r7
            java.util.Enumeration r7 = r7.getObjects()
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            r4.append(r6)
            r4.append(r2)
            java.lang.String r2 = r4.toString()
            r0.append(r6)
            java.lang.String r6 = "BER Set"
            r0.append(r6)
        L172:
            java.lang.String r6 = java.lang.System.getProperty(r3)
        L176:
            r0.append(r6)
            boolean r6 = r7.hasMoreElements()
            if (r6 == 0) goto L19e
            java.lang.Object r6 = r7.nextElement()
            if (r6 != 0) goto L18c
            r0.append(r2)
            r0.append(r1)
            goto L172
        L18c:
            boolean r4 = r6 instanceof org.bouncycastle.asn1.DERObject
            if (r4 == 0) goto L193
            org.bouncycastle.asn1.DERObject r6 = (org.bouncycastle.asn1.DERObject) r6
            goto L199
        L193:
            org.bouncycastle.asn1.DEREncodable r6 = (org.bouncycastle.asn1.DEREncodable) r6
            org.bouncycastle.asn1.DERObject r6 = r6.getDERObject()
        L199:
            java.lang.String r6 = _dumpAsString(r2, r6)
            goto L176
        L19e:
            java.lang.String r6 = r0.toString()
            return r6
        L1a3:
            boolean r0 = r7 instanceof org.bouncycastle.asn1.DERSet
            if (r0 == 0) goto L1fe
            java.lang.StringBuffer r0 = new java.lang.StringBuffer
            r0.<init>()
            org.bouncycastle.asn1.ASN1Set r7 = (org.bouncycastle.asn1.ASN1Set) r7
            java.util.Enumeration r7 = r7.getObjects()
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            r4.append(r6)
            r4.append(r2)
            java.lang.String r2 = r4.toString()
            r0.append(r6)
            java.lang.String r6 = "DER Set"
            r0.append(r6)
        L1c9:
            java.lang.String r6 = java.lang.System.getProperty(r3)
        L1cd:
            r0.append(r6)
            boolean r6 = r7.hasMoreElements()
            if (r6 == 0) goto L1f9
            java.lang.Object r6 = r7.nextElement()
            if (r6 != 0) goto L1e3
            r0.append(r2)
            r0.append(r1)
            goto L1c9
        L1e3:
            boolean r4 = r6 instanceof org.bouncycastle.asn1.DERObject
            if (r4 == 0) goto L1ee
            org.bouncycastle.asn1.DERObject r6 = (org.bouncycastle.asn1.DERObject) r6
            java.lang.String r6 = _dumpAsString(r2, r6)
            goto L1cd
        L1ee:
            org.bouncycastle.asn1.DEREncodable r6 = (org.bouncycastle.asn1.DEREncodable) r6
            org.bouncycastle.asn1.DERObject r6 = r6.getDERObject()
            java.lang.String r6 = _dumpAsString(r2, r6)     // Catch: java.lang.Throwable -> L3d4
            goto L1cd
        L1f9:
            java.lang.String r6 = r0.toString()
            return r6
        L1fe:
            boolean r0 = r7 instanceof org.bouncycastle.asn1.DERObjectIdentifier
            java.lang.String r1 = ")"
            if (r0 == 0) goto L229
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r6)
            java.lang.String r6 = "ObjectIdentifier("
            r0.append(r6)
            org.bouncycastle.asn1.DERObjectIdentifier r7 = (org.bouncycastle.asn1.DERObjectIdentifier) r7
            java.lang.String r6 = r7.getId()
        L217:
            r0.append(r6)
        L21a:
            r0.append(r1)
        L21d:
            java.lang.String r6 = java.lang.System.getProperty(r3)
            r0.append(r6)
            java.lang.String r6 = r0.toString()
            return r6
        L229:
            boolean r0 = r7 instanceof org.bouncycastle.asn1.DERBoolean
            if (r0 == 0) goto L244
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r6)
            java.lang.String r6 = "Boolean("
            r0.append(r6)
            org.bouncycastle.asn1.DERBoolean r7 = (org.bouncycastle.asn1.DERBoolean) r7
            boolean r6 = r7.isTrue()
            r0.append(r6)
            goto L21a
        L244:
            boolean r0 = r7 instanceof org.bouncycastle.asn1.DERInteger
            if (r0 == 0) goto L25f
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r6)
            java.lang.String r6 = "Integer("
            r0.append(r6)
            org.bouncycastle.asn1.DERInteger r7 = (org.bouncycastle.asn1.DERInteger) r7
            java.math.BigInteger r6 = r7.getValue()
            r0.append(r6)
            goto L21a
        L25f:
            boolean r0 = r7 instanceof org.bouncycastle.asn1.BERConstructedOctetString
            java.lang.String r1 = "] "
            java.lang.String r2 = "["
            if (r0 == 0) goto L282
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r6)
            java.lang.String r6 = "BER Constructed Octet String"
            r0.append(r6)
            r0.append(r2)
            org.bouncycastle.asn1.ASN1OctetString r7 = (org.bouncycastle.asn1.ASN1OctetString) r7
            byte[] r6 = r7.getOctets()
            int r6 = r6.length
        L27e:
            r0.append(r6)
            goto L21a
        L282:
            boolean r0 = r7 instanceof org.bouncycastle.asn1.DEROctetString
            if (r0 == 0) goto L29e
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r6)
            java.lang.String r6 = "DER Octet String"
            r0.append(r6)
            r0.append(r2)
            org.bouncycastle.asn1.ASN1OctetString r7 = (org.bouncycastle.asn1.ASN1OctetString) r7
            byte[] r6 = r7.getOctets()
            int r6 = r6.length
            goto L27e
        L29e:
            boolean r0 = r7 instanceof org.bouncycastle.asn1.DERBitString
            if (r0 == 0) goto L2c6
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r6)
            java.lang.String r6 = "DER Bit String"
            r0.append(r6)
            r0.append(r2)
            org.bouncycastle.asn1.DERBitString r7 = (org.bouncycastle.asn1.DERBitString) r7
            byte[] r6 = r7.getBytes()
            int r6 = r6.length
            r0.append(r6)
            java.lang.String r6 = ", "
            r0.append(r6)
            int r6 = r7.getPadBits()
            goto L27e
        L2c6:
            boolean r0 = r7 instanceof org.bouncycastle.asn1.DERIA5String
            java.lang.String r1 = ") "
            if (r0 == 0) goto L2e1
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r6)
            java.lang.String r6 = "IA5String("
            r0.append(r6)
            org.bouncycastle.asn1.DERIA5String r7 = (org.bouncycastle.asn1.DERIA5String) r7
            java.lang.String r6 = r7.getString()
            goto L217
        L2e1:
            boolean r0 = r7 instanceof org.bouncycastle.asn1.DERUTF8String
            if (r0 == 0) goto L2fa
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r6)
            java.lang.String r6 = "UTF8String("
            r0.append(r6)
            org.bouncycastle.asn1.DERUTF8String r7 = (org.bouncycastle.asn1.DERUTF8String) r7
            java.lang.String r6 = r7.getString()
            goto L217
        L2fa:
            boolean r0 = r7 instanceof org.bouncycastle.asn1.DERPrintableString
            if (r0 == 0) goto L313
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r6)
            java.lang.String r6 = "PrintableString("
            r0.append(r6)
            org.bouncycastle.asn1.DERPrintableString r7 = (org.bouncycastle.asn1.DERPrintableString) r7
            java.lang.String r6 = r7.getString()
            goto L217
        L313:
            boolean r0 = r7 instanceof org.bouncycastle.asn1.DERVisibleString
            if (r0 == 0) goto L32c
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r6)
            java.lang.String r6 = "VisibleString("
            r0.append(r6)
            org.bouncycastle.asn1.DERVisibleString r7 = (org.bouncycastle.asn1.DERVisibleString) r7
            java.lang.String r6 = r7.getString()
            goto L217
        L32c:
            boolean r0 = r7 instanceof org.bouncycastle.asn1.DERBMPString
            if (r0 == 0) goto L345
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r6)
            java.lang.String r6 = "BMPString("
            r0.append(r6)
            org.bouncycastle.asn1.DERBMPString r7 = (org.bouncycastle.asn1.DERBMPString) r7
            java.lang.String r6 = r7.getString()
            goto L217
        L345:
            boolean r0 = r7 instanceof org.bouncycastle.asn1.DERT61String
            if (r0 == 0) goto L35e
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r6)
            java.lang.String r6 = "T61String("
            r0.append(r6)
            org.bouncycastle.asn1.DERT61String r7 = (org.bouncycastle.asn1.DERT61String) r7
            java.lang.String r6 = r7.getString()
            goto L217
        L35e:
            boolean r0 = r7 instanceof org.bouncycastle.asn1.DERUTCTime
            if (r0 == 0) goto L377
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r6)
            java.lang.String r6 = "UTCTime("
            r0.append(r6)
            org.bouncycastle.asn1.DERUTCTime r7 = (org.bouncycastle.asn1.DERUTCTime) r7
            java.lang.String r6 = r7.getTime()
            goto L217
        L377:
            boolean r0 = r7 instanceof org.bouncycastle.asn1.DERGeneralizedTime
            if (r0 == 0) goto L390
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r6)
            java.lang.String r6 = "GeneralizedTime("
            r0.append(r6)
            org.bouncycastle.asn1.DERGeneralizedTime r7 = (org.bouncycastle.asn1.DERGeneralizedTime) r7
            java.lang.String r6 = r7.getTime()
            goto L217
        L390:
            boolean r0 = r7 instanceof org.bouncycastle.asn1.DERUnknownTag
            if (r0 == 0) goto L3c7
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r6)
            java.lang.String r6 = "Unknown "
            r0.append(r6)
            org.bouncycastle.asn1.DERUnknownTag r7 = (org.bouncycastle.asn1.DERUnknownTag) r7
            int r6 = r7.getTag()
            r1 = 16
            java.lang.String r6 = java.lang.Integer.toString(r6, r1)
            r0.append(r6)
            java.lang.String r6 = " "
            r0.append(r6)
            java.lang.String r6 = new java.lang.String
            byte[] r7 = r7.getData()
            byte[] r7 = org.bouncycastle.util.encoders.Hex.encode(r7)
            r6.<init>(r7)
        L3c2:
            r0.append(r6)
            goto L21d
        L3c7:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r6)
            java.lang.String r6 = r7.toString()
            goto L3c2
        L3d4:
            r6 = move-exception
            throw r6
    }

    public static java.lang.String dumpAsString(java.lang.Object r2) {
            boolean r0 = r2 instanceof org.bouncycastle.asn1.DERObject
            java.lang.String r1 = ""
            if (r0 == 0) goto Ld
            org.bouncycastle.asn1.DERObject r2 = (org.bouncycastle.asn1.DERObject) r2
            java.lang.String r2 = _dumpAsString(r1, r2)
            return r2
        Ld:
            boolean r0 = r2 instanceof org.bouncycastle.asn1.DEREncodable
            if (r0 == 0) goto L1c
            org.bouncycastle.asn1.DEREncodable r2 = (org.bouncycastle.asn1.DEREncodable) r2
            org.bouncycastle.asn1.DERObject r2 = r2.getDERObject()
            java.lang.String r2 = _dumpAsString(r1, r2)
            return r2
        L1c:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "unknown object type "
            r0.append(r1)
            java.lang.String r2 = r2.toString()
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            return r2
    }
}
