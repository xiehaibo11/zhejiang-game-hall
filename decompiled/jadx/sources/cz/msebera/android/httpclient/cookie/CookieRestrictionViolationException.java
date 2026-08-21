package cz.msebera.android.httpclient.cookie;

import cz.msebera.android.httpclient.annotation.Immutable;

/* JADX INFO: loaded from: classes4.dex */
@Immutable
public class CookieRestrictionViolationException extends MalformedCookieException {
    private static final long serialVersionUID = 7371235577078589013L;

    public CookieRestrictionViolationException() {
    }

    public CookieRestrictionViolationException(String str) {
        super(str);
    }
}
