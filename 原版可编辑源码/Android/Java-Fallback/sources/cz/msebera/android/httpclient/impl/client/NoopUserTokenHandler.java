package cz.msebera.android.httpclient.impl.client;

@cz.msebera.android.httpclient.annotation.Immutable
public class NoopUserTokenHandler implements cz.msebera.android.httpclient.client.UserTokenHandler {
    public static final cz.msebera.android.httpclient.impl.client.NoopUserTokenHandler INSTANCE = null;

    static {
            cz.msebera.android.httpclient.impl.client.NoopUserTokenHandler r0 = new cz.msebera.android.httpclient.impl.client.NoopUserTokenHandler
            r0.<init>()
            cz.msebera.android.httpclient.impl.client.NoopUserTokenHandler.INSTANCE = r0
            return
    }

    public NoopUserTokenHandler() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public java.lang.Object getUserToken(cz.msebera.android.httpclient.protocol.HttpContext r1) {
            r0 = this;
            r1 = 0
            return r1
    }
}
