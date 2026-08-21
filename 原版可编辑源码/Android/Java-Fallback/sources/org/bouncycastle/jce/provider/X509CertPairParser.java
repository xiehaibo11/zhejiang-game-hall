package org.bouncycastle.jce.provider;

public class X509CertPairParser extends org.bouncycastle.x509.X509StreamParserSpi {
    private java.io.InputStream currentStream;

    public X509CertPairParser() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.currentStream = r0
            return
    }

    private org.bouncycastle.x509.X509CertificatePair readDERCrossCertificatePair(java.io.InputStream r3) throws java.io.IOException, java.security.cert.CertificateParsingException {
            r2 = this;
            org.bouncycastle.asn1.ASN1InputStream r0 = new org.bouncycastle.asn1.ASN1InputStream
            int r1 = org.bouncycastle.jce.provider.ProviderUtil.getReadLimit(r3)
            r0.<init>(r3, r1)
            org.bouncycastle.asn1.DERObject r3 = r0.readObject()
            org.bouncycastle.asn1.ASN1Sequence r3 = (org.bouncycastle.asn1.ASN1Sequence) r3
            org.bouncycastle.asn1.x509.CertificatePair r3 = org.bouncycastle.asn1.x509.CertificatePair.getInstance(r3)
            org.bouncycastle.x509.X509CertificatePair r0 = new org.bouncycastle.x509.X509CertificatePair
            r0.<init>(r3)
            return r0
    }

    @Override
    public void engineInit(java.io.InputStream r2) {
            r1 = this;
            r1.currentStream = r2
            boolean r2 = r2.markSupported()
            if (r2 != 0) goto L11
            java.io.BufferedInputStream r2 = new java.io.BufferedInputStream
            java.io.InputStream r0 = r1.currentStream
            r2.<init>(r0)
            r1.currentStream = r2
        L11:
            return
    }

    @Override
    public java.lang.Object engineRead() throws org.bouncycastle.x509.util.StreamParsingException {
            r3 = this;
            java.io.InputStream r0 = r3.currentStream     // Catch: java.lang.Exception -> L1e
            r1 = 10
            r0.mark(r1)     // Catch: java.lang.Exception -> L1e
            java.io.InputStream r0 = r3.currentStream     // Catch: java.lang.Exception -> L1e
            int r0 = r0.read()     // Catch: java.lang.Exception -> L1e
            r1 = -1
            if (r0 != r1) goto L12
            r0 = 0
            return r0
        L12:
            java.io.InputStream r0 = r3.currentStream     // Catch: java.lang.Exception -> L1e
            r0.reset()     // Catch: java.lang.Exception -> L1e
            java.io.InputStream r0 = r3.currentStream     // Catch: java.lang.Exception -> L1e
            org.bouncycastle.x509.X509CertificatePair r0 = r3.readDERCrossCertificatePair(r0)     // Catch: java.lang.Exception -> L1e
            return r0
        L1e:
            r0 = move-exception
            org.bouncycastle.x509.util.StreamParsingException r1 = new org.bouncycastle.x509.util.StreamParsingException
            java.lang.String r2 = r0.toString()
            r1.<init>(r2, r0)
            throw r1
    }

    @Override
    public java.util.Collection engineReadAll() throws org.bouncycastle.x509.util.StreamParsingException {
            r2 = this;
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
        L5:
            java.lang.Object r1 = r2.engineRead()
            org.bouncycastle.x509.X509CertificatePair r1 = (org.bouncycastle.x509.X509CertificatePair) r1
            if (r1 == 0) goto L11
            r0.add(r1)
            goto L5
        L11:
            return r0
    }
}
