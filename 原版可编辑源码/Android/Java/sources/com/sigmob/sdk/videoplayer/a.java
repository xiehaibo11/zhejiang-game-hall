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

public class a extends RelativeLayout implements i {
    private static final int u = 6000;
    j a;
    Class b;
    m c;
    public h d;
    public e e;
    private ViewGroup f;
    private int g;
    private Timer h;
    private a i;
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

    public class a extends TimerTask {
        public a() {
        }

        @Override
        public void run() {
            if (a.this.e == e.h || a.this.e == e.i) {
                a.this.post(new Runnable() {
                    @Override
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
        this.e = e.a;
        this.l = new Handler(Looper.getMainLooper()) {
            @Override
            public void handleMessage(Message message) {
                if (message.what == 6000 && !a.this.j) {
                    a.this.j = true;
                    a.this.setState(e.c);
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
            if (this.a != null) {
                this.a.f();
            }
            this.a = this.b == null ? new k(this) : (j) this.b.getConstructor(a.class).newInstance(this);
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
        if (this.e != e.i && this.e != e.g && this.e != e.j && this.e != e.h) {
            this.g = i;
            return;
        }
        j jVar = this.a;
        if (jVar != null) {
            jVar.a(i);
        }
    }

    @Override
    public void a(int i, int i2) {
        this.s = i;
        this.t = "" + i2;
        setState(e.l);
    }

    public void a(h hVar, int i) {
        this.d = hVar;
        c();
    }

    public void b() {
        SigmobLog.d("onStatePreparing  [" + hashCode() + "] ");
        setState(e.e);
    }

    @Override
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
            eVar = e.c;
            setState(eVar);
        } else if (i != 702) {
            return;
        }
        eVar = e.d;
        setState(eVar);
    }

    public void c() {
        SigmobLog.d("onStateNormal stat" + this.e + " [" + hashCode() + "] ");
        setState(e.b);
        j jVar = this.a;
        if (jVar != null) {
            jVar.f();
        }
    }

    @Override
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
        if (this.e == e.b || this.a == null) {
            a();
            return;
        }
        if (this.e == e.i || this.e == e.d || this.e == e.j || this.e == e.g) {
            this.a.a();
            e();
        }
    }

    public void e() {
        SigmobLog.d("onStatePlaying  [" + hashCode() + "] ");
        if (this.e == e.g) {
            int i = this.g;
            if (i != 0) {
                this.a.a(i);
                this.g = 0;
            }
            if (!this.k) {
                this.l.sendEmptyMessageDelayed(6000, 1500L);
            }
        }
        setState(e.h);
        f();
    }

    public void f() {
        SigmobLog.d("startProgressTimer:  [" + hashCode() + "] ");
        k();
        this.h = new Timer();
        a aVar = new a();
        this.i = aVar;
        this.h.schedule(aVar, 0L, 300L);
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
        j jVar = this.a;
        if (jVar != null) {
            jVar.f();
        }
    }

    public long getCurrentPositionWhenPlaying() {
        if (this.e != e.h && this.e != e.i) {
            return 0L;
        }
        try {
            return this.a.g();
        } catch (IllegalStateException e) {
            e.printStackTrace();
            return 0L;
        }
    }

    public long getDuration() {
        try {
            return this.a.j();
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

    @Override
    public h getVideoPlayerDataSource() {
        return this.d;
    }

    public int getVideoWidth() {
        return this.p;
    }

    public void h() {
        setState(e.k);
        g();
    }

    public void i() {
        if (this.e == e.j || this.e == e.b || this.e == e.e || this.e == e.l) {
            g();
        } else {
            if (this.e == e.i || this.a == null) {
                return;
            }
            j();
            this.a.d();
        }
    }

    public void j() {
        SigmobLog.i("onStatePause  [" + hashCode() + "] ");
        setState(e.i);
        f();
    }

    public void k() {
        Timer timer = this.h;
        if (timer != null) {
            timer.cancel();
        }
        a aVar = this.i;
        if (aVar != null) {
            aVar.cancel();
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
        mVar2.setSurfaceTextureListener(this.a);
        this.f.addView(this.c, new FrameLayout.LayoutParams(-1, -1, 17));
    }

    public void m() {
        this.n = true;
        a();
    }

    @Override
    public void n() {
        SigmobLog.d("onPrepared  [" + hashCode() + "] ");
        setState(e.g);
        if (this.n) {
            return;
        }
        SigmobLog.d("mediaInterface start");
        e();
        this.a.a();
        this.n = false;
    }

    @Override
    public void o() {
        setState(e.j);
    }

    @Override
    protected void onAttachedToWindow() {
        super.onAttachedToWindow();
        SigmobLog.d("onAttachedToWindow");
    }

    @Override
    protected void onDetachedFromWindow() {
        super.onDetachedFromWindow();
    }

    @Override
    public void p() {
    }

    public void q() {
        this.r = null;
        g();
    }

    @Override
    public void setBufferProgress(int i) {
    }

    public void setMute(boolean z) {
        j jVar;
        float f;
        this.m = z;
        if (z) {
            jVar = this.a;
            if (jVar == null) {
                return;
            } else {
                f = 0.0f;
            }
        } else {
            jVar = this.a;
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

    @Override
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
