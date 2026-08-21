package com.kwad.sdk.core.threads;

import com.sigmob.sdk.base.mta.PointCategory;
import java.lang.ref.WeakReference;
import java.util.Map;
import java.util.Set;
import java.util.concurrent.ConcurrentHashMap;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.LinkedBlockingQueue;
import java.util.concurrent.ScheduledExecutorService;
import java.util.concurrent.SynchronousQueue;
import java.util.concurrent.ThreadFactory;
import java.util.concurrent.ThreadPoolExecutor;
import java.util.concurrent.TimeUnit;
import java.util.concurrent.atomic.AtomicInteger;

public final class GlobalThreadPools {
    private static String TAG;
    private static final int ava;
    private static final int avb;
    private static final int avc;
    private static Map<String, WeakReference<ExecutorService>> avd;
    private static Map<String, Integer> ave;

    static class 4 {
        static final int[] avf;

        static {
            int[] iArr = new int[ParamType.values().length];
            avf = iArr;
            try {
                iArr[ParamType.CORE.ordinal()] = 1;
            } catch (NoSuchFieldError unused) {
            }
            try {
                avf[ParamType.MAX.ordinal()] = 2;
            } catch (NoSuchFieldError unused2) {
            }
            try {
                avf[ParamType.KEEP_ALIVE.ordinal()] = 3;
            } catch (NoSuchFieldError unused3) {
            }
        }
    }

    enum ParamType {
        CORE,
        MAX,
        KEEP_ALIVE
    }

    interface a {
        ExecutorService De();
    }

    static class b implements a {
        private b() {
        }

        b(byte b) {
            this();
        }

        @Override
        public final ExecutorService De() {
            return new com.kwad.sdk.core.threads.a.b(GlobalThreadPools.a("httpIO", ParamType.CORE, GlobalThreadPools.avb), GlobalThreadPools.a("httpIO", ParamType.MAX, GlobalThreadPools.avc), GlobalThreadPools.a("httpIO", ParamType.KEEP_ALIVE, 60), TimeUnit.SECONDS, new LinkedBlockingQueue(), new d(5, "diskAndHttp"));
        }
    }

    static class c implements a {
        private c() {
        }

        c(byte b) {
            this();
        }

        @Override
        public final ExecutorService De() {
            return new com.kwad.sdk.core.threads.a.b(GlobalThreadPools.a("imageLoaderDistributor", ParamType.CORE, 0), GlobalThreadPools.a("imageLoaderDistributor", ParamType.MAX, 10), GlobalThreadPools.a("imageLoaderDistributor", ParamType.KEEP_ALIVE, 60), TimeUnit.SECONDS, new SynchronousQueue(), new d(5, "uil-pool-d-"), new ThreadPoolExecutor.DiscardPolicy());
        }
    }

    public static class d implements ThreadFactory {
        private static final AtomicInteger poolNumber = new AtomicInteger(1);
        private final String namePrefix;
        private final int threadPriority;
        private final AtomicInteger threadNumber = new AtomicInteger(1);
        private final ThreadGroup group = Thread.currentThread().getThreadGroup();

        public d(int i, String str) {
            this.threadPriority = i;
            this.namePrefix = "ksad-" + str + poolNumber.getAndIncrement() + "-thread-";
        }

        @Override
        public final Thread newThread(Runnable runnable) {
            Thread thread = new Thread(this.group, runnable, this.namePrefix + this.threadNumber.getAndIncrement(), 0L);
            if (thread.isDaemon()) {
                thread.setDaemon(false);
            }
            thread.setPriority(this.threadPriority);
            return thread;
        }
    }

    static class e implements a {
        private e() {
        }

        e(byte b) {
            this();
        }

        @Override
        public final ExecutorService De() {
            return new com.kwad.sdk.core.threads.a.b(GlobalThreadPools.a("ksImageLoaderTask", ParamType.CORE, 3), GlobalThreadPools.a("ksImageLoaderTask", ParamType.MAX, 3), GlobalThreadPools.a("ksImageLoaderTask", ParamType.KEEP_ALIVE, 60), TimeUnit.SECONDS, new LinkedBlockingQueue(), new d(5, "uil-pool-"));
        }
    }

    static class f implements a {
        private f() {
        }

        f(byte b) {
            this();
        }

        @Override
        public final ExecutorService De() {
            return new com.kwad.sdk.core.threads.a.b(GlobalThreadPools.a("lruDiskCache", ParamType.CORE, 0), GlobalThreadPools.a("lruDiskCache", ParamType.MAX, 1), GlobalThreadPools.a("lruDiskCache", ParamType.KEEP_ALIVE, 60), TimeUnit.SECONDS, new LinkedBlockingQueue(), new d(5, "lruDiskCache"));
        }
    }

    static class g implements a {
        private g() {
        }

        g(byte b) {
            this();
        }

        @Override
        public final ExecutorService De() {
            return new com.kwad.sdk.core.threads.a.b(GlobalThreadPools.a(PointCategory.REPORT, ParamType.CORE, 1), GlobalThreadPools.a(PointCategory.REPORT, ParamType.MAX, 1), GlobalThreadPools.a(PointCategory.REPORT, ParamType.KEEP_ALIVE, 0), TimeUnit.SECONDS, new LinkedBlockingQueue(), new d(3, "report-"));
        }
    }

    static class h implements a {
        private h() {
        }

        h(byte b) {
            this();
        }

        @Override
        public final ExecutorService De() {
            return new com.kwad.sdk.core.threads.a.b(GlobalThreadPools.a("videoCache", ParamType.CORE, 3), GlobalThreadPools.a("videoCache", ParamType.MAX, 3), GlobalThreadPools.a("videoCache", ParamType.KEEP_ALIVE, 60), TimeUnit.SECONDS, new LinkedBlockingQueue(), new d(5, "videoCache"));
        }
    }

    static {
        int iAvailableProcessors = Runtime.getRuntime().availableProcessors();
        ava = iAvailableProcessors;
        int i = iAvailableProcessors > 0 ? iAvailableProcessors + 4 : 9;
        avb = i;
        avc = i;
        TAG = "GlobalThreadPools";
        avd = new ConcurrentHashMap();
        ave = new ConcurrentHashMap();
    }

    public static void CP() {
        for (String str : avd.keySet()) {
            if (avd.get(str).get() instanceof ThreadPoolExecutor) {
                ThreadPoolExecutor threadPoolExecutor = (ThreadPoolExecutor) avd.get(str).get();
                int corePoolSize = threadPoolExecutor.getCorePoolSize();
                int maximumPoolSize = threadPoolExecutor.getMaximumPoolSize();
                int keepAliveTime = (int) threadPoolExecutor.getKeepAliveTime(TimeUnit.SECONDS);
                int iA = a(str, ParamType.CORE, corePoolSize);
                int iA2 = a(str, ParamType.MAX, maximumPoolSize);
                threadPoolExecutor.setKeepAliveTime(a(str, ParamType.KEEP_ALIVE, keepAliveTime), TimeUnit.SECONDS);
                if (corePoolSize != iA || maximumPoolSize != iA2) {
                    if (corePoolSize <= iA2) {
                        threadPoolExecutor.setMaximumPoolSize(iA2);
                        threadPoolExecutor.setCorePoolSize(iA);
                    } else if (iA <= maximumPoolSize) {
                        threadPoolExecutor.setCorePoolSize(iA);
                        threadPoolExecutor.setMaximumPoolSize(iA2);
                    }
                }
            }
        }
    }

    public static ExecutorService CQ() {
        return a("lruDiskCache", new f((byte) 0));
    }

    public static synchronized ExecutorService CR() {
        com.kwad.sdk.core.e.c.d(TAG, "forKsImageLoaderTask");
        return a("ksImageLoaderTask", new e((byte) 0));
    }

    public static synchronized ExecutorService CS() {
        com.kwad.sdk.core.e.c.d(TAG, "forKsImageLoaderCachedImages");
        return a("ksImageLoaderTask", new e((byte) 0));
    }

    public static ExecutorService CT() {
        com.kwad.sdk.core.e.c.d(TAG, "forKsImageLoaderTaskDistributor");
        return a("imageLoaderDistributor", new c((byte) 0));
    }

    public static synchronized ExecutorService CU() {
        com.kwad.sdk.core.e.c.d(TAG, "forBaseBatchReporter");
        return a(PointCategory.REPORT, new g((byte) 0));
    }

    public static synchronized ExecutorService CV() {
        com.kwad.sdk.core.e.c.d(TAG, "forAdReportManager");
        return a(PointCategory.REPORT, new g((byte) 0));
    }

    public static ExecutorService CW() {
        com.kwad.sdk.core.e.c.d(TAG, "forBaseNetwork");
        return a("httpIO", new b((byte) 0));
    }

    public static ExecutorService CX() {
        com.kwad.sdk.core.e.c.d(TAG, "forHttpCacheServer");
        return a("videoCache", new h((byte) 0));
    }

    public static ExecutorService CY() {
        com.kwad.sdk.core.e.c.d(TAG, "forAppStatusHelper");
        return new com.kwad.sdk.core.threads.a.b(a("lruDiskCache", ParamType.CORE, 1), a("lruDiskCache", ParamType.MAX, 1), a("lruDiskCache", ParamType.KEEP_ALIVE, 0), TimeUnit.SECONDS, new LinkedBlockingQueue(), new ThreadFactory() {
            @Override
            public final Thread newThread(Runnable runnable) {
                Thread thread = new Thread(runnable, "ksad-ashelper");
                thread.setPriority(3);
                return thread;
            }
        });
    }

    public static ExecutorService CZ() {
        com.kwad.sdk.core.e.c.d(TAG, "forAsync");
        return a("async", new a() {
            @Override
            public final ExecutorService De() {
                return new com.kwad.sdk.core.threads.a.b(GlobalThreadPools.a("async", ParamType.CORE, 3), GlobalThreadPools.a("async", ParamType.MAX, 3), GlobalThreadPools.a("async", ParamType.KEEP_ALIVE, 60), TimeUnit.SECONDS, new LinkedBlockingQueue(), new d(5, "async"));
            }
        });
    }

    public static ScheduledExecutorService Da() {
        com.kwad.sdk.core.e.c.d(TAG, "forAsyncSchedule");
        ExecutorService executorServiceA = a("async-schedule", new a() {
            @Override
            public final ExecutorService De() {
                return new com.kwad.sdk.core.threads.a.a(1, new d(5, "async-schedule"));
            }
        });
        return executorServiceA instanceof ScheduledExecutorService ? (ScheduledExecutorService) executorServiceA : new com.kwad.sdk.core.threads.a.a(1, new d(5, "async-schedule"));
    }

    public static Set<String> Db() {
        return avd.keySet();
    }

    private static int a(String str, ParamType paramType, int i) {
        StringBuilder sb;
        String str2;
        int i2 = 4.avf[paramType.ordinal()];
        if (i2 == 1) {
            sb = new StringBuilder();
            sb.append(str);
            str2 = "_core";
        } else if (i2 == 2) {
            sb = new StringBuilder();
            sb.append(str);
            str2 = "_max";
        } else {
            if (i2 != 3) {
                return i;
            }
            sb = new StringBuilder();
            sb.append(str);
            str2 = "_keep_alive";
        }
        sb.append(str2);
        String string = sb.toString();
        return (!ave.containsKey(string) || ave.get(string) == null) ? i : ave.get(string).intValue();
    }

    private static ExecutorService a(String str, a aVar) {
        WeakReference<ExecutorService> weakReference = avd.get(str);
        if (weakReference != null && weakReference.get() != null) {
            return weakReference.get();
        }
        ExecutorService executorServiceDe = aVar.De();
        avd.put(str, new WeakReference<>(executorServiceDe));
        return executorServiceDe;
    }

    public static ExecutorService dF(String str) {
        if (!avd.containsKey(str) || avd.get(str) == null) {
            return null;
        }
        return avd.get(str).get();
    }

    public static void n(String str, int i) {
        ave.put(str, Integer.valueOf(i));
    }
}
