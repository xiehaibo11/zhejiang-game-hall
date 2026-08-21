package android.support.v4.os;

public final class TraceCompat {
    private TraceCompat() {
            r0 = this;
            r0.<init>()
            return
    }

    public static void beginSection(java.lang.String r2) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 18
            if (r0 < r1) goto L9
            android.os.Trace.beginSection(r2)
        L9:
            return
    }

    public static void endSection() {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 18
            if (r0 < r1) goto L9
            android.os.Trace.endSection()
        L9:
            return
    }
}
