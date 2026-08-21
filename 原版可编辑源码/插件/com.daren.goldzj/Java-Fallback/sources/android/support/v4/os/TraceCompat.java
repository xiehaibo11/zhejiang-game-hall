package android.support.v4.os;

import android.os.Build;
import android.os.Trace;

public final class TraceCompat {
    public static void beginSection(String r2) {
        if (Build.VERSION.SDK_INT < 18) goto L6;
        Trace.beginSection(r2);
        return;
    }

    public static void endSection() {
        if (Build.VERSION.SDK_INT < 18) goto L6;
        Trace.endSection();
        return;
    }

    private TraceCompat() {
    }
}
