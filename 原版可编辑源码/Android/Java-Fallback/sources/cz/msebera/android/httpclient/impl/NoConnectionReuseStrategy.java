package cz.msebera.android.httpclient.impl;

@cz.msebera.android.httpclient.annotation.Immutable
public class NoConnectionReuseStrategy implements cz.msebera.android.httpclient.ConnectionReuseStrategy {
    public static final cz.msebera.android.httpclient.impl.NoConnectionReuseStrategy INSTANCE = null;

    static {
            cz.msebera.android.httpclient.impl.NoConnectionReuseStrategy r0 = new cz.msebera.android.httpclient.impl.NoConnectionReuseStrategy
            r0.<init>()
            cz.msebera.android.httpclient.impl.NoConnectionReuseStrategy.INSTANCE = r0
            return
    }

    public NoConnectionReuseStrategy() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public boolean keepAlive(cz.msebera.android.httpclient.HttpResponse r1, cz.msebera.android.httpclient.protocol.HttpContext r2) {
            r0 = this;
            r1 = 0
            return r1
    }
}
