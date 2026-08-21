package android.support.v4.os;

public final class EnvironmentCompat {
    public static final java.lang.String MEDIA_UNKNOWN = "unknown";
    private static final java.lang.String TAG = "EnvironmentCompat";

    private EnvironmentCompat() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.String getStorageState(java.io.File r2) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 19
            if (r0 < r1) goto Lb
            java.lang.String r2 = android.os.Environment.getStorageState(r2)
            return r2
        Lb:
            java.lang.String r2 = r2.getCanonicalPath()     // Catch: java.io.IOException -> L22
            java.io.File r0 = android.os.Environment.getExternalStorageDirectory()     // Catch: java.io.IOException -> L22
            java.lang.String r0 = r0.getCanonicalPath()     // Catch: java.io.IOException -> L22
            boolean r2 = r2.startsWith(r0)     // Catch: java.io.IOException -> L22
            if (r2 == 0) goto L39
            java.lang.String r2 = android.os.Environment.getExternalStorageState()     // Catch: java.io.IOException -> L22
            return r2
        L22:
            r2 = move-exception
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Failed to resolve canonical path: "
            r0.append(r1)
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            java.lang.String r0 = "EnvironmentCompat"
            android.util.Log.w(r0, r2)
        L39:
            java.lang.String r2 = "unknown"
            return r2
    }
}
