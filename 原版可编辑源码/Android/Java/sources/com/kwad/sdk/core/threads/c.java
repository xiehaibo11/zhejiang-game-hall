package com.kwad.sdk.core.threads;

import android.os.Handler;
import android.os.HandlerThread;
import android.os.SystemClock;
import android.text.TextUtils;
import com.kwad.sdk.core.report.KSLoggerReporter;
import com.kwad.sdk.utils.aw;
import com.kwad.sdk.utils.g;
import java.util.concurrent.ConcurrentHashMap;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.ThreadPoolExecutor;
import org.json.JSONObject;

public class c {
    private static int avr;
    private static int avs;
    private static long interval;
    private static long startTime;
    public static final String TAG = c.class.getSimpleName();
    private static int avq = 0;
    private static final ConcurrentHashMap<ThreadPoolExecutor, Long> avt = new ConcurrentHashMap<>();
    private static final ConcurrentHashMap<ThreadPoolExecutor, String> avu = new ConcurrentHashMap<>();

    static int Dh() {
        int i = avq;
        avq = i + 1;
        return i;
    }

    private static void a(d dVar) {
        com.kwad.sdk.core.threads.a.b.avy = true;
        com.kwad.sdk.core.threads.a.a.avy = true;
        interval = dVar.interval;
        avs = dVar.avx;
        HandlerThread handlerThread = new HandlerThread("pollingHT");
        handlerThread.start();
        final Handler handler = new Handler(handlerThread.getLooper());
        startTime = SystemClock.elapsedRealtime();
        handler.post(new aw() {
            @Override
            public final void doTask() {
                ExecutorService executorServiceDF;
                for (String str : GlobalThreadPools.Db()) {
                    if (str != null && !c.avu.containsValue(str) && (executorServiceDF = GlobalThreadPools.dF(str)) != null && (executorServiceDF instanceof ThreadPoolExecutor) && !c.avt.containsKey(executorServiceDF)) {
                        c.a((ThreadPoolExecutor) executorServiceDF, str);
                    }
                }
                int poolSize = 0;
                for (ThreadPoolExecutor threadPoolExecutor : c.avu.keySet()) {
                    String str2 = (String) c.avu.get(threadPoolExecutor);
                    poolSize += threadPoolExecutor.getPoolSize();
                    b bVarB = c.b(threadPoolExecutor, str2);
                    if (bVarB != null) {
                        KSLoggerReporter.z(bVarB.toJson());
                    }
                }
                b bVar = new b();
                bVar.avg = "total";
                bVar.avj = poolSize;
                KSLoggerReporter.z(bVar.toJson());
                c.Dh();
                if (c.avq < c.avs) {
                    handler.postDelayed(this, c.interval);
                }
            }
        });
    }

    public static void a(ThreadPoolExecutor threadPoolExecutor, String str) {
        avt.put(threadPoolExecutor, Long.valueOf(threadPoolExecutor.getCompletedTaskCount()));
        avu.put(threadPoolExecutor, str);
    }

    /* JADX WARN: Multi-variable type inference failed */
    public static b b(ThreadPoolExecutor threadPoolExecutor, String str) {
        if (threadPoolExecutor == 0) {
            return null;
        }
        b bVar = new b();
        bVar.avg = str;
        bVar.avh = threadPoolExecutor.getCorePoolSize();
        bVar.avi = threadPoolExecutor.getMaximumPoolSize();
        bVar.avj = threadPoolExecutor.getPoolSize();
        bVar.avk = threadPoolExecutor.getActiveCount();
        bVar.avn = threadPoolExecutor.getQueue() == null ? 0 : threadPoolExecutor.getQueue().size();
        long jLongValue = (!avt.containsKey(threadPoolExecutor) || avt.get(threadPoolExecutor) == null) ? 0L : avt.get(threadPoolExecutor).longValue();
        long completedTaskCount = threadPoolExecutor.getCompletedTaskCount();
        bVar.avm = completedTaskCount - jLongValue;
        avt.put(threadPoolExecutor, Long.valueOf(completedTaskCount));
        if (threadPoolExecutor instanceof com.kwad.sdk.core.threads.a.c) {
            bVar.avl = ((com.kwad.sdk.core.threads.a.c) threadPoolExecutor).Dl();
        } else {
            bVar.avl = 0L;
        }
        bVar.avo = SystemClock.elapsedRealtime() - startTime;
        bVar.interval = interval;
        bVar.avp = avr;
        return bVar;
    }

    public static void dG(final String str) {
        g.execute(new aw() {
            @Override
            public final void doTask() {
                d dVarDH;
                if (TextUtils.isEmpty(str) || (dVarDH = c.dH(str)) == null || dVarDH.avr == 0) {
                    return;
                }
                int unused = c.avr = dVarDH.avr;
                if (Math.random() * ((double) c.avr) >= 1.0d) {
                    return;
                }
                c.a(dVarDH);
            }
        });
    }

    public static d dH(String str) {
        if (TextUtils.isEmpty(str)) {
            return null;
        }
        try {
            JSONObject jSONObject = new JSONObject(str);
            d dVar = new d();
            dVar.parseJson(jSONObject);
            return dVar;
        } catch (Exception e) {
            com.kwad.library.solder.lib.a.w(TAG, e.toString());
            return null;
        }
    }
}
