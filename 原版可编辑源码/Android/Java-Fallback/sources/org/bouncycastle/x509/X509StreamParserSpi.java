package org.bouncycastle.x509;

public abstract class X509StreamParserSpi {
    public X509StreamParserSpi() {
            r0 = this;
            r0.<init>()
            return
    }

    public abstract void engineInit(java.io.InputStream r1);

    public abstract java.lang.Object engineRead() throws org.bouncycastle.x509.util.StreamParsingException;

    public abstract java.util.Collection engineReadAll() throws org.bouncycastle.x509.util.StreamParsingException;
}
