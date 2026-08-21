package com.sigmob.sdk.videoplayer;

import android.content.Context;
import android.graphics.SurfaceTexture;
import android.os.Handler;
import android.os.Looper;
import android.os.Message;
import android.view.ViewGroup;
import android.view.Window;
import android.widget.FrameLayout;
import android.widget.RelativeLayout;
import com.czhj.sdk.logger.SigmobLog;
import java.util.Timer;
import java.util.TimerTask;

/* JADX INFO: loaded from: classes3.dex */
public class a extends RelativeLayout implements i {
    private static final int u = 6000;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    j f5243a;
    Class b;
    m c;
    public h d;
    public e e;
    private ViewGroup f;
    private int g;
    private Timer h;
    private C0345a i;
    private boolean j;
    private boolean k;
    private Handler l;
    private boolean m;
    private boolean n;
    private int o;
    private int p;
    private float q;
    private l r;
    private int s;
    private String t;

    /* JADX INFO: renamed from: com.sigmob.sdk.videoplayer.a$a, reason: collision with other inner class name */
    public class C0345a extends TimerTask {
        public C0345a() {
        }

        @Override // java.util.TimerTask, java.lang.Runnable
        public void run() {
            if (a.this.e == e.STATE_PLAYING || a.this.e == e.STATE_PAUSE) {
                a.this.post(new Runnable() { // from class: com.sigmob.sdk.videoplayer.a.a.1
                    @Override // java.lang.Runnable
                    public void run() {
                        long currentPositionWhenPlaying = a.this.getCurrentPositionWhenPlaying();
                        long duration = a.this.getDuration();
                        if (a.this.r != null) {
                            a.this.r.a(currentPositionWhenPlaying, duration);
                        }
                    }
                });
            }
        }
    }

    public a(Context context) {
        super(context);
        this.e = e.STATE_IDLE;
        this.l = new Handler(Looper.getMainLooper()) { // from class: com.sigmob.sdk.videoplayer.a.1
            @Override // android.os.Handler
            public void handleMessage(Message message) {
                if (message.what == 6000 && !a.this.j) {
                    a.this.j = true;
                    a.this.setState(e.STATE_BUFFERING_START);
                }
            }
        };
        FrameLayout frameLayout = new FrameLayout(context);
        this.f = frameLayout;
        frameLayout.setBackgroundColor(-16777216);
        addView(this.f, new RelativeLayout.LayoutParams(-1, -1));
    }

    private void r() {
        try {
            if (this.f5243a != null) {
                this.f5243a.f();
            }
            this.f5243a = this.b == null ? new k(this) : (j) this.b.getConstructor(a.class).newInstance(this);
        } catch (Throwable th) {
            th.printStackTrace();
        }
    }

    public void a() {
        SigmobLog.d("startVideo [" + hashCode() + "] ");
        try {
            r();
        } catch (Throwable th) {
            th.printStackTrace();
        }
        Window windowC = d.c(getContext());
        if (windowC != null) {
            windowC.setFlags(16777216, 16777216);
            windowC.addFlags(128);
        }
        l();
        b();
    }

    public void a(int i) {
        if (this.e != e.STATE_PAUSE && this.e != e.STATE_PREPARED && this.e != e.STATE_AUTO_COMPLETE && this.e != e.STATE_PLAYING) {
            this.g = i;
            return;
        }
        j jVar = this.f5243a;
        if (jVar != null) {
            jVar.a(i);
        }
    }

    @Override // com.sigmob.sdk.videoplayer.i
    public void a(int i, int i2) {
        this.s = i;
        this.t = "" + i2;
        setState(e.STATE_ERROR);
    }

    public void a(h hVar, int i) {
        this.d = hVar;
        c();
    }

    public void b() {
        SigmobLog.d("onStatePreparing  [" + hashCode() + "] ");
        setState(e.STATE_PREPARING);
    }

    @Override // com.sigmob.sdk.videoplayer.i
    public void b(int i, int i2) {
        e eVar;
        SigmobLog.d("onInfo() called with: what = [" + i + "], extra = [" + i2 + "]");
        if (i == 3) {
            if (!this.k) {
                this.k = true;
                this.l.removeMessages(6000);
            }
            if (!this.j) {
                return;
            } else {
                this.j = false;
            }
        } else if (i == 701) {
            eVar = e.STATE_BUFFERING_START;
            setState(eVar);
        } else if (i != 702) {
            return;
        }
        eVar = e.STATE_BUFFERING_END;
        setState(eVar);
    }

    public void c() {
        SigmobLog.d("onStateNormal stat" + this.e + " [" + hashCode() + "] ");
        setState(e.STATE_NORMAL);
        j jVar = this.f5243a;
        if (jVar != null) {
            jVar.f();
        }
    }

    @Override // com.sigmob.sdk.videoplayer.i
    public void c(int i, int i2) {
        this.o = i2;
        this.p = i;
        SigmobLog.d("onVideoSizeChanged  [" + hashCode() + "] ");
        m mVar = this.c;
        if (mVar != null) {
            float f = this.q;
            if (f != 0.0f) {
                mVar.setRotation(f);
            }
            this.c.a(i, i2);
        }
    }

    public void d() {
        this.n = false;
        if (this.e == e.STATE_NORMAL || this.f5243a == null) {
            a();
            return;
        }
        if (this.e == e.STATE_PAUSE || this.e == e.STATE_BUFFERING_END || this.e == e.STATE_AUTO_COMPLETE || this.e == e.STATE_PREPARED) {
            this.f5243a.a();
            e();
        }
    }

    public void e() {
        SigmobLog.d("onStatePlaying  [" + hashCode() + "] ");
        if (this.e == e.STATE_PREPARED) {
            int i = this.g;
            if (i != 0) {
                this.f5243a.a(i);
                this.g = 0;
            }
            if (!this.k) {
                this.l.sendEmptyMessageDelayed(6000, 1500L);
            }
        }
        setState(e.STATE_PLAYING);
        f();
    }

    public void f() {
        SigmobLog.d("startProgressTimer:  [" + hashCode() + "] ");
        k();
        this.h = new Timer();
        C0345a c0345a = new C0345a();
        this.i = c0345a;
        this.h.schedule(c0345a, 0L, 300L);
    }

    public void g() {
        SigmobLog.d("reset  [" + hashCode() + "] ");
        k();
        c();
        this.f.removeAllViews();
        Window windowC = d.c(getContext());
        if (windowC != null) {
            windowC.clearFlags(128);
        }
        j jVar = this.f5243a;
        if (jVar != null) {
            jVar.f();
        }
    }

    public long getCurrentPositionWhenPlaying() {
        if (this.e != e.STATE_PLAYING && this.e != e.STATE_PAUSE) {
            return 0L;
        }
        try {
            return this.f5243a.g();
        } catch (IllegalStateException e) {
            e.printStackTrace();
            return 0L;
        }
    }

    public long getDuration() {
        try {
            return this.f5243a.j();
        } catch (IllegalStateException e) {
            e.printStackTrace();
            return 0L;
        }
    }

    public int getErrorCode() {
        return this.s;
    }

    public String getErrorMessage() {
        return this.t;
    }

    public int getVideoHeight() {
        return this.o;
    }

    @Override // com.sigmob.sdk.videoplayer.i
    public h getVideoPlayerDataSource() {
        return this.d;
    }

    public int getVideoWidth() {
        return this.p;
    }

    public void h() {
        setState(e.STATE_STOP);
        g();
    }

    public void i() {
        if (this.e == e.STATE_AUTO_COMPLETE || this.e == e.STATE_NORMAL || this.e == e.STATE_PREPARING || this.e == e.STATE_ERROR) {
            g();
        } else {
            if (this.e == e.STATE_PAUSE || this.f5243a == null) {
                return;
            }
            j();
            this.f5243a.d();
        }
    }

    public void j() {
        SigmobLog.i("onStatePause  [" + hashCode() + "] ");
        setState(e.STATE_PAUSE);
        f();
    }

    public void k() {
        Timer timer = this.h;
        if (timer != null) {
            timer.cancel();
        }
        C0345a c0345a = this.i;
        if (c0345a != null) {
            c0345a.cancel();
        }
    }

    public void l() {
        SigmobLog.d("addTextureView [" + hashCode() + "] ");
        m mVar = this.c;
        if (mVar != null) {
            this.f.removeView(mVar);
        }
        m mVar2 = new m(getContext().getApplicationContext());
        this.c = mVar2;
        mVar2.setSurfaceTextureListener(this.f5243a);
        this.f.addView(this.c, new FrameLayout.LayoutParams(-1, -1, 17));
    }

    public void m() {
        this.n = true;
        a();
    }

    @Override // com.sigmob.sdk.videoplayer.i
    public void n() {
        SigmobLog.d("onPrepared  [" + hashCode() + "] ");
        setState(e.STATE_PREPARED);
        if (this.n) {
            return;
        }
        SigmobLog.d("mediaInterface start");
        e();
        this.f5243a.a();
        this.n = false;
    }

    @Override // com.sigmob.sdk.videoplayer.i
    public void o() {
        setState(e.STATE_AUTO_COMPLETE);
    }

    @Override // android.view.ViewGroup, android.view.View
    protected void onAttachedToWindow() {
        super.onAttachedToWindow();
        SigmobLog.d("onAttachedToWindow");
    }

    @Override // android.view.ViewGroup, android.view.View
    protected void onDetachedFromWindow() {
        super.onDetachedFromWindow();
    }

    @Override // com.sigmob.sdk.videoplayer.i
    public void p() {
    }

    public void q() {
        this.r = null;
        g();
    }

    @Override // com.sigmob.sdk.videoplayer.i
    public void setBufferProgress(int i) {
    }

    public void setMute(boolean z) {
        j jVar;
        float f;
        this.m = z;
        if (z) {
            jVar = this.f5243a;
            if (jVar == null) {
                return;
            } else {
                f = 0.0f;
            }
        } else {
            jVar = this.f5243a;
            if (jVar == null) {
                return;
            } else {
                f = 1.0f;
            }
        }
        jVar.a(f);
    }

    public void setState(e eVar) {
        this.e = eVar;
        l lVar = this.r;
        if (lVar != null) {
            lVar.a(eVar);
        }
    }

    @Override // com.sigmob.sdk.videoplayer.i
    public void setSurfaceTexture(SurfaceTexture surfaceTexture) {
        m mVar = this.c;
        if (mVar != null) {
            mVar.setSurfaceTexture(surfaceTexture);
        }
    }

    public void setTextureViewContainer(ViewGroup viewGroup) {
        this.f = viewGroup;
    }

    public void setUp(String str) {
        a(new h(str, (String) null), 0);
    }

    public void setVideoPlayerStatusListener(l lVar) {
        this.r = lVar;
    }
}
