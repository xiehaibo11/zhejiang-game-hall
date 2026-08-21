package android.support.v4.content.pm;

public final class PackageInfoCompat {
    private PackageInfoCompat() {
            r0 = this;
            r0.<init>()
            return
    }

    public static long getLongVersionCode(android.content.pm.PackageInfo r2) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 28
            if (r0 < r1) goto Lb
            long r0 = r2.getLongVersionCode()
            return r0
        Lb:
            int r2 = r2.versionCode
            long r0 = (long) r2
            return r0
    }
}
