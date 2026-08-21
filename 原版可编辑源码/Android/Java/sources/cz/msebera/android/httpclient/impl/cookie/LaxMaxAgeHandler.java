package cz.msebera.android.httpclient.impl.cookie;

import cz.msebera.android.httpclient.annotation.Immutable;
import cz.msebera.android.httpclient.cookie.CommonCookieAttributeHandler;
import cz.msebera.android.httpclient.cookie.MalformedCookieException;
import cz.msebera.android.httpclient.cookie.SM;
import cz.msebera.android.httpclient.cookie.SetCookie;
import cz.msebera.android.httpclient.util.Args;
import cz.msebera.android.httpclient.util.TextUtils;
import java.util.Date;
import java.util.regex.Pattern;

@Immutable
public class LaxMaxAgeHandler extends AbstractCookieAttributeHandler implements CommonCookieAttributeHandler {
    private static final Pattern MAX_AGE_PATTERN = Pattern.compile("^\\-?[0-9]+$");

    @Override
    public String getAttributeName() {
        return "max-age";
    }

    @Override
    public void parse(SetCookie setCookie, String str) throws MalformedCookieException {
        Args.notNull(setCookie, SM.COOKIE);
        if (!TextUtils.isBlank(str) && MAX_AGE_PATTERN.matcher(str).matches()) {
            try {
                int i = Integer.parseInt(str);
                setCookie.setExpiryDate(i >= 0 ? new Date(System.currentTimeMillis() + (((long) i) * 1000)) : new Date(Long.MIN_VALUE));
            } catch (NumberFormatException unused) {
            }
        }
    }
}
