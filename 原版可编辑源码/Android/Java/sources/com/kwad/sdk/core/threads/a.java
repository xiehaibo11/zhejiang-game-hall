package com.kwad.sdk.core.threads;

import android.os.Handler;
import android.os.HandlerThread;
import android.text.TextUtils;
import com.kwad.sdk.utils.bn;
import java.lang.ref.WeakReference;
import java.util.Map;
import java.util.concurrent.ConcurrentHashMap;

public final class a {
    private static Map<String, WeakReference<a>> auY = new ConcurrentHashMap();

    public static class a {
        private HandlerThread auZ;
        private Handler mHandler;

        public a(String str) {
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

    private static a dE(String str) {
        WeakReference<a> weakReference = auY.get(str);
        if (weakReference != null && weakReference.get() != null) {
            return weakReference.get();
        }
        a aVar = new a(str);
        auY.put(str, new WeakReference<>(aVar));
        return aVar;
    }
}
