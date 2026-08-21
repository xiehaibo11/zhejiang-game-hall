package com.tkay.expressad.foundation.g.i;

public final class a {
    java.lang.Object a;
    private java.lang.String b;
    private android.media.MediaPlayer c;
    private volatile boolean d;
    private volatile boolean e;
    private volatile android.media.MediaPlayer.OnPreparedListener f;


    public a() {
            r1 = this;
            r1.<init>()
            java.lang.Object r0 = new java.lang.Object
            r0.<init>()
            r1.a = r0
            r0 = 0
            r1.e = r0
            return
    }

    private void a(android.media.MediaPlayer.OnPreparedListener r2) {
            r1 = this;
            java.lang.Object r0 = r1.a
            monitor-enter(r0)
            r1.f = r2     // Catch: java.lang.Throwable -> L7
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L7
            return
        L7:
            r2 = move-exception
            monitor-exit(r0)
            throw r2
    }

    private void a(android.media.MediaPlayer r1, java.lang.String r2) {
            r0 = this;
            r0.c = r1
            r0.b = r2
            r1 = 1
            r0.d = r1
            android.media.MediaPlayer r1 = r0.c
            com.tkay.expressad.foundation.g.i.a$1 r2 = new com.tkay.expressad.foundation.g.i.a$1
            r2.<init>(r0)
            r1.setOnPreparedListener(r2)
            android.media.MediaPlayer r1 = r0.c     // Catch: java.lang.Throwable -> L16
            r1.prepareAsync()     // Catch: java.lang.Throwable -> L16
        L16:
            return
    }

    private boolean a() {
            r2 = this;
            java.lang.Object r0 = r2.a
            monitor-enter(r0)
            boolean r1 = r2.d     // Catch: java.lang.Throwable -> L7
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L7
            return r1
        L7:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    static boolean a(com.tkay.expressad.foundation.g.i.a r1) {
            r0 = 1
            r1.e = r0
            return r0
    }

    static android.media.MediaPlayer.OnPreparedListener b(com.tkay.expressad.foundation.g.i.a r0) {
            android.media.MediaPlayer$OnPreparedListener r0 = r0.f
            return r0
    }

    private boolean b() {
            r2 = this;
            java.lang.Object r0 = r2.a
            monitor-enter(r0)
            boolean r1 = r2.e     // Catch: java.lang.Throwable -> L7
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L7
            return r1
        L7:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    private java.lang.String c() {
            r1 = this;
            java.lang.String r0 = r1.b
            return r0
    }

    private android.media.MediaPlayer d() {
            r1 = this;
            android.media.MediaPlayer r0 = r1.c
            return r0
    }
}
