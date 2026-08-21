package com.huawei.updatesdk.b.g;

public class b {
    private static java.util.List<android.os.AsyncTask> a;

    static {
            java.util.concurrent.CopyOnWriteArrayList r0 = new java.util.concurrent.CopyOnWriteArrayList
            r0.<init>()
            com.huawei.updatesdk.b.g.b.a = r0
            return
    }

    public static com.huawei.updatesdk.a.b.c.b a(com.huawei.updatesdk.b.b.c r1, com.huawei.updatesdk.a.b.c.c.a r2) {
            com.huawei.updatesdk.a.b.c.b r0 = new com.huawei.updatesdk.a.b.c.b
            r0.<init>(r1, r2)
            a(r0, r1)
            return r0
    }

    public static java.util.List<android.os.AsyncTask> a() {
            java.util.List<android.os.AsyncTask> r0 = com.huawei.updatesdk.b.g.b.a
            return r0
    }

    public static void a(android.os.AsyncTask r4) {
            if (r4 != 0) goto L3
            return
        L3:
            java.util.List<android.os.AsyncTask> r0 = com.huawei.updatesdk.b.g.b.a
            java.util.Iterator r0 = r0.iterator()
        L9:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L2b
            java.lang.Object r1 = r0.next()
            android.os.AsyncTask r1 = (android.os.AsyncTask) r1
            if (r1 == 0) goto L9
            android.os.AsyncTask$Status r2 = r1.getStatus()
            android.os.AsyncTask$Status r3 = android.os.AsyncTask.Status.FINISHED
            if (r2 == r3) goto L25
            boolean r1 = r1.isCancelled()
            if (r1 == 0) goto L9
        L25:
            java.util.List<android.os.AsyncTask> r1 = com.huawei.updatesdk.b.g.b.a
            r1.remove(r4)
            goto L9
        L2b:
            java.util.List<android.os.AsyncTask> r0 = com.huawei.updatesdk.b.g.b.a
            r0.add(r4)
            return
    }

    private static void a(com.huawei.updatesdk.a.b.c.b r2, com.huawei.updatesdk.b.b.c r3) {
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r0 = "executeTask, ActiveCount:"
            r3.append(r0)
            java.util.concurrent.ThreadPoolExecutor r0 = com.huawei.updatesdk.b.g.c.a
            int r0 = r0.getActiveCount()
            r3.append(r0)
            java.lang.String r0 = ", TaskCount:"
            r3.append(r0)
            java.util.concurrent.ThreadPoolExecutor r0 = com.huawei.updatesdk.b.g.c.a
            long r0 = r0.getTaskCount()
            r3.append(r0)
            java.lang.String r3 = r3.toString()
            java.lang.String r0 = "StoreAgent"
            com.huawei.updatesdk.a.a.c.a.a.a.a(r0, r3)
            java.util.concurrent.ThreadPoolExecutor r3 = com.huawei.updatesdk.b.g.c.a
            r2.a(r3)
            return
    }
}
