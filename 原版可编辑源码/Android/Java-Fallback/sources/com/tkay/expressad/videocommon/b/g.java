package com.tkay.expressad.videocommon.b;

public class g {
    public static final java.lang.String a = "ending_page_source";
    public static final java.lang.String b = "ending_page_save_time";
    private static final java.lang.String c = "H5DownLoadManager";
    private static volatile com.tkay.expressad.videocommon.b.g f;
    private java.util.concurrent.CopyOnWriteArrayList<java.lang.String> d;
    private java.util.concurrent.ConcurrentMap<java.lang.String, com.tkay.expressad.videocommon.b.b> e;
    private com.tkay.expressad.videocommon.b.k g;
    private com.tkay.expressad.videocommon.b.h h;
    private boolean i;


    public interface a {
        void a(java.lang.String r1);

        void a(java.lang.String r1, java.lang.String r2);
    }

    public interface b extends com.tkay.expressad.videocommon.b.g.a {
    }

    public interface c {
        void a();

        void a(java.lang.String r1);

        void a(byte[] r1, java.lang.String r2);
    }

    public interface d extends com.tkay.expressad.videocommon.b.g.a {
    }

    private g() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.i = r0
            com.tkay.expressad.videocommon.b.k r0 = com.tkay.expressad.videocommon.b.k.a()     // Catch: java.lang.Throwable -> L1f
            r1.g = r0     // Catch: java.lang.Throwable -> L1f
            com.tkay.expressad.videocommon.b.h r0 = com.tkay.expressad.videocommon.b.h.a.a     // Catch: java.lang.Throwable -> L1f
            r1.h = r0     // Catch: java.lang.Throwable -> L1f
            java.util.concurrent.CopyOnWriteArrayList r0 = new java.util.concurrent.CopyOnWriteArrayList     // Catch: java.lang.Throwable -> L1f
            r0.<init>()     // Catch: java.lang.Throwable -> L1f
            r1.d = r0     // Catch: java.lang.Throwable -> L1f
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap     // Catch: java.lang.Throwable -> L1f
            r0.<init>()     // Catch: java.lang.Throwable -> L1f
            r1.e = r0     // Catch: java.lang.Throwable -> L1f
            return
        L1f:
            r0 = move-exception
            r0.getMessage()
            return
    }

    public static com.tkay.expressad.videocommon.b.g a() {
            com.tkay.expressad.videocommon.b.g r0 = com.tkay.expressad.videocommon.b.g.f
            if (r0 != 0) goto L17
            java.lang.Class<com.tkay.expressad.videocommon.b.g> r0 = com.tkay.expressad.videocommon.b.g.class
            monitor-enter(r0)
            com.tkay.expressad.videocommon.b.g r1 = com.tkay.expressad.videocommon.b.g.f     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.tkay.expressad.videocommon.b.g r1 = new com.tkay.expressad.videocommon.b.g     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.tkay.expressad.videocommon.b.g.f = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
        L17:
            com.tkay.expressad.videocommon.b.g r0 = com.tkay.expressad.videocommon.b.g.f
            return r0
    }

    static com.tkay.expressad.videocommon.b.h a(com.tkay.expressad.videocommon.b.g r0) {
            com.tkay.expressad.videocommon.b.h r0 = r0.h
            return r0
    }

    private void a(java.lang.String r4, com.tkay.expressad.videocommon.b.g.d r5) {
            r3 = this;
            com.tkay.expressad.videocommon.b.k r0 = r3.g     // Catch: java.lang.Exception -> L3a
            java.lang.String r0 = r0.a(r4)     // Catch: java.lang.Exception -> L3a
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Exception -> L3a
            if (r0 == 0) goto L34
            java.util.concurrent.ConcurrentMap<java.lang.String, com.tkay.expressad.videocommon.b.b> r0 = r3.e     // Catch: java.lang.Exception -> L3a
            boolean r0 = r0.containsKey(r4)     // Catch: java.lang.Exception -> L3a
            if (r0 == 0) goto L22
            java.util.concurrent.ConcurrentMap<java.lang.String, com.tkay.expressad.videocommon.b.b> r0 = r3.e     // Catch: java.lang.Exception -> L3a
            java.lang.Object r0 = r0.get(r4)     // Catch: java.lang.Exception -> L3a
            com.tkay.expressad.videocommon.b.b r0 = (com.tkay.expressad.videocommon.b.b) r0     // Catch: java.lang.Exception -> L3a
            if (r0 == 0) goto L21
            r0.a(r5)     // Catch: java.lang.Exception -> L3a
        L21:
            return
        L22:
            com.tkay.expressad.videocommon.b.b r0 = new com.tkay.expressad.videocommon.b.b     // Catch: java.lang.Exception -> L3a
            java.util.concurrent.ConcurrentMap<java.lang.String, com.tkay.expressad.videocommon.b.b> r1 = r3.e     // Catch: java.lang.Exception -> L3a
            com.tkay.expressad.videocommon.b.k r2 = r3.g     // Catch: java.lang.Exception -> L3a
            r0.<init>(r1, r2, r5, r4)     // Catch: java.lang.Exception -> L3a
            java.util.concurrent.ConcurrentMap<java.lang.String, com.tkay.expressad.videocommon.b.b> r1 = r3.e     // Catch: java.lang.Exception -> L3a
            r1.put(r4, r0)     // Catch: java.lang.Exception -> L3a
            com.tkay.expressad.videocommon.b.e.a(r4, r0)     // Catch: java.lang.Exception -> L3a
            return
        L34:
            if (r5 == 0) goto L39
            r5.a(r4)     // Catch: java.lang.Exception -> L3a
        L39:
            return
        L3a:
            r0 = move-exception
            if (r5 == 0) goto L42
            java.lang.String r1 = "downloadzip failed"
            r5.a(r4, r1)
        L42:
            boolean r4 = com.tkay.expressad.b.a
            if (r4 == 0) goto L49
            r0.printStackTrace()
        L49:
            return
    }

    private static void a(java.lang.String r2, java.lang.String r3) {
            com.tkay.expressad.foundation.b.b r0 = com.tkay.expressad.foundation.b.b.b()     // Catch: java.lang.Exception -> L16
            android.content.Context r0 = r0.d()     // Catch: java.lang.Exception -> L16
            java.lang.String r1 = "ending_page_source"
            java.lang.String r3 = java.lang.String.valueOf(r3)     // Catch: java.lang.Exception -> L16
            java.lang.String r3 = r1.concat(r3)     // Catch: java.lang.Exception -> L16
            com.tkay.expressad.foundation.h.v.a(r0, r3, r2)     // Catch: java.lang.Exception -> L16
            return
        L16:
            r2 = move-exception
            r2.printStackTrace()
            return
    }

    static java.util.concurrent.CopyOnWriteArrayList b(com.tkay.expressad.videocommon.b.g r0) {
            java.util.concurrent.CopyOnWriteArrayList<java.lang.String> r0 = r0.d
            return r0
    }

    private void b(java.lang.String r4, com.tkay.expressad.videocommon.b.g.d r5) {
            r3 = this;
            com.tkay.expressad.videocommon.b.k r0 = r3.g     // Catch: java.lang.Exception -> L3a
            java.lang.String r0 = r0.a(r4)     // Catch: java.lang.Exception -> L3a
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Exception -> L3a
            if (r0 == 0) goto L34
            java.util.concurrent.ConcurrentMap<java.lang.String, com.tkay.expressad.videocommon.b.b> r0 = r3.e     // Catch: java.lang.Exception -> L3a
            boolean r0 = r0.containsKey(r4)     // Catch: java.lang.Exception -> L3a
            if (r0 == 0) goto L22
            java.util.concurrent.ConcurrentMap<java.lang.String, com.tkay.expressad.videocommon.b.b> r0 = r3.e     // Catch: java.lang.Exception -> L3a
            java.lang.Object r0 = r0.get(r4)     // Catch: java.lang.Exception -> L3a
            com.tkay.expressad.videocommon.b.b r0 = (com.tkay.expressad.videocommon.b.b) r0     // Catch: java.lang.Exception -> L3a
            if (r0 == 0) goto L21
            r0.a(r5)     // Catch: java.lang.Exception -> L3a
        L21:
            return
        L22:
            com.tkay.expressad.videocommon.b.b r0 = new com.tkay.expressad.videocommon.b.b     // Catch: java.lang.Exception -> L3a
            java.util.concurrent.ConcurrentMap<java.lang.String, com.tkay.expressad.videocommon.b.b> r1 = r3.e     // Catch: java.lang.Exception -> L3a
            com.tkay.expressad.videocommon.b.k r2 = r3.g     // Catch: java.lang.Exception -> L3a
            r0.<init>(r1, r2, r5, r4)     // Catch: java.lang.Exception -> L3a
            java.util.concurrent.ConcurrentMap<java.lang.String, com.tkay.expressad.videocommon.b.b> r1 = r3.e     // Catch: java.lang.Exception -> L3a
            r1.put(r4, r0)     // Catch: java.lang.Exception -> L3a
            com.tkay.expressad.videocommon.b.e.a(r4, r0)     // Catch: java.lang.Exception -> L3a
            return
        L34:
            if (r5 == 0) goto L39
            r5.a(r4)     // Catch: java.lang.Exception -> L3a
        L39:
            return
        L3a:
            r0 = move-exception
            if (r5 == 0) goto L42
            java.lang.String r1 = "downloadzip failed"
            r5.a(r4, r1)
        L42:
            boolean r4 = com.tkay.expressad.b.a
            if (r4 == 0) goto L49
            r0.printStackTrace()
        L49:
            return
    }

    private void c(java.lang.String r3, com.tkay.expressad.videocommon.b.g.a r4) {
            r2 = this;
            java.util.concurrent.CopyOnWriteArrayList<java.lang.String> r0 = r2.d     // Catch: java.lang.Throwable -> L19
            boolean r0 = r0.contains(r3)     // Catch: java.lang.Throwable -> L19
            if (r0 == 0) goto L9
            return
        L9:
            java.util.concurrent.CopyOnWriteArrayList<java.lang.String> r0 = r2.d     // Catch: java.lang.Throwable -> L19
            r0.add(r3)     // Catch: java.lang.Throwable -> L19
            com.tkay.expressad.videocommon.b.f r0 = com.tkay.expressad.videocommon.b.f.a.a     // Catch: java.lang.Throwable -> L19
            com.tkay.expressad.videocommon.b.g$1 r1 = new com.tkay.expressad.videocommon.b.g$1     // Catch: java.lang.Throwable -> L19
            r1.<init>(r2, r3, r4)     // Catch: java.lang.Throwable -> L19
            r0.a(r1)     // Catch: java.lang.Throwable -> L19
            return
        L19:
            r3 = move-exception
            boolean r4 = com.tkay.expressad.b.a
            if (r4 == 0) goto L21
            r3.printStackTrace()
        L21:
            return
    }

    private java.lang.String d(java.lang.String r2) {
            r1 = this;
            com.tkay.expressad.videocommon.b.h r0 = r1.h
            if (r0 == 0) goto L8
            java.lang.String r2 = r0.a(r2)
        L8:
            return r2
    }

    private static java.lang.String e(java.lang.String r2) {
            com.tkay.expressad.foundation.b.b r0 = com.tkay.expressad.foundation.b.b.b()     // Catch: java.lang.Exception -> L27
            android.content.Context r0 = r0.d()     // Catch: java.lang.Exception -> L27
            java.lang.String r1 = "ending_page_source"
            java.lang.String r2 = java.lang.String.valueOf(r2)     // Catch: java.lang.Exception -> L27
            java.lang.String r2 = r1.concat(r2)     // Catch: java.lang.Exception -> L27
            java.lang.String r1 = ""
            java.lang.Object r2 = com.tkay.expressad.foundation.h.v.b(r0, r2, r1)     // Catch: java.lang.Exception -> L27
            if (r2 == 0) goto L2b
            boolean r0 = r2 instanceof java.lang.String     // Catch: java.lang.Exception -> L27
            if (r0 == 0) goto L2b
            java.lang.String r2 = (java.lang.String) r2     // Catch: java.lang.Exception -> L27
            boolean r0 = com.tkay.expressad.foundation.h.w.b(r2)     // Catch: java.lang.Exception -> L27
            if (r0 == 0) goto L2b
            return r2
        L27:
            r2 = move-exception
            r2.printStackTrace()
        L2b:
            r2 = 0
            return r2
    }

    private static long f(java.lang.String r4) {
            r0 = 0
            com.tkay.expressad.foundation.b.b r2 = com.tkay.expressad.foundation.b.b.b()     // Catch: java.lang.Exception -> L29
            android.content.Context r2 = r2.d()     // Catch: java.lang.Exception -> L29
            java.lang.String r3 = "ending_page_save_time"
            java.lang.String r4 = java.lang.String.valueOf(r4)     // Catch: java.lang.Exception -> L29
            java.lang.String r4 = r3.concat(r4)     // Catch: java.lang.Exception -> L29
            java.lang.Long r3 = java.lang.Long.valueOf(r0)     // Catch: java.lang.Exception -> L29
            java.lang.Object r4 = com.tkay.expressad.foundation.h.v.b(r2, r4, r3)     // Catch: java.lang.Exception -> L29
            if (r4 == 0) goto L2d
            boolean r2 = r4 instanceof java.lang.Long     // Catch: java.lang.Exception -> L29
            if (r2 == 0) goto L2d
            java.lang.Long r4 = (java.lang.Long) r4     // Catch: java.lang.Exception -> L29
            long r0 = r4.longValue()     // Catch: java.lang.Exception -> L29
            return r0
        L29:
            r4 = move-exception
            r4.printStackTrace()
        L2d:
            return r0
    }

    private static void g(java.lang.String r3) {
            com.tkay.expressad.foundation.b.b r0 = com.tkay.expressad.foundation.b.b.b()     // Catch: java.lang.Exception -> L1e
            android.content.Context r0 = r0.d()     // Catch: java.lang.Exception -> L1e
            java.lang.String r1 = "ending_page_save_time"
            java.lang.String r3 = java.lang.String.valueOf(r3)     // Catch: java.lang.Exception -> L1e
            java.lang.String r3 = r1.concat(r3)     // Catch: java.lang.Exception -> L1e
            long r1 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Exception -> L1e
            java.lang.Long r1 = java.lang.Long.valueOf(r1)     // Catch: java.lang.Exception -> L1e
            com.tkay.expressad.foundation.h.v.a(r0, r3, r1)     // Catch: java.lang.Exception -> L1e
            return
        L1e:
            r3 = move-exception
            r3.printStackTrace()
            return
    }

    private void h(java.lang.String r2) {
            r1 = this;
            r0 = 0
            r1.b(r2, r0)
            return
    }

    public final java.lang.String a(java.lang.String r2) {
            r1 = this;
            com.tkay.expressad.videocommon.b.k r0 = r1.g
            if (r0 == 0) goto L9
            java.lang.String r2 = r0.a(r2)
            return r2
        L9:
            r2 = 0
            return r2
    }

    public final void a(java.lang.String r1, com.tkay.expressad.videocommon.b.g.a r2) {
            r0 = this;
            r0.c(r1, r2)
            return
    }

    public final void b(java.lang.String r2) {
            r1 = this;
            r0 = 0
            com.tkay.expressad.videocommon.b.g$b r0 = (com.tkay.expressad.videocommon.b.g.b) r0
            r1.c(r2, r0)
            return
    }

    public final void b(java.lang.String r3, com.tkay.expressad.videocommon.b.g.a r4) {
            r2 = this;
            java.util.regex.Pattern r0 = android.util.Patterns.WEB_URL     // Catch: java.lang.Exception -> L37
            java.util.regex.Matcher r0 = r0.matcher(r3)     // Catch: java.lang.Exception -> L37
            boolean r0 = r0.matches()     // Catch: java.lang.Exception -> L37
            if (r0 != 0) goto L12
            boolean r0 = android.webkit.URLUtil.isValidUrl(r3)     // Catch: java.lang.Exception -> L37
            if (r0 == 0) goto L3b
        L12:
            android.net.Uri r0 = android.net.Uri.parse(r3)     // Catch: java.lang.Exception -> L37
            java.lang.String r0 = r0.getPath()     // Catch: java.lang.Exception -> L37
            boolean r1 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Exception -> L37
            if (r1 != 0) goto L3b
            java.lang.String r0 = r0.toLowerCase()     // Catch: java.lang.Exception -> L37
            java.lang.String r1 = ".zip"
            boolean r0 = r0.endsWith(r1)     // Catch: java.lang.Exception -> L37
            if (r0 == 0) goto L33
            r0 = r4
            com.tkay.expressad.videocommon.b.g$d r0 = (com.tkay.expressad.videocommon.b.g.d) r0     // Catch: java.lang.Exception -> L37
            r2.a(r3, r0)     // Catch: java.lang.Exception -> L37
            return
        L33:
            r2.c(r3, r4)     // Catch: java.lang.Exception -> L37
            return
        L37:
            r0 = move-exception
            r0.printStackTrace()
        L3b:
            if (r4 == 0) goto L42
            java.lang.String r0 = "The URL does not contain a path "
            r4.a(r3, r0)
        L42:
            return
    }

    public final java.lang.String c(java.lang.String r4) {
            r3 = this;
            java.util.regex.Pattern r0 = android.util.Patterns.WEB_URL     // Catch: java.lang.Exception -> L49
            java.util.regex.Matcher r0 = r0.matcher(r4)     // Catch: java.lang.Exception -> L49
            boolean r0 = r0.matches()     // Catch: java.lang.Exception -> L49
            if (r0 != 0) goto L12
            boolean r0 = android.webkit.URLUtil.isValidUrl(r4)     // Catch: java.lang.Exception -> L49
            if (r0 == 0) goto L4d
        L12:
            android.net.Uri r0 = android.net.Uri.parse(r4)     // Catch: java.lang.Exception -> L49
            java.lang.String r1 = r0.getPath()     // Catch: java.lang.Exception -> L49
            boolean r2 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Exception -> L49
            if (r2 != 0) goto L4d
            java.lang.String r2 = "urlDebug"
            java.lang.String r0 = r0.getQueryParameter(r2)     // Catch: java.lang.Exception -> L49
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Exception -> L49
            if (r0 != 0) goto L2d
            return r4
        L2d:
            java.lang.String r0 = r1.toLowerCase()     // Catch: java.lang.Exception -> L49
            java.lang.String r1 = ".zip"
            boolean r0 = r0.endsWith(r1)     // Catch: java.lang.Exception -> L49
            if (r0 == 0) goto L3e
            java.lang.String r4 = r3.a(r4)     // Catch: java.lang.Exception -> L49
            return r4
        L3e:
            com.tkay.expressad.videocommon.b.h r0 = r3.h     // Catch: java.lang.Exception -> L49
            if (r0 == 0) goto L48
            com.tkay.expressad.videocommon.b.h r0 = r3.h     // Catch: java.lang.Exception -> L49
            java.lang.String r4 = r0.a(r4)     // Catch: java.lang.Exception -> L49
        L48:
            return r4
        L49:
            r0 = move-exception
            r0.printStackTrace()
        L4d:
            return r4
    }
}
