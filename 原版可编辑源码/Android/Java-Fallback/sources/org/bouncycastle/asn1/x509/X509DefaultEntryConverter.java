package org.bouncycastle.asn1.x509;

public class X509DefaultEntryConverter extends org.bouncycastle.asn1.x509.X509NameEntryConverter {
    public X509DefaultEntryConverter() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public org.bouncycastle.asn1.DERObject getConvertedValue(org.bouncycastle.asn1.DERObjectIdentifier r5, java.lang.String r6) {
            r4 = this;
            int r0 = r6.length()
            r1 = 1
            r2 = 0
            if (r0 == 0) goto L30
            char r0 = r6.charAt(r2)
            r3 = 35
            if (r0 != r3) goto L30
            org.bouncycastle.asn1.DERObject r5 = r4.convertHexEncoded(r6, r1)     // Catch: java.io.IOException -> L15
            return r5
        L15:
            java.lang.RuntimeException r6 = new java.lang.RuntimeException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "can't recode value for oid "
            r0.append(r1)
            java.lang.String r5 = r5.getId()
            r0.append(r5)
            java.lang.String r5 = r0.toString()
            r6.<init>(r5)
            throw r6
        L30:
            int r0 = r6.length()
            if (r0 == 0) goto L42
            char r0 = r6.charAt(r2)
            r2 = 92
            if (r0 != r2) goto L42
            java.lang.String r6 = r6.substring(r1)
        L42:
            org.bouncycastle.asn1.DERObjectIdentifier r0 = org.bouncycastle.asn1.x509.X509Name.EmailAddress
            boolean r0 = r5.equals(r0)
            if (r0 != 0) goto L86
            org.bouncycastle.asn1.DERObjectIdentifier r0 = org.bouncycastle.asn1.x509.X509Name.DC
            boolean r0 = r5.equals(r0)
            if (r0 == 0) goto L53
            goto L86
        L53:
            org.bouncycastle.asn1.DERObjectIdentifier r0 = org.bouncycastle.asn1.x509.X509Name.DATE_OF_BIRTH
            boolean r0 = r5.equals(r0)
            if (r0 == 0) goto L61
            org.bouncycastle.asn1.DERGeneralizedTime r5 = new org.bouncycastle.asn1.DERGeneralizedTime
            r5.<init>(r6)
            return r5
        L61:
            org.bouncycastle.asn1.DERObjectIdentifier r0 = org.bouncycastle.asn1.x509.X509Name.C
            boolean r0 = r5.equals(r0)
            if (r0 != 0) goto L80
            org.bouncycastle.asn1.DERObjectIdentifier r0 = org.bouncycastle.asn1.x509.X509Name.SN
            boolean r0 = r5.equals(r0)
            if (r0 != 0) goto L80
            org.bouncycastle.asn1.DERObjectIdentifier r0 = org.bouncycastle.asn1.x509.X509Name.DN_QUALIFIER
            boolean r5 = r5.equals(r0)
            if (r5 == 0) goto L7a
            goto L80
        L7a:
            org.bouncycastle.asn1.DERUTF8String r5 = new org.bouncycastle.asn1.DERUTF8String
            r5.<init>(r6)
            return r5
        L80:
            org.bouncycastle.asn1.DERPrintableString r5 = new org.bouncycastle.asn1.DERPrintableString
            r5.<init>(r6)
            return r5
        L86:
            org.bouncycastle.asn1.DERIA5String r5 = new org.bouncycastle.asn1.DERIA5String
            r5.<init>(r6)
            return r5
    }
}
