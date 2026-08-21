package com.tencent.bugly.proguard;

public final class ai {
    private static com.tencent.bugly.proguard.ai b;
    public com.tencent.bugly.proguard.ah a;
    private final com.tencent.bugly.proguard.w c;
    private final android.content.Context d;
    private java.util.Map<java.lang.Integer, java.lang.Long> e;
    private long f;
    private long g;
    private java.util.concurrent.LinkedBlockingQueue<java.lang.Runnable> h;
    private java.util.concurrent.LinkedBlockingQueue<java.lang.Runnable> i;
    private final java.lang.Object j;
    private long k;
    private int l;



    static {
            return
    }

    private ai(android.content.Context r3) {
            r2 = this;
            r2.<init>()
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r2.e = r0
            java.util.concurrent.LinkedBlockingQueue r0 = new java.util.concurrent.LinkedBlockingQueue
            r0.<init>()
            r2.h = r0
            java.util.concurrent.LinkedBlockingQueue r0 = new java.util.concurrent.LinkedBlockingQueue
            r0.<init>()
            r2.i = r0
            java.lang.Object r0 = new java.lang.Object
            r0.<init>()
            r2.j = r0
            r0 = 0
            r2.k = r0
            r0 = 0
            r2.l = r0
            r2.d = r3
            com.tencent.bugly.proguard.w r3 = com.tencent.bugly.proguard.w.a()
            r2.c = r3
            return
    }

    public static synchronized com.tencent.bugly.proguard.ai a() {
            java.lang.Class<com.tencent.bugly.proguard.ai> r0 = com.tencent.bugly.proguard.ai.class
            monitor-enter(r0)
            com.tencent.bugly.proguard.ai r1 = com.tencent.bugly.proguard.ai.b     // Catch: java.lang.Throwable -> L7
            monitor-exit(r0)
            return r1
        L7:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    public static synchronized com.tencent.bugly.proguard.ai a(android.content.Context r2) {
            java.lang.Class<com.tencent.bugly.proguard.ai> r0 = com.tencent.bugly.proguard.ai.class
            monitor-enter(r0)
            com.tencent.bugly.proguard.ai r1 = com.tencent.bugly.proguard.ai.b     // Catch: java.lang.Throwable -> L12
            if (r1 != 0) goto Le
            com.tencent.bugly.proguard.ai r1 = new com.tencent.bugly.proguard.ai     // Catch: java.lang.Throwable -> L12
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L12
            com.tencent.bugly.proguard.ai.b = r1     // Catch: java.lang.Throwable -> L12
        Le:
            com.tencent.bugly.proguard.ai r2 = com.tencent.bugly.proguard.ai.b     // Catch: java.lang.Throwable -> L12
            monitor-exit(r0)
            return r2
        L12:
            r2 = move-exception
            monitor-exit(r0)
            throw r2
    }

    static java.lang.Object a(com.tencent.bugly.proguard.ai r0) {
            java.lang.Object r0 = r0.j
            return r0
    }

    private void a(int r14, int r15, byte[] r16, java.lang.String r17, java.lang.String r18, com.tencent.bugly.proguard.ah r19, boolean r20) {
            r13 = this;
            com.tencent.bugly.proguard.aj r0 = new com.tencent.bugly.proguard.aj     // Catch: java.lang.Throwable -> L27
            r12 = r13
            android.content.Context r2 = r12.d     // Catch: java.lang.Throwable -> L25
            r9 = 0
            r10 = 0
            r11 = 0
            r1 = r0
            r3 = r14
            r4 = r15
            r5 = r16
            r6 = r17
            r7 = r18
            r8 = r19
            r1.<init>(r2, r3, r4, r5, r6, r7, r8, r9, r10, r11)     // Catch: java.lang.Throwable -> L25
            r1 = 0
            r2 = 0
            r14 = r13
            r15 = r0
            r16 = r20
            r17 = r1
            r18 = r2
            r14.a(r15, r16, r17, r18)     // Catch: java.lang.Throwable -> L25
            return
        L25:
            r0 = move-exception
            goto L29
        L27:
            r0 = move-exception
            r12 = r13
        L29:
            boolean r1 = com.tencent.bugly.proguard.al.a(r0)
            if (r1 != 0) goto L32
            r0.printStackTrace()
        L32:
            return
    }

    private void a(int r9, java.util.concurrent.LinkedBlockingQueue<java.lang.Runnable> r10) {
            r8 = this;
            com.tencent.bugly.proguard.ak r0 = com.tencent.bugly.proguard.ak.a()
            r1 = 2
            r2 = 0
            r3 = 1
            if (r9 <= 0) goto L2b
            r4 = 3
            java.lang.Object[] r4 = new java.lang.Object[r4]
            java.lang.Integer r5 = java.lang.Integer.valueOf(r9)
            r4[r2] = r5
            int r5 = android.os.Process.myPid()
            java.lang.Integer r5 = java.lang.Integer.valueOf(r5)
            r4[r3] = r5
            int r5 = android.os.Process.myTid()
            java.lang.Integer r5 = java.lang.Integer.valueOf(r5)
            r4[r1] = r5
            java.lang.String r5 = "[UploadManager] Execute urgent upload tasks of queue which has %d tasks (pid=%d | tid=%d)"
            com.tencent.bugly.proguard.al.c(r5, r4)
        L2b:
            r4 = 0
        L2c:
            if (r4 >= r9) goto L7a
            java.lang.Object r5 = r10.poll()
            java.lang.Runnable r5 = (java.lang.Runnable) r5
            if (r5 == 0) goto L7a
            java.lang.Object r6 = r8.j
            monitor-enter(r6)
            int r7 = r8.l     // Catch: java.lang.Throwable -> L77
            if (r7 < r1) goto L44
            if (r0 == 0) goto L44
            r0.a(r5)     // Catch: java.lang.Throwable -> L77
            monitor-exit(r6)     // Catch: java.lang.Throwable -> L77
            goto L74
        L44:
            monitor-exit(r6)     // Catch: java.lang.Throwable -> L77
            java.lang.Object[] r6 = new java.lang.Object[r3]
            java.lang.String r7 = "BUGLY_ASYNC_UPLOAD"
            r6[r2] = r7
            java.lang.String r7 = "[UploadManager] Create and start a new thread to execute a upload task: %s"
            com.tencent.bugly.proguard.al.a(r7, r6)
            com.tencent.bugly.proguard.ai$1 r6 = new com.tencent.bugly.proguard.ai$1
            r6.<init>(r8, r5)
            java.lang.String r7 = "BUGLY_ASYNC_UPLOAD"
            java.lang.Thread r6 = com.tencent.bugly.proguard.ap.a(r6, r7)
            if (r6 == 0) goto L6a
            java.lang.Object r6 = r8.j
            monitor-enter(r6)
            int r5 = r8.l     // Catch: java.lang.Throwable -> L67
            int r5 = r5 + r3
            r8.l = r5     // Catch: java.lang.Throwable -> L67
            monitor-exit(r6)     // Catch: java.lang.Throwable -> L67
            goto L74
        L67:
            r9 = move-exception
            monitor-exit(r6)     // Catch: java.lang.Throwable -> L67
            throw r9
        L6a:
            java.lang.Object[] r6 = new java.lang.Object[r2]
            java.lang.String r7 = "[UploadManager] Failed to start a thread to execute asynchronous upload task,will try again next time."
            com.tencent.bugly.proguard.al.d(r7, r6)
            r8.a(r5, r3)
        L74:
            int r4 = r4 + 1
            goto L2c
        L77:
            r9 = move-exception
            monitor-exit(r6)     // Catch: java.lang.Throwable -> L77
            throw r9
        L7a:
            return
    }

    private void a(java.lang.Runnable r5, long r6) {
            r4 = this;
            r0 = 0
            if (r5 != 0) goto Lb
            java.lang.Object[] r5 = new java.lang.Object[r0]
            java.lang.String r6 = "[UploadManager] Upload task should not be null"
            com.tencent.bugly.proguard.al.d(r6, r5)
            return
        Lb:
            r1 = 2
            java.lang.Object[] r1 = new java.lang.Object[r1]
            int r2 = android.os.Process.myPid()
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
            r1[r0] = r2
            int r2 = android.os.Process.myTid()
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
            r3 = 1
            r1[r3] = r2
            java.lang.String r2 = "[UploadManager] Execute synchronized upload task (pid=%d | tid=%d)"
            com.tencent.bugly.proguard.al.c(r2, r1)
            java.lang.String r1 = "BUGLY_SYNC_UPLOAD"
            java.lang.Thread r1 = com.tencent.bugly.proguard.ap.a(r5, r1)
            if (r1 != 0) goto L3b
            java.lang.Object[] r6 = new java.lang.Object[r0]
            java.lang.String r7 = "[UploadManager] Failed to start a thread to execute synchronized upload task, add it to queue."
            com.tencent.bugly.proguard.al.e(r7, r6)
            r4.a(r5, r3)
            return
        L3b:
            r1.join(r6)     // Catch: java.lang.Throwable -> L3f
            return
        L3f:
            r6 = move-exception
            java.lang.Object[] r7 = new java.lang.Object[r3]
            java.lang.String r6 = r6.getMessage()
            r7[r0] = r6
            java.lang.String r6 = "[UploadManager] Failed to join upload synchronized task with message: %s. Add it to queue."
            com.tencent.bugly.proguard.al.e(r6, r7)
            r4.a(r5, r3)
            r4.b()
            return
    }

    private void a(java.lang.Runnable r4, boolean r5, boolean r6, long r7) {
            r3 = this;
            r0 = 2
            java.lang.Object[] r0 = new java.lang.Object[r0]
            int r1 = android.os.Process.myPid()
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            r2 = 0
            r0[r2] = r1
            int r1 = android.os.Process.myTid()
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            r2 = 1
            r0[r2] = r1
            java.lang.String r1 = "[UploadManager] Add upload task (pid=%d | tid=%d)"
            com.tencent.bugly.proguard.al.c(r1, r0)
            if (r6 == 0) goto L24
            r3.a(r4, r7)
            return
        L24:
            r3.a(r4, r5)
            r3.b()
            return
    }

    private static void a(java.util.concurrent.LinkedBlockingQueue<java.lang.Runnable> r4, java.util.concurrent.LinkedBlockingQueue<java.lang.Runnable> r5, int r6) {
            r0 = 0
            r1 = 0
        L2:
            if (r1 >= r6) goto L25
            java.lang.Object r2 = r4.peek()
            java.lang.Runnable r2 = (java.lang.Runnable) r2
            if (r2 == 0) goto L25
            r5.put(r2)     // Catch: java.lang.Throwable -> L13
            r4.poll()     // Catch: java.lang.Throwable -> L13
            goto L22
        L13:
            r2 = move-exception
            r3 = 1
            java.lang.Object[] r3 = new java.lang.Object[r3]
            java.lang.String r2 = r2.getMessage()
            r3[r0] = r2
            java.lang.String r2 = "[UploadManager] Failed to add upload task to temp urgent queue: %s"
            com.tencent.bugly.proguard.al.e(r2, r3)
        L22:
            int r1 = r1 + 1
            goto L2
        L25:
            return
    }

    private boolean a(java.lang.Runnable r6, boolean r7) {
            r5 = this;
            r0 = 0
            if (r6 != 0) goto Lb
            java.lang.Object[] r6 = new java.lang.Object[r0]
            java.lang.String r7 = "[UploadManager] Upload task should not be null"
            com.tencent.bugly.proguard.al.a(r7, r6)
            return r0
        Lb:
            r1 = 1
            java.lang.String r2 = "[UploadManager] Add upload task to queue (pid=%d | tid=%d)"
            r3 = 2
            java.lang.Object[] r3 = new java.lang.Object[r3]     // Catch: java.lang.Throwable -> L3d
            int r4 = android.os.Process.myPid()     // Catch: java.lang.Throwable -> L3d
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Throwable -> L3d
            r3[r0] = r4     // Catch: java.lang.Throwable -> L3d
            int r4 = android.os.Process.myTid()     // Catch: java.lang.Throwable -> L3d
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Throwable -> L3d
            r3[r1] = r4     // Catch: java.lang.Throwable -> L3d
            com.tencent.bugly.proguard.al.c(r2, r3)     // Catch: java.lang.Throwable -> L3d
            java.lang.Object r2 = r5.j     // Catch: java.lang.Throwable -> L3d
            monitor-enter(r2)     // Catch: java.lang.Throwable -> L3d
            if (r7 == 0) goto L33
            java.util.concurrent.LinkedBlockingQueue<java.lang.Runnable> r7 = r5.h     // Catch: java.lang.Throwable -> L3a
            r7.put(r6)     // Catch: java.lang.Throwable -> L3a
            goto L38
        L33:
            java.util.concurrent.LinkedBlockingQueue<java.lang.Runnable> r7 = r5.i     // Catch: java.lang.Throwable -> L3a
            r7.put(r6)     // Catch: java.lang.Throwable -> L3a
        L38:
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L3a
            return r1
        L3a:
            r6 = move-exception
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L3a
            throw r6     // Catch: java.lang.Throwable -> L3d
        L3d:
            r6 = move-exception
            java.lang.Object[] r7 = new java.lang.Object[r1]
            java.lang.String r6 = r6.getMessage()
            r7[r0] = r6
            java.lang.String r6 = "[UploadManager] Failed to add upload task to queue: %s"
            com.tencent.bugly.proguard.al.e(r6, r7)
            return r0
    }

    static int b(com.tencent.bugly.proguard.ai r1) {
            int r0 = r1.l
            int r0 = r0 + (-1)
            r1.l = r0
            return r0
    }

    private void b() {
            r10 = this;
            com.tencent.bugly.proguard.ak r0 = com.tencent.bugly.proguard.ak.a()
            java.util.concurrent.LinkedBlockingQueue r1 = new java.util.concurrent.LinkedBlockingQueue
            r1.<init>()
            java.util.concurrent.LinkedBlockingQueue r2 = new java.util.concurrent.LinkedBlockingQueue
            r2.<init>()
            java.lang.Object r3 = r10.j
            monitor-enter(r3)
            java.lang.String r4 = "[UploadManager] Try to poll all upload task need and put them into temp queue (pid=%d | tid=%d)"
            r5 = 2
            java.lang.Object[] r6 = new java.lang.Object[r5]     // Catch: java.lang.Throwable -> L92
            int r7 = android.os.Process.myPid()     // Catch: java.lang.Throwable -> L92
            java.lang.Integer r7 = java.lang.Integer.valueOf(r7)     // Catch: java.lang.Throwable -> L92
            r8 = 0
            r6[r8] = r7     // Catch: java.lang.Throwable -> L92
            int r7 = android.os.Process.myTid()     // Catch: java.lang.Throwable -> L92
            java.lang.Integer r7 = java.lang.Integer.valueOf(r7)     // Catch: java.lang.Throwable -> L92
            r9 = 1
            r6[r9] = r7     // Catch: java.lang.Throwable -> L92
            com.tencent.bugly.proguard.al.c(r4, r6)     // Catch: java.lang.Throwable -> L92
            java.util.concurrent.LinkedBlockingQueue<java.lang.Runnable> r4 = r10.h     // Catch: java.lang.Throwable -> L92
            int r4 = r4.size()     // Catch: java.lang.Throwable -> L92
            java.util.concurrent.LinkedBlockingQueue<java.lang.Runnable> r6 = r10.i     // Catch: java.lang.Throwable -> L92
            int r6 = r6.size()     // Catch: java.lang.Throwable -> L92
            if (r4 != 0) goto L48
            if (r6 != 0) goto L48
            java.lang.String r0 = "[UploadManager] There is no upload task in queue."
            java.lang.Object[] r1 = new java.lang.Object[r8]     // Catch: java.lang.Throwable -> L92
            com.tencent.bugly.proguard.al.c(r0, r1)     // Catch: java.lang.Throwable -> L92
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L92
            return
        L48:
            if (r0 == 0) goto L50
            boolean r0 = r0.c()     // Catch: java.lang.Throwable -> L92
            if (r0 != 0) goto L51
        L50:
            r6 = 0
        L51:
            java.util.concurrent.LinkedBlockingQueue<java.lang.Runnable> r0 = r10.h     // Catch: java.lang.Throwable -> L92
            a(r0, r1, r4)     // Catch: java.lang.Throwable -> L92
            java.util.concurrent.LinkedBlockingQueue<java.lang.Runnable> r0 = r10.i     // Catch: java.lang.Throwable -> L92
            a(r0, r2, r6)     // Catch: java.lang.Throwable -> L92
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L92
            r10.a(r4, r1)
            if (r6 <= 0) goto L83
            r0 = 3
            java.lang.Object[] r0 = new java.lang.Object[r0]
            java.lang.Integer r1 = java.lang.Integer.valueOf(r6)
            r0[r8] = r1
            int r1 = android.os.Process.myPid()
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            r0[r9] = r1
            int r1 = android.os.Process.myTid()
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            r0[r5] = r1
            java.lang.String r1 = "[UploadManager] Execute upload tasks of queue which has %d tasks (pid=%d | tid=%d)"
            com.tencent.bugly.proguard.al.c(r1, r0)
        L83:
            com.tencent.bugly.proguard.ak r0 = com.tencent.bugly.proguard.ak.a()
            if (r0 == 0) goto L91
            com.tencent.bugly.proguard.ai$2 r1 = new com.tencent.bugly.proguard.ai$2
            r1.<init>(r10, r6, r2)
            r0.a(r1)
        L91:
            return
        L92:
            r0 = move-exception
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L92
            throw r0
    }

    public final synchronized long a(int r4) {
            r3 = this;
            monitor-enter(r3)
            if (r4 < 0) goto L17
            java.util.Map<java.lang.Integer, java.lang.Long> r0 = r3.e     // Catch: java.lang.Throwable -> L2a
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Throwable -> L2a
            java.lang.Object r4 = r0.get(r4)     // Catch: java.lang.Throwable -> L2a
            java.lang.Long r4 = (java.lang.Long) r4     // Catch: java.lang.Throwable -> L2a
            if (r4 == 0) goto L26
            long r0 = r4.longValue()     // Catch: java.lang.Throwable -> L2a
            monitor-exit(r3)
            return r0
        L17:
            java.lang.String r0 = "[UploadManager] Unknown upload ID: %d"
            r1 = 1
            java.lang.Object[] r1 = new java.lang.Object[r1]     // Catch: java.lang.Throwable -> L2a
            r2 = 0
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Throwable -> L2a
            r1[r2] = r4     // Catch: java.lang.Throwable -> L2a
            com.tencent.bugly.proguard.al.e(r0, r1)     // Catch: java.lang.Throwable -> L2a
        L26:
            r0 = 0
            monitor-exit(r3)
            return r0
        L2a:
            r4 = move-exception
            monitor-exit(r3)
            throw r4
    }

    public final long a(boolean r12) {
            r11 = this;
            long r0 = com.tencent.bugly.proguard.ap.b()
            r2 = 3
            if (r12 == 0) goto L9
            r3 = 5
            goto La
        L9:
            r3 = 3
        La:
            com.tencent.bugly.proguard.w r4 = r11.c
            java.util.List r4 = r4.a(r3)
            r5 = 0
            if (r4 == 0) goto L48
            int r6 = r4.size()
            if (r6 <= 0) goto L48
            r6 = 0
            java.lang.Object r12 = r4.get(r5)     // Catch: java.lang.Throwable -> L38
            com.tencent.bugly.proguard.y r12 = (com.tencent.bugly.proguard.y) r12     // Catch: java.lang.Throwable -> L38
            long r8 = r12.e     // Catch: java.lang.Throwable -> L38
            int r10 = (r8 > r0 ? 1 : (r8 == r0 ? 0 : -1))
            if (r10 < 0) goto L3c
            byte[] r0 = r12.g     // Catch: java.lang.Throwable -> L38
            long r6 = com.tencent.bugly.proguard.ap.d(r0)     // Catch: java.lang.Throwable -> L38
            if (r3 != r2) goto L32
            r11.f = r6     // Catch: java.lang.Throwable -> L38
            goto L34
        L32:
            r11.g = r6     // Catch: java.lang.Throwable -> L38
        L34:
            r4.remove(r12)     // Catch: java.lang.Throwable -> L38
            goto L3c
        L38:
            r12 = move-exception
            com.tencent.bugly.proguard.al.a(r12)
        L3c:
            int r12 = r4.size()
            if (r12 <= 0) goto L50
            com.tencent.bugly.proguard.w r12 = r11.c
            r12.a(r4)
            goto L50
        L48:
            if (r12 == 0) goto L4d
            long r0 = r11.g
            goto L4f
        L4d:
            long r0 = r11.f
        L4f:
            r6 = r0
        L50:
            r12 = 1
            java.lang.Object[] r12 = new java.lang.Object[r12]
            r0 = 1024(0x400, double:5.06E-321)
            long r0 = r6 / r0
            java.lang.Long r0 = java.lang.Long.valueOf(r0)
            r12[r5] = r0
            java.lang.String r0 = "[UploadManager] Local network consume: %d KB"
            com.tencent.bugly.proguard.al.c(r0, r12)
            return r6
    }

    public final synchronized void a(int r6, long r7) {
            r5 = this;
            monitor-enter(r5)
            r0 = 1
            r1 = 0
            if (r6 < 0) goto L47
            java.util.Map<java.lang.Integer, java.lang.Long> r2 = r5.e     // Catch: java.lang.Throwable -> L56
            java.lang.Integer r3 = java.lang.Integer.valueOf(r6)     // Catch: java.lang.Throwable -> L56
            java.lang.Long r4 = java.lang.Long.valueOf(r7)     // Catch: java.lang.Throwable -> L56
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L56
            com.tencent.bugly.proguard.y r2 = new com.tencent.bugly.proguard.y     // Catch: java.lang.Throwable -> L56
            r2.<init>()     // Catch: java.lang.Throwable -> L56
            r2.b = r6     // Catch: java.lang.Throwable -> L56
            r2.e = r7     // Catch: java.lang.Throwable -> L56
            java.lang.String r3 = ""
            r2.c = r3     // Catch: java.lang.Throwable -> L56
            java.lang.String r3 = ""
            r2.d = r3     // Catch: java.lang.Throwable -> L56
            byte[] r3 = new byte[r1]     // Catch: java.lang.Throwable -> L56
            r2.g = r3     // Catch: java.lang.Throwable -> L56
            com.tencent.bugly.proguard.w r3 = r5.c     // Catch: java.lang.Throwable -> L56
            r3.b(r6)     // Catch: java.lang.Throwable -> L56
            com.tencent.bugly.proguard.w r3 = r5.c     // Catch: java.lang.Throwable -> L56
            r3.a(r2)     // Catch: java.lang.Throwable -> L56
            java.lang.String r2 = "[UploadManager] Uploading(ID:%d) time: %s"
            r3 = 2
            java.lang.Object[] r3 = new java.lang.Object[r3]     // Catch: java.lang.Throwable -> L56
            java.lang.Integer r6 = java.lang.Integer.valueOf(r6)     // Catch: java.lang.Throwable -> L56
            r3[r1] = r6     // Catch: java.lang.Throwable -> L56
            java.lang.String r6 = com.tencent.bugly.proguard.ap.a(r7)     // Catch: java.lang.Throwable -> L56
            r3[r0] = r6     // Catch: java.lang.Throwable -> L56
            com.tencent.bugly.proguard.al.c(r2, r3)     // Catch: java.lang.Throwable -> L56
            monitor-exit(r5)
            return
        L47:
            java.lang.String r7 = "[UploadManager] Unknown uploading ID: %d"
            java.lang.Object[] r8 = new java.lang.Object[r0]     // Catch: java.lang.Throwable -> L56
            java.lang.Integer r6 = java.lang.Integer.valueOf(r6)     // Catch: java.lang.Throwable -> L56
            r8[r1] = r6     // Catch: java.lang.Throwable -> L56
            com.tencent.bugly.proguard.al.e(r7, r8)     // Catch: java.lang.Throwable -> L56
            monitor-exit(r5)
            return
        L56:
            r6 = move-exception
            monitor-exit(r5)
            throw r6
    }

    public final void a(int r13, com.tencent.bugly.proguard.bq r14, java.lang.String r15, java.lang.String r16, com.tencent.bugly.proguard.ah r17, long r18, boolean r20) {
            r12 = this;
            r0 = r14
            int r3 = r0.g
            byte[] r4 = com.tencent.bugly.proguard.ae.a(r14)
            com.tencent.bugly.proguard.aj r9 = new com.tencent.bugly.proguard.aj     // Catch: java.lang.Throwable -> L24
            r11 = r12
            android.content.Context r1 = r11.d     // Catch: java.lang.Throwable -> L22
            r0 = r9
            r2 = r13
            r5 = r15
            r6 = r16
            r7 = r17
            r8 = r20
            r0.<init>(r1, r2, r3, r4, r5, r6, r7, r8)     // Catch: java.lang.Throwable -> L22
            r7 = 1
            r8 = 1
            r5 = r12
            r6 = r9
            r9 = r18
            r5.a(r6, r7, r8, r9)     // Catch: java.lang.Throwable -> L22
            return
        L22:
            r0 = move-exception
            goto L26
        L24:
            r0 = move-exception
            r11 = r12
        L26:
            boolean r1 = com.tencent.bugly.proguard.al.a(r0)
            if (r1 != 0) goto L2f
            r0.printStackTrace()
        L2f:
            return
    }

    public final void a(int r9, com.tencent.bugly.proguard.bq r10, java.lang.String r11, java.lang.String r12, com.tencent.bugly.proguard.ah r13, boolean r14) {
            r8 = this;
            int r2 = r10.g
            byte[] r3 = com.tencent.bugly.proguard.ae.a(r10)
            r0 = r8
            r1 = r9
            r4 = r11
            r5 = r12
            r6 = r13
            r7 = r14
            r0.a(r1, r2, r3, r4, r5, r6, r7)
            return
    }

    protected final synchronized void a(long r5, boolean r7) {
            r4 = this;
            monitor-enter(r4)
            if (r7 == 0) goto L5
            r0 = 5
            goto L6
        L5:
            r0 = 3
        L6:
            com.tencent.bugly.proguard.y r1 = new com.tencent.bugly.proguard.y     // Catch: java.lang.Throwable -> L46
            r1.<init>()     // Catch: java.lang.Throwable -> L46
            r1.b = r0     // Catch: java.lang.Throwable -> L46
            long r2 = com.tencent.bugly.proguard.ap.b()     // Catch: java.lang.Throwable -> L46
            r1.e = r2     // Catch: java.lang.Throwable -> L46
            java.lang.String r2 = ""
            r1.c = r2     // Catch: java.lang.Throwable -> L46
            java.lang.String r2 = ""
            r1.d = r2     // Catch: java.lang.Throwable -> L46
            byte[] r2 = com.tencent.bugly.proguard.ap.c(r5)     // Catch: java.lang.Throwable -> L46
            r1.g = r2     // Catch: java.lang.Throwable -> L46
            com.tencent.bugly.proguard.w r2 = r4.c     // Catch: java.lang.Throwable -> L46
            r2.b(r0)     // Catch: java.lang.Throwable -> L46
            com.tencent.bugly.proguard.w r0 = r4.c     // Catch: java.lang.Throwable -> L46
            r0.a(r1)     // Catch: java.lang.Throwable -> L46
            if (r7 == 0) goto L30
            r4.g = r5     // Catch: java.lang.Throwable -> L46
            goto L32
        L30:
            r4.f = r5     // Catch: java.lang.Throwable -> L46
        L32:
            java.lang.String r7 = "[UploadManager] Network total consume: %d KB"
            r0 = 1
            java.lang.Object[] r0 = new java.lang.Object[r0]     // Catch: java.lang.Throwable -> L46
            r1 = 0
            r2 = 1024(0x400, double:5.06E-321)
            long r5 = r5 / r2
            java.lang.Long r5 = java.lang.Long.valueOf(r5)     // Catch: java.lang.Throwable -> L46
            r0[r1] = r5     // Catch: java.lang.Throwable -> L46
            com.tencent.bugly.proguard.al.c(r7, r0)     // Catch: java.lang.Throwable -> L46
            monitor-exit(r4)
            return
        L46:
            r5 = move-exception
            monitor-exit(r4)
            throw r5
    }

    public final boolean b(int r8) {
            r7 = this;
            boolean r0 = com.tencent.bugly.proguard.p.c
            r1 = 1
            r2 = 0
            if (r0 == 0) goto Le
            java.lang.Object[] r8 = new java.lang.Object[r2]
            java.lang.String r0 = "Uploading frequency will not be checked if SDK is in debug mode."
            com.tencent.bugly.proguard.al.c(r0, r8)
            return r1
        Le:
            long r3 = java.lang.System.currentTimeMillis()
            long r5 = r7.a(r8)
            long r3 = r3 - r5
            r0 = 2
            java.lang.Object[] r0 = new java.lang.Object[r0]
            r5 = 1000(0x3e8, double:4.94E-321)
            long r5 = r3 / r5
            java.lang.Long r5 = java.lang.Long.valueOf(r5)
            r0[r2] = r5
            java.lang.Integer r8 = java.lang.Integer.valueOf(r8)
            r0[r1] = r8
            java.lang.String r8 = "[UploadManager] Time interval is %d seconds since last uploading(ID: %d)."
            com.tencent.bugly.proguard.al.c(r8, r0)
            r5 = 30000(0x7530, double:1.4822E-319)
            int r8 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            if (r8 >= 0) goto L45
            java.lang.Object[] r8 = new java.lang.Object[r1]
            r0 = 30
            java.lang.Long r0 = java.lang.Long.valueOf(r0)
            r8[r2] = r0
            java.lang.String r0 = "[UploadManager] Data only be uploaded once in %d seconds."
            com.tencent.bugly.proguard.al.a(r0, r8)
            return r2
        L45:
            return r1
    }
}
