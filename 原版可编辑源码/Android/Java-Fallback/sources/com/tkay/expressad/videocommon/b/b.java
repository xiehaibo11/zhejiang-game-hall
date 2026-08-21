package com.tkay.expressad.videocommon.b;

public final class b implements com.tkay.expressad.videocommon.b.g.c {
    private static java.lang.String a = "DownLoadH5SourceListener";
    private java.util.concurrent.ConcurrentMap<java.lang.String, com.tkay.expressad.videocommon.b.b> b;
    private com.tkay.expressad.videocommon.b.k c;
    private java.util.concurrent.CopyOnWriteArrayList<com.tkay.expressad.videocommon.b.g.d> d;
    private java.lang.String e;

    static {
            return
    }

    public b(java.util.concurrent.ConcurrentMap<java.lang.String, com.tkay.expressad.videocommon.b.b> r2, com.tkay.expressad.videocommon.b.k r3, com.tkay.expressad.videocommon.b.g.d r4, java.lang.String r5) {
            r1 = this;
            r1.<init>()
            java.util.concurrent.CopyOnWriteArrayList r0 = new java.util.concurrent.CopyOnWriteArrayList
            r0.<init>()
            r1.d = r0
            r1.b = r2
            r1.c = r3
            r0.add(r4)
            r1.e = r5
            return
    }

    @Override
    public final void a() {
            r0 = this;
            return
    }

    public final void a(com.tkay.expressad.videocommon.b.g.d r2) {
            r1 = this;
            java.util.concurrent.CopyOnWriteArrayList<com.tkay.expressad.videocommon.b.g$d> r0 = r1.d
            r0.add(r2)
            return
    }

    @Override
    public final void a(java.lang.String r5) {
            r4 = this;
            java.util.concurrent.ConcurrentMap<java.lang.String, com.tkay.expressad.videocommon.b.b> r0 = r4.b     // Catch: java.lang.Exception -> L38
            if (r0 != 0) goto L26
            java.util.concurrent.CopyOnWriteArrayList<com.tkay.expressad.videocommon.b.g$d> r0 = r4.d     // Catch: java.lang.Exception -> L38
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Exception -> L38
        La:
            boolean r1 = r0.hasNext()     // Catch: java.lang.Exception -> L38
            if (r1 == 0) goto L25
            java.lang.Object r1 = r0.next()     // Catch: java.lang.Exception -> L38
            com.tkay.expressad.videocommon.b.g$d r1 = (com.tkay.expressad.videocommon.b.g.d) r1     // Catch: java.lang.Exception -> L38
            if (r1 == 0) goto La
            java.lang.String r2 = r4.e     // Catch: java.lang.Exception -> L38
            java.lang.String r3 = "mResDownloadingMap  is null"
            r1.a(r2, r3)     // Catch: java.lang.Exception -> L38
            java.util.concurrent.CopyOnWriteArrayList<com.tkay.expressad.videocommon.b.g$d> r2 = r4.d     // Catch: java.lang.Exception -> L38
            r2.remove(r1)     // Catch: java.lang.Exception -> L38
            goto La
        L25:
            return
        L26:
            java.util.concurrent.ConcurrentMap<java.lang.String, com.tkay.expressad.videocommon.b.b> r0 = r4.b     // Catch: java.lang.Exception -> L38
            java.lang.String r1 = r4.e     // Catch: java.lang.Exception -> L38
            boolean r0 = r0.containsKey(r1)     // Catch: java.lang.Exception -> L38
            if (r0 == 0) goto L49
            java.util.concurrent.ConcurrentMap<java.lang.String, com.tkay.expressad.videocommon.b.b> r0 = r4.b     // Catch: java.lang.Exception -> L38
            java.lang.String r1 = r4.e     // Catch: java.lang.Exception -> L38
            r0.remove(r1)     // Catch: java.lang.Exception -> L38
            goto L49
        L38:
            r0 = move-exception
            boolean r1 = com.tkay.expressad.b.a
            if (r1 == 0) goto L40
            r0.printStackTrace()
        L40:
            java.lang.String r5 = r0.getMessage()     // Catch: java.lang.Throwable -> L45
            goto L49
        L45:
            r0 = move-exception
            r0.getMessage()
        L49:
            java.util.concurrent.CopyOnWriteArrayList<com.tkay.expressad.videocommon.b.g$d> r0 = r4.d
            java.util.Iterator r0 = r0.iterator()
        L4f:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L68
            java.lang.Object r1 = r0.next()
            com.tkay.expressad.videocommon.b.g$d r1 = (com.tkay.expressad.videocommon.b.g.d) r1
            if (r1 == 0) goto L4f
            java.lang.String r2 = r4.e
            r1.a(r2, r5)
            java.util.concurrent.CopyOnWriteArrayList<com.tkay.expressad.videocommon.b.g$d> r2 = r4.d
            r2.remove(r1)
            goto L4f
        L68:
            return
    }

    @Override
    public final void a(byte[] r3, java.lang.String r4) {
            r2 = this;
            java.util.concurrent.ConcurrentMap<java.lang.String, com.tkay.expressad.videocommon.b.b> r0 = r2.b     // Catch: java.lang.Exception -> L6e
            if (r0 != 0) goto L24
            java.util.concurrent.CopyOnWriteArrayList<com.tkay.expressad.videocommon.b.g$d> r3 = r2.d     // Catch: java.lang.Exception -> L6e
            java.util.Iterator r3 = r3.iterator()     // Catch: java.lang.Exception -> L6e
        La:
            boolean r0 = r3.hasNext()     // Catch: java.lang.Exception -> L6e
            if (r0 == 0) goto L23
            java.lang.Object r0 = r3.next()     // Catch: java.lang.Exception -> L6e
            com.tkay.expressad.videocommon.b.g$d r0 = (com.tkay.expressad.videocommon.b.g.d) r0     // Catch: java.lang.Exception -> L6e
            if (r0 == 0) goto La
            java.lang.String r1 = "mResDownloadingMap  is null"
            r0.a(r4, r1)     // Catch: java.lang.Exception -> L6e
            java.util.concurrent.CopyOnWriteArrayList<com.tkay.expressad.videocommon.b.g$d> r1 = r2.d     // Catch: java.lang.Exception -> L6e
            r1.remove(r0)     // Catch: java.lang.Exception -> L6e
            goto La
        L23:
            return
        L24:
            java.util.concurrent.ConcurrentMap<java.lang.String, com.tkay.expressad.videocommon.b.b> r0 = r2.b     // Catch: java.lang.Exception -> L6e
            boolean r0 = r0.containsKey(r4)     // Catch: java.lang.Exception -> L6e
            if (r0 == 0) goto L31
            java.util.concurrent.ConcurrentMap<java.lang.String, com.tkay.expressad.videocommon.b.b> r0 = r2.b     // Catch: java.lang.Exception -> L6e
            r0.remove(r4)     // Catch: java.lang.Exception -> L6e
        L31:
            if (r3 == 0) goto L6b
            int r0 = r3.length     // Catch: java.lang.Exception -> L6e
            if (r0 <= 0) goto L6b
            com.tkay.expressad.videocommon.b.k r0 = r2.c     // Catch: java.lang.Exception -> L6e
            java.lang.String r3 = r0.a(r4, r3)     // Catch: java.lang.Exception -> L6e
            boolean r0 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Exception -> L6e
            if (r0 == 0) goto L60
            java.util.concurrent.CopyOnWriteArrayList<com.tkay.expressad.videocommon.b.g$d> r3 = r2.d     // Catch: java.lang.Exception -> L6e
            java.util.Iterator r3 = r3.iterator()     // Catch: java.lang.Exception -> L6e
        L48:
            boolean r0 = r3.hasNext()     // Catch: java.lang.Exception -> L6e
            if (r0 == 0) goto L5f
            java.lang.Object r0 = r3.next()     // Catch: java.lang.Exception -> L6e
            com.tkay.expressad.videocommon.b.g$d r0 = (com.tkay.expressad.videocommon.b.g.d) r0     // Catch: java.lang.Exception -> L6e
            if (r0 == 0) goto L48
            r0.a(r4)     // Catch: java.lang.Exception -> L6e
            java.util.concurrent.CopyOnWriteArrayList<com.tkay.expressad.videocommon.b.g$d> r1 = r2.d     // Catch: java.lang.Exception -> L6e
            r1.remove(r0)     // Catch: java.lang.Exception -> L6e
            goto L48
        L5f:
            return
        L60:
            java.lang.String r0 = "data save failed:"
            java.lang.String r3 = java.lang.String.valueOf(r3)     // Catch: java.lang.Exception -> L6e
            java.lang.String r3 = r0.concat(r3)     // Catch: java.lang.Exception -> L6e
            goto L81
        L6b:
            java.lang.String r3 = "response data is error"
            goto L81
        L6e:
            r3 = move-exception
            boolean r0 = com.tkay.expressad.b.a
            if (r0 == 0) goto L76
            r3.printStackTrace()
        L76:
            java.lang.String r3 = r3.getMessage()     // Catch: java.lang.Throwable -> L7b
            goto L81
        L7b:
            r3 = move-exception
            r3.getMessage()
            java.lang.String r3 = ""
        L81:
            java.util.concurrent.CopyOnWriteArrayList<com.tkay.expressad.videocommon.b.g$d> r0 = r2.d
            java.util.Iterator r0 = r0.iterator()
        L87:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L99
            java.lang.Object r1 = r0.next()
            com.tkay.expressad.videocommon.b.g$d r1 = (com.tkay.expressad.videocommon.b.g.d) r1
            if (r1 == 0) goto L87
            r1.a(r4, r3)
            goto L87
        L99:
            return
    }
}
