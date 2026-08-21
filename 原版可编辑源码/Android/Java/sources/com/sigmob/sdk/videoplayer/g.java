package com.sigmob.sdk.videoplayer;

import android.R;
import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.content.IntentFilter;
import android.graphics.Bitmap;
import android.graphics.SurfaceTexture;
import android.media.AudioManager;
import android.util.AttributeSet;
import android.view.MotionEvent;
import android.view.Surface;
import android.view.View;
import android.view.ViewGroup;
import android.view.ViewParent;
import android.view.Window;
import android.widget.FrameLayout;
import android.widget.ImageView;
import android.widget.ProgressBar;
import android.widget.RelativeLayout;
import android.widget.SeekBar;
import com.czhj.sdk.common.utils.ResourceUtil;
import com.czhj.sdk.logger.SigmobLog;
import com.sigmob.windad.WindAdError;
import java.lang.reflect.InvocationTargetException;
import java.util.Timer;
import java.util.TimerTask;

public class g extends RelativeLayout implements View.OnClickListener, View.OnTouchListener, SeekBar.OnSeekBarChangeListener, i {
    private static final String V = "android.media.VOLUME_CHANGED_ACTION";
    private static final String W = "android.media.EXTRA_VOLUME_STREAM_TYPE";
    public static final String a = "VideoPlayerView";
    public static final int b = -1;
    public static final int c = 0;
    public static final int d = 1;
    public static final int e = 2;
    public static final int f = 3;
    public static final int g = 4;
    public static final int h = 5;
    public static final int i = 6;
    public static final int j = 7;
    public static final int k = 1;
    public static final int l = 2;
    public static final int m = 3;
    public static final int n = 0;
    public static final int o = 80;
    public static boolean p = true;
    public static int q = 6;
    public static int r = 1;
    public static boolean s = false;
    public static boolean t = true;
    public static int u;
    public int A;
    public Class B;
    public boolean C;
    public j D;
    public int E;
    public int F;
    public int G;
    public long H;
    public ImageView I;
    public ImageView J;
    public ImageView K;
    public boolean L;
    protected long M;
    protected Timer N;
    protected int O;
    protected int P;
    protected AudioManager Q;
    protected a R;
    protected boolean S;
    m T;
    public AudioManager.OnAudioFocusChangeListener U;
    private ViewGroup aa;
    private ViewGroup ab;
    private ViewGroup ac;
    private ViewGroup ad;
    private ViewGroup ae;
    private ViewGroup af;
    private ViewGroup ag;
    private ViewGroup ah;
    private ProgressBar ai;
    private ImageView aj;
    private com.sigmob.sdk.nativead.h ak;
    private boolean al;
    private com.sigmob.sdk.videoplayer.c am;
    private ImageView an;
    private int ao;
    private int ap;
    private c aq;
    private boolean ar;
    private View as;
    private boolean at;
    private View au;
    public g v;
    public int w;
    public int x;
    public h y;
    public int z;

    static class 3 {
        static final int[] a;

        static {
            int[] iArr = new int[f.values().length];
            a = iArr;
            try {
                iArr[f.a.ordinal()] = 1;
            } catch (NoSuchFieldError unused) {
            }
            try {
                a[f.b.ordinal()] = 2;
            } catch (NoSuchFieldError unused2) {
            }
            try {
                a[f.d.ordinal()] = 3;
            } catch (NoSuchFieldError unused3) {
            }
            try {
                a[f.c.ordinal()] = 4;
            } catch (NoSuchFieldError unused4) {
            }
            try {
                a[f.e.ordinal()] = 5;
            } catch (NoSuchFieldError unused5) {
            }
            try {
                a[f.f.ordinal()] = 6;
            } catch (NoSuchFieldError unused6) {
            }
        }
    }

    public class a extends TimerTask {
        public a() {
        }

        @Override
        public void run() {
            if (g.this.w == 4 || g.this.w == 5) {
                g.this.post(new Runnable() {
                    @Override
                    public void run() {
                        long currentPositionWhenPlaying = g.this.getCurrentPositionWhenPlaying();
                        long duration = g.this.getDuration();
                        g.this.a((int) ((100 * currentPositionWhenPlaying) / (duration == 0 ? 1L : duration)), currentPositionWhenPlaying, duration);
                    }
                });
            }
        }
    }

    private interface b {
        void a(int i);
    }

    private class c extends BroadcastReceiver {
        b a;

        public c(b bVar) {
            this.a = bVar;
        }

        @Override
        public void onReceive(Context context, Intent intent) {
            int streamVolume;
            if (!g.V.equals(intent.getAction()) || intent.getIntExtra(g.W, -1) != 3 || this.a == null || (streamVolume = ((AudioManager) g.this.getApplicationContext().getSystemService("audio")).getStreamVolume(3)) < 0) {
                return;
            }
            this.a.a(streamVolume);
        }
    }

    public g(Context context) {
        super(context);
        this.w = -1;
        this.x = -1;
        this.z = 0;
        this.A = 0;
        this.C = true;
        this.E = -1;
        this.F = 0;
        this.G = -1;
        this.H = 0L;
        this.L = false;
        this.M = 0L;
        this.U = new AudioManager.OnAudioFocusChangeListener() {
            @Override
            public void onAudioFocusChange(int i2) {
                StringBuilder sb;
                String str;
                if (i2 == -2) {
                    sb = new StringBuilder();
                    str = "AUDIOFOCUS_LOSS_TRANSIENT [";
                } else {
                    if (i2 != -1) {
                        return;
                    }
                    g.this.E();
                    sb = new StringBuilder();
                    str = "AUDIOFOCUS_LOSS [";
                }
                sb.append(str);
                sb.append(hashCode());
                sb.append("]");
                SigmobLog.i(sb.toString());
            }
        };
        this.al = true;
        this.ar = false;
        a(context);
    }

    public g(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
        this.w = -1;
        this.x = -1;
        this.z = 0;
        this.A = 0;
        this.C = true;
        this.E = -1;
        this.F = 0;
        this.G = -1;
        this.H = 0L;
        this.L = false;
        this.M = 0L;
        this.U = new AudioManager.OnAudioFocusChangeListener() {
            @Override
            public void onAudioFocusChange(int i2) {
                StringBuilder sb;
                String str;
                if (i2 == -2) {
                    sb = new StringBuilder();
                    str = "AUDIOFOCUS_LOSS_TRANSIENT [";
                } else {
                    if (i2 != -1) {
                        return;
                    }
                    g.this.E();
                    sb = new StringBuilder();
                    str = "AUDIOFOCUS_LOSS [";
                }
                sb.append(str);
                sb.append(hashCode());
                sb.append("]");
                SigmobLog.i(sb.toString());
            }
        };
        this.al = true;
        this.ar = false;
        a(context);
    }

    private void F() {
        try {
            if (this.D != null) {
                this.D.f();
            }
            this.D = this.B == null ? new k(this) : (j) this.B.getConstructor(g.class).newInstance(this);
        } catch (Throwable th) {
            th.printStackTrace();
        }
    }

    private void a(View view, int i2) {
        if (view != null) {
            view.setVisibility(i2);
        }
    }

    public void A() {
    }

    public void B() {
    }

    public void C() {
        int i2;
        g gVar = this.v;
        if (gVar == null || (i2 = gVar.w) == 0) {
            k();
            return;
        }
        if (i2 == 5) {
            com.sigmob.sdk.nativead.h hVar = this.ak;
            if (hVar != null) {
                hVar.onVideoResume();
            }
            this.v.f();
            this.v.D.a();
            return;
        }
        if (i2 == 3) {
            com.sigmob.sdk.nativead.h hVar2 = this.ak;
            if (hVar2 != null) {
                hVar2.onVideoStart();
            }
            this.v.D.a();
            this.v.f();
        }
    }

    public void D() {
        g gVar = this.v;
        if (gVar != null) {
            int i2 = gVar.w;
            if (i2 == 6 || i2 == 0 || i2 == 1 || i2 == 7) {
                E();
            } else if (i2 != 5) {
                gVar.g();
                this.v.D.d();
            }
        }
    }

    public void E() {
        SigmobLog.i("releaseAllVideos");
        g gVar = this.v;
        if (gVar != null) {
            gVar.j();
            this.v = null;
        }
    }

    public void a() {
        E();
        if (this.aq != null) {
            getContext().unregisterReceiver(this.aq);
            this.aq = null;
        }
    }

    public void a(float f2) {
        int i2;
        if (this.v != null) {
            int i3 = this.w;
            if ((i3 != 4 && i3 != 5) || (i2 = this.x) == 1 || i2 == 2) {
                return;
            }
            t();
        }
    }

    public void a(float f2, int i2) {
    }

    public void a(float f2, String str, long j2, String str2, long j3) {
    }

    public void a(int i2) {
    }

    @Override
    public void a(int i2, int i3) {
        SigmobLog.e("onError " + i2 + " - " + i3 + " [" + hashCode() + "] ");
        com.sigmob.sdk.nativead.h hVar = this.ak;
        if (hVar != null) {
            hVar.onVideoError(WindAdError.ERROR_SIGMOB_PLAY_VIDEO);
        }
        if (i2 == 38 || i3 == -38 || i2 == -38 || i3 == 38 || i3 == -19) {
            return;
        }
        h();
        this.D.f();
    }

    public void a(int i2, int i3, int i4) {
        if (i2 == 0) {
            b();
            return;
        }
        if (i2 == 1) {
            c();
            return;
        }
        if (i2 == 2) {
            a(i3, i4);
            return;
        }
        if (i2 == 4) {
            f();
            return;
        }
        if (i2 == 5) {
            g();
        } else if (i2 == 6) {
            i();
        } else {
            if (i2 != 7) {
                return;
            }
            h();
        }
    }

    public void a(int i2, long j2) {
        this.w = 2;
        this.H = j2;
        this.y.b = i2;
        this.D.a((Surface) null);
        this.D.f();
        this.D.c();
    }

    public void a(int i2, long j2, long j3) {
        ProgressBar progressBar;
        SigmobLog.d("onProgress: progress=" + i2 + " position=" + j2 + " duration=" + j3);
        if (!this.S) {
            int i3 = this.G;
            if (i3 != -1) {
                if (i3 > i2) {
                    return;
                } else {
                    this.G = -1;
                }
            } else if (i2 != 0 && (progressBar = this.ai) != null) {
                progressBar.setProgress(i2);
            }
        }
        com.sigmob.sdk.nativead.h hVar = this.ak;
        if (hVar != null) {
            hVar.a(j2, j3);
        }
    }

    public void a(Context context) {
        View.inflate(context, getLayoutId(), this);
        this.ae = (ViewGroup) findViewById(ResourceUtil.getId(getContext(), "sig_native_video_sound_rl"));
        this.ab = (ViewGroup) findViewById(ResourceUtil.getId(getContext(), "sig_native_video_start_rl"));
        this.ac = (ViewGroup) findViewById(ResourceUtil.getId(getContext(), "sig_native_video_fullscreen_rl"));
        this.ad = (ViewGroup) findViewById(ResourceUtil.getId(getContext(), "sig_native_video_replay_rl"));
        this.K = (ImageView) findViewById(ResourceUtil.getId(getContext(), "sig_native_video_sound_btn"));
        this.I = (ImageView) findViewById(ResourceUtil.getId(getContext(), "sig_native_video_start_btn"));
        this.J = (ImageView) findViewById(ResourceUtil.getId(getContext(), "sig_native_video_fullscreen_btn"));
        this.aa = (ViewGroup) findViewById(ResourceUtil.getId(getContext(), "sig_native_video_surface_container"));
        this.ah = (ViewGroup) findViewById(ResourceUtil.getId(getContext(), "sig_native_video_app_container"));
        this.ai = (ProgressBar) findViewById(ResourceUtil.getId(getContext(), "sig_native_video_bottom_progress"));
        this.af = (ViewGroup) findViewById(ResourceUtil.getId(getContext(), "sig_native_video_big_replay"));
        this.aj = (ImageView) findViewById(ResourceUtil.getId(getContext(), "sig_native_video_thumb"));
        this.an = (ImageView) findViewById(ResourceUtil.getId(getContext(), "sig_native_video_blurImageView"));
        this.ag = (ViewGroup) findViewById(ResourceUtil.getId(getContext(), "sig_native_video_back_rl"));
        this.as = findViewById(ResourceUtil.getId(getContext(), "sig_native_video_layout_top"));
        this.au = findViewById(ResourceUtil.getId(getContext(), "sig_native_video_layout_bottom"));
        this.ad.setOnClickListener(this);
        this.ae.setOnClickListener(this);
        this.ab.setOnClickListener(this);
        this.ac.setOnClickListener(this);
        this.af.setOnClickListener(this);
        this.O = getContext().getResources().getDisplayMetrics().widthPixels;
        this.P = getContext().getResources().getDisplayMetrics().heightPixels;
        this.aq = new c(new b() {
            @Override
            public void a(int i2) {
                ImageView imageView;
                int drawableId;
                if (i2 == 0 || g.this.al) {
                    imageView = g.this.K;
                    drawableId = ResourceUtil.getDrawableId(g.this.getContext(), "sig_image_video_mute");
                } else {
                    imageView = g.this.K;
                    drawableId = ResourceUtil.getDrawableId(g.this.getContext(), "sig_image_video_unmute");
                }
                imageView.setImageResource(drawableId);
            }
        });
        IntentFilter intentFilter = new IntentFilter();
        intentFilter.addAction(V);
        context.registerReceiver(this.aq, intentFilter);
        this.w = -1;
    }

    public void a(ViewGroup viewGroup) {
        try {
            g gVar = (g) getClass().getConstructor(Context.class).newInstance(getContext());
            gVar.setId(getId());
            viewGroup.addView(gVar);
            gVar.a(this.y.c(), 0, this.B);
        } catch (IllegalAccessException e2) {
            e2.printStackTrace();
        } catch (InstantiationException e3) {
            e3.printStackTrace();
        } catch (NoSuchMethodException e4) {
            e4.printStackTrace();
        } catch (InvocationTargetException e5) {
            e5.printStackTrace();
        }
    }

    public void a(f fVar, boolean z) {
        ViewGroup viewGroup;
        int i2 = 0;
        switch (3.a[fVar.ordinal()]) {
            case 1:
                viewGroup = this.ab;
                if (!z) {
                }
                a(viewGroup, i2);
            case 2:
                viewGroup = this.ad;
                if (!z) {
                }
                a(viewGroup, i2);
            case 3:
                viewGroup = this.ae;
                if (!z) {
                }
                a(viewGroup, i2);
            case 4:
                viewGroup = this.ac;
                if (!z) {
                }
                a(viewGroup, i2);
            case 5:
                viewGroup = this.af;
                if (!z) {
                }
                a(viewGroup, i2);
            case 6:
                viewGroup = this.ag;
                if (!z) {
                }
                a(viewGroup, i2);
            default:
                return;
        }
        i2 = 4;
        a(viewGroup, i2);
    }

    public void a(h hVar, int i2) {
        a(hVar, i2, (Class) null);
    }

    public void a(h hVar, int i2, Class cls) {
        if (System.currentTimeMillis() - this.M < 200) {
            return;
        }
        this.y = hVar;
        this.x = i2;
        b();
        this.B = cls;
    }

    public void a(h hVar, long j2) {
        this.w = 2;
        this.H = j2;
        this.y = hVar;
        this.D.a((Surface) null);
        this.D.f();
        this.D.c();
    }

    public void a(String str, String str2) {
        a(new h(str, str2), 0);
    }

    public void a(String str, String str2, int i2) {
        a(new h(str, str2), i2);
    }

    public void a(String str, String str2, int i2, Class cls) {
        a(new h(str, str2), i2, cls);
    }

    public void a(String str, String str2, long j2) {
        a(new h(str, str2), j2);
    }

    public void a(boolean z) {
        ViewGroup viewGroup;
        int i2;
        if (z) {
            viewGroup = this.ac;
            i2 = 0;
        } else {
            viewGroup = this.ac;
            i2 = 4;
        }
        a(viewGroup, i2);
    }

    public void b() {
        SigmobLog.d("onStateNormal stat" + this.w + " [" + hashCode() + "] ");
        this.w = 0;
        a(this.aj, 0);
        a(this.ab, 0);
        r();
        j jVar = this.D;
        if (jVar != null) {
            jVar.f();
        }
    }

    @Override
    public void b(int i2, int i3) {
        String str;
        SigmobLog.d("onInfo what - " + i2 + " extra - " + i3);
        if (i2 == 3) {
            int i4 = this.w;
            if (i4 == 3 || i4 == 2) {
                f();
                return;
            }
            return;
        }
        if (i2 == 701) {
            if (this.w == 4) {
                this.at = true;
                this.D.d();
                g();
            }
            str = "MEDIA_INFO_BUFFERING_START";
        } else {
            if (i2 != 702) {
                return;
            }
            if (this.at) {
                this.at = false;
                this.D.a();
                f();
            }
            str = "MEDIA_INFO_BUFFERING_END";
        }
        SigmobLog.d(str);
    }

    public void b(boolean z) {
        this.ar = z;
    }

    public void c() {
        SigmobLog.d("onStatePreparing  [" + hashCode() + "] ");
        this.w = 1;
        s();
    }

    @Override
    public void c(int i2, int i3) {
        this.ao = i3;
        this.ap = i2;
        SigmobLog.d("onVideoSizeChanged  [" + hashCode() + "] ");
        m mVar = this.T;
        if (mVar != null) {
            int i4 = this.F;
            if (i4 != 0) {
                mVar.setRotation(i4);
            }
            this.T.a(i2, i3);
        }
    }

    public void d() {
        this.L = true;
        k();
    }

    public void e() {
        if (this.w == 3) {
            this.D.a();
        } else {
            this.L = false;
            k();
        }
    }

    public void f() {
        SigmobLog.d("onStatePlaying  [" + hashCode() + "] ");
        a(this.aj, 4);
        a(this.ab, 4);
        if (this.w == 3) {
            long j2 = this.H;
            if (j2 != 0) {
                this.D.a(j2);
                this.H = 0L;
            }
        }
        this.w = 4;
        q();
    }

    public void g() {
        SigmobLog.i("onStatePause  [" + hashCode() + "] ");
        this.w = 5;
        a(this.ab, 0);
        com.sigmob.sdk.nativead.h hVar = this.ak;
        if (hVar != null) {
            hVar.onVideoPause();
        }
        q();
    }

    public ViewGroup getAppContainer() {
        return this.ah;
    }

    public Context getApplicationContext() {
        Context applicationContext;
        Context context = getContext();
        return (context == null || (applicationContext = context.getApplicationContext()) == null) ? context : applicationContext;
    }

    public ImageView getBlurImageView() {
        return this.an;
    }

    public View getBottomLayoutView() {
        return this.au;
    }

    public long getCurrentPositionWhenPlaying() {
        int i2 = this.w;
        if (i2 != 4 && i2 != 5) {
            return 0L;
        }
        try {
            return this.D.g();
        } catch (IllegalStateException e2) {
            e2.printStackTrace();
            return 0L;
        }
    }

    public long getDuration() {
        try {
            return this.D.j();
        } catch (IllegalStateException e2) {
            e2.printStackTrace();
            return 0L;
        }
    }

    public int getLayoutId() {
        return ResourceUtil.getLayoutId(getContext(), "sig_video_player_layout");
    }

    public ViewGroup getSigAdView() {
        ViewGroup viewGroup = (ViewGroup) getParent();
        while (!(viewGroup instanceof com.sigmob.sdk.nativead.i) && (viewGroup = (ViewGroup) getParent()) != null) {
        }
        return viewGroup;
    }

    public Bitmap getTextureBitmap() {
        m mVar = this.T;
        if (mVar != null) {
            return mVar.getBitmap();
        }
        return null;
    }

    public ImageView getThumbView() {
        return this.aj;
    }

    public View getTopLayoutView() {
        return this.as;
    }

    public int getVideoHeight() {
        return this.ao;
    }

    @Override
    public h getVideoPlayerDataSource() {
        return this.y;
    }

    public int getVideoSurferViewHeight() {
        m mVar = this.T;
        if (mVar != null) {
            return mVar.getHeight();
        }
        return 0;
    }

    public int getVideoWidth() {
        return this.ap;
    }

    public void h() {
        SigmobLog.d("onStateError  [" + hashCode() + "] ");
        this.w = 7;
        r();
        a(this.x == 1 ? this.ab : this.ad, 0);
    }

    public void i() {
        SigmobLog.i("onStateAutoComplete  [" + hashCode() + "] ");
        this.w = 6;
        r();
        ProgressBar progressBar = this.ai;
        if (progressBar != null) {
            progressBar.setProgress(100);
        }
    }

    public void j() {
        SigmobLog.d("reset  [" + hashCode() + "] ");
        r();
        s();
        B();
        z();
        A();
        b();
        this.aa.removeAllViews();
        Window windowC = d.c(getContext());
        if (windowC != null) {
            windowC.clearFlags(128);
        }
        j jVar = this.D;
        if (jVar != null) {
            jVar.f();
        }
    }

    public void k() {
        SigmobLog.d("startVideo [" + hashCode() + "] ");
        setCurrentVideoAdView(this);
        try {
            F();
            a(this.ad, 4);
            a(this.af, 4);
        } catch (Throwable th) {
            th.printStackTrace();
        }
        Window windowC = d.c(getContext());
        if (windowC != null) {
            windowC.setFlags(16777216, 16777216);
            windowC.addFlags(128);
        }
        l();
        c();
    }

    public void l() {
        SigmobLog.d("addTextureView [" + hashCode() + "] ");
        m mVar = this.T;
        if (mVar != null) {
            this.aa.removeView(mVar);
        }
        m mVar2 = new m(getContext().getApplicationContext());
        this.T = mVar2;
        mVar2.setSurfaceTextureListener(this.D);
        this.aa.addView(this.T, new FrameLayout.LayoutParams(-1, -1, 17));
    }

    public void m() {
        Window windowC = d.c(getContext());
        if (windowC != null) {
            ((ViewGroup) windowC.findViewById(R.id.content)).removeView(this);
        }
    }

    @Override
    public void n() {
        SigmobLog.d("onPrepared  [" + hashCode() + "] ");
        this.w = 3;
        setSoundChange(this.al);
        com.sigmob.sdk.nativead.h hVar = this.ak;
        if (hVar != null) {
            hVar.onVideoLoad();
        }
        if (!this.L) {
            com.sigmob.sdk.nativead.h hVar2 = this.ak;
            if (hVar2 != null) {
                hVar2.onVideoStart();
            }
            SigmobLog.d("mediaInterface start");
            f();
            this.D.a();
            this.L = false;
        } else if (this.ar) {
            this.aj.setImageBitmap(this.T.getBitmap());
        }
        if (this.y.a().toString().toLowerCase().contains("mp3") || this.y.a().toString().toLowerCase().contains("wma") || this.y.a().toString().toLowerCase().contains("aac") || this.y.a().toString().toLowerCase().contains("m4a") || this.y.a().toString().toLowerCase().contains("wav")) {
            f();
        }
    }

    @Override
    public void o() {
        Runtime.getRuntime().gc();
        com.sigmob.sdk.nativead.h hVar = this.ak;
        if (hVar != null) {
            hVar.onVideoCompleted();
        }
        SigmobLog.d("onAutoCompletion  [" + hashCode() + "] ");
        r();
        B();
        z();
        A();
        i();
        Window windowC = d.c(getContext());
        if (windowC != null) {
            windowC.clearFlags(128);
        }
        s();
        this.v = null;
    }

    @Override
    public void onClick(View view) {
        onTouch(view, null);
    }

    @Override
    protected void onMeasure(int i2, int i3) {
        int i4 = this.x;
        if (i4 == 1 || i4 == 2) {
            super.onMeasure(i2, i3);
            return;
        }
        if (this.z == 0 || this.A == 0) {
            super.onMeasure(i2, i3);
            return;
        }
        int size = View.MeasureSpec.getSize(i2);
        int i5 = (int) ((size * this.A) / this.z);
        setMeasuredDimension(size, i5);
        getChildAt(0).measure(View.MeasureSpec.makeMeasureSpec(size, 1073741824), View.MeasureSpec.makeMeasureSpec(i5, 1073741824));
    }

    @Override
    public void onProgressChanged(SeekBar seekBar, int i2, boolean z) {
        if (z) {
            getDuration();
        }
    }

    @Override
    public void onStartTrackingTouch(SeekBar seekBar) {
        SigmobLog.d("bottomProgress onStartTrackingTouch [" + hashCode() + "] ");
        r();
        for (ViewParent parent = getParent(); parent != null; parent = parent.getParent()) {
            parent.requestDisallowInterceptTouchEvent(true);
        }
    }

    @Override
    public void onStopTrackingTouch(SeekBar seekBar) {
        SigmobLog.d("bottomProgress onStopTrackingTouch [" + hashCode() + "] ");
        q();
        for (ViewParent parent = getParent(); parent != null; parent = parent.getParent()) {
            parent.requestDisallowInterceptTouchEvent(false);
        }
        int i2 = this.w;
        if (i2 == 4 || i2 == 5) {
            long progress = (((long) seekBar.getProgress()) * getDuration()) / 100;
            this.G = seekBar.getProgress();
            this.D.a(progress);
            SigmobLog.d("seekTo " + progress + " [" + hashCode() + "] ");
        }
    }

    @Override
    public boolean onTouch(View view, MotionEvent motionEvent) {
        if (motionEvent != null && motionEvent.getAction() != 1) {
            return false;
        }
        if (view == this.ac) {
            int i2 = this.x;
            if (i2 == 0) {
                t();
                return false;
            }
            if (i2 != 1) {
                return false;
            }
            u();
            return false;
        }
        if (view == this.ae) {
            setSoundChange(!this.al);
            return false;
        }
        if (view == this.ad || view == this.af) {
            com.sigmob.sdk.nativead.h hVar = this.ak;
            if (hVar != null) {
                hVar.a();
            }
            k();
            return false;
        }
        if (view != this.ab) {
            return false;
        }
        int i3 = this.w;
        if (i3 != 0) {
            if (i3 == 4) {
                SigmobLog.d("pauseVideo [" + hashCode() + "] ");
                this.D.d();
                g();
            } else if (i3 == 5) {
                com.sigmob.sdk.nativead.h hVar2 = this.ak;
                if (hVar2 != null) {
                    hVar2.onVideoResume();
                }
                this.D.a();
                f();
            } else if (i3 != 6) {
                if (i3 == 3) {
                    this.D.a();
                    f();
                    com.sigmob.sdk.nativead.h hVar3 = this.ak;
                    if (hVar3 != null) {
                        hVar3.onVideoStart();
                    }
                }
            }
            return true;
        }
        if (!t && !this.y.a().toString().startsWith(com.sigmob.sdk.base.h.x) && !this.y.a().toString().startsWith("/") && !d.a(getContext())) {
            y();
            return true;
        }
        k();
        return true;
    }

    @Override
    public void p() {
    }

    public void q() {
        SigmobLog.d("startProgressTimer:  [" + hashCode() + "] ");
        r();
        this.N = new Timer();
        a aVar = new a();
        this.R = aVar;
        this.N.schedule(aVar, 0L, 300L);
    }

    public void r() {
        Timer timer = this.N;
        if (timer != null) {
            timer.cancel();
        }
        a aVar = this.R;
        if (aVar != null) {
            aVar.cancel();
        }
    }

    public void s() {
        ProgressBar progressBar = this.ai;
        if (progressBar != null) {
            progressBar.setProgress(0);
        }
    }

    public void setBackClickListener(View.OnClickListener onClickListener) {
        ViewGroup viewGroup = this.ag;
        if (viewGroup != null) {
            viewGroup.setOnClickListener(onClickListener);
        }
    }

    @Override
    public void setBufferProgress(int i2) {
        SigmobLog.d("setBufferProgress() called with: bufferProgress = [" + i2 + "]");
    }

    public void setCurrentVideoAdView(g gVar) {
        this.v = gVar;
    }

    public void setHolderImageResource(int i2) {
    }

    public void setMediaInterface(Class cls) {
        j();
        this.B = cls;
    }

    @Override
    public void setRotation(float f2) {
        this.T.setRotation(f2);
    }

    public void setScreen(int i2) {
        if (i2 == 0) {
            v();
        } else if (i2 == 1) {
            w();
        } else {
            if (i2 != 2) {
                return;
            }
            x();
        }
    }

    public void setSoundChange(boolean z) {
        ImageView imageView;
        Context context;
        String str;
        this.al = z;
        if (z) {
            j jVar = this.D;
            if (jVar != null) {
                jVar.a(0.0f);
            }
            imageView = this.K;
            context = getContext();
            str = "sig_image_video_mute";
        } else {
            j jVar2 = this.D;
            if (jVar2 != null) {
                jVar2.a(1.0f);
            }
            imageView = this.K;
            context = getContext();
            str = "sig_image_video_unmute";
        }
        imageView.setImageResource(ResourceUtil.getDrawableId(context, str));
    }

    public void setState(int i2) {
        a(i2, 0, 0);
    }

    @Override
    public void setSurfaceTexture(SurfaceTexture surfaceTexture) {
        m mVar = this.T;
        if (mVar != null) {
            mVar.setSurfaceTexture(surfaceTexture);
        }
    }

    public void setTextureViewRotation(int i2) {
        m mVar;
        g gVar = this.v;
        if (gVar == null || (mVar = gVar.T) == null) {
            return;
        }
        mVar.setRotation(i2);
    }

    public void setUp(String str) {
        a(new h(str, (String) null), 0);
    }

    public void setVideoAdStatusListener(com.sigmob.sdk.nativead.h hVar) {
        this.ak = hVar;
    }

    public void setVideoAdViewListener(com.sigmob.sdk.videoplayer.c cVar) {
        this.am = cVar;
    }

    public void setVideoImageDisplayType(int i2) {
        m mVar;
        u = i2;
        g gVar = this.v;
        if (gVar == null || (mVar = gVar.T) == null) {
            return;
        }
        mVar.requestLayout();
    }

    public void t() {
        com.sigmob.sdk.videoplayer.c cVar = this.am;
        if (cVar != null) {
            cVar.g();
        }
        w();
        this.J.setImageResource(ResourceUtil.getDrawableId(getContext(), "sig_image_video_small"));
    }

    public void u() {
        this.M = System.currentTimeMillis();
        com.sigmob.sdk.videoplayer.c cVar = this.am;
        if (cVar != null) {
            cVar.f();
        }
        v();
        this.J.setImageResource(ResourceUtil.getDrawableId(getContext(), "sig_image_video_fullscreen"));
    }

    public void v() {
        this.x = 0;
    }

    public void w() {
        this.x = 1;
    }

    public void x() {
        this.x = 2;
    }

    public void y() {
    }

    public void z() {
    }
}
