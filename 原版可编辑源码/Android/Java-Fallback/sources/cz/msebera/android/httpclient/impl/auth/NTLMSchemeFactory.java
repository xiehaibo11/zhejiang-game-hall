package cz.msebera.android.httpclient.impl.auth;

@cz.msebera.android.httpclient.annotation.Immutable
public class NTLMSchemeFactory implements cz.msebera.android.httpclient.auth.AuthSchemeFactory, cz.msebera.android.httpclient.auth.AuthSchemeProvider {
    public NTLMSchemeFactory() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public cz.msebera.android.httpclient.auth.AuthScheme create(cz.msebera.android.httpclient.protocol.HttpContext r1) {
            r0 = this;
            cz.msebera.android.httpclient.impl.auth.NTLMScheme r1 = new cz.msebera.android.httpclient.impl.auth.NTLMScheme
            r1.<init>()
            return r1
    }

    @Override
    public cz.msebera.android.httpclient.auth.AuthScheme newInstance(cz.msebera.android.httpclient.params.HttpParams r1) {
            r0 = this;
            cz.msebera.android.httpclient.impl.auth.NTLMScheme r1 = new cz.msebera.android.httpclient.impl.auth.NTLMScheme
            r1.<init>()
            return r1
    }
}
