package cz.msebera.android.httpclient.impl.cookie;

@cz.msebera.android.httpclient.annotation.Immutable
public class RFC2965DiscardAttributeHandler implements cz.msebera.android.httpclient.cookie.CommonCookieAttributeHandler {
    public RFC2965DiscardAttributeHandler() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public java.lang.String getAttributeName() {
            r1 = this;
            java.lang.String r0 = "discard"
            return r0
    }

    @Override
    public boolean match(cz.msebera.android.httpclient.cookie.Cookie r1, cz.msebera.android.httpclient.cookie.CookieOrigin r2) {
            r0 = this;
            r1 = 1
            return r1
    }

    @Override
    public void parse(cz.msebera.android.httpclient.cookie.SetCookie r1, java.lang.String r2) throws cz.msebera.android.httpclient.cookie.MalformedCookieException {
            r0 = this;
            boolean r2 = r1 instanceof cz.msebera.android.httpclient.cookie.SetCookie2
            if (r2 == 0) goto La
            cz.msebera.android.httpclient.cookie.SetCookie2 r1 = (cz.msebera.android.httpclient.cookie.SetCookie2) r1
            r2 = 1
            r1.setDiscard(r2)
        La:
            return
    }

    @Override
    public void validate(cz.msebera.android.httpclient.cookie.Cookie r1, cz.msebera.android.httpclient.cookie.CookieOrigin r2) throws cz.msebera.android.httpclient.cookie.MalformedCookieException {
            r0 = this;
            return
    }
}
