package android.support.v4.os;

import android.content.res.Configuration;
import android.os.Build;
import java.util.Locale;

public final class ConfigurationCompat {
    private ConfigurationCompat() {
    }

    public static LocaleListCompat getLocales(Configuration r2) {
        if (Build.VERSION.SDK_INT < 24) goto L7;
        return LocaleListCompat.wrap(r2.getLocales());
    L7:
        return LocaleListCompat.create(new Locale[]{r2.locale});
    }
}
