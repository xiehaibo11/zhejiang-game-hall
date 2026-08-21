package android.support.v4.content.pm;

public final class PermissionInfoCompat {

    @java.lang.annotation.Retention(java.lang.annotation.RetentionPolicy.SOURCE)
    @android.support.annotation.RestrictTo({android.support.annotation.RestrictTo.Scope.LIBRARY})
    public @interface Protection {
    }

    @android.annotation.SuppressLint({"UniqueConstants"})
    @java.lang.annotation.Retention(java.lang.annotation.RetentionPolicy.SOURCE)
    @android.support.annotation.RestrictTo({android.support.annotation.RestrictTo.Scope.LIBRARY})
    public @interface ProtectionFlags {
    }

    private PermissionInfoCompat() {
            r0 = this;
            r0.<init>()
            return
    }

    @android.annotation.SuppressLint({"WrongConstant"})
    public static int getProtection(@android.support.annotation.NonNull android.content.pm.PermissionInfo r2) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 28
            if (r0 < r1) goto Lb
            int r2 = r2.getProtection()
            return r2
        Lb:
            int r2 = r2.protectionLevel
            r2 = r2 & 15
            return r2
    }

    @android.annotation.SuppressLint({"WrongConstant"})
    public static int getProtectionFlags(@android.support.annotation.NonNull android.content.pm.PermissionInfo r2) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 28
            if (r0 < r1) goto Lb
            int r2 = r2.getProtectionFlags()
            return r2
        Lb:
            int r2 = r2.protectionLevel
            r2 = r2 & (-16)
            return r2
    }
}
