package android.support.v4.os;

public final class ConfigurationCompat {
    private ConfigurationCompat() {
            r0 = this;
            r0.<init>()
            return
    }

    public static android.support.v4.os.LocaleListCompat getLocales(android.content.res.Configuration r2) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 24
            if (r0 < r1) goto Lf
            android.os.LocaleList r2 = r2.getLocales()
            android.support.v4.os.LocaleListCompat r2 = android.support.v4.os.LocaleListCompat.wrap(r2)
            return r2
        Lf:
            r0 = 1
            java.util.Locale[] r0 = new java.util.Locale[r0]
            r1 = 0
            java.util.Locale r2 = r2.locale
            r0[r1] = r2
            android.support.v4.os.LocaleListCompat r2 = android.support.v4.os.LocaleListCompat.create(r0)
            return r2
    }
}
