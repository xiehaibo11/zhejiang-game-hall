package cz.msebera.android.httpclient.impl.client;

@cz.msebera.android.httpclient.annotation.Immutable
public class TargetAuthenticationStrategy extends cz.msebera.android.httpclient.impl.client.AuthenticationStrategyImpl {
    public static final cz.msebera.android.httpclient.impl.client.TargetAuthenticationStrategy INSTANCE = null;

    static {
            cz.msebera.android.httpclient.impl.client.TargetAuthenticationStrategy r0 = new cz.msebera.android.httpclient.impl.client.TargetAuthenticationStrategy
            r0.<init>()
            cz.msebera.android.httpclient.impl.client.TargetAuthenticationStrategy.INSTANCE = r0
            return
    }

    public TargetAuthenticationStrategy() {
            r2 = this;
            r0 = 401(0x191, float:5.62E-43)
            java.lang.String r1 = "WWW-Authenticate"
            r2.<init>(r0, r1)
            return
    }

    @Override
    public void authFailed(cz.msebera.android.httpclient.HttpHost r1, cz.msebera.android.httpclient.auth.AuthScheme r2, cz.msebera.android.httpclient.protocol.HttpContext r3) {
            r0 = this;
            super.authFailed(r1, r2, r3)
            return
    }

    @Override
    public void authSucceeded(cz.msebera.android.httpclient.HttpHost r1, cz.msebera.android.httpclient.auth.AuthScheme r2, cz.msebera.android.httpclient.protocol.HttpContext r3) {
            r0 = this;
            super.authSucceeded(r1, r2, r3)
            return
    }

    @Override
    public java.util.Map getChallenges(cz.msebera.android.httpclient.HttpHost r1, cz.msebera.android.httpclient.HttpResponse r2, cz.msebera.android.httpclient.protocol.HttpContext r3) throws cz.msebera.android.httpclient.auth.MalformedChallengeException {
            r0 = this;
            java.util.Map r1 = super.getChallenges(r1, r2, r3)
            return r1
    }

    @Override
    java.util.Collection<java.lang.String> getPreferredAuthSchemes(cz.msebera.android.httpclient.client.config.RequestConfig r1) {
            r0 = this;
            java.util.Collection r1 = r1.getTargetPreferredAuthSchemes()
            return r1
    }

    @Override
    public boolean isAuthenticationRequested(cz.msebera.android.httpclient.HttpHost r1, cz.msebera.android.httpclient.HttpResponse r2, cz.msebera.android.httpclient.protocol.HttpContext r3) {
            r0 = this;
            boolean r1 = super.isAuthenticationRequested(r1, r2, r3)
            return r1
    }

    @Override
    public java.util.Queue select(java.util.Map r1, cz.msebera.android.httpclient.HttpHost r2, cz.msebera.android.httpclient.HttpResponse r3, cz.msebera.android.httpclient.protocol.HttpContext r4) throws cz.msebera.android.httpclient.auth.MalformedChallengeException {
            r0 = this;
            java.util.Queue r1 = super.select(r1, r2, r3, r4)
            return r1
    }
}
