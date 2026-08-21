package com.kwad.components.core.h;

import android.content.Context;
import com.kwad.sdk.core.e.c;
import com.kwad.sdk.utils.g;
import java.io.File;
import java.io.FileFilter;
import java.util.concurrent.TimeUnit;

public final class a {

    static final class a {
        private static final a KH = new a(0);
    }

    private a() {
    }

    a(byte b) {
        this();
    }

    private void a(Context context, long j) {
        File[] fileArrListFiles = ad(context).listFiles(new FileFilter() {
            @Override
            public final boolean accept(File file) {
                String name = file.getName();
                return name.startsWith("dynamic-") && name.endsWith(com.tkay.china.common.a.a.g);
            }
        });
        if (fileArrListFiles == null || fileArrListFiles.length <= 0) {
            return;
        }
        long jMax = 0;
        for (File file : fileArrListFiles) {
            jMax = Math.max(jMax, file.lastModified());
        }
        long jMin = Math.min(j, jMax);
        for (File file2 : fileArrListFiles) {
            if (file2.exists() && file2.lastModified() < jMin) {
                file2.delete();
            }
        }
    }

    private static File ad(Context context) {
        return new File(context.getApplicationInfo().dataDir, "ksad_dynamic");
    }

    public static a nY() {
        return a.KH;
    }

    public final void ac(final Context context) {
        final long jCurrentTimeMillis = System.currentTimeMillis();
        g.schedule(new Runnable() {
            @Override
            public final void run() {
                try {
                    a.this.a(context, jCurrentTimeMillis);
                } catch (Throwable th) {
                    c.printStackTraceOnly(th);
                }
            }
        }, 10L, TimeUnit.SECONDS);
    }
}
