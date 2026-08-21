package com.tkay.expressad.foundation.g.i;

import android.media.MediaPlayer;

public final class a {
    private String b;
    private MediaPlayer c;
    private volatile boolean d;
    private volatile MediaPlayer.OnPreparedListener f;
    Object a = new Object();
    private volatile boolean e = false;

    static boolean a(a aVar) {
        aVar.e = true;
        return true;
    }

    private void a(MediaPlayer mediaPlayer, String str) {
        this.c = mediaPlayer;
        this.b = str;
        this.d = true;
        this.c.setOnPreparedListener(new MediaPlayer.OnPreparedListener() {
            @Override
            public final void onPrepared(MediaPlayer mediaPlayer2) {
                synchronized (a.this.a) {
                    a.a(a.this);
                    if (a.this.f != null) {
                        a.this.f.onPrepared(mediaPlayer2);
                    }
                }
            }
        });
        try {
            this.c.prepareAsync();
        } catch (Throwable unused) {
        }
    }

    private boolean a() {
        boolean z;
        synchronized (this.a) {
            z = this.d;
        }
        return z;
    }

    private boolean b() {
        boolean z;
        synchronized (this.a) {
            z = this.e;
        }
        return z;
    }

    private void a(MediaPlayer.OnPreparedListener onPreparedListener) {
        synchronized (this.a) {
            this.f = onPreparedListener;
        }
    }

    private String c() {
        return this.b;
    }

    private MediaPlayer d() {
        return this.c;
    }
}
