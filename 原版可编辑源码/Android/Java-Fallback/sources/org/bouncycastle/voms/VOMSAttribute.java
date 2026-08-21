package org.bouncycastle.voms;

public class VOMSAttribute {
    public static final java.lang.String VOMS_ATTR_OID = "1.3.6.1.4.1.8005.100.100.4";
    private org.bouncycastle.x509.X509AttributeCertificate myAC;
    private java.util.Vector myFQANs;
    private java.lang.String myHostPort;
    private java.util.Vector myStringList;
    private java.lang.String myVo;

    public class FQAN {
        java.lang.String capability;
        java.lang.String fqan;
        java.lang.String group;
        java.lang.String role;
        final org.bouncycastle.voms.VOMSAttribute this$0;

        public FQAN(org.bouncycastle.voms.VOMSAttribute r1, java.lang.String r2) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>()
                r0.fqan = r2
                return
        }

        public FQAN(org.bouncycastle.voms.VOMSAttribute r1, java.lang.String r2, java.lang.String r3, java.lang.String r4) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>()
                r0.group = r2
                r0.role = r3
                r0.capability = r4
                return
        }

        public java.lang.String getCapability() {
                r1 = this;
                java.lang.String r0 = r1.group
                if (r0 != 0) goto Lb
                java.lang.String r0 = r1.fqan
                if (r0 == 0) goto Lb
                r1.split()
            Lb:
                java.lang.String r0 = r1.capability
                return r0
        }

        public java.lang.String getFQAN() {
                r3 = this;
                java.lang.String r0 = r3.fqan
                if (r0 == 0) goto L5
                return r0
            L5:
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = r3.group
                r0.append(r1)
                java.lang.String r1 = "/Role="
                r0.append(r1)
                java.lang.String r1 = r3.role
                java.lang.String r2 = ""
                if (r1 == 0) goto L1b
                goto L1c
            L1b:
                r1 = r2
            L1c:
                r0.append(r1)
                java.lang.String r1 = r3.capability
                if (r1 == 0) goto L36
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                r1.<init>()
                java.lang.String r2 = "/Capability="
                r1.append(r2)
                java.lang.String r2 = r3.capability
                r1.append(r2)
                java.lang.String r2 = r1.toString()
            L36:
                r0.append(r2)
                java.lang.String r0 = r0.toString()
                r3.fqan = r0
                return r0
        }

        public java.lang.String getGroup() {
                r1 = this;
                java.lang.String r0 = r1.group
                if (r0 != 0) goto Lb
                java.lang.String r0 = r1.fqan
                if (r0 == 0) goto Lb
                r1.split()
            Lb:
                java.lang.String r0 = r1.group
                return r0
        }

        public java.lang.String getRole() {
                r1 = this;
                java.lang.String r0 = r1.group
                if (r0 != 0) goto Lb
                java.lang.String r0 = r1.fqan
                if (r0 == 0) goto Lb
                r1.split()
            Lb:
                java.lang.String r0 = r1.role
                return r0
        }

        protected void split() {
                r4 = this;
                java.lang.String r0 = r4.fqan
                r0.length()
                java.lang.String r0 = r4.fqan
                java.lang.String r1 = "/Role="
                int r0 = r0.indexOf(r1)
                if (r0 >= 0) goto L10
                return
            L10:
                java.lang.String r1 = r4.fqan
                r2 = 0
                java.lang.String r1 = r1.substring(r2, r0)
                r4.group = r1
                java.lang.String r1 = r4.fqan
                int r0 = r0 + 6
                java.lang.String r2 = "/Capability="
                int r1 = r1.indexOf(r2, r0)
                java.lang.String r2 = r4.fqan
                if (r1 >= 0) goto L2c
                java.lang.String r0 = r2.substring(r0)
                goto L30
            L2c:
                java.lang.String r0 = r2.substring(r0, r1)
            L30:
                int r2 = r0.length()
                r3 = 0
                if (r2 != 0) goto L38
                r0 = r3
            L38:
                r4.role = r0
                if (r1 >= 0) goto L3e
                r0 = r3
                goto L46
            L3e:
                java.lang.String r0 = r4.fqan
                int r1 = r1 + 12
                java.lang.String r0 = r0.substring(r1)
            L46:
                if (r0 == 0) goto L50
                int r1 = r0.length()
                if (r1 != 0) goto L4f
                goto L50
            L4f:
                r3 = r0
            L50:
                r4.capability = r3
                return
        }

        public java.lang.String toString() {
                r1 = this;
                java.lang.String r0 = r1.getFQAN()
                return r0
        }
    }

    public VOMSAttribute(org.bouncycastle.x509.X509AttributeCertificate r11) {
            r10 = this;
            java.lang.String r0 = "/"
            r10.<init>()
            java.util.Vector r1 = new java.util.Vector
            r1.<init>()
            r10.myStringList = r1
            java.util.Vector r1 = new java.util.Vector
            r1.<init>()
            r10.myFQANs = r1
            if (r11 == 0) goto L114
            r10.myAC = r11
            java.lang.String r1 = "1.3.6.1.4.1.8005.100.100.4"
            org.bouncycastle.x509.X509Attribute[] r1 = r11.getAttributes(r1)
            if (r1 != 0) goto L20
            return
        L20:
            r2 = 0
            r3 = 0
        L22:
            int r4 = r1.length     // Catch: java.lang.Exception -> Lf7 java.lang.IllegalArgumentException -> L112
            if (r3 == r4) goto Lf6
            org.bouncycastle.asn1.x509.IetfAttrSyntax r4 = new org.bouncycastle.asn1.x509.IetfAttrSyntax     // Catch: java.lang.Exception -> Lf7 java.lang.IllegalArgumentException -> L112
            r5 = r1[r3]     // Catch: java.lang.Exception -> Lf7 java.lang.IllegalArgumentException -> L112
            org.bouncycastle.asn1.ASN1Encodable[] r5 = r5.getValues()     // Catch: java.lang.Exception -> Lf7 java.lang.IllegalArgumentException -> L112
            r5 = r5[r2]     // Catch: java.lang.Exception -> Lf7 java.lang.IllegalArgumentException -> L112
            org.bouncycastle.asn1.ASN1Sequence r5 = (org.bouncycastle.asn1.ASN1Sequence) r5     // Catch: java.lang.Exception -> Lf7 java.lang.IllegalArgumentException -> L112
            r4.<init>(r5)     // Catch: java.lang.Exception -> Lf7 java.lang.IllegalArgumentException -> L112
            org.bouncycastle.asn1.x509.GeneralNames r5 = r4.getPolicyAuthority()     // Catch: java.lang.Exception -> Lf7 java.lang.IllegalArgumentException -> L112
            org.bouncycastle.asn1.DERObject r5 = r5.getDERObject()     // Catch: java.lang.Exception -> Lf7 java.lang.IllegalArgumentException -> L112
            org.bouncycastle.asn1.ASN1Sequence r5 = (org.bouncycastle.asn1.ASN1Sequence) r5     // Catch: java.lang.Exception -> Lf7 java.lang.IllegalArgumentException -> L112
            org.bouncycastle.asn1.DEREncodable r5 = r5.getObjectAt(r2)     // Catch: java.lang.Exception -> Lf7 java.lang.IllegalArgumentException -> L112
            org.bouncycastle.asn1.x509.GeneralName r5 = org.bouncycastle.asn1.x509.GeneralName.getInstance(r5)     // Catch: java.lang.Exception -> Lf7 java.lang.IllegalArgumentException -> L112
            org.bouncycastle.asn1.DEREncodable r5 = r5.getName()     // Catch: java.lang.Exception -> Lf7 java.lang.IllegalArgumentException -> L112
            org.bouncycastle.asn1.DERIA5String r5 = (org.bouncycastle.asn1.DERIA5String) r5     // Catch: java.lang.Exception -> Lf7 java.lang.IllegalArgumentException -> L112
            java.lang.String r5 = r5.getString()     // Catch: java.lang.Exception -> Lf7 java.lang.IllegalArgumentException -> L112
            java.lang.String r6 = "://"
            int r6 = r5.indexOf(r6)     // Catch: java.lang.Exception -> Lf7 java.lang.IllegalArgumentException -> L112
            if (r6 < 0) goto Lda
            int r7 = r5.length()     // Catch: java.lang.Exception -> Lf7 java.lang.IllegalArgumentException -> L112
            r8 = 1
            int r7 = r7 - r8
            if (r6 == r7) goto Lda
            java.lang.String r7 = r5.substring(r2, r6)     // Catch: java.lang.Exception -> Lf7 java.lang.IllegalArgumentException -> L112
            r10.myVo = r7     // Catch: java.lang.Exception -> Lf7 java.lang.IllegalArgumentException -> L112
            int r6 = r6 + 3
            java.lang.String r6 = r5.substring(r6)     // Catch: java.lang.Exception -> Lf7 java.lang.IllegalArgumentException -> L112
            r10.myHostPort = r6     // Catch: java.lang.Exception -> Lf7 java.lang.IllegalArgumentException -> L112
            int r6 = r4.getValueType()     // Catch: java.lang.Exception -> Lf7 java.lang.IllegalArgumentException -> L112
            if (r6 != r8) goto Lc3
            java.lang.Object[] r4 = r4.getValues()     // Catch: java.lang.Exception -> Lf7 java.lang.IllegalArgumentException -> L112
            org.bouncycastle.asn1.ASN1OctetString[] r4 = (org.bouncycastle.asn1.ASN1OctetString[]) r4     // Catch: java.lang.Exception -> Lf7 java.lang.IllegalArgumentException -> L112
            org.bouncycastle.asn1.ASN1OctetString[] r4 = (org.bouncycastle.asn1.ASN1OctetString[]) r4     // Catch: java.lang.Exception -> Lf7 java.lang.IllegalArgumentException -> L112
            r5 = 0
        L7d:
            int r6 = r4.length     // Catch: java.lang.Exception -> Lf7 java.lang.IllegalArgumentException -> L112
            if (r5 == r6) goto Lbf
            java.lang.String r6 = new java.lang.String     // Catch: java.lang.Exception -> Lf7 java.lang.IllegalArgumentException -> L112
            r7 = r4[r5]     // Catch: java.lang.Exception -> Lf7 java.lang.IllegalArgumentException -> L112
            byte[] r7 = r7.getOctets()     // Catch: java.lang.Exception -> Lf7 java.lang.IllegalArgumentException -> L112
            r6.<init>(r7)     // Catch: java.lang.Exception -> Lf7 java.lang.IllegalArgumentException -> L112
            org.bouncycastle.voms.VOMSAttribute$FQAN r7 = new org.bouncycastle.voms.VOMSAttribute$FQAN     // Catch: java.lang.Exception -> Lf7 java.lang.IllegalArgumentException -> L112
            r7.<init>(r10, r6)     // Catch: java.lang.Exception -> Lf7 java.lang.IllegalArgumentException -> L112
            java.util.Vector r8 = r10.myStringList     // Catch: java.lang.Exception -> Lf7 java.lang.IllegalArgumentException -> L112
            boolean r8 = r8.contains(r6)     // Catch: java.lang.Exception -> Lf7 java.lang.IllegalArgumentException -> L112
            if (r8 != 0) goto Lbc
            java.lang.StringBuilder r8 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Lf7 java.lang.IllegalArgumentException -> L112
            r8.<init>()     // Catch: java.lang.Exception -> Lf7 java.lang.IllegalArgumentException -> L112
            r8.append(r0)     // Catch: java.lang.Exception -> Lf7 java.lang.IllegalArgumentException -> L112
            java.lang.String r9 = r10.myVo     // Catch: java.lang.Exception -> Lf7 java.lang.IllegalArgumentException -> L112
            r8.append(r9)     // Catch: java.lang.Exception -> Lf7 java.lang.IllegalArgumentException -> L112
            r8.append(r0)     // Catch: java.lang.Exception -> Lf7 java.lang.IllegalArgumentException -> L112
            java.lang.String r8 = r8.toString()     // Catch: java.lang.Exception -> Lf7 java.lang.IllegalArgumentException -> L112
            boolean r8 = r6.startsWith(r8)     // Catch: java.lang.Exception -> Lf7 java.lang.IllegalArgumentException -> L112
            if (r8 == 0) goto Lbc
            java.util.Vector r8 = r10.myStringList     // Catch: java.lang.Exception -> Lf7 java.lang.IllegalArgumentException -> L112
            r8.add(r6)     // Catch: java.lang.Exception -> Lf7 java.lang.IllegalArgumentException -> L112
            java.util.Vector r6 = r10.myFQANs     // Catch: java.lang.Exception -> Lf7 java.lang.IllegalArgumentException -> L112
            r6.add(r7)     // Catch: java.lang.Exception -> Lf7 java.lang.IllegalArgumentException -> L112
        Lbc:
            int r5 = r5 + 1
            goto L7d
        Lbf:
            int r3 = r3 + 1
            goto L22
        Lc3:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException     // Catch: java.lang.Exception -> Lf7 java.lang.IllegalArgumentException -> L112
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Lf7 java.lang.IllegalArgumentException -> L112
            r1.<init>()     // Catch: java.lang.Exception -> Lf7 java.lang.IllegalArgumentException -> L112
            java.lang.String r2 = "VOMS attribute values are not encoded as octet strings, policyAuthority = "
            r1.append(r2)     // Catch: java.lang.Exception -> Lf7 java.lang.IllegalArgumentException -> L112
            r1.append(r5)     // Catch: java.lang.Exception -> Lf7 java.lang.IllegalArgumentException -> L112
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Exception -> Lf7 java.lang.IllegalArgumentException -> L112
            r0.<init>(r1)     // Catch: java.lang.Exception -> Lf7 java.lang.IllegalArgumentException -> L112
            throw r0     // Catch: java.lang.Exception -> Lf7 java.lang.IllegalArgumentException -> L112
        Lda:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException     // Catch: java.lang.Exception -> Lf7 java.lang.IllegalArgumentException -> L112
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Lf7 java.lang.IllegalArgumentException -> L112
            r1.<init>()     // Catch: java.lang.Exception -> Lf7 java.lang.IllegalArgumentException -> L112
            java.lang.String r2 = "Bad encoding of VOMS policyAuthority : ["
            r1.append(r2)     // Catch: java.lang.Exception -> Lf7 java.lang.IllegalArgumentException -> L112
            r1.append(r5)     // Catch: java.lang.Exception -> Lf7 java.lang.IllegalArgumentException -> L112
            java.lang.String r2 = "]"
            r1.append(r2)     // Catch: java.lang.Exception -> Lf7 java.lang.IllegalArgumentException -> L112
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Exception -> Lf7 java.lang.IllegalArgumentException -> L112
            r0.<init>(r1)     // Catch: java.lang.Exception -> Lf7 java.lang.IllegalArgumentException -> L112
            throw r0     // Catch: java.lang.Exception -> Lf7 java.lang.IllegalArgumentException -> L112
        Lf6:
            return
        Lf7:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Badly encoded VOMS extension in AC issued by "
            r1.append(r2)
            org.bouncycastle.x509.AttributeCertificateIssuer r11 = r11.getIssuer()
            r1.append(r11)
            java.lang.String r11 = r1.toString()
            r0.<init>(r11)
            throw r0
        L112:
            r11 = move-exception
            throw r11
        L114:
            java.lang.IllegalArgumentException r11 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "VOMSAttribute: AttributeCertificate is NULL"
            r11.<init>(r0)
            throw r11
    }

    public org.bouncycastle.x509.X509AttributeCertificate getAC() {
            r1 = this;
            org.bouncycastle.x509.X509AttributeCertificate r0 = r1.myAC
            return r0
    }

    public java.util.List getFullyQualifiedAttributes() {
            r1 = this;
            java.util.Vector r0 = r1.myStringList
            return r0
    }

    public java.lang.String getHostPort() {
            r1 = this;
            java.lang.String r0 = r1.myHostPort
            return r0
    }

    public java.util.List getListOfFQAN() {
            r1 = this;
            java.util.Vector r0 = r1.myFQANs
            return r0
    }

    public java.lang.String getVO() {
            r1 = this;
            java.lang.String r0 = r1.myVo
            return r0
    }

    public java.lang.String toString() {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "VO      :"
            r0.append(r1)
            java.lang.String r1 = r3.myVo
            r0.append(r1)
            java.lang.String r1 = "\n"
            r0.append(r1)
            java.lang.String r2 = "HostPort:"
            r0.append(r2)
            java.lang.String r2 = r3.myHostPort
            r0.append(r2)
            r0.append(r1)
            java.lang.String r1 = "FQANs   :"
            r0.append(r1)
            java.util.Vector r1 = r3.myFQANs
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
