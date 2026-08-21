package com.sigmob.sdk.videoplayer;

import android.graphics.SurfaceTexture;
import android.os.Handler;
import android.os.HandlerThread;
import android.view.Surface;
import android.view.TextureView;

/* JADX INFO: loaded from: classes3.dex */
public abstract class j implements TextureView.SurfaceTextureListener {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public SurfaceTexture f5258a;
    public HandlerThread b;
    public Handler c;
    public Handler d;
    public i e;

    public j(i iVar) {
        this.e = iVar;
    }

    public abstract void a();

    public abstract void a(float f);

    public abstract void a(long j);

    public abstract void a(Surface surface);

    public abstract void b();

    public abstract void b(float f);

    public abstract void c();

    public abstract void d();

    public abstract boolean e();

    public abstract void f();

    public abstract long g();

    public abstract int h();

    public abstract int i();

    public abstract long j();
}
