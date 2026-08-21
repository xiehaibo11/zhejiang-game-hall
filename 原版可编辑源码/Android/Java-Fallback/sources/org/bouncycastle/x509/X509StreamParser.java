package org.bouncycastle.x509;

public class X509StreamParser implements org.bouncycastle.x509.util.StreamParser {
    private java.security.Provider _provider;
    private org.bouncycastle.x509.X509StreamParserSpi _spi;

    private X509StreamParser(java.security.Provider r1, org.bouncycastle.x509.X509StreamParserSpi r2) {
            r0 = this;
            r0.<init>()
            r0._provider = r1
            r0._spi = r2
            return
    }

    private static org.bouncycastle.x509.X509StreamParser createParser(org.bouncycastle.x509.X509Util.Implementation r2) {
            java.lang.Object r0 = r2.getEngine()
            org.bouncycastle.x509.X509StreamParserSpi r0 = (org.bouncycastle.x509.X509StreamParserSpi) r0
            org.bouncycastle.x509.X509StreamParser r1 = new org.bouncycastle.x509.X509StreamParser
            java.security.Provider r2 = r2.getProvider()
            r1.<init>(r2, r0)
            return r1
    }

    public static org.bouncycastle.x509.X509StreamParser getInstance(java.lang.String r1) throws org.bouncycastle.x509.NoSuchParserException {
            java.lang.String r0 = "X509StreamParser"
            org.bouncycastle.x509.X509Util$Implementation r1 = org.bouncycastle.x509.X509Util.getImplementation(r0, r1)     // Catch: java.security.NoSuchAlgorithmException -> Lb
            org.bouncycastle.x509.X509StreamParser r1 = createParser(r1)     // Catch: java.security.NoSuchAlgorithmException -> Lb
            return r1
        Lb:
            r1 = move-exception
            org.bouncycastle.x509.NoSuchParserException r0 = new org.bouncycastle.x509.NoSuchParserException
            java.lang.String r1 = r1.getMessage()
            r0.<init>(r1)
            throw r0
    }

    public static org.bouncycastle.x509.X509StreamParser getInstance(java.lang.String r0, java.lang.String r1) throws org.bouncycastle.x509.NoSuchParserException, java.security.NoSuchProviderException {
            java.security.Provider r1 = org.bouncycastle.x509.X509Util.getProvider(r1)
            org.bouncycastle.x509.X509StreamParser r0 = getInstance(r0, r1)
            return r0
    }

    public static org.bouncycastle.x509.X509StreamParser getInstance(java.lang.String r1, java.security.Provider r2) throws org.bouncycastle.x509.NoSuchParserException {
            java.lang.String r0 = "X509StreamParser"
            org.bouncycastle.x509.X509Util$Implementation r1 = org.bouncycastle.x509.X509Util.getImplementation(r0, r1, r2)     // Catch: java.security.NoSuchAlgorithmException -> Lb
            org.bouncycastle.x509.X509StreamParser r1 = createParser(r1)     // Catch: java.security.NoSuchAlgorithmException -> Lb
            return r1
        Lb:
            r1 = move-exception
            org.bouncycastle.x509.NoSuchParserException r2 = new org.bouncycastle.x509.NoSuchParserException
            java.lang.String r1 = r1.getMessage()
            r2.<init>(r1)
            throw r2
    }

    public java.security.Provider getProvider() {
            r1 = this;
            java.security.Provider r0 = r1._provider
            return r0
    }

    public void init(java.io.InputStream r2) {
            r1 = this;
            org.bouncycastle.x509.X509StreamParserSpi r0 = r1._spi
            r0.engineInit(r2)
            return
    }

    public void init(byte[] r3) {
            r2 = this;
            org.bouncycastle.x509.X509StreamParserSpi r0 = r2._spi
            java.io.ByteArrayInputStream r1 = new java.io.ByteArrayInputStream
            r1.<init>(r3)
            r0.engineInit(r1)
            return
    }

    @Override
    public java.lang.Object read() throws org.bouncycastle.x509.util.StreamParsingException {
            r1 = this;
            org.bouncycastle.x509.X509StreamParserSpi r0 = r1._spi
            java.lang.Object r0 = r0.engineRead()
            return r0
    }

    @Override
    public java.util.Collection readAll() throws org.bouncycastle.x509.util.StreamParsingException {
            r1 = this;
            org.bouncycastle.x509.X509StreamParserSpi r0 = r1._spi
            java.util.Collection r0 = r0.engineReadAll()
            return r0
    }
}
