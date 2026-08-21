package com.bianfeng.ymnsdk.ymndatalib.utils;

public class TraceUtils {
    public static volatile java.util.Map<java.lang.String, java.lang.String> map;
    public static volatile com.bianfeng.ymnsdk.ymndatalib.utils.TraceUtils utils;
    public java.lang.ThreadLocal<java.lang.String> local;
    public java.lang.String originTrace;

    public TraceUtils() {
            r1 = this;
            r1.<init>()
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            com.bianfeng.ymnsdk.ymndatalib.utils.TraceUtils.map = r0
            java.lang.ThreadLocal r0 = new java.lang.ThreadLocal
            r0.<init>()
            r1.local = r0
            return
    }

    private java.lang.String createTrace(java.lang.String r1) {
            r0 = this;
            java.lang.String r1 = r0.set(r1)
            return r1
    }

    public static com.bianfeng.ymnsdk.ymndatalib.utils.TraceUtils getInstance() {
            com.bianfeng.ymnsdk.ymndatalib.utils.TraceUtils r0 = com.bianfeng.ymnsdk.ymndatalib.utils.TraceUtils.utils
            if (r0 != 0) goto L17
            java.lang.Class<com.bianfeng.ymnsdk.ymndatalib.utils.TraceUtils> r0 = com.bianfeng.ymnsdk.ymndatalib.utils.TraceUtils.class
            monitor-enter(r0)
            com.bianfeng.ymnsdk.ymndatalib.utils.TraceUtils r1 = com.bianfeng.ymnsdk.ymndatalib.utils.TraceUtils.utils     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.bianfeng.ymnsdk.ymndatalib.utils.TraceUtils r1 = new com.bianfeng.ymnsdk.ymndatalib.utils.TraceUtils     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.bianfeng.ymnsdk.ymndatalib.utils.TraceUtils.utils = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r1
        L17:
            com.bianfeng.ymnsdk.ymndatalib.utils.TraceUtils r0 = com.bianfeng.ymnsdk.ymndatalib.utils.TraceUtils.utils
            return r0
    }

    private java.lang.String set(java.lang.String r3) {
            r2 = this;
            java.lang.String r0 = r2.createTransactionId()
            java.util.Map<java.lang.String, java.lang.String> r1 = com.bianfeng.ymnsdk.ymndatalib.utils.TraceUtils.map
            r1.put(r3, r0)
            return r0
    }

    public java.lang.String createTransactionId() {
            r1 = this;
            java.lang.String r0 = com.bianfeng.ymnsdk.utilslib.SystemUtils.createTransactionId()
            return r0
    }

    public java.lang.String getLoginTrace() {
            r1 = this;
            java.lang.String r0 = "ymn_login"
            java.lang.String r0 = r1.getTrace(r0)
            return r0
    }

    public java.lang.String getOriginTrace() {
            r2 = this;
            java.lang.String r0 = r2.originTrace
            if (r0 != 0) goto L18
            java.lang.Class<com.bianfeng.ymnsdk.ymndatalib.utils.TraceUtils> r0 = com.bianfeng.ymnsdk.ymndatalib.utils.TraceUtils.class
            monitor-enter(r0)
            java.lang.String r1 = r2.originTrace     // Catch: java.lang.Throwable -> L15
            if (r1 != 0) goto L13
            java.lang.String r1 = "ymn_init"
            java.lang.String r1 = r2.set(r1)     // Catch: java.lang.Throwable -> L15
            r2.originTrace = r1     // Catch: java.lang.Throwable -> L15
        L13:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L15
            goto L18
        L15:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L15
            throw r1
        L18:
            java.lang.String r0 = r2.originTrace
            return r0
    }

    public java.lang.String getPayTrace() {
            r1 = this;
            java.lang.String r0 = "ymn_pay"
            java.lang.String r0 = r1.getTrace(r0)
            return r0
    }

    public java.lang.String getPluginTrace(java.lang.String r1) {
            r0 = this;
            java.lang.String r1 = r0.getTrace(r1)
            return r1
    }

    public java.lang.String getStartLoginTrace() {
            r1 = this;
            java.lang.String r0 = "getStartLoginTrace："
            com.bianfeng.ymnsdk.ymndatalib.utils.YmnDatalibLogger.i(r0)
            java.lang.String r0 = "ymn_login"
            java.lang.String r0 = r1.set(r0)
            return r0
    }

    public java.lang.String getStartPayTrace() {
            r1 = this;
            java.lang.String r0 = "ymn_pay"
            java.lang.String r0 = r1.set(r0)
            return r0
    }

    public java.lang.String getStartPluginTrace(java.lang.String r1) {
            r0 = this;
            java.lang.String r1 = r0.set(r1)
            return r1
    }

    public synchronized java.lang.String getTrace() {
            r2 = this;
            monitor-enter(r2)
            java.lang.ThreadLocal<java.lang.String> r0 = r2.local     // Catch: java.lang.Throwable -> L1a
            java.lang.Object r0 = r0.get()     // Catch: java.lang.Throwable -> L1a
            java.lang.String r0 = (java.lang.String) r0     // Catch: java.lang.Throwable -> L1a
            boolean r1 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L1a
            if (r1 == 0) goto L18
            java.lang.String r0 = r2.createTransactionId()     // Catch: java.lang.Throwable -> L1a
            java.lang.ThreadLocal<java.lang.String> r1 = r2.local     // Catch: java.lang.Throwable -> L1a
            r1.set(r0)     // Catch: java.lang.Throwable -> L1a
        L18:
            monitor-exit(r2)
            return r0
        L1a:
            r0 = move-exception
            monitor-exit(r2)
            throw r0
    }

    public java.lang.String getTrace(java.lang.String r2) {
            r1 = this;
            java.util.Map<java.lang.String, java.lang.String> r0 = com.bianfeng.ymnsdk.ymndatalib.utils.TraceUtils.map
            java.lang.Object r2 = r0.get(r2)
            java.lang.String r2 = (java.lang.String) r2
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 == 0) goto L10
            java.lang.String r2 = r1.originTrace
        L10:
            return r2
    }

    public void init() {
            r3 = this;
            java.util.Map<java.lang.String, java.lang.String> r0 = com.bianfeng.ymnsdk.ymndatalib.utils.TraceUtils.map
            java.lang.String r1 = r3.createTransactionId()
            java.lang.String r2 = "ymn_init"
            r0.put(r2, r1)
            return
    }
}
