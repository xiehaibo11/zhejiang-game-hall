package cz.msebera.android.httpclient.impl.cookie;

@cz.msebera.android.httpclient.annotation.Immutable
@java.lang.Deprecated
public class IgnoreSpecFactory implements cz.msebera.android.httpclient.cookie.CookieSpecFactory, cz.msebera.android.httpclient.cookie.CookieSpecProvider {
    public IgnoreSpecFactory() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public cz.msebera.android.httpclient.cookie.CookieSpec create(cz.msebera.android.httpclient.protocol.HttpContext r1) {
            r0 = this;
            cz.msebera.android.httpclient.impl.cookie.IgnoreSpec r1 = new cz.msebera.android.httpclient.impl.cookie.IgnoreSpec
            r1.<init>()
            return r1
    }

    @Override
    public cz.msebera.android.httpclient.cookie.CookieSpec newInstance(cz.msebera.android.httpclient.params.HttpParams r1) {
            r0 = this;
            cz.msebera.android.httpclient.impl.cookie.IgnoreSpec r1 = new cz.msebera.android.httpclient.impl.cookie.IgnoreSpec
            r1.<init>()
            return r1
    }
}
