package com.sigmob.sdk.videoplayer;

public abstract class j implements android.view.TextureView.SurfaceTextureListener {
    public android.graphics.SurfaceTexture a;
    public android.os.HandlerThread b;
    public android.os.Handler c;
    public android.os.Handler d;
    public com.sigmob.sdk.videoplayer.i e;

    public j(com.sigmob.sdk.videoplayer.i r1) {
            r0 = this;
            r0.<init>()
            r0.e = r1
            return
    }

    public abstract void a();

    public abstract void a(float r1);

    public abstract void a(long r1);

    public abstract void a(android.view.Surface r1);

    public abstract void b();

    public abstract void b(float r1);

    public abstract void c();

    public abstract void d();

    public abstract boolean e();

    public abstract void f();

    public abstract long g();

    public abstract int h();

    public abstract int i();

    public abstract long j();
}
