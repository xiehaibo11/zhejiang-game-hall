package com.sigmob.sdk.mraid;

import android.os.Handler;
import com.czhj.sdk.common.utils.Preconditions;
import com.czhj.sdk.logger.SigmobLog;
import com.sigmob.sdk.base.common.t;
import java.lang.ref.WeakReference;
import java.util.Collections;
import java.util.HashMap;
import java.util.Iterator;
import java.util.Map;

public class s {
    static final int a = 50;
    static final long b = 3000000;
    private static final long d = 3000000;
    private static final Map<String, a> e = Collections.synchronizedMap(new HashMap());
    static final b c = new b();
    private static Handler f = new Handler();

    public static class a {
        private final com.sigmob.sdk.base.views.e a;
        private final WeakReference<t> b;
        private final com.sigmob.sdk.base.common.r c;
        private final d d;

        a(com.sigmob.sdk.base.views.e eVar, t tVar, com.sigmob.sdk.base.common.r rVar, d dVar) {
            this.a = eVar;
            this.b = new WeakReference<>(tVar);
            this.c = rVar;
            this.d = dVar;
        }

        public com.sigmob.sdk.base.views.e a() {
            return this.a;
        }

        public WeakReference<t> b() {
            return this.b;
        }

        public com.sigmob.sdk.base.common.r c() {
            return this.c;
        }

        public d d() {
            return this.d;
        }
    }

    private static class b implements Runnable {
        private b() {
        }

        @Override
        public void run() {
            s.a();
        }
    }

    private s() {
    }

    public static a a(String str) {
        Preconditions.checkNotNull(str);
        return e.remove(str);
    }

    static synchronized void a() {
        Iterator<Map.Entry<String, a>> it = e.entrySet().iterator();
        while (it.hasNext()) {
            Map.Entry<String, a> next = it.next();
            if (next.getValue().b().get() == null) {
                next.getValue().c().a();
                it.remove();
            }
        }
        if (!e.isEmpty()) {
            f.removeCallbacks(c);
            f.postDelayed(c, 3000000L);
        }
    }

    @Deprecated
    static void a(Handler handler) {
        f = handler;
    }

    public static void a(String str, e eVar, com.sigmob.sdk.base.views.e eVar2, com.sigmob.sdk.base.common.r rVar, d dVar) {
        Preconditions.checkNotNull(str);
        Preconditions.checkNotNull(eVar);
        Preconditions.checkNotNull(eVar2);
        a();
        if (e.size() >= 50) {
            SigmobLog.w("Unable to cache web view. Please destroy some via #destroy() and try again.");
        } else {
            e.put(str, new a(eVar2, eVar, rVar, dVar));
        }
    }

    @Deprecated
    public static void b() {
        e.clear();
        f.removeCallbacks(c);
    }

    @Deprecated
    static Map<String, a> c() {
        return e;
    }
}
