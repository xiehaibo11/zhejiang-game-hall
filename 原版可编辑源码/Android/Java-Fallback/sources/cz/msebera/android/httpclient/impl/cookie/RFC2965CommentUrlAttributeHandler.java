package cz.msebera.android.httpclient.impl.cookie;

@cz.msebera.android.httpclient.annotation.Immutable
public class RFC2965CommentUrlAttributeHandler implements cz.msebera.android.httpclient.cookie.CommonCookieAttributeHandler {
    public RFC2965CommentUrlAttributeHandler() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public java.lang.String getAttributeName() {
            r1 = this;
            java.lang.String r0 = "commenturl"
            return r0
    }

    @Override
    public boolean match(cz.msebera.android.httpclient.cookie.Cookie r1, cz.msebera.android.httpclient.cookie.CookieOrigin r2) {
            r0 = this;
            r1 = 1
            return r1
    }

    @Override
    public void parse(cz.msebera.android.httpclient.cookie.SetCookie r2, java.lang.String r3) throws cz.msebera.android.httpclient.cookie.MalformedCookieException {
            r1 = this;
            boolean r0 = r2 instanceof cz.msebera.android.httpclient.cookie.SetCookie2
            if (r0 == 0) goto L9
            cz.msebera.android.httpclient.cookie.SetCookie2 r2 = (cz.msebera.android.httpclient.cookie.SetCookie2) r2
            r2.setCommentURL(r3)
        L9:
            return
    }

    @Override
    public void validate(cz.msebera.android.httpclient.cookie.Cookie r1, cz.msebera.android.httpclient.cookie.CookieOrigin r2) throws cz.msebera.android.httpclient.cookie.MalformedCookieException {
            r0 = this;
            return
    }
}
