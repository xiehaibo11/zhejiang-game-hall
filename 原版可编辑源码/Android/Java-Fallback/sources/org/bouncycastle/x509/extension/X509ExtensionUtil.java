package org.bouncycastle.x509.extension;

public class X509ExtensionUtil {
    public X509ExtensionUtil() {
            r0 = this;
            r0.<init>()
            return
    }

    public static org.bouncycastle.asn1.ASN1Object fromExtensionValue(byte[] r0) throws java.io.IOException {
            org.bouncycastle.asn1.ASN1Object r0 = org.bouncycastle.asn1.ASN1Object.fromByteArray(r0)
            org.bouncycastle.asn1.ASN1OctetString r0 = (org.bouncycastle.asn1.ASN1OctetString) r0
            byte[] r0 = r0.getOctets()
            org.bouncycastle.asn1.ASN1Object r0 = org.bouncycastle.asn1.ASN1Object.fromByteArray(r0)
            return r0
    }

    private static java.util.Collection getAlternativeName(byte[] r5) throws java.security.cert.CertificateParsingException {
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            if (r5 != 0) goto La
            java.util.List r5 = java.util.Collections.EMPTY_LIST
            return r5
        La:
            org.bouncycastle.asn1.ASN1Object r5 = org.bouncycastle.asn1.ASN1Object.fromByteArray(r5)     // Catch: java.lang.Exception -> Lae
            org.bouncycastle.asn1.ASN1OctetString r5 = org.bouncycastle.asn1.DEROctetString.getInstance(r5)     // Catch: java.lang.Exception -> Lae
            byte[] r5 = r5.getOctets()     // Catch: java.lang.Exception -> Lae
            org.bouncycastle.asn1.ASN1Object r5 = org.bouncycastle.asn1.ASN1Object.fromByteArray(r5)     // Catch: java.lang.Exception -> Lae
            org.bouncycastle.asn1.ASN1Sequence r5 = org.bouncycastle.asn1.DERSequence.getInstance(r5)     // Catch: java.lang.Exception -> Lae
            java.util.Enumeration r5 = r5.getObjects()     // Catch: java.lang.Exception -> Lae
        L22:
            boolean r1 = r5.hasMoreElements()     // Catch: java.lang.Exception -> Lae
            if (r1 == 0) goto La9
            java.lang.Object r1 = r5.nextElement()     // Catch: java.lang.Exception -> Lae
            org.bouncycastle.asn1.x509.GeneralName r1 = org.bouncycastle.asn1.x509.GeneralName.getInstance(r1)     // Catch: java.lang.Exception -> Lae
            java.util.ArrayList r2 = new java.util.ArrayList     // Catch: java.lang.Exception -> Lae
            r2.<init>()     // Catch: java.lang.Exception -> Lae
            java.lang.Integer r3 = new java.lang.Integer     // Catch: java.lang.Exception -> Lae
            int r4 = r1.getTagNo()     // Catch: java.lang.Exception -> Lae
            r3.<init>(r4)     // Catch: java.lang.Exception -> Lae
            r2.add(r3)     // Catch: java.lang.Exception -> Lae
            int r3 = r1.getTagNo()     // Catch: java.lang.Exception -> Lae
            switch(r3) {
                case 0: goto L83;
                case 1: goto L78;
                case 2: goto L78;
                case 3: goto L83;
                case 4: goto L6b;
                case 5: goto L83;
                case 6: goto L78;
                case 7: goto L5b;
                case 8: goto L4b;
                default: goto L48;
            }     // Catch: java.lang.Exception -> Lae
        L48:
            java.io.IOException r5 = new java.io.IOException     // Catch: java.lang.Exception -> Lae
            goto L90
        L4b:
            org.bouncycastle.asn1.DEREncodable r1 = r1.getName()     // Catch: java.lang.Exception -> Lae
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.DERObjectIdentifier.getInstance(r1)     // Catch: java.lang.Exception -> Lae
            java.lang.String r1 = r1.getId()     // Catch: java.lang.Exception -> Lae
        L57:
            r2.add(r1)     // Catch: java.lang.Exception -> Lae
            goto L8c
        L5b:
            org.bouncycastle.asn1.DEREncodable r1 = r1.getName()     // Catch: java.lang.Exception -> Lae
            org.bouncycastle.asn1.ASN1OctetString r1 = org.bouncycastle.asn1.DEROctetString.getInstance(r1)     // Catch: java.lang.Exception -> Lae
            byte[] r1 = r1.getOctets()     // Catch: java.lang.Exception -> Lae
            r2.add(r1)     // Catch: java.lang.Exception -> Lae
            goto L8c
        L6b:
            org.bouncycastle.asn1.DEREncodable r1 = r1.getName()     // Catch: java.lang.Exception -> Lae
            org.bouncycastle.asn1.x509.X509Name r1 = org.bouncycastle.asn1.x509.X509Name.getInstance(r1)     // Catch: java.lang.Exception -> Lae
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Exception -> Lae
            goto L57
        L78:
            org.bouncycastle.asn1.DEREncodable r1 = r1.getName()     // Catch: java.lang.Exception -> Lae
            org.bouncycastle.asn1.DERString r1 = (org.bouncycastle.asn1.DERString) r1     // Catch: java.lang.Exception -> Lae
            java.lang.String r1 = r1.getString()     // Catch: java.lang.Exception -> Lae
            goto L57
        L83:
            org.bouncycastle.asn1.DEREncodable r1 = r1.getName()     // Catch: java.lang.Exception -> Lae
            org.bouncycastle.asn1.DERObject r1 = r1.getDERObject()     // Catch: java.lang.Exception -> Lae
            goto L57
        L8c:
            r0.add(r2)     // Catch: java.lang.Exception -> Lae
            goto L22
        L90:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Lae
            r0.<init>()     // Catch: java.lang.Exception -> Lae
            java.lang.String r2 = "Bad tag number: "
            r0.append(r2)     // Catch: java.lang.Exception -> Lae
            int r1 = r1.getTagNo()     // Catch: java.lang.Exception -> Lae
            r0.append(r1)     // Catch: java.lang.Exception -> Lae
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Exception -> Lae
            r5.<init>(r0)     // Catch: java.lang.Exception -> Lae
            throw r5     // Catch: java.lang.Exception -> Lae
        La9:
            java.util.Collection r5 = java.util.Collections.unmodifiableCollection(r0)
            return r5
        Lae:
            r5 = move-exception
            java.security.cert.CertificateParsingException r0 = new java.security.cert.CertificateParsingException
            java.lang.String r5 = r5.getMessage()
            r0.<init>(r5)
            throw r0
    }

    public static java.util.Collection getIssuerAlternativeNames(java.security.cert.X509Certificate r1) throws java.security.cert.CertificateParsingException {
            org.bouncycastle.asn1.DERObjectIdentifier r0 = org.bouncycastle.asn1.x509.X509Extensions.IssuerAlternativeName
            java.lang.String r0 = r0.getId()
            byte[] r1 = r1.getExtensionValue(r0)
            java.util.Collection r1 = getAlternativeName(r1)
            return r1
    }

    public static java.util.Collection getSubjectAlternativeNames(java.security.cert.X509Certificate r1) throws java.security.cert.CertificateParsingException {
            org.bouncycastle.asn1.DERObjectIdentifier r0 = org.bouncycastle.asn1.x509.X509Extensions.SubjectAlternativeName
            java.lang.String r0 = r0.getId()
            byte[] r1 = r1.getExtensionValue(r0)
            java.util.Collection r1 = getAlternativeName(r1)
            return r1
    }
}
