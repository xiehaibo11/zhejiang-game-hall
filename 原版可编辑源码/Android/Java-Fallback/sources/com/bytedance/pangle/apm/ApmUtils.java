package com.bytedance.pangle.apm;

public class ApmUtils {
    private static volatile com.bytedance.pangle.apm.AbsApm sApm;


    public ApmUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.bytedance.pangle.apm.AbsApm getApmInstance() {
            com.bytedance.pangle.apm.AbsApm r0 = com.bytedance.pangle.apm.ApmUtils.sApm
            if (r0 != 0) goto L17
            java.lang.Class<com.bytedance.pangle.apm.AbsApm> r0 = com.bytedance.pangle.apm.AbsApm.class
            monitor-enter(r0)
            com.bytedance.pangle.apm.AbsApm r1 = com.bytedance.pangle.apm.ApmUtils.sApm     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.bytedance.pangle.apm.ApmUtils$1 r1 = new com.bytedance.pangle.apm.ApmUtils$1     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.bytedance.pangle.apm.ApmUtils.sApm = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r1
        L17:
            com.bytedance.pangle.apm.AbsApm r0 = com.bytedance.pangle.apm.ApmUtils.sApm
            return r0
    }

    public static synchronized void register(com.bytedance.pangle.apm.AbsApm r1) {
            java.lang.Class<com.bytedance.pangle.apm.ApmUtils> r0 = com.bytedance.pangle.apm.ApmUtils.class
            monitor-enter(r0)
            com.bytedance.pangle.apm.ApmUtils.sApm = r1     // Catch: java.lang.Throwable -> L7
            monitor-exit(r0)
            return
        L7:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }
}
