package android.support.v4.content.res;

public final class ConfigurationHelper {
    private ConfigurationHelper() {
            r0 = this;
            r0.<init>()
            return
    }

    public static int getDensityDpi(@android.support.annotation.NonNull android.content.res.Resources r2) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 17
            if (r0 < r1) goto Ld
            android.content.res.Configuration r2 = r2.getConfiguration()
            int r2 = r2.densityDpi
            return r2
        Ld:
            android.util.DisplayMetrics r2 = r2.getDisplayMetrics()
            int r2 = r2.densityDpi
            return r2
    }
}
