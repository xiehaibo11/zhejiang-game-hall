package org.bouncycastle.jce;

public class X509LDAPCertStoreParameters implements org.bouncycastle.x509.X509StoreParameters, java.security.cert.CertStoreParameters {
    private java.lang.String aACertificateAttribute;
    private java.lang.String aACertificateSubjectAttributeName;
    private java.lang.String attributeAuthorityRevocationListAttribute;
    private java.lang.String attributeAuthorityRevocationListIssuerAttributeName;
    private java.lang.String attributeCertificateAttributeAttribute;
    private java.lang.String attributeCertificateAttributeSubjectAttributeName;
    private java.lang.String attributeCertificateRevocationListAttribute;
    private java.lang.String attributeCertificateRevocationListIssuerAttributeName;
    private java.lang.String attributeDescriptorCertificateAttribute;
    private java.lang.String attributeDescriptorCertificateSubjectAttributeName;
    private java.lang.String authorityRevocationListAttribute;
    private java.lang.String authorityRevocationListIssuerAttributeName;
    private java.lang.String baseDN;
    private java.lang.String cACertificateAttribute;
    private java.lang.String cACertificateSubjectAttributeName;
    private java.lang.String certificateRevocationListAttribute;
    private java.lang.String certificateRevocationListIssuerAttributeName;
    private java.lang.String crossCertificateAttribute;
    private java.lang.String crossCertificateSubjectAttributeName;
    private java.lang.String deltaRevocationListAttribute;
    private java.lang.String deltaRevocationListIssuerAttributeName;
    private java.lang.String ldapAACertificateAttributeName;
    private java.lang.String ldapAttributeAuthorityRevocationListAttributeName;
    private java.lang.String ldapAttributeCertificateAttributeAttributeName;
    private java.lang.String ldapAttributeCertificateRevocationListAttributeName;
    private java.lang.String ldapAttributeDescriptorCertificateAttributeName;
    private java.lang.String ldapAuthorityRevocationListAttributeName;
    private java.lang.String ldapCACertificateAttributeName;
    private java.lang.String ldapCertificateRevocationListAttributeName;
    private java.lang.String ldapCrossCertificateAttributeName;
    private java.lang.String ldapDeltaRevocationListAttributeName;
    private java.lang.String ldapURL;
    private java.lang.String ldapUserCertificateAttributeName;
    private java.lang.String searchForSerialNumberIn;
    private java.lang.String userCertificateAttribute;
    private java.lang.String userCertificateSubjectAttributeName;

    static class 1 {
    }

    public static class Builder {
        private java.lang.String aACertificateAttribute;
        private java.lang.String aACertificateSubjectAttributeName;
        private java.lang.String attributeAuthorityRevocationListAttribute;
        private java.lang.String attributeAuthorityRevocationListIssuerAttributeName;
        private java.lang.String attributeCertificateAttributeAttribute;
        private java.lang.String attributeCertificateAttributeSubjectAttributeName;
        private java.lang.String attributeCertificateRevocationListAttribute;
        private java.lang.String attributeCertificateRevocationListIssuerAttributeName;
        private java.lang.String attributeDescriptorCertificateAttribute;
        private java.lang.String attributeDescriptorCertificateSubjectAttributeName;
        private java.lang.String authorityRevocationListAttribute;
        private java.lang.String authorityRevocationListIssuerAttributeName;
        private java.lang.String baseDN;
        private java.lang.String cACertificateAttribute;
        private java.lang.String cACertificateSubjectAttributeName;
        private java.lang.String certificateRevocationListAttribute;
        private java.lang.String certificateRevocationListIssuerAttributeName;
        private java.lang.String crossCertificateAttribute;
        private java.lang.String crossCertificateSubjectAttributeName;
        private java.lang.String deltaRevocationListAttribute;
        private java.lang.String deltaRevocationListIssuerAttributeName;
        private java.lang.String ldapAACertificateAttributeName;
        private java.lang.String ldapAttributeAuthorityRevocationListAttributeName;
        private java.lang.String ldapAttributeCertificateAttributeAttributeName;
        private java.lang.String ldapAttributeCertificateRevocationListAttributeName;
        private java.lang.String ldapAttributeDescriptorCertificateAttributeName;
        private java.lang.String ldapAuthorityRevocationListAttributeName;
        private java.lang.String ldapCACertificateAttributeName;
        private java.lang.String ldapCertificateRevocationListAttributeName;
        private java.lang.String ldapCrossCertificateAttributeName;
        private java.lang.String ldapDeltaRevocationListAttributeName;
        private java.lang.String ldapURL;
        private java.lang.String ldapUserCertificateAttributeName;
        private java.lang.String searchForSerialNumberIn;
        private java.lang.String userCertificateAttribute;
        private java.lang.String userCertificateSubjectAttributeName;

        public Builder() {
                r2 = this;
                java.lang.String r0 = "ldap://localhost:389"
                java.lang.String r1 = ""
                r2.<init>(r0, r1)
                return
        }

        public Builder(java.lang.String r1, java.lang.String r2) {
                r0 = this;
                r0.<init>()
                r0.ldapURL = r1
                if (r2 != 0) goto Lc
                java.lang.String r1 = ""
                r0.baseDN = r1
                goto Le
            Lc:
                r0.baseDN = r2
            Le:
                java.lang.String r1 = "userCertificate"
                r0.userCertificateAttribute = r1
                java.lang.String r1 = "cACertificate"
                r0.cACertificateAttribute = r1
                java.lang.String r1 = "crossCertificatePair"
                r0.crossCertificateAttribute = r1
                java.lang.String r1 = "certificateRevocationList"
                r0.certificateRevocationListAttribute = r1
                java.lang.String r1 = "deltaRevocationList"
                r0.deltaRevocationListAttribute = r1
                java.lang.String r1 = "authorityRevocationList"
                r0.authorityRevocationListAttribute = r1
                java.lang.String r1 = "attributeCertificateAttribute"
                r0.attributeCertificateAttributeAttribute = r1
                java.lang.String r1 = "aACertificate"
                r0.aACertificateAttribute = r1
                java.lang.String r1 = "attributeDescriptorCertificate"
                r0.attributeDescriptorCertificateAttribute = r1
                java.lang.String r1 = "attributeCertificateRevocationList"
                r0.attributeCertificateRevocationListAttribute = r1
                java.lang.String r1 = "attributeAuthorityRevocationList"
                r0.attributeAuthorityRevocationListAttribute = r1
                java.lang.String r1 = "cn"
                r0.ldapUserCertificateAttributeName = r1
                java.lang.String r2 = "cn ou o"
                r0.ldapCACertificateAttributeName = r2
                r0.ldapCrossCertificateAttributeName = r2
                r0.ldapCertificateRevocationListAttributeName = r2
                r0.ldapDeltaRevocationListAttributeName = r2
                r0.ldapAuthorityRevocationListAttributeName = r2
                r0.ldapAttributeCertificateAttributeAttributeName = r1
                java.lang.String r2 = "cn o ou"
                r0.ldapAACertificateAttributeName = r2
                r0.ldapAttributeDescriptorCertificateAttributeName = r2
                r0.ldapAttributeCertificateRevocationListAttributeName = r2
                r0.ldapAttributeAuthorityRevocationListAttributeName = r2
                r0.userCertificateSubjectAttributeName = r1
                java.lang.String r2 = "o ou"
                r0.cACertificateSubjectAttributeName = r2
                r0.crossCertificateSubjectAttributeName = r2
                r0.certificateRevocationListIssuerAttributeName = r2
                r0.deltaRevocationListIssuerAttributeName = r2
                r0.authorityRevocationListIssuerAttributeName = r2
                r0.attributeCertificateAttributeSubjectAttributeName = r1
                r0.aACertificateSubjectAttributeName = r2
                r0.attributeDescriptorCertificateSubjectAttributeName = r2
                r0.attributeCertificateRevocationListIssuerAttributeName = r2
                r0.attributeAuthorityRevocationListIssuerAttributeName = r2
                java.lang.String r1 = "uid serialNumber cn"
                r0.searchForSerialNumberIn = r1
                return
        }

        static java.lang.String access$100(org.bouncycastle.jce.X509LDAPCertStoreParameters.Builder r0) {
                java.lang.String r0 = r0.ldapURL
                return r0
        }

        static java.lang.String access$1000(org.bouncycastle.jce.X509LDAPCertStoreParameters.Builder r0) {
                java.lang.String r0 = r0.aACertificateAttribute
                return r0
        }

        static java.lang.String access$1100(org.bouncycastle.jce.X509LDAPCertStoreParameters.Builder r0) {
                java.lang.String r0 = r0.attributeDescriptorCertificateAttribute
                return r0
        }

        static java.lang.String access$1200(org.bouncycastle.jce.X509LDAPCertStoreParameters.Builder r0) {
                java.lang.String r0 = r0.attributeCertificateRevocationListAttribute
                return r0
        }

        static java.lang.String access$1300(org.bouncycastle.jce.X509LDAPCertStoreParameters.Builder r0) {
                java.lang.String r0 = r0.attributeAuthorityRevocationListAttribute
                return r0
        }

        static java.lang.String access$1400(org.bouncycastle.jce.X509LDAPCertStoreParameters.Builder r0) {
                java.lang.String r0 = r0.ldapUserCertificateAttributeName
                return r0
        }

        static java.lang.String access$1500(org.bouncycastle.jce.X509LDAPCertStoreParameters.Builder r0) {
                java.lang.String r0 = r0.ldapCACertificateAttributeName
                return r0
        }

        static java.lang.String access$1600(org.bouncycastle.jce.X509LDAPCertStoreParameters.Builder r0) {
                java.lang.String r0 = r0.ldapCrossCertificateAttributeName
                return r0
        }

        static java.lang.String access$1700(org.bouncycastle.jce.X509LDAPCertStoreParameters.Builder r0) {
                java.lang.String r0 = r0.ldapCertificateRevocationListAttributeName
                return r0
        }

        static java.lang.String access$1800(org.bouncycastle.jce.X509LDAPCertStoreParameters.Builder r0) {
                java.lang.String r0 = r0.ldapDeltaRevocationListAttributeName
                return r0
        }

        static java.lang.String access$1900(org.bouncycastle.jce.X509LDAPCertStoreParameters.Builder r0) {
                java.lang.String r0 = r0.ldapAuthorityRevocationListAttributeName
                return r0
        }

        static java.lang.String access$200(org.bouncycastle.jce.X509LDAPCertStoreParameters.Builder r0) {
                java.lang.String r0 = r0.baseDN
                return r0
        }

        static java.lang.String access$2000(org.bouncycastle.jce.X509LDAPCertStoreParameters.Builder r0) {
                java.lang.String r0 = r0.ldapAttributeCertificateAttributeAttributeName
                return r0
        }

        static java.lang.String access$2100(org.bouncycastle.jce.X509LDAPCertStoreParameters.Builder r0) {
                java.lang.String r0 = r0.ldapAACertificateAttributeName
                return r0
        }

        static java.lang.String access$2200(org.bouncycastle.jce.X509LDAPCertStoreParameters.Builder r0) {
                java.lang.String r0 = r0.ldapAttributeDescriptorCertificateAttributeName
                return r0
        }

        static java.lang.String access$2300(org.bouncycastle.jce.X509LDAPCertStoreParameters.Builder r0) {
                java.lang.String r0 = r0.ldapAttributeCertificateRevocationListAttributeName
                return r0
        }

        static java.lang.String access$2400(org.bouncycastle.jce.X509LDAPCertStoreParameters.Builder r0) {
                java.lang.String r0 = r0.ldapAttributeAuthorityRevocationListAttributeName
                return r0
        }

        static java.lang.String access$2500(org.bouncycastle.jce.X509LDAPCertStoreParameters.Builder r0) {
                java.lang.String r0 = r0.userCertificateSubjectAttributeName
                return r0
        }

        static java.lang.String access$2600(org.bouncycastle.jce.X509LDAPCertStoreParameters.Builder r0) {
                java.lang.String r0 = r0.cACertificateSubjectAttributeName
                return r0
        }

        static java.lang.String access$2700(org.bouncycastle.jce.X509LDAPCertStoreParameters.Builder r0) {
                java.lang.String r0 = r0.crossCertificateSubjectAttributeName
                return r0
        }

        static java.lang.String access$2800(org.bouncycastle.jce.X509LDAPCertStoreParameters.Builder r0) {
                java.lang.String r0 = r0.certificateRevocationListIssuerAttributeName
                return r0
        }

        static java.lang.String access$2900(org.bouncycastle.jce.X509LDAPCertStoreParameters.Builder r0) {
                java.lang.String r0 = r0.deltaRevocationListIssuerAttributeName
                return r0
        }

        static java.lang.String access$300(org.bouncycastle.jce.X509LDAPCertStoreParameters.Builder r0) {
                java.lang.String r0 = r0.userCertificateAttribute
                return r0
        }

        static java.lang.String access$3000(org.bouncycastle.jce.X509LDAPCertStoreParameters.Builder r0) {
                java.lang.String r0 = r0.authorityRevocationListIssuerAttributeName
                return r0
        }

        static java.lang.String access$3100(org.bouncycastle.jce.X509LDAPCertStoreParameters.Builder r0) {
                java.lang.String r0 = r0.attributeCertificateAttributeSubjectAttributeName
                return r0
        }

        static java.lang.String access$3200(org.bouncycastle.jce.X509LDAPCertStoreParameters.Builder r0) {
                java.lang.String r0 = r0.aACertificateSubjectAttributeName
                return r0
        }

        static java.lang.String access$3300(org.bouncycastle.jce.X509LDAPCertStoreParameters.Builder r0) {
                java.lang.String r0 = r0.attributeDescriptorCertificateSubjectAttributeName
                return r0
        }

        static java.lang.String access$3400(org.bouncycastle.jce.X509LDAPCertStoreParameters.Builder r0) {
                java.lang.String r0 = r0.attributeCertificateRevocationListIssuerAttributeName
                return r0
        }

        static java.lang.String access$3500(org.bouncycastle.jce.X509LDAPCertStoreParameters.Builder r0) {
                java.lang.String r0 = r0.attributeAuthorityRevocationListIssuerAttributeName
                return r0
        }

        static java.lang.String access$3600(org.bouncycastle.jce.X509LDAPCertStoreParameters.Builder r0) {
                java.lang.String r0 = r0.searchForSerialNumberIn
                return r0
        }

        static java.lang.String access$400(org.bouncycastle.jce.X509LDAPCertStoreParameters.Builder r0) {
                java.lang.String r0 = r0.cACertificateAttribute
                return r0
        }

        static java.lang.String access$500(org.bouncycastle.jce.X509LDAPCertStoreParameters.Builder r0) {
                java.lang.String r0 = r0.crossCertificateAttribute
                return r0
        }

        static java.lang.String access$600(org.bouncycastle.jce.X509LDAPCertStoreParameters.Builder r0) {
                java.lang.String r0 = r0.certificateRevocationListAttribute
                return r0
        }

        static java.lang.String access$700(org.bouncycastle.jce.X509LDAPCertStoreParameters.Builder r0) {
                java.lang.String r0 = r0.deltaRevocationListAttribute
                return r0
        }

        static java.lang.String access$800(org.bouncycastle.jce.X509LDAPCertStoreParameters.Builder r0) {
                java.lang.String r0 = r0.authorityRevocationListAttribute
                return r0
        }

        static java.lang.String access$900(org.bouncycastle.jce.X509LDAPCertStoreParameters.Builder r0) {
                java.lang.String r0 = r0.attributeCertificateAttributeAttribute
                return r0
        }

        public org.bouncycastle.jce.X509LDAPCertStoreParameters build() {
                r2 = this;
                java.lang.String r0 = r2.ldapUserCertificateAttributeName
                if (r0 == 0) goto L5f
                java.lang.String r0 = r2.ldapCACertificateAttributeName
                if (r0 == 0) goto L5f
                java.lang.String r0 = r2.ldapCrossCertificateAttributeName
                if (r0 == 0) goto L5f
                java.lang.String r0 = r2.ldapCertificateRevocationListAttributeName
                if (r0 == 0) goto L5f
                java.lang.String r0 = r2.ldapDeltaRevocationListAttributeName
                if (r0 == 0) goto L5f
                java.lang.String r0 = r2.ldapAuthorityRevocationListAttributeName
                if (r0 == 0) goto L5f
                java.lang.String r0 = r2.ldapAttributeCertificateAttributeAttributeName
                if (r0 == 0) goto L5f
                java.lang.String r0 = r2.ldapAACertificateAttributeName
                if (r0 == 0) goto L5f
                java.lang.String r0 = r2.ldapAttributeDescriptorCertificateAttributeName
                if (r0 == 0) goto L5f
                java.lang.String r0 = r2.ldapAttributeCertificateRevocationListAttributeName
                if (r0 == 0) goto L5f
                java.lang.String r0 = r2.ldapAttributeAuthorityRevocationListAttributeName
                if (r0 == 0) goto L5f
                java.lang.String r0 = r2.userCertificateSubjectAttributeName
                if (r0 == 0) goto L5f
                java.lang.String r0 = r2.cACertificateSubjectAttributeName
                if (r0 == 0) goto L5f
                java.lang.String r0 = r2.crossCertificateSubjectAttributeName
                if (r0 == 0) goto L5f
                java.lang.String r0 = r2.certificateRevocationListIssuerAttributeName
                if (r0 == 0) goto L5f
                java.lang.String r0 = r2.deltaRevocationListIssuerAttributeName
                if (r0 == 0) goto L5f
                java.lang.String r0 = r2.authorityRevocationListIssuerAttributeName
                if (r0 == 0) goto L5f
                java.lang.String r0 = r2.attributeCertificateAttributeSubjectAttributeName
                if (r0 == 0) goto L5f
                java.lang.String r0 = r2.aACertificateSubjectAttributeName
                if (r0 == 0) goto L5f
                java.lang.String r0 = r2.attributeDescriptorCertificateSubjectAttributeName
                if (r0 == 0) goto L5f
                java.lang.String r0 = r2.attributeCertificateRevocationListIssuerAttributeName
                if (r0 == 0) goto L5f
                java.lang.String r0 = r2.attributeAuthorityRevocationListIssuerAttributeName
                if (r0 == 0) goto L5f
                org.bouncycastle.jce.X509LDAPCertStoreParameters r0 = new org.bouncycastle.jce.X509LDAPCertStoreParameters
                r1 = 0
                r0.<init>(r2, r1)
                return r0
            L5f:
                java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
                java.lang.String r1 = "Necessary parameters not specified."
                r0.<init>(r1)
                throw r0
        }

        public org.bouncycastle.jce.X509LDAPCertStoreParameters.Builder setAACertificateAttribute(java.lang.String r1) {
                r0 = this;
                r0.aACertificateAttribute = r1
                return r0
        }

        public org.bouncycastle.jce.X509LDAPCertStoreParameters.Builder setAACertificateSubjectAttributeName(java.lang.String r1) {
                r0 = this;
                r0.aACertificateSubjectAttributeName = r1
                return r0
        }

        public org.bouncycastle.jce.X509LDAPCertStoreParameters.Builder setAttributeAuthorityRevocationListAttribute(java.lang.String r1) {
                r0 = this;
                r0.attributeAuthorityRevocationListAttribute = r1
                return r0
        }

        public org.bouncycastle.jce.X509LDAPCertStoreParameters.Builder setAttributeAuthorityRevocationListIssuerAttributeName(java.lang.String r1) {
                r0 = this;
                r0.attributeAuthorityRevocationListIssuerAttributeName = r1
                return r0
        }

        public org.bouncycastle.jce.X509LDAPCertStoreParameters.Builder setAttributeCertificateAttributeAttribute(java.lang.String r1) {
                r0 = this;
                r0.attributeCertificateAttributeAttribute = r1
                return r0
        }

        public org.bouncycastle.jce.X509LDAPCertStoreParameters.Builder setAttributeCertificateAttributeSubjectAttributeName(java.lang.String r1) {
                r0 = this;
                r0.attributeCertificateAttributeSubjectAttributeName = r1
                return r0
        }

        public org.bouncycastle.jce.X509LDAPCertStoreParameters.Builder setAttributeCertificateRevocationListAttribute(java.lang.String r1) {
                r0 = this;
                r0.attributeCertificateRevocationListAttribute = r1
                return r0
        }

        public org.bouncycastle.jce.X509LDAPCertStoreParameters.Builder setAttributeCertificateRevocationListIssuerAttributeName(java.lang.String r1) {
                r0 = this;
                r0.attributeCertificateRevocationListIssuerAttributeName = r1
                return r0
        }

        public org.bouncycastle.jce.X509LDAPCertStoreParameters.Builder setAttributeDescriptorCertificateAttribute(java.lang.String r1) {
                r0 = this;
                r0.attributeDescriptorCertificateAttribute = r1
                return r0
        }

        public org.bouncycastle.jce.X509LDAPCertStoreParameters.Builder setAttributeDescriptorCertificateSubjectAttributeName(java.lang.String r1) {
                r0 = this;
                r0.attributeDescriptorCertificateSubjectAttributeName = r1
                return r0
        }

        public org.bouncycastle.jce.X509LDAPCertStoreParameters.Builder setAuthorityRevocationListAttribute(java.lang.String r1) {
                r0 = this;
                r0.authorityRevocationListAttribute = r1
                return r0
        }

        public org.bouncycastle.jce.X509LDAPCertStoreParameters.Builder setAuthorityRevocationListIssuerAttributeName(java.lang.String r1) {
                r0 = this;
                r0.authorityRevocationListIssuerAttributeName = r1
                return r0
        }

        public org.bouncycastle.jce.X509LDAPCertStoreParameters.Builder setCACertificateAttribute(java.lang.String r1) {
                r0 = this;
                r0.cACertificateAttribute = r1
                return r0
        }

        public org.bouncycastle.jce.X509LDAPCertStoreParameters.Builder setCACertificateSubjectAttributeName(java.lang.String r1) {
                r0 = this;
                r0.cACertificateSubjectAttributeName = r1
                return r0
        }

        public org.bouncycastle.jce.X509LDAPCertStoreParameters.Builder setCertificateRevocationListAttribute(java.lang.String r1) {
                r0 = this;
                r0.certificateRevocationListAttribute = r1
                return r0
        }

        public org.bouncycastle.jce.X509LDAPCertStoreParameters.Builder setCertificateRevocationListIssuerAttributeName(java.lang.String r1) {
                r0 = this;
                r0.certificateRevocationListIssuerAttributeName = r1
                return r0
        }

        public org.bouncycastle.jce.X509LDAPCertStoreParameters.Builder setCrossCertificateAttribute(java.lang.String r1) {
                r0 = this;
                r0.crossCertificateAttribute = r1
                return r0
        }

        public org.bouncycastle.jce.X509LDAPCertStoreParameters.Builder setCrossCertificateSubjectAttributeName(java.lang.String r1) {
                r0 = this;
                r0.crossCertificateSubjectAttributeName = r1
                return r0
        }

        public org.bouncycastle.jce.X509LDAPCertStoreParameters.Builder setDeltaRevocationListAttribute(java.lang.String r1) {
                r0 = this;
                r0.deltaRevocationListAttribute = r1
                return r0
        }

        public org.bouncycastle.jce.X509LDAPCertStoreParameters.Builder setDeltaRevocationListIssuerAttributeName(java.lang.String r1) {
                r0 = this;
                r0.deltaRevocationListIssuerAttributeName = r1
                return r0
        }

        public org.bouncycastle.jce.X509LDAPCertStoreParameters.Builder setLdapAACertificateAttributeName(java.lang.String r1) {
                r0 = this;
                r0.ldapAACertificateAttributeName = r1
                return r0
        }

        public org.bouncycastle.jce.X509LDAPCertStoreParameters.Builder setLdapAttributeAuthorityRevocationListAttributeName(java.lang.String r1) {
                r0 = this;
                r0.ldapAttributeAuthorityRevocationListAttributeName = r1
                return r0
        }

        public org.bouncycastle.jce.X509LDAPCertStoreParameters.Builder setLdapAttributeCertificateAttributeAttributeName(java.lang.String r1) {
                r0 = this;
                r0.ldapAttributeCertificateAttributeAttributeName = r1
                return r0
        }

        public org.bouncycastle.jce.X509LDAPCertStoreParameters.Builder setLdapAttributeCertificateRevocationListAttributeName(java.lang.String r1) {
                r0 = this;
                r0.ldapAttributeCertificateRevocationListAttributeName = r1
                return r0
        }

        public org.bouncycastle.jce.X509LDAPCertStoreParameters.Builder setLdapAttributeDescriptorCertificateAttributeName(java.lang.String r1) {
                r0 = this;
                r0.ldapAttributeDescriptorCertificateAttributeName = r1
                return r0
        }

        public org.bouncycastle.jce.X509LDAPCertStoreParameters.Builder setLdapAuthorityRevocationListAttributeName(java.lang.String r1) {
                r0 = this;
                r0.ldapAuthorityRevocationListAttributeName = r1
                return r0
        }

        public org.bouncycastle.jce.X509LDAPCertStoreParameters.Builder setLdapCACertificateAttributeName(java.lang.String r1) {
                r0 = this;
                r0.ldapCACertificateAttributeName = r1
                return r0
        }

        public org.bouncycastle.jce.X509LDAPCertStoreParameters.Builder setLdapCertificateRevocationListAttributeName(java.lang.String r1) {
                r0 = this;
                r0.ldapCertificateRevocationListAttributeName = r1
                return r0
        }

        public org.bouncycastle.jce.X509LDAPCertStoreParameters.Builder setLdapCrossCertificateAttributeName(java.lang.String r1) {
                r0 = this;
                r0.ldapCrossCertificateAttributeName = r1
                return r0
        }

        public org.bouncycastle.jce.X509LDAPCertStoreParameters.Builder setLdapDeltaRevocationListAttributeName(java.lang.String r1) {
                r0 = this;
                r0.ldapDeltaRevocationListAttributeName = r1
                return r0
        }

        public org.bouncycastle.jce.X509LDAPCertStoreParameters.Builder setLdapUserCertificateAttributeName(java.lang.String r1) {
                r0 = this;
                r0.ldapUserCertificateAttributeName = r1
                return r0
        }

        public org.bouncycastle.jce.X509LDAPCertStoreParameters.Builder setSearchForSerialNumberIn(java.lang.String r1) {
                r0 = this;
                r0.searchForSerialNumberIn = r1
                return r0
        }

        public org.bouncycastle.jce.X509LDAPCertStoreParameters.Builder setUserCertificateAttribute(java.lang.String r1) {
                r0 = this;
                r0.userCertificateAttribute = r1
                return r0
        }

        public org.bouncycastle.jce.X509LDAPCertStoreParameters.Builder setUserCertificateSubjectAttributeName(java.lang.String r1) {
                r0 = this;
                r0.userCertificateSubjectAttributeName = r1
                return r0
        }
    }

    private X509LDAPCertStoreParameters(org.bouncycastle.jce.X509LDAPCertStoreParameters.Builder r2) {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = org.bouncycastle.jce.X509LDAPCertStoreParameters.Builder.access$100(r2)
            r1.ldapURL = r0
            java.lang.String r0 = org.bouncycastle.jce.X509LDAPCertStoreParameters.Builder.access$200(r2)
            r1.baseDN = r0
            java.lang.String r0 = org.bouncycastle.jce.X509LDAPCertStoreParameters.Builder.access$300(r2)
            r1.userCertificateAttribute = r0
            java.lang.String r0 = org.bouncycastle.jce.X509LDAPCertStoreParameters.Builder.access$400(r2)
            r1.cACertificateAttribute = r0
            java.lang.String r0 = org.bouncycastle.jce.X509LDAPCertStoreParameters.Builder.access$500(r2)
            r1.crossCertificateAttribute = r0
            java.lang.String r0 = org.bouncycastle.jce.X509LDAPCertStoreParameters.Builder.access$600(r2)
            r1.certificateRevocationListAttribute = r0
            java.lang.String r0 = org.bouncycastle.jce.X509LDAPCertStoreParameters.Builder.access$700(r2)
            r1.deltaRevocationListAttribute = r0
            java.lang.String r0 = org.bouncycastle.jce.X509LDAPCertStoreParameters.Builder.access$800(r2)
            r1.authorityRevocationListAttribute = r0
            java.lang.String r0 = org.bouncycastle.jce.X509LDAPCertStoreParameters.Builder.access$900(r2)
            r1.attributeCertificateAttributeAttribute = r0
            java.lang.String r0 = org.bouncycastle.jce.X509LDAPCertStoreParameters.Builder.access$1000(r2)
            r1.aACertificateAttribute = r0
            java.lang.String r0 = org.bouncycastle.jce.X509LDAPCertStoreParameters.Builder.access$1100(r2)
            r1.attributeDescriptorCertificateAttribute = r0
            java.lang.String r0 = org.bouncycastle.jce.X509LDAPCertStoreParameters.Builder.access$1200(r2)
            r1.attributeCertificateRevocationListAttribute = r0
            java.lang.String r0 = org.bouncycastle.jce.X509LDAPCertStoreParameters.Builder.access$1300(r2)
            r1.attributeAuthorityRevocationListAttribute = r0
            java.lang.String r0 = org.bouncycastle.jce.X509LDAPCertStoreParameters.Builder.access$1400(r2)
            r1.ldapUserCertificateAttributeName = r0
            java.lang.String r0 = org.bouncycastle.jce.X509LDAPCertStoreParameters.Builder.access$1500(r2)
            r1.ldapCACertificateAttributeName = r0
            java.lang.String r0 = org.bouncycastle.jce.X509LDAPCertStoreParameters.Builder.access$1600(r2)
            r1.ldapCrossCertificateAttributeName = r0
            java.lang.String r0 = org.bouncycastle.jce.X509LDAPCertStoreParameters.Builder.access$1700(r2)
            r1.ldapCertificateRevocationListAttributeName = r0
            java.lang.String r0 = org.bouncycastle.jce.X509LDAPCertStoreParameters.Builder.access$1800(r2)
            r1.ldapDeltaRevocationListAttributeName = r0
            java.lang.String r0 = org.bouncycastle.jce.X509LDAPCertStoreParameters.Builder.access$1900(r2)
            r1.ldapAuthorityRevocationListAttributeName = r0
            java.lang.String r0 = org.bouncycastle.jce.X509LDAPCertStoreParameters.Builder.access$2000(r2)
            r1.ldapAttributeCertificateAttributeAttributeName = r0
            java.lang.String r0 = org.bouncycastle.jce.X509LDAPCertStoreParameters.Builder.access$2100(r2)
            r1.ldapAACertificateAttributeName = r0
            java.lang.String r0 = org.bouncycastle.jce.X509LDAPCertStoreParameters.Builder.access$2200(r2)
            r1.ldapAttributeDescriptorCertificateAttributeName = r0
            java.lang.String r0 = org.bouncycastle.jce.X509LDAPCertStoreParameters.Builder.access$2300(r2)
            r1.ldapAttributeCertificateRevocationListAttributeName = r0
            java.lang.String r0 = org.bouncycastle.jce.X509LDAPCertStoreParameters.Builder.access$2400(r2)
            r1.ldapAttributeAuthorityRevocationListAttributeName = r0
            java.lang.String r0 = org.bouncycastle.jce.X509LDAPCertStoreParameters.Builder.access$2500(r2)
            r1.userCertificateSubjectAttributeName = r0
            java.lang.String r0 = org.bouncycastle.jce.X509LDAPCertStoreParameters.Builder.access$2600(r2)
            r1.cACertificateSubjectAttributeName = r0
            java.lang.String r0 = org.bouncycastle.jce.X509LDAPCertStoreParameters.Builder.access$2700(r2)
            r1.crossCertificateSubjectAttributeName = r0
            java.lang.String r0 = org.bouncycastle.jce.X509LDAPCertStoreParameters.Builder.access$2800(r2)
            r1.certificateRevocationListIssuerAttributeName = r0
            java.lang.String r0 = org.bouncycastle.jce.X509LDAPCertStoreParameters.Builder.access$2900(r2)
            r1.deltaRevocationListIssuerAttributeName = r0
            java.lang.String r0 = org.bouncycastle.jce.X509LDAPCertStoreParameters.Builder.access$3000(r2)
            r1.authorityRevocationListIssuerAttributeName = r0
            java.lang.String r0 = org.bouncycastle.jce.X509LDAPCertStoreParameters.Builder.access$3100(r2)
            r1.attributeCertificateAttributeSubjectAttributeName = r0
            java.lang.String r0 = org.bouncycastle.jce.X509LDAPCertStoreParameters.Builder.access$3200(r2)
            r1.aACertificateSubjectAttributeName = r0
            java.lang.String r0 = org.bouncycastle.jce.X509LDAPCertStoreParameters.Builder.access$3300(r2)
            r1.attributeDescriptorCertificateSubjectAttributeName = r0
            java.lang.String r0 = org.bouncycastle.jce.X509LDAPCertStoreParameters.Builder.access$3400(r2)
            r1.attributeCertificateRevocationListIssuerAttributeName = r0
            java.lang.String r0 = org.bouncycastle.jce.X509LDAPCertStoreParameters.Builder.access$3500(r2)
            r1.attributeAuthorityRevocationListIssuerAttributeName = r0
            java.lang.String r2 = org.bouncycastle.jce.X509LDAPCertStoreParameters.Builder.access$3600(r2)
            r1.searchForSerialNumberIn = r2
            return
    }

    X509LDAPCertStoreParameters(org.bouncycastle.jce.X509LDAPCertStoreParameters.Builder r1, org.bouncycastle.jce.X509LDAPCertStoreParameters.1 r2) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    private int addHashCode(int r1, java.lang.Object r2) {
            r0 = this;
            int r1 = r1 * 29
            if (r2 != 0) goto L6
            r2 = 0
            goto La
        L6:
            int r2 = r2.hashCode()
        La:
            int r1 = r1 + r2
            return r1
    }

    private boolean checkField(java.lang.Object r1, java.lang.Object r2) {
            r0 = this;
            if (r1 != r2) goto L4
            r1 = 1
            return r1
        L4:
            if (r1 != 0) goto L8
            r1 = 0
            return r1
        L8:
            boolean r1 = r1.equals(r2)
            return r1
    }

    public static org.bouncycastle.jce.X509LDAPCertStoreParameters getInstance(java.security.cert.LDAPCertStoreParameters r2) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "ldap://"
            r0.append(r1)
            java.lang.String r1 = r2.getServerName()
            r0.append(r1)
            java.lang.String r1 = ":"
            r0.append(r1)
            int r2 = r2.getPort()
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            org.bouncycastle.jce.X509LDAPCertStoreParameters$Builder r0 = new org.bouncycastle.jce.X509LDAPCertStoreParameters$Builder
            java.lang.String r1 = ""
            r0.<init>(r2, r1)
            org.bouncycastle.jce.X509LDAPCertStoreParameters r2 = r0.build()
            return r2
    }

    @Override
    public java.lang.Object clone() {
            r0 = this;
            return r0
    }

    public boolean equal(java.lang.Object r5) {
            r4 = this;
            r0 = 1
            if (r5 != r4) goto L4
            return r0
        L4:
            boolean r1 = r5 instanceof org.bouncycastle.jce.X509LDAPCertStoreParameters
            r2 = 0
            if (r1 != 0) goto La
            return r2
        La:
            org.bouncycastle.jce.X509LDAPCertStoreParameters r5 = (org.bouncycastle.jce.X509LDAPCertStoreParameters) r5
            java.lang.String r1 = r4.ldapURL
            java.lang.String r3 = r5.ldapURL
            boolean r1 = r4.checkField(r1, r3)
            if (r1 == 0) goto L175
            java.lang.String r1 = r4.baseDN
            java.lang.String r3 = r5.baseDN
            boolean r1 = r4.checkField(r1, r3)
            if (r1 == 0) goto L175
            java.lang.String r1 = r4.userCertificateAttribute
            java.lang.String r3 = r5.userCertificateAttribute
            boolean r1 = r4.checkField(r1, r3)
            if (r1 == 0) goto L175
            java.lang.String r1 = r4.cACertificateAttribute
            java.lang.String r3 = r5.cACertificateAttribute
            boolean r1 = r4.checkField(r1, r3)
            if (r1 == 0) goto L175
            java.lang.String r1 = r4.crossCertificateAttribute
            java.lang.String r3 = r5.crossCertificateAttribute
            boolean r1 = r4.checkField(r1, r3)
            if (r1 == 0) goto L175
            java.lang.String r1 = r4.certificateRevocationListAttribute
            java.lang.String r3 = r5.certificateRevocationListAttribute
            boolean r1 = r4.checkField(r1, r3)
            if (r1 == 0) goto L175
            java.lang.String r1 = r4.deltaRevocationListAttribute
            java.lang.String r3 = r5.deltaRevocationListAttribute
            boolean r1 = r4.checkField(r1, r3)
            if (r1 == 0) goto L175
            java.lang.String r1 = r4.authorityRevocationListAttribute
            java.lang.String r3 = r5.authorityRevocationListAttribute
            boolean r1 = r4.checkField(r1, r3)
            if (r1 == 0) goto L175
            java.lang.String r1 = r4.attributeCertificateAttributeAttribute
            java.lang.String r3 = r5.attributeCertificateAttributeAttribute
            boolean r1 = r4.checkField(r1, r3)
            if (r1 == 0) goto L175
            java.lang.String r1 = r4.aACertificateAttribute
            java.lang.String r3 = r5.aACertificateAttribute
            boolean r1 = r4.checkField(r1, r3)
            if (r1 == 0) goto L175
            java.lang.String r1 = r4.attributeDescriptorCertificateAttribute
            java.lang.String r3 = r5.attributeDescriptorCertificateAttribute
            boolean r1 = r4.checkField(r1, r3)
            if (r1 == 0) goto L175
            java.lang.String r1 = r4.attributeCertificateRevocationListAttribute
            java.lang.String r3 = r5.attributeCertificateRevocationListAttribute
            boolean r1 = r4.checkField(r1, r3)
            if (r1 == 0) goto L175
            java.lang.String r1 = r4.attributeAuthorityRevocationListAttribute
            java.lang.String r3 = r5.attributeAuthorityRevocationListAttribute
            boolean r1 = r4.checkField(r1, r3)
            if (r1 == 0) goto L175
            java.lang.String r1 = r4.ldapUserCertificateAttributeName
            java.lang.String r3 = r5.ldapUserCertificateAttributeName
            boolean r1 = r4.checkField(r1, r3)
            if (r1 == 0) goto L175
            java.lang.String r1 = r4.ldapCACertificateAttributeName
            java.lang.String r3 = r5.ldapCACertificateAttributeName
            boolean r1 = r4.checkField(r1, r3)
            if (r1 == 0) goto L175
            java.lang.String r1 = r4.ldapCrossCertificateAttributeName
            java.lang.String r3 = r5.ldapCrossCertificateAttributeName
            boolean r1 = r4.checkField(r1, r3)
            if (r1 == 0) goto L175
            java.lang.String r1 = r4.ldapCertificateRevocationListAttributeName
            java.lang.String r3 = r5.ldapCertificateRevocationListAttributeName
            boolean r1 = r4.checkField(r1, r3)
            if (r1 == 0) goto L175
            java.lang.String r1 = r4.ldapDeltaRevocationListAttributeName
            java.lang.String r3 = r5.ldapDeltaRevocationListAttributeName
            boolean r1 = r4.checkField(r1, r3)
            if (r1 == 0) goto L175
            java.lang.String r1 = r4.ldapAuthorityRevocationListAttributeName
            java.lang.String r3 = r5.ldapAuthorityRevocationListAttributeName
            boolean r1 = r4.checkField(r1, r3)
            if (r1 == 0) goto L175
            java.lang.String r1 = r4.ldapAttributeCertificateAttributeAttributeName
            java.lang.String r3 = r5.ldapAttributeCertificateAttributeAttributeName
            boolean r1 = r4.checkField(r1, r3)
            if (r1 == 0) goto L175
            java.lang.String r1 = r4.ldapAACertificateAttributeName
            java.lang.String r3 = r5.ldapAACertificateAttributeName
            boolean r1 = r4.checkField(r1, r3)
            if (r1 == 0) goto L175
            java.lang.String r1 = r4.ldapAttributeDescriptorCertificateAttributeName
            java.lang.String r3 = r5.ldapAttributeDescriptorCertificateAttributeName
            boolean r1 = r4.checkField(r1, r3)
            if (r1 == 0) goto L175
            java.lang.String r1 = r4.ldapAttributeCertificateRevocationListAttributeName
            java.lang.String r3 = r5.ldapAttributeCertificateRevocationListAttributeName
            boolean r1 = r4.checkField(r1, r3)
            if (r1 == 0) goto L175
            java.lang.String r1 = r4.ldapAttributeAuthorityRevocationListAttributeName
            java.lang.String r3 = r5.ldapAttributeAuthorityRevocationListAttributeName
            boolean r1 = r4.checkField(r1, r3)
            if (r1 == 0) goto L175
            java.lang.String r1 = r4.userCertificateSubjectAttributeName
            java.lang.String r3 = r5.userCertificateSubjectAttributeName
            boolean r1 = r4.checkField(r1, r3)
            if (r1 == 0) goto L175
            java.lang.String r1 = r4.cACertificateSubjectAttributeName
            java.lang.String r3 = r5.cACertificateSubjectAttributeName
            boolean r1 = r4.checkField(r1, r3)
            if (r1 == 0) goto L175
            java.lang.String r1 = r4.crossCertificateSubjectAttributeName
            java.lang.String r3 = r5.crossCertificateSubjectAttributeName
            boolean r1 = r4.checkField(r1, r3)
            if (r1 == 0) goto L175
            java.lang.String r1 = r4.certificateRevocationListIssuerAttributeName
            java.lang.String r3 = r5.certificateRevocationListIssuerAttributeName
            boolean r1 = r4.checkField(r1, r3)
            if (r1 == 0) goto L175
            java.lang.String r1 = r4.deltaRevocationListIssuerAttributeName
            java.lang.String r3 = r5.deltaRevocationListIssuerAttributeName
            boolean r1 = r4.checkField(r1, r3)
            if (r1 == 0) goto L175
            java.lang.String r1 = r4.authorityRevocationListIssuerAttributeName
            java.lang.String r3 = r5.authorityRevocationListIssuerAttributeName
            boolean r1 = r4.checkField(r1, r3)
            if (r1 == 0) goto L175
            java.lang.String r1 = r4.attributeCertificateAttributeSubjectAttributeName
            java.lang.String r3 = r5.attributeCertificateAttributeSubjectAttributeName
            boolean r1 = r4.checkField(r1, r3)
            if (r1 == 0) goto L175
            java.lang.String r1 = r4.aACertificateSubjectAttributeName
            java.lang.String r3 = r5.aACertificateSubjectAttributeName
            boolean r1 = r4.checkField(r1, r3)
            if (r1 == 0) goto L175
            java.lang.String r1 = r4.attributeDescriptorCertificateSubjectAttributeName
            java.lang.String r3 = r5.attributeDescriptorCertificateSubjectAttributeName
            boolean r1 = r4.checkField(r1, r3)
            if (r1 == 0) goto L175
            java.lang.String r1 = r4.attributeCertificateRevocationListIssuerAttributeName
            java.lang.String r3 = r5.attributeCertificateRevocationListIssuerAttributeName
            boolean r1 = r4.checkField(r1, r3)
            if (r1 == 0) goto L175
            java.lang.String r1 = r4.attributeAuthorityRevocationListIssuerAttributeName
            java.lang.String r3 = r5.attributeAuthorityRevocationListIssuerAttributeName
            boolean r1 = r4.checkField(r1, r3)
            if (r1 == 0) goto L175
            java.lang.String r1 = r4.searchForSerialNumberIn
            java.lang.String r5 = r5.searchForSerialNumberIn
            boolean r5 = r4.checkField(r1, r5)
            if (r5 == 0) goto L175
            goto L176
        L175:
            r0 = 0
        L176:
            return r0
    }

    public java.lang.String getAACertificateAttribute() {
            r1 = this;
            java.lang.String r0 = r1.aACertificateAttribute
            return r0
    }

    public java.lang.String getAACertificateSubjectAttributeName() {
            r1 = this;
            java.lang.String r0 = r1.aACertificateSubjectAttributeName
            return r0
    }

    public java.lang.String getAttributeAuthorityRevocationListAttribute() {
            r1 = this;
            java.lang.String r0 = r1.attributeAuthorityRevocationListAttribute
            return r0
    }

    public java.lang.String getAttributeAuthorityRevocationListIssuerAttributeName() {
            r1 = this;
            java.lang.String r0 = r1.attributeAuthorityRevocationListIssuerAttributeName
            return r0
    }

    public java.lang.String getAttributeCertificateAttributeAttribute() {
            r1 = this;
            java.lang.String r0 = r1.attributeCertificateAttributeAttribute
            return r0
    }

    public java.lang.String getAttributeCertificateAttributeSubjectAttributeName() {
            r1 = this;
            java.lang.String r0 = r1.attributeCertificateAttributeSubjectAttributeName
            return r0
    }

    public java.lang.String getAttributeCertificateRevocationListAttribute() {
            r1 = this;
            java.lang.String r0 = r1.attributeCertificateRevocationListAttribute
            return r0
    }

    public java.lang.String getAttributeCertificateRevocationListIssuerAttributeName() {
            r1 = this;
            java.lang.String r0 = r1.attributeCertificateRevocationListIssuerAttributeName
            return r0
    }

    public java.lang.String getAttributeDescriptorCertificateAttribute() {
            r1 = this;
            java.lang.String r0 = r1.attributeDescriptorCertificateAttribute
            return r0
    }

    public java.lang.String getAttributeDescriptorCertificateSubjectAttributeName() {
            r1 = this;
            java.lang.String r0 = r1.attributeDescriptorCertificateSubjectAttributeName
            return r0
    }

    public java.lang.String getAuthorityRevocationListAttribute() {
            r1 = this;
            java.lang.String r0 = r1.authorityRevocationListAttribute
            return r0
    }

    public java.lang.String getAuthorityRevocationListIssuerAttributeName() {
            r1 = this;
            java.lang.String r0 = r1.authorityRevocationListIssuerAttributeName
            return r0
    }

    public java.lang.String getBaseDN() {
            r1 = this;
            java.lang.String r0 = r1.baseDN
            return r0
    }

    public java.lang.String getCACertificateAttribute() {
            r1 = this;
            java.lang.String r0 = r1.cACertificateAttribute
            return r0
    }

    public java.lang.String getCACertificateSubjectAttributeName() {
            r1 = this;
            java.lang.String r0 = r1.cACertificateSubjectAttributeName
            return r0
    }

    public java.lang.String getCertificateRevocationListAttribute() {
            r1 = this;
            java.lang.String r0 = r1.certificateRevocationListAttribute
            return r0
    }

    public java.lang.String getCertificateRevocationListIssuerAttributeName() {
            r1 = this;
            java.lang.String r0 = r1.certificateRevocationListIssuerAttributeName
            return r0
    }

    public java.lang.String getCrossCertificateAttribute() {
            r1 = this;
            java.lang.String r0 = r1.crossCertificateAttribute
            return r0
    }

    public java.lang.String getCrossCertificateSubjectAttributeName() {
            r1 = this;
            java.lang.String r0 = r1.crossCertificateSubjectAttributeName
            return r0
    }

    public java.lang.String getDeltaRevocationListAttribute() {
            r1 = this;
            java.lang.String r0 = r1.deltaRevocationListAttribute
            return r0
    }

    public java.lang.String getDeltaRevocationListIssuerAttributeName() {
            r1 = this;
            java.lang.String r0 = r1.deltaRevocationListIssuerAttributeName
            return r0
    }

    public java.lang.String getLdapAACertificateAttributeName() {
            r1 = this;
            java.lang.String r0 = r1.ldapAACertificateAttributeName
            return r0
    }

    public java.lang.String getLdapAttributeAuthorityRevocationListAttributeName() {
            r1 = this;
            java.lang.String r0 = r1.ldapAttributeAuthorityRevocationListAttributeName
            return r0
    }

    public java.lang.String getLdapAttributeCertificateAttributeAttributeName() {
            r1 = this;
            java.lang.String r0 = r1.ldapAttributeCertificateAttributeAttributeName
            return r0
    }

    public java.lang.String getLdapAttributeCertificateRevocationListAttributeName() {
            r1 = this;
            java.lang.String r0 = r1.ldapAttributeCertificateRevocationListAttributeName
            return r0
    }

    public java.lang.String getLdapAttributeDescriptorCertificateAttributeName() {
            r1 = this;
            java.lang.String r0 = r1.ldapAttributeDescriptorCertificateAttributeName
            return r0
    }

    public java.lang.String getLdapAuthorityRevocationListAttributeName() {
            r1 = this;
            java.lang.String r0 = r1.ldapAuthorityRevocationListAttributeName
            return r0
    }

    public java.lang.String getLdapCACertificateAttributeName() {
            r1 = this;
            java.lang.String r0 = r1.ldapCACertificateAttributeName
            return r0
    }

    public java.lang.String getLdapCertificateRevocationListAttributeName() {
            r1 = this;
            java.lang.String r0 = r1.ldapCertificateRevocationListAttributeName
            return r0
    }

    public java.lang.String getLdapCrossCertificateAttributeName() {
            r1 = this;
            java.lang.String r0 = r1.ldapCrossCertificateAttributeName
            return r0
    }

    public java.lang.String getLdapDeltaRevocationListAttributeName() {
            r1 = this;
            java.lang.String r0 = r1.ldapDeltaRevocationListAttributeName
            return r0
    }

    public java.lang.String getLdapURL() {
            r1 = this;
            java.lang.String r0 = r1.ldapURL
            return r0
    }

    public java.lang.String getLdapUserCertificateAttributeName() {
            r1 = this;
            java.lang.String r0 = r1.ldapUserCertificateAttributeName
            return r0
    }

    public java.lang.String getSearchForSerialNumberIn() {
            r1 = this;
            java.lang.String r0 = r1.searchForSerialNumberIn
            return r0
    }

    public java.lang.String getUserCertificateAttribute() {
            r1 = this;
            java.lang.String r0 = r1.userCertificateAttribute
            return r0
    }

    public java.lang.String getUserCertificateSubjectAttributeName() {
            r1 = this;
            java.lang.String r0 = r1.userCertificateSubjectAttributeName
            return r0
    }

    public int hashCode() {
            r2 = this;
            java.lang.String r0 = r2.userCertificateAttribute
            r1 = 0
            int r0 = r2.addHashCode(r1, r0)
            java.lang.String r1 = r2.cACertificateAttribute
            int r0 = r2.addHashCode(r0, r1)
            java.lang.String r1 = r2.crossCertificateAttribute
            int r0 = r2.addHashCode(r0, r1)
            java.lang.String r1 = r2.certificateRevocationListAttribute
            int r0 = r2.addHashCode(r0, r1)
            java.lang.String r1 = r2.deltaRevocationListAttribute
            int r0 = r2.addHashCode(r0, r1)
            java.lang.String r1 = r2.authorityRevocationListAttribute
            int r0 = r2.addHashCode(r0, r1)
            java.lang.String r1 = r2.attributeCertificateAttributeAttribute
            int r0 = r2.addHashCode(r0, r1)
            java.lang.String r1 = r2.aACertificateAttribute
            int r0 = r2.addHashCode(r0, r1)
            java.lang.String r1 = r2.attributeDescriptorCertificateAttribute
            int r0 = r2.addHashCode(r0, r1)
            java.lang.String r1 = r2.attributeCertificateRevocationListAttribute
            int r0 = r2.addHashCode(r0, r1)
            java.lang.String r1 = r2.attributeAuthorityRevocationListAttribute
            int r0 = r2.addHashCode(r0, r1)
            java.lang.String r1 = r2.ldapUserCertificateAttributeName
            int r0 = r2.addHashCode(r0, r1)
            java.lang.String r1 = r2.ldapCACertificateAttributeName
            int r0 = r2.addHashCode(r0, r1)
            java.lang.String r1 = r2.ldapCrossCertificateAttributeName
            int r0 = r2.addHashCode(r0, r1)
            java.lang.String r1 = r2.ldapCertificateRevocationListAttributeName
            int r0 = r2.addHashCode(r0, r1)
            java.lang.String r1 = r2.ldapDeltaRevocationListAttributeName
            int r0 = r2.addHashCode(r0, r1)
            java.lang.String r1 = r2.ldapAuthorityRevocationListAttributeName
            int r0 = r2.addHashCode(r0, r1)
            java.lang.String r1 = r2.ldapAttributeCertificateAttributeAttributeName
            int r0 = r2.addHashCode(r0, r1)
            java.lang.String r1 = r2.ldapAACertificateAttributeName
            int r0 = r2.addHashCode(r0, r1)
            java.lang.String r1 = r2.ldapAttributeDescriptorCertificateAttributeName
            int r0 = r2.addHashCode(r0, r1)
            java.lang.String r1 = r2.ldapAttributeCertificateRevocationListAttributeName
            int r0 = r2.addHashCode(r0, r1)
            java.lang.String r1 = r2.ldapAttributeAuthorityRevocationListAttributeName
            int r0 = r2.addHashCode(r0, r1)
            java.lang.String r1 = r2.userCertificateSubjectAttributeName
            int r0 = r2.addHashCode(r0, r1)
            java.lang.String r1 = r2.cACertificateSubjectAttributeName
            int r0 = r2.addHashCode(r0, r1)
            java.lang.String r1 = r2.crossCertificateSubjectAttributeName
            int r0 = r2.addHashCode(r0, r1)
            java.lang.String r1 = r2.certificateRevocationListIssuerAttributeName
            int r0 = r2.addHashCode(r0, r1)
            java.lang.String r1 = r2.deltaRevocationListIssuerAttributeName
            int r0 = r2.addHashCode(r0, r1)
            java.lang.String r1 = r2.authorityRevocationListIssuerAttributeName
            int r0 = r2.addHashCode(r0, r1)
            java.lang.String r1 = r2.attributeCertificateAttributeSubjectAttributeName
            int r0 = r2.addHashCode(r0, r1)
            java.lang.String r1 = r2.aACertificateSubjectAttributeName
            int r0 = r2.addHashCode(r0, r1)
            java.lang.String r1 = r2.attributeDescriptorCertificateSubjectAttributeName
            int r0 = r2.addHashCode(r0, r1)
            java.lang.String r1 = r2.attributeCertificateRevocationListIssuerAttributeName
            int r0 = r2.addHashCode(r0, r1)
            java.lang.String r1 = r2.attributeAuthorityRevocationListIssuerAttributeName
            int r0 = r2.addHashCode(r0, r1)
            java.lang.String r1 = r2.searchForSerialNumberIn
            int r0 = r2.addHashCode(r0, r1)
            return r0
    }
}
