package cz.msebera.android.httpclient.impl.client;

import cz.msebera.android.httpclient.annotation.Immutable;

@Immutable
public class LaxRedirectStrategy extends DefaultRedirectStrategy {
    private static final String[] REDIRECT_METHODS = {"GET", "POST", "HEAD"};

    @Override
    protected boolean isRedirectable(String str) {
        for (String str2 : REDIRECT_METHODS) {
            if (str2.equalsIgnoreCase(str)) {
                return true;
            }
        }
        return false;
    }
}
