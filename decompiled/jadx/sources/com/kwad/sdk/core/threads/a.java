package com.kwad.sdk.core.threads;

import android.os.Handler;
import android.os.HandlerThread;
import android.text.TextUtils;
import com.kwad.sdk.utils.bn;
import java.lang.ref.WeakReference;
import java.util.Map;
import java.util.concurrent.ConcurrentHashMap;

/* JADX INFO: loaded from: classes2.dex */
public final class a {
    private static Map<String, WeakReference<C0215a>> auY = new ConcurrentHashMap();

    /* JADX INFO: renamed from: com.kwad.sdk.core.threads.a$a, reason: collision with other inner class name */
    public static class C0215a {
        private HandlerThread auZ;
        private Handler mHandler;

        public C0215a(String str) {
            String str2;
            if (TextUtils.isEmpty(str)) {
                str2 = "ksad-HT";
            } else {
                str2 = "ksad-" + str;
            }
            HandlerThread handlerThread = new HandlerThread(str2);
            this.auZ = handlerThread;
            handlerThread.start();
            this.mHandler = new Handler(this.auZ.getLooper());
        }

        public final bn b(bn.a aVar) {
            return new bn(aVar, this.auZ.getLooper());
        }

        public final Handler getHandler() {
            return this.mHandler;
        }
    }

    public static synchronized Handler CN() {
        return dE("commonHT").getHandler();
    }

    public static synchronized Handler CO() {
        return dE("reportHT").getHandler();
    }

    public static synchronized bn a(bn.a aVar) {
        return dE("commonHT").b(aVar);
    }

    private static C0215a dE(String str) {
        WeakReference<C0215a> weakReference = auY.get(str);
        if (weakReference != null && weakReference.get() != null) {
            return weakReference.get();
        }
        C0215a c0215a = new C0215a(str);
        auY.put(str, new WeakReference<>(c0215a));
        return c0215a;
    }
}
