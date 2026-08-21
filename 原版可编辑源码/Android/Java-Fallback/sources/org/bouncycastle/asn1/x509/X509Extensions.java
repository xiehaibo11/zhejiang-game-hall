package org.bouncycastle.asn1.x509;

public class X509Extensions extends org.bouncycastle.asn1.ASN1Encodable {
    public static final org.bouncycastle.asn1.DERObjectIdentifier AuditIdentity = null;
    public static final org.bouncycastle.asn1.DERObjectIdentifier AuthorityInfoAccess = null;
    public static final org.bouncycastle.asn1.DERObjectIdentifier AuthorityKeyIdentifier = null;
    public static final org.bouncycastle.asn1.DERObjectIdentifier BasicConstraints = null;
    public static final org.bouncycastle.asn1.DERObjectIdentifier BiometricInfo = null;
    public static final org.bouncycastle.asn1.DERObjectIdentifier CRLDistributionPoints = null;
    public static final org.bouncycastle.asn1.DERObjectIdentifier CRLNumber = null;
    public static final org.bouncycastle.asn1.DERObjectIdentifier CertificateIssuer = null;
    public static final org.bouncycastle.asn1.DERObjectIdentifier CertificatePolicies = null;
    public static final org.bouncycastle.asn1.DERObjectIdentifier DeltaCRLIndicator = null;
    public static final org.bouncycastle.asn1.DERObjectIdentifier ExtendedKeyUsage = null;
    public static final org.bouncycastle.asn1.DERObjectIdentifier FreshestCRL = null;
    public static final org.bouncycastle.asn1.DERObjectIdentifier InhibitAnyPolicy = null;
    public static final org.bouncycastle.asn1.DERObjectIdentifier InstructionCode = null;
    public static final org.bouncycastle.asn1.DERObjectIdentifier InvalidityDate = null;
    public static final org.bouncycastle.asn1.DERObjectIdentifier IssuerAlternativeName = null;
    public static final org.bouncycastle.asn1.DERObjectIdentifier IssuingDistributionPoint = null;
    public static final org.bouncycastle.asn1.DERObjectIdentifier KeyUsage = null;
    public static final org.bouncycastle.asn1.DERObjectIdentifier LogoType = null;
    public static final org.bouncycastle.asn1.DERObjectIdentifier NameConstraints = null;
    public static final org.bouncycastle.asn1.DERObjectIdentifier NoRevAvail = null;
    public static final org.bouncycastle.asn1.DERObjectIdentifier PolicyConstraints = null;
    public static final org.bouncycastle.asn1.DERObjectIdentifier PolicyMappings = null;
    public static final org.bouncycastle.asn1.DERObjectIdentifier PrivateKeyUsagePeriod = null;
    public static final org.bouncycastle.asn1.DERObjectIdentifier QCStatements = null;
    public static final org.bouncycastle.asn1.DERObjectIdentifier ReasonCode = null;
    public static final org.bouncycastle.asn1.DERObjectIdentifier SubjectAlternativeName = null;
    public static final org.bouncycastle.asn1.DERObjectIdentifier SubjectDirectoryAttributes = null;
    public static final org.bouncycastle.asn1.DERObjectIdentifier SubjectInfoAccess = null;
    public static final org.bouncycastle.asn1.DERObjectIdentifier SubjectKeyIdentifier = null;
    public static final org.bouncycastle.asn1.DERObjectIdentifier TargetInformation = null;
    private java.util.Hashtable extensions;
    private java.util.Vector ordering;

    static {
            org.bouncycastle.asn1.DERObjectIdentifier r0 = new org.bouncycastle.asn1.DERObjectIdentifier
            java.lang.String r1 = "2.5.29.9"
            r0.<init>(r1)
            org.bouncycastle.asn1.x509.X509Extensions.SubjectDirectoryAttributes = r0
            org.bouncycastle.asn1.DERObjectIdentifier r0 = new org.bouncycastle.asn1.DERObjectIdentifier
            java.lang.String r1 = "2.5.29.14"
            r0.<init>(r1)
            org.bouncycastle.asn1.x509.X509Extensions.SubjectKeyIdentifier = r0
            org.bouncycastle.asn1.DERObjectIdentifier r0 = new org.bouncycastle.asn1.DERObjectIdentifier
            java.lang.String r1 = "2.5.29.15"
            r0.<init>(r1)
            org.bouncycastle.asn1.x509.X509Extensions.KeyUsage = r0
            org.bouncycastle.asn1.DERObjectIdentifier r0 = new org.bouncycastle.asn1.DERObjectIdentifier
            java.lang.String r1 = "2.5.29.16"
            r0.<init>(r1)
            org.bouncycastle.asn1.x509.X509Extensions.PrivateKeyUsagePeriod = r0
            org.bouncycastle.asn1.DERObjectIdentifier r0 = new org.bouncycastle.asn1.DERObjectIdentifier
            java.lang.String r1 = "2.5.29.17"
            r0.<init>(r1)
            org.bouncycastle.asn1.x509.X509Extensions.SubjectAlternativeName = r0
            org.bouncycastle.asn1.DERObjectIdentifier r0 = new org.bouncycastle.asn1.DERObjectIdentifier
            java.lang.String r1 = "2.5.29.18"
            r0.<init>(r1)
            org.bouncycastle.asn1.x509.X509Extensions.IssuerAlternativeName = r0
            org.bouncycastle.asn1.DERObjectIdentifier r0 = new org.bouncycastle.asn1.DERObjectIdentifier
            java.lang.String r1 = "2.5.29.19"
            r0.<init>(r1)
            org.bouncycastle.asn1.x509.X509Extensions.BasicConstraints = r0
            org.bouncycastle.asn1.DERObjectIdentifier r0 = new org.bouncycastle.asn1.DERObjectIdentifier
            java.lang.String r1 = "2.5.29.20"
            r0.<init>(r1)
            org.bouncycastle.asn1.x509.X509Extensions.CRLNumber = r0
            org.bouncycastle.asn1.DERObjectIdentifier r0 = new org.bouncycastle.asn1.DERObjectIdentifier
            java.lang.String r1 = "2.5.29.21"
            r0.<init>(r1)
            org.bouncycastle.asn1.x509.X509Extensions.ReasonCode = r0
            org.bouncycastle.asn1.DERObjectIdentifier r0 = new org.bouncycastle.asn1.DERObjectIdentifier
            java.lang.String r1 = "2.5.29.23"
            r0.<init>(r1)
            org.bouncycastle.asn1.x509.X509Extensions.InstructionCode = r0
            org.bouncycastle.asn1.DERObjectIdentifier r0 = new org.bouncycastle.asn1.DERObjectIdentifier
            java.lang.String r1 = "2.5.29.24"
            r0.<init>(r1)
            org.bouncycastle.asn1.x509.X509Extensions.InvalidityDate = r0
            org.bouncycastle.asn1.DERObjectIdentifier r0 = new org.bouncycastle.asn1.DERObjectIdentifier
            java.lang.String r1 = "2.5.29.27"
            r0.<init>(r1)
            org.bouncycastle.asn1.x509.X509Extensions.DeltaCRLIndicator = r0
            org.bouncycastle.asn1.DERObjectIdentifier r0 = new org.bouncycastle.asn1.DERObjectIdentifier
            java.lang.String r1 = "2.5.29.28"
            r0.<init>(r1)
            org.bouncycastle.asn1.x509.X509Extensions.IssuingDistributionPoint = r0
            org.bouncycastle.asn1.DERObjectIdentifier r0 = new org.bouncycastle.asn1.DERObjectIdentifier
            java.lang.String r1 = "2.5.29.29"
            r0.<init>(r1)
            org.bouncycastle.asn1.x509.X509Extensions.CertificateIssuer = r0
            org.bouncycastle.asn1.DERObjectIdentifier r0 = new org.bouncycastle.asn1.DERObjectIdentifier
            java.lang.String r1 = "2.5.29.30"
            r0.<init>(r1)
            org.bouncycastle.asn1.x509.X509Extensions.NameConstraints = r0
            org.bouncycastle.asn1.DERObjectIdentifier r0 = new org.bouncycastle.asn1.DERObjectIdentifier
            java.lang.String r1 = "2.5.29.31"
            r0.<init>(r1)
            org.bouncycastle.asn1.x509.X509Extensions.CRLDistributionPoints = r0
            org.bouncycastle.asn1.DERObjectIdentifier r0 = new org.bouncycastle.asn1.DERObjectIdentifier
            java.lang.String r1 = "2.5.29.32"
            r0.<init>(r1)
            org.bouncycastle.asn1.x509.X509Extensions.CertificatePolicies = r0
            org.bouncycastle.asn1.DERObjectIdentifier r0 = new org.bouncycastle.asn1.DERObjectIdentifier
            java.lang.String r1 = "2.5.29.33"
            r0.<init>(r1)
            org.bouncycastle.asn1.x509.X509Extensions.PolicyMappings = r0
            org.bouncycastle.asn1.DERObjectIdentifier r0 = new org.bouncycastle.asn1.DERObjectIdentifier
            java.lang.String r1 = "2.5.29.35"
            r0.<init>(r1)
            org.bouncycastle.asn1.x509.X509Extensions.AuthorityKeyIdentifier = r0
            org.bouncycastle.asn1.DERObjectIdentifier r0 = new org.bouncycastle.asn1.DERObjectIdentifier
            java.lang.String r1 = "2.5.29.36"
            r0.<init>(r1)
            org.bouncycastle.asn1.x509.X509Extensions.PolicyConstraints = r0
            org.bouncycastle.asn1.DERObjectIdentifier r0 = new org.bouncycastle.asn1.DERObjectIdentifier
            java.lang.String r1 = "2.5.29.37"
            r0.<init>(r1)
            org.bouncycastle.asn1.x509.X509Extensions.ExtendedKeyUsage = r0
            org.bouncycastle.asn1.DERObjectIdentifier r0 = new org.bouncycastle.asn1.DERObjectIdentifier
            java.lang.String r1 = "2.5.29.46"
            r0.<init>(r1)
            org.bouncycastle.asn1.x509.X509Extensions.FreshestCRL = r0
            org.bouncycastle.asn1.DERObjectIdentifier r0 = new org.bouncycastle.asn1.DERObjectIdentifier
            java.lang.String r1 = "2.5.29.54"
            r0.<init>(r1)
            org.bouncycastle.asn1.x509.X509Extensions.InhibitAnyPolicy = r0
            org.bouncycastle.asn1.DERObjectIdentifier r0 = new org.bouncycastle.asn1.DERObjectIdentifier
            java.lang.String r1 = "1.3.6.1.5.5.7.1.1"
            r0.<init>(r1)
            org.bouncycastle.asn1.x509.X509Extensions.AuthorityInfoAccess = r0
            org.bouncycastle.asn1.DERObjectIdentifier r0 = new org.bouncycastle.asn1.DERObjectIdentifier
            java.lang.String r1 = "1.3.6.1.5.5.7.1.11"
            r0.<init>(r1)
            org.bouncycastle.asn1.x509.X509Extensions.SubjectInfoAccess = r0
            org.bouncycastle.asn1.DERObjectIdentifier r0 = new org.bouncycastle.asn1.DERObjectIdentifier
            java.lang.String r1 = "1.3.6.1.5.5.7.1.12"
            r0.<init>(r1)
            org.bouncycastle.asn1.x509.X509Extensions.LogoType = r0
            org.bouncycastle.asn1.DERObjectIdentifier r0 = new org.bouncycastle.asn1.DERObjectIdentifier
            java.lang.String r1 = "1.3.6.1.5.5.7.1.2"
            r0.<init>(r1)
            org.bouncycastle.asn1.x509.X509Extensions.BiometricInfo = r0
            org.bouncycastle.asn1.DERObjectIdentifier r0 = new org.bouncycastle.asn1.DERObjectIdentifier
            java.lang.String r1 = "1.3.6.1.5.5.7.1.3"
            r0.<init>(r1)
            org.bouncycastle.asn1.x509.X509Extensions.QCStatements = r0
            org.bouncycastle.asn1.DERObjectIdentifier r0 = new org.bouncycastle.asn1.DERObjectIdentifier
            java.lang.String r1 = "1.3.6.1.5.5.7.1.4"
            r0.<init>(r1)
            org.bouncycastle.asn1.x509.X509Extensions.AuditIdentity = r0
            org.bouncycastle.asn1.DERObjectIdentifier r0 = new org.bouncycastle.asn1.DERObjectIdentifier
            java.lang.String r1 = "2.5.29.56"
            r0.<init>(r1)
            org.bouncycastle.asn1.x509.X509Extensions.NoRevAvail = r0
            org.bouncycastle.asn1.DERObjectIdentifier r0 = new org.bouncycastle.asn1.DERObjectIdentifier
            java.lang.String r1 = "2.5.29.55"
            r0.<init>(r1)
            org.bouncycastle.asn1.x509.X509Extensions.TargetInformation = r0
            return
    }

    public X509Extensions(java.util.Hashtable r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r0, r2)
            return
    }

    public X509Extensions(java.util.Vector r4, java.util.Hashtable r5) {
            r3 = this;
            r3.<init>()
            java.util.Hashtable r0 = new java.util.Hashtable
            r0.<init>()
            r3.extensions = r0
            java.util.Vector r0 = new java.util.Vector
            r0.<init>()
            r3.ordering = r0
            if (r4 != 0) goto L18
            java.util.Enumeration r4 = r5.keys()
            goto L1c
        L18:
            java.util.Enumeration r4 = r4.elements()
        L1c:
            boolean r0 = r4.hasMoreElements()
            if (r0 == 0) goto L2c
            java.util.Vector r0 = r3.ordering
            java.lang.Object r1 = r4.nextElement()
            r0.addElement(r1)
            goto L1c
        L2c:
            java.util.Vector r4 = r3.ordering
            java.util.Enumeration r4 = r4.elements()
        L32:
            boolean r0 = r4.hasMoreElements()
            if (r0 == 0) goto L4a
            java.lang.Object r0 = r4.nextElement()
            org.bouncycastle.asn1.DERObjectIdentifier r0 = (org.bouncycastle.asn1.DERObjectIdentifier) r0
            java.lang.Object r1 = r5.get(r0)
            org.bouncycastle.asn1.x509.X509Extension r1 = (org.bouncycastle.asn1.x509.X509Extension) r1
            java.util.Hashtable r2 = r3.extensions
            r2.put(r0, r1)
            goto L32
        L4a:
            return
    }

    public X509Extensions(java.util.Vector r5, java.util.Vector r6) {
            r4 = this;
            r4.<init>()
            java.util.Hashtable r0 = new java.util.Hashtable
            r0.<init>()
            r4.extensions = r0
            java.util.Vector r0 = new java.util.Vector
            r0.<init>()
            r4.ordering = r0
            java.util.Enumeration r5 = r5.elements()
        L15:
            boolean r0 = r5.hasMoreElements()
            if (r0 == 0) goto L25
            java.util.Vector r0 = r4.ordering
            java.lang.Object r1 = r5.nextElement()
            r0.addElement(r1)
            goto L15
        L25:
            r5 = 0
            java.util.Vector r0 = r4.ordering
            java.util.Enumeration r0 = r0.elements()
        L2c:
            boolean r1 = r0.hasMoreElements()
            if (r1 == 0) goto L46
            java.lang.Object r1 = r0.nextElement()
            org.bouncycastle.asn1.DERObjectIdentifier r1 = (org.bouncycastle.asn1.DERObjectIdentifier) r1
            java.lang.Object r2 = r6.elementAt(r5)
            org.bouncycastle.asn1.x509.X509Extension r2 = (org.bouncycastle.asn1.x509.X509Extension) r2
            java.util.Hashtable r3 = r4.extensions
            r3.put(r1, r2)
            int r5 = r5 + 1
            goto L2c
        L46:
            return
    }

    public X509Extensions(org.bouncycastle.asn1.ASN1Sequence r8) {
            r7 = this;
            r7.<init>()
            java.util.Hashtable r0 = new java.util.Hashtable
            r0.<init>()
            r7.extensions = r0
            java.util.Vector r0 = new java.util.Vector
            r0.<init>()
            r7.ordering = r0
            java.util.Enumeration r8 = r8.getObjects()
        L15:
            boolean r0 = r8.hasMoreElements()
            if (r0 == 0) goto L8d
            java.lang.Object r0 = r8.nextElement()
            org.bouncycastle.asn1.ASN1Sequence r0 = org.bouncycastle.asn1.ASN1Sequence.getInstance(r0)
            int r1 = r0.size()
            r2 = 3
            r3 = 1
            r4 = 2
            r5 = 0
            if (r1 != r2) goto L4c
            java.util.Hashtable r1 = r7.extensions
            org.bouncycastle.asn1.DEREncodable r2 = r0.getObjectAt(r5)
            org.bouncycastle.asn1.x509.X509Extension r6 = new org.bouncycastle.asn1.x509.X509Extension
            org.bouncycastle.asn1.DEREncodable r3 = r0.getObjectAt(r3)
            org.bouncycastle.asn1.DERBoolean r3 = org.bouncycastle.asn1.DERBoolean.getInstance(r3)
            org.bouncycastle.asn1.DEREncodable r4 = r0.getObjectAt(r4)
            org.bouncycastle.asn1.ASN1OctetString r4 = org.bouncycastle.asn1.ASN1OctetString.getInstance(r4)
            r6.<init>(r3, r4)
            r1.put(r2, r6)
            goto L68
        L4c:
            int r1 = r0.size()
            if (r1 != r4) goto L72
            java.util.Hashtable r1 = r7.extensions
            org.bouncycastle.asn1.DEREncodable r2 = r0.getObjectAt(r5)
            org.bouncycastle.asn1.x509.X509Extension r4 = new org.bouncycastle.asn1.x509.X509Extension
            org.bouncycastle.asn1.DEREncodable r3 = r0.getObjectAt(r3)
            org.bouncycastle.asn1.ASN1OctetString r3 = org.bouncycastle.asn1.ASN1OctetString.getInstance(r3)
            r4.<init>(r5, r3)
            r1.put(r2, r4)
        L68:
            java.util.Vector r1 = r7.ordering
            org.bouncycastle.asn1.DEREncodable r0 = r0.getObjectAt(r5)
            r1.addElement(r0)
            goto L15
        L72:
            java.lang.IllegalArgumentException r8 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Bad sequence size: "
            r1.append(r2)
            int r0 = r0.size()
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            r8.<init>(r0)
            throw r8
        L8d:
            return
    }

    public static org.bouncycastle.asn1.x509.X509Extensions getInstance(java.lang.Object r3) {
            if (r3 == 0) goto L41
            boolean r0 = r3 instanceof org.bouncycastle.asn1.x509.X509Extensions
            if (r0 == 0) goto L7
            goto L41
        L7:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ASN1Sequence
            if (r0 == 0) goto L13
            org.bouncycastle.asn1.x509.X509Extensions r0 = new org.bouncycastle.asn1.x509.X509Extensions
            org.bouncycastle.asn1.ASN1Sequence r3 = (org.bouncycastle.asn1.ASN1Sequence) r3
            r0.<init>(r3)
            return r0
        L13:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ASN1TaggedObject
            if (r0 == 0) goto L22
            org.bouncycastle.asn1.ASN1TaggedObject r3 = (org.bouncycastle.asn1.ASN1TaggedObject) r3
            org.bouncycastle.asn1.DERObject r3 = r3.getObject()
            org.bouncycastle.asn1.x509.X509Extensions r3 = getInstance(r3)
            return r3
        L22:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "illegal object in getInstance: "
            r1.append(r2)
            java.lang.Class r3 = r3.getClass()
            java.lang.String r3 = r3.getName()
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            r0.<init>(r3)
            throw r0
        L41:
            org.bouncycastle.asn1.x509.X509Extensions r3 = (org.bouncycastle.asn1.x509.X509Extensions) r3
            return r3
    }

    public static org.bouncycastle.asn1.x509.X509Extensions getInstance(org.bouncycastle.asn1.ASN1TaggedObject r0, boolean r1) {
            org.bouncycastle.asn1.ASN1Sequence r0 = org.bouncycastle.asn1.ASN1Sequence.getInstance(r0, r1)
            org.bouncycastle.asn1.x509.X509Extensions r0 = getInstance(r0)
            return r0
    }

    public boolean equivalent(org.bouncycastle.asn1.x509.X509Extensions r6) {
            r5 = this;
            java.util.Hashtable r0 = r5.extensions
            int r0 = r0.size()
            java.util.Hashtable r1 = r6.extensions
            int r1 = r1.size()
            r2 = 0
            if (r0 == r1) goto L10
            return r2
        L10:
            java.util.Hashtable r0 = r5.extensions
            java.util.Enumeration r0 = r0.keys()
        L16:
            boolean r1 = r0.hasMoreElements()
            if (r1 == 0) goto L33
            java.lang.Object r1 = r0.nextElement()
            java.util.Hashtable r3 = r5.extensions
            java.lang.Object r3 = r3.get(r1)
            java.util.Hashtable r4 = r6.extensions
            java.lang.Object r1 = r4.get(r1)
            boolean r1 = r3.equals(r1)
            if (r1 != 0) goto L16
            return r2
        L33:
            r6 = 1
            return r6
    }

    public org.bouncycastle.asn1.x509.X509Extension getExtension(org.bouncycastle.asn1.DERObjectIdentifier r2) {
            r1 = this;
            java.util.Hashtable r0 = r1.extensions
            java.lang.Object r2 = r0.get(r2)
            org.bouncycastle.asn1.x509.X509Extension r2 = (org.bouncycastle.asn1.x509.X509Extension) r2
            return r2
    }

    public java.util.Enumeration oids() {
            r1 = this;
            java.util.Vector r0 = r1.ordering
            java.util.Enumeration r0 = r0.elements()
            return r0
    }

    @Override
    public org.bouncycastle.asn1.DERObject toASN1Object() {
            r6 = this;
            org.bouncycastle.asn1.ASN1EncodableVector r0 = new org.bouncycastle.asn1.ASN1EncodableVector
            r0.<init>()
            java.util.Vector r1 = r6.ordering
            java.util.Enumeration r1 = r1.elements()
        Lb:
            boolean r2 = r1.hasMoreElements()
            if (r2 == 0) goto L46
            java.lang.Object r2 = r1.nextElement()
            org.bouncycastle.asn1.DERObjectIdentifier r2 = (org.bouncycastle.asn1.DERObjectIdentifier) r2
            java.util.Hashtable r3 = r6.extensions
            java.lang.Object r3 = r3.get(r2)
            org.bouncycastle.asn1.x509.X509Extension r3 = (org.bouncycastle.asn1.x509.X509Extension) r3
            org.bouncycastle.asn1.ASN1EncodableVector r4 = new org.bouncycastle.asn1.ASN1EncodableVector
            r4.<init>()
            r4.add(r2)
            boolean r2 = r3.isCritical()
            if (r2 == 0) goto L36
            org.bouncycastle.asn1.DERBoolean r2 = new org.bouncycastle.asn1.DERBoolean
            r5 = 1
            r2.<init>(r5)
            r4.add(r2)
        L36:
            org.bouncycastle.asn1.ASN1OctetString r2 = r3.getValue()
            r4.add(r2)
            org.bouncycastle.asn1.DERSequence r2 = new org.bouncycastle.asn1.DERSequence
            r2.<init>(r4)
            r0.add(r2)
            goto Lb
        L46:
            org.bouncycastle.asn1.DERSequence r1 = new org.bouncycastle.asn1.DERSequence
            r1.<init>(r0)
            return r1
    }
}
