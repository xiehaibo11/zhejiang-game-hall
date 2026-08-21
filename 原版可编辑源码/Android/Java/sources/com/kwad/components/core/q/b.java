package com.kwad.components.core.q;

import com.kwad.sdk.api.core.SpeedLimitApi;
import java.io.InputStream;
import java.util.Collections;
import java.util.Iterator;
import java.util.Set;
import java.util.WeakHashMap;

public class b {
    private static volatile b Qs = null;
    private static volatile int Qt = 204800;
    static volatile boolean Qu = true;
    static volatile boolean Qv;
    static volatile Set<c> Qw = Collections.synchronizedSet(Collections.newSetFromMap(new WeakHashMap()));

    public static synchronized void a(c cVar) {
        if (Qw.contains(cVar)) {
            Qw.remove(cVar);
        }
    }

    public static void e(boolean z, int i) {
        if (i > 0) {
            Qt = i * 1024;
        }
        Qu = z;
    }

    public static b pL() {
        if (Qs == null) {
            synchronized (b.class) {
                if (Qs == null) {
                    Qs = new b();
                }
            }
        }
        return Qs;
    }

    public static boolean pM() {
        return Qu;
    }

    public static int pN() {
        return Qt / 1024;
    }

    public static void register() {
        try {
            com.kwad.sdk.service.b.b(SpeedLimitApi.class, a.class);
        } catch (Throwable unused) {
        }
    }

    private static synchronized InputStream wrap(InputStream inputStream) {
        c cVar;
        cVar = new c(inputStream, Qt / (Qw.size() + 1));
        Qw.add(cVar);
        return cVar;
    }

    public static InputStream wrapInputStream(InputStream inputStream) {
        return wrap(inputStream);
    }

    public final synchronized int pO() {
        int iPP;
        iPP = 0;
        try {
            Iterator<c> it = Qw.iterator();
            while (it.hasNext()) {
                iPP += (int) it.next().pP();
            }
        } catch (Exception unused) {
        }
        return iPP;
    }
}
