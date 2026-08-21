package cz.msebera.android.httpclient.impl.cookie;

import cz.msebera.android.httpclient.annotation.Immutable;
import cz.msebera.android.httpclient.cookie.CookieSpec;
import cz.msebera.android.httpclient.cookie.CookieSpecFactory;
import cz.msebera.android.httpclient.cookie.CookieSpecProvider;
import cz.msebera.android.httpclient.cookie.params.CookieSpecPNames;
import cz.msebera.android.httpclient.params.HttpParams;
import cz.msebera.android.httpclient.protocol.HttpContext;
import java.util.Collection;

@Immutable
@Deprecated
public class RFC2965SpecFactory implements CookieSpecFactory, CookieSpecProvider {
    private final CookieSpec cookieSpec;

    public RFC2965SpecFactory(String[] strArr, boolean z) {
        this.cookieSpec = new RFC2965Spec(strArr, z);
    }

    public RFC2965SpecFactory() {
        this(null, false);
    }

    @Override
    public CookieSpec newInstance(HttpParams httpParams) {
        if (httpParams != null) {
            Collection collection = (Collection) httpParams.getParameter(CookieSpecPNames.DATE_PATTERNS);
            return new RFC2965Spec(collection != null ? (String[]) collection.toArray(new String[collection.size()]) : null, httpParams.getBooleanParameter(CookieSpecPNames.SINGLE_COOKIE_HEADER, false));
        }
        return new RFC2965Spec();
    }

    @Override
    public CookieSpec create(HttpContext httpContext) {
        return this.cookieSpec;
    }
}
