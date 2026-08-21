package org.bouncycastle.ocsp;

public class RespData implements java.security.cert.X509Extension {
    org.bouncycastle.asn1.ocsp.ResponseData data;

    public RespData(org.bouncycastle.asn1.ocsp.ResponseData r1) {
            r0 = this;
            r0.<init>()
            r0.data = r1
            return
    }

    private java.util.Set getExtensionOIDs(boolean r6) {
            r5 = this;
            java.util.HashSet r0 = new java.util.HashSet
            r0.<init>()
            org.bouncycastle.asn1.x509.X509Extensions r1 = r5.getResponseExtensions()
            if (r1 == 0) goto L2d
            java.util.Enumeration r2 = r1.oids()
        Lf:
            boolean r3 = r2.hasMoreElements()
            if (r3 == 0) goto L2d
            java.lang.Object r3 = r2.nextElement()
            org.bouncycastle.asn1.DERObjectIdentifier r3 = (org.bouncycastle.asn1.DERObjectIdentifier) r3
            org.bouncycastle.asn1.x509.X509Extension r4 = r1.getExtension(r3)
            boolean r4 = r4.isCritical()
            if (r6 != r4) goto Lf
            java.lang.String r3 = r3.getId()
            r0.add(r3)
            goto Lf
        L2d:
            return r0
    }

    @Override
    public java.util.Set getCriticalExtensionOIDs() {
            r1 = this;
            r0 = 1
            java.util.Set r0 = r1.getExtensionOIDs(r0)
            return r0
    }

    @Override
    public byte[] getExtensionValue(java.lang.String r4) {
            r3 = this;
            org.bouncycastle.asn1.x509.X509Extensions r0 = r3.getResponseExtensions()
            if (r0 == 0) goto L43
            org.bouncycastle.asn1.DERObjectIdentifier r1 = new org.bouncycastle.asn1.DERObjectIdentifier
            r1.<init>(r4)
            org.bouncycastle.asn1.x509.X509Extension r4 = r0.getExtension(r1)
            if (r4 == 0) goto L43
            java.io.ByteArrayOutputStream r0 = new java.io.ByteArrayOutputStream
            r0.<init>()
            org.bouncycastle.asn1.DEROutputStream r1 = new org.bouncycastle.asn1.DEROutputStream
            r1.<init>(r0)
            org.bouncycastle.asn1.ASN1OctetString r4 = r4.getValue()     // Catch: java.lang.Exception -> L27
            r1.writeObject(r4)     // Catch: java.lang.Exception -> L27
            byte[] r4 = r0.toByteArray()     // Catch: java.lang.Exception -> L27
            return r4
        L27:
            r4 = move-exception
            java.lang.RuntimeException r0 = new java.lang.RuntimeException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "error encoding "
            r1.append(r2)
            java.lang.String r4 = r4.toString()
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            r0.<init>(r4)
            throw r0
        L43:
            r4 = 0
            return r4
    }

    @Override
    public java.util.Set getNonCriticalExtensionOIDs() {
            r1 = this;
            r0 = 0
            java.util.Set r0 = r1.getExtensionOIDs(r0)
            return r0
    }

    public java.util.Date getProducedAt() {
            r4 = this;
            org.bouncycastle.asn1.ocsp.ResponseData r0 = r4.data     // Catch: java.text.ParseException -> Lb
            org.bouncycastle.asn1.DERGeneralizedTime r0 = r0.getProducedAt()     // Catch: java.text.ParseException -> Lb
            java.util.Date r0 = r0.getDate()     // Catch: java.text.ParseException -> Lb
            return r0
        Lb:
            r0 = move-exception
            java.lang.IllegalStateException r1 = new java.lang.IllegalStateException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "ParseException:"
            r2.append(r3)
            java.lang.String r0 = r0.getMessage()
            r2.append(r0)
            java.lang.String r0 = r2.toString()
            r1.<init>(r0)
            throw r1
    }

    public org.bouncycastle.ocsp.RespID getResponderId() {
            r2 = this;
            org.bouncycastle.ocsp.RespID r0 = new org.bouncycastle.ocsp.RespID
            org.bouncycastle.asn1.ocsp.ResponseData r1 = r2.data
            org.bouncycastle.asn1.ocsp.ResponderID r1 = r1.getResponderID()
            r0.<init>(r1)
            return r0
    }

    public org.bouncycastle.asn1.x509.X509Extensions getResponseExtensions() {
            r1 = this;
            org.bouncycastle.asn1.ocsp.ResponseData r0 = r1.data
            org.bouncycastle.asn1.x509.X509Extensions r0 = r0.getResponseExtensions()
            return r0
    }

    public org.bouncycastle.ocsp.SingleResp[] getResponses() {
            r6 = this;
            org.bouncycastle.asn1.ocsp.ResponseData r0 = r6.data
            org.bouncycastle.asn1.ASN1Sequence r0 = r0.getResponses()
            int r1 = r0.size()
            org.bouncycastle.ocsp.SingleResp[] r2 = new org.bouncycastle.ocsp.SingleResp[r1]
            r3 = 0
        Ld:
            if (r3 == r1) goto L21
            org.bouncycastle.ocsp.SingleResp r4 = new org.bouncycastle.ocsp.SingleResp
            org.bouncycastle.asn1.DEREncodable r5 = r0.getObjectAt(r3)
            org.bouncycastle.asn1.ocsp.SingleResponse r5 = org.bouncycastle.asn1.ocsp.SingleResponse.getInstance(r5)
            r4.<init>(r5)
            r2[r3] = r4
            int r3 = r3 + 1
            goto Ld
        L21:
            return r2
    }

    public int getVersion() {
            r1 = this;
            org.bouncycastle.asn1.ocsp.ResponseData r0 = r1.data
            org.bouncycastle.asn1.DERInteger r0 = r0.getVersion()
            java.math.BigInteger r0 = r0.getValue()
            int r0 = r0.intValue()
            int r0 = r0 + 1
            return r0
    }

    @Override
    public boolean hasUnsupportedCriticalExtension() {
            r1 = this;
            java.util.Set r0 = r1.getCriticalExtensionOIDs()
            if (r0 == 0) goto Le
            boolean r0 = r0.isEmpty()
            if (r0 != 0) goto Le
            r0 = 1
            return r0
        Le:
            r0 = 0
            return r0
    }
}
