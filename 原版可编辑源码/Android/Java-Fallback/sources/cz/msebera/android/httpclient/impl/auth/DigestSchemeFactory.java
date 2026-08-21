package cz.msebera.android.httpclient.impl.auth;

@cz.msebera.android.httpclient.annotation.Immutable
public class DigestSchemeFactory implements cz.msebera.android.httpclient.auth.AuthSchemeFactory, cz.msebera.android.httpclient.auth.AuthSchemeProvider {
    private final java.nio.charset.Charset charset;

    public DigestSchemeFactory() {
            r1 = this;
            r0 = 0
            r1.<init>(r0)
            return
    }

    public DigestSchemeFactory(java.nio.charset.Charset r1) {
            r0 = this;
            r0.<init>()
            r0.charset = r1
            return
    }

    @Override
    public cz.msebera.android.httpclient.auth.AuthScheme create(cz.msebera.android.httpclient.protocol.HttpContext r2) {
            r1 = this;
            cz.msebera.android.httpclient.impl.auth.DigestScheme r2 = new cz.msebera.android.httpclient.impl.auth.DigestScheme
            java.nio.charset.Charset r0 = r1.charset
            r2.<init>(r0)
            return r2
    }

    @Override
    public cz.msebera.android.httpclient.auth.AuthScheme newInstance(cz.msebera.android.httpclient.params.HttpParams r1) {
            r0 = this;
            cz.msebera.android.httpclient.impl.auth.DigestScheme r1 = new cz.msebera.android.httpclient.impl.auth.DigestScheme
            r1.<init>()
            return r1
    }
}
