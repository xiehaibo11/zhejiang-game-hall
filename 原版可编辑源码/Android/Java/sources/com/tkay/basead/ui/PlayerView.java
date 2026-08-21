package com.tkay.basead.ui;

import android.content.Context;
import android.net.Uri;
import android.os.Handler;
import android.os.Looper;
import android.os.Message;
import android.os.Parcel;
import android.os.Parcelable;
import android.os.SystemClock;
import android.text.TextUtils;
import android.util.AttributeSet;
import android.view.TextureView;
import android.view.View;
import android.widget.RelativeLayout;
import com.tencent.open.apireq.BaseResp;
import com.tkay.basead.a.b.g;
import com.tkay.basead.c.e;
import com.tkay.basead.c.f;
import com.tkay.core.common.a.j;
import com.tkay.core.common.b.m;
import com.tkay.core.common.l.h;
import com.tkay.expressad.exoplayer.ad;
import com.tkay.expressad.exoplayer.d;
import com.tkay.expressad.exoplayer.h.o;
import com.tkay.expressad.exoplayer.h.s;
import com.tkay.expressad.exoplayer.i;
import com.tkay.expressad.exoplayer.i.c;
import com.tkay.expressad.exoplayer.j.q;
import com.tkay.expressad.exoplayer.l.g;
import com.tkay.expressad.exoplayer.w;
import java.io.File;

public class PlayerView extends RelativeLayout {
    public static final String TAG = PlayerView.class.getSimpleName();
    private a A;
    private Handler B;
    private boolean C;
    private Thread D;
    private int E;
    private int F;
    private boolean G;
    private boolean H;
    private View I;
    private w.c J;
    private g K;
    private final long L;
    private long M;
    int a;
    int b;
    int c;
    boolean d;
    String e;
    String f;
    private ad g;
    private s h;
    private TextureView i;
    private String j;
    private String k;
    private int l;
    private int m;
    private int n;
    private int o;
    private int p;
    private int q;
    private int r;
    private boolean s;
    private boolean t;
    private boolean u;
    private boolean v;
    private boolean w;
    private boolean x;
    private boolean y;
    private boolean z;

    public interface a {
        void a();

        void a(int i);

        void a(e eVar);

        void b();

        void b(int i);

        void c();

        void c(int i);

        void d();

        void e();

        void f();

        void g();
    }

    static boolean c(PlayerView playerView) {
        playerView.w = true;
        return true;
    }

    static boolean h(PlayerView playerView) {
        playerView.s = true;
        return true;
    }

    static boolean k(PlayerView playerView) {
        playerView.t = true;
        return true;
    }

    static boolean n(PlayerView playerView) {
        playerView.u = true;
        return true;
    }

    static boolean w(PlayerView playerView) {
        playerView.y = true;
        return true;
    }

    static boolean y(PlayerView playerView) {
        playerView.x = true;
        return true;
    }

    public PlayerView(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
        this.j = "";
        this.k = "";
        this.n = -1;
        this.v = false;
        this.w = false;
        this.x = false;
        this.y = false;
        this.z = false;
        this.b = 0;
        this.c = 0;
        this.d = false;
        this.e = "";
        this.f = "";
        this.L = 5000L;
        this.M = 0L;
        setSaveEnabled(true);
        this.B = new Handler(Looper.getMainLooper()) {
            @Override
            public final void handleMessage(Message message) {
                PlayerView.this.n = message.what;
                if (!PlayerView.this.w && !PlayerView.this.x) {
                    PlayerView.c(PlayerView.this);
                    if (PlayerView.this.A != null) {
                        PlayerView.this.A.a();
                    }
                }
                if (PlayerView.this.A != null) {
                    PlayerView.this.A.a(PlayerView.this.n);
                }
                if (PlayerView.this.s || PlayerView.this.n < PlayerView.this.p) {
                    if (PlayerView.this.t || PlayerView.this.n < PlayerView.this.q) {
                        if (!PlayerView.this.u && PlayerView.this.n >= PlayerView.this.r) {
                            PlayerView.n(PlayerView.this);
                            if (PlayerView.this.A != null) {
                                PlayerView.this.A.b(75);
                            }
                        }
                    } else {
                        PlayerView.k(PlayerView.this);
                        if (PlayerView.this.A != null) {
                            PlayerView.this.A.b(50);
                        }
                    }
                } else {
                    PlayerView.h(PlayerView.this);
                    if (PlayerView.this.A != null) {
                        PlayerView.this.A.b(25);
                    }
                }
                if (!PlayerView.this.H || PlayerView.this.n < PlayerView.this.a || PlayerView.this.A == null) {
                    return;
                }
                PlayerView.this.H = false;
                PlayerView.this.A.g();
            }
        };
        setBackgroundColor(-16777216);
    }

    @Override
    protected Parcelable onSaveInstanceState() {
        b bVar = new b(super.onSaveInstanceState());
        bVar.a = this.n;
        bVar.b = this.s;
        bVar.c = this.t;
        bVar.d = this.u;
        bVar.e = this.w;
        bVar.f = this.x;
        bVar.g = this.C;
        bVar.h = this.H;
        new StringBuilder("onSaveInstanceState...").append(bVar.a());
        return bVar;
    }

    @Override
    protected void onRestoreInstanceState(Parcelable parcelable) {
        b bVar = (b) parcelable;
        new StringBuilder("onRestoreInstanceState...").append(bVar.a());
        super.onRestoreInstanceState(bVar.getSuperState());
        this.n = bVar.a;
        this.s = bVar.b;
        this.t = bVar.c;
        this.u = bVar.d;
        this.w = bVar.e;
        this.x = bVar.f;
        this.C = bVar.g;
        this.H = bVar.h;
        ad adVar = this.g;
        if (adVar != null) {
            adVar.a(this.C ? 0.0f : 1.0f);
        }
    }

    public void setListener(a aVar) {
        this.A = aVar;
    }

    public void setVideoSize(int i, int i2) {
        this.E = i;
        this.F = i2;
    }

    public void setVideoRateConfig(int i, int i2) {
        this.c = i;
        this.b = i2;
    }

    static class b extends View.BaseSavedState {
        public static final Parcelable.Creator<b> CREATOR = new Parcelable.Creator<b>() {
            private static b a(Parcel parcel) {
                return new b(parcel);
            }

            private static b[] a(int i) {
                return new b[i];
            }

            @Override
            public final b[] newArray(int i) {
                return new b[i];
            }

            @Override
            public final b createFromParcel(Parcel parcel) {
                return new b(parcel);
            }
        };
        int a;
        boolean b;
        boolean c;
        boolean d;
        boolean e;
        boolean f;
        boolean g;
        boolean h;

        public b(Parcel parcel) {
            super(parcel);
            this.a = parcel.readInt();
            boolean[] zArr = new boolean[7];
            parcel.readBooleanArray(zArr);
            this.b = zArr[0];
            this.c = zArr[1];
            this.d = zArr[2];
            this.e = zArr[3];
            this.f = zArr[4];
            this.g = zArr[5];
            this.h = zArr[6];
        }

        public b(Parcelable parcelable) {
            super(parcelable);
        }

        @Override
        public final void writeToParcel(Parcel parcel, int i) {
            super.writeToParcel(parcel, i);
            parcel.writeInt(this.a);
            parcel.writeBooleanArray(new boolean[]{this.b, this.c, this.d, this.e, this.f, this.g, this.h});
        }

        public final String a() {
            return "SavedState(\nsavePosition - " + this.a + "\nsaveVideoPlay25 - " + this.b + "\nsaveVideoPlay50 - " + this.c + "\nsaveVideoPlay75 - " + this.d + "\nsaveIsVideoStart - " + this.e + "\nsaveIsVideoPlayCompletion - " + this.f + "\nsaveIsMute - " + this.g + "\nsaveVideoNeedResumeByCdRate - " + this.h + "\n)";
        }
    }

    private void a(View view) {
        a aVar = this.A;
        if (aVar != null) {
            aVar.d();
        }
    }

    private void a() {
        if (this.l == 0 || this.m == 0) {
            try {
                String strG = g();
                int i = this.E;
                int i2 = this.F;
                g.a aVarA = com.tkay.basead.a.b.g.a(strG);
                if (aVarA == null) {
                    aVarA = null;
                } else {
                    float f = (aVarA.a * 1.0f) / aVarA.b;
                    if (f < (i * 1.0f) / i2) {
                        aVarA.b = i2;
                        aVarA.a = (int) (aVarA.b * f);
                    } else {
                        aVarA.a = i;
                        aVarA.b = (int) (aVarA.a / f);
                    }
                }
                if (aVarA != null) {
                    this.l = aVarA.a;
                    this.m = aVarA.b;
                }
                StringBuilder sb = new StringBuilder("computeVideoSize: ");
                sb.append(this.E);
                sb.append(", ");
                sb.append(this.F);
                sb.append(", ");
                sb.append(this.l);
                sb.append(", ");
                sb.append(this.m);
                if (this.E == this.l) {
                    if (this.F - this.m <= h.a(getContext(), 1.0f)) {
                        this.m = this.F;
                        new StringBuilder("computeVideoSize: update height -> ").append(this.m);
                        return;
                    }
                    return;
                }
                if (this.F != this.m || this.E - this.l > h.a(getContext(), 1.0f)) {
                    return;
                }
                this.l = this.E;
                new StringBuilder("computeVideoSize: update width -> ").append(this.l);
            } catch (Exception e) {
                e.printStackTrace();
            }
        }
    }

    public void setLoadingView(View view) {
        this.I = view;
    }

    private void b() {
        View view = this.I;
        if (view != null) {
            view.setVisibility(0);
        }
    }

    private void c() {
        View view = this.I;
        if (view != null) {
            view.setVisibility(8);
        }
    }

    private void d() {
        if (this.D != null) {
            return;
        }
        this.v = true;
        this.M = 0L;
        Thread thread = new Thread(new -$$Lambda$PlayerView$gv6bnwmnbsoWKbwvRSk5hN5g4h4(this));
        this.D = thread;
        thread.start();
    }

    private void j() {
        Handler handler;
        while (this.v) {
            if (!this.x && isPlaying() && (handler = this.B) != null) {
                this.M = 0L;
                try {
                    handler.sendEmptyMessage((int) this.g.t());
                } catch (Throwable unused) {
                }
                try {
                    Thread.sleep(200L);
                } catch (Throwable th) {
                    th.printStackTrace();
                }
            } else {
                if (this.M == 0) {
                    this.M = SystemClock.elapsedRealtime();
                }
                try {
                    Thread.sleep(10L);
                } catch (Throwable th2) {
                    th2.printStackTrace();
                }
                if (SystemClock.elapsedRealtime() - this.M > 5000) {
                    if (this.A != null) {
                        m.a().a(new Runnable() {
                            @Override
                            public final void run() {
                                PlayerView.this.A.a(f.a(f.k, "Video player error!Buffer timeout"));
                            }
                        });
                    }
                    e();
                }
            }
        }
    }

    private void e() {
        this.v = false;
        this.D = null;
    }

    public void load(String str, boolean z) {
        boolean z2;
        this.k = str;
        com.tkay.basead.a.f.a();
        this.j = com.tkay.basead.a.f.a(4, str);
        if (new File(this.j).exists() || !TextUtils.isEmpty(this.k)) {
            this.G = true;
            z2 = false;
        } else {
            z2 = true;
        }
        if (z2) {
            a aVar = this.A;
            if (aVar != null) {
                aVar.a(f.a(f.k, f.J));
                return;
            }
            return;
        }
        if (this.l == 0 || this.m == 0) {
            try {
                String strG = g();
                int i = this.E;
                int i2 = this.F;
                g.a aVarA = com.tkay.basead.a.b.g.a(strG);
                if (aVarA == null) {
                    aVarA = null;
                } else {
                    float f = (aVarA.a * 1.0f) / aVarA.b;
                    if (f < (i * 1.0f) / i2) {
                        aVarA.b = i2;
                        aVarA.a = (int) (aVarA.b * f);
                    } else {
                        aVarA.a = i;
                        aVarA.b = (int) (aVarA.a / f);
                    }
                }
                if (aVarA != null) {
                    this.l = aVarA.a;
                    this.m = aVarA.b;
                }
                StringBuilder sb = new StringBuilder("computeVideoSize: ");
                sb.append(this.E);
                sb.append(", ");
                sb.append(this.F);
                sb.append(", ");
                sb.append(this.l);
                sb.append(", ");
                sb.append(this.m);
                if (this.E == this.l) {
                    if (this.F - this.m <= h.a(getContext(), 1.0f)) {
                        this.m = this.F;
                        new StringBuilder("computeVideoSize: update height -> ").append(this.m);
                    }
                } else if (this.F == this.m && this.E - this.l <= h.a(getContext(), 1.0f)) {
                    this.l = this.E;
                    new StringBuilder("computeVideoSize: update width -> ").append(this.l);
                }
            } catch (Exception e) {
                e.printStackTrace();
            }
        }
        if (this.i == null) {
            TextureView textureView = new TextureView(getContext());
            this.i = textureView;
            textureView.setKeepScreenOn(true);
            RelativeLayout.LayoutParams layoutParams = new RelativeLayout.LayoutParams(-1, -1);
            int i3 = this.l;
            if (i3 != 0 && this.m != 0) {
                layoutParams.width = i3;
                layoutParams.height = this.m;
            }
            layoutParams.addRule(13);
            removeAllViews();
            addView(this.i, layoutParams);
        }
        if (this.g == null) {
            this.g = i.a(new com.tkay.expressad.exoplayer.f(getContext()), new c(), new d());
            3 r10 = new 3();
            this.J = r10;
            this.g.a(r10);
            4 r102 = new 4();
            this.K = r102;
            this.g.a(r102);
            this.g.a(this.C ? 0.0f : 1.0f);
            this.g.a(z);
            a(g(), false);
        }
        setOnClickListener(new -$$Lambda$PlayerView$4-s3xspIf8SMNa8DRmWjbBihJyo(this));
    }

    private boolean f() {
        if (!new File(this.j).exists() && TextUtils.isEmpty(this.k)) {
            return true;
        }
        this.G = true;
        return false;
    }

    private String g() {
        if (new File(this.j).exists()) {
            return this.j;
        }
        return this.k;
    }

    private void b(boolean z) {
        if (this.g == null) {
            this.g = i.a(new com.tkay.expressad.exoplayer.f(getContext()), new c(), new d());
            3 r0 = new 3();
            this.J = r0;
            this.g.a(r0);
            4 r02 = new 4();
            this.K = r02;
            this.g.a(r02);
            this.g.a(this.C ? 0.0f : 1.0f);
            this.g.a(z);
            a(g(), false);
        }
    }

    final class 3 extends w.a {
        3() {
        }

        @Override
        public final void onPlayerError(com.tkay.expressad.exoplayer.g gVar) {
            boolean z;
            long jT;
            String str;
            super.onPlayerError(gVar);
            String str2 = "Play error and ExoPlayer have not message.";
            if (gVar != null) {
                int i = gVar.d;
                z = true;
                if (i != 0) {
                    if (i == 1) {
                        str2 = "Play error, because have a RendererException.";
                    } else if (i == 2) {
                        str2 = "Play error, because have a UnexpectedException.";
                    }
                    z = false;
                } else {
                    str2 = "Play error, because have a SourceException.";
                }
                if (gVar.getCause() != null && !TextUtils.isEmpty(gVar.getCause().getMessage())) {
                    str2 = str2 + ",eception:" + gVar.getCause().getMessage();
                }
            } else {
                z = false;
            }
            if (PlayerView.this.d && z) {
                PlayerView.this.f = str2;
                String str3 = PlayerView.TAG;
                StringBuilder sb = new StringBuilder("ExoPlayer onPlayerError()...error:");
                sb.append(str2);
                sb.append(",and rePrepareVideoSourceAgain");
                PlayerView.this.d = false;
                PlayerView.p(PlayerView.this);
                return;
            }
            String str4 = PlayerView.TAG;
            PlayerView.this.e();
            if (PlayerView.this.A != null) {
                try {
                    jT = PlayerView.this.g.t();
                } catch (Throwable unused) {
                    jT = 0;
                }
                String str5 = jT <= 0 ? f.o : f.k;
                String str6 = "videoUrl:" + PlayerView.this.k + ",readyRate:" + PlayerView.this.c + ",cdRate:" + PlayerView.this.b + ",play process:" + jT;
                if (TextUtils.isEmpty(PlayerView.this.f)) {
                    str = str6 + ",localFileErrorMsg:" + str2;
                } else {
                    str = str6 + ",localFileErrorMsg:" + PlayerView.this.f + ",errorMsg:" + str2;
                }
                if (PlayerView.this.y) {
                    PlayerView.this.A.a(f.a(str5, f.C.concat(String.valueOf(str))));
                } else {
                    PlayerView.this.A.a(f.a(str5, f.K.concat(String.valueOf(str))));
                }
            }
        }

        @Override
        public final void onPlayerStateChanged(boolean z, int i) {
            super.onPlayerStateChanged(z, i);
            String str = PlayerView.TAG;
            if (i == 2) {
                if (PlayerView.this.z) {
                    return;
                }
                PlayerView.this.z = true;
                PlayerView.v(PlayerView.this);
                return;
            }
            if (i != 3) {
                if (i != 4) {
                    return;
                }
                PlayerView.this.e();
                if (PlayerView.this.x) {
                    return;
                }
                PlayerView.y(PlayerView.this);
                PlayerView playerView = PlayerView.this;
                playerView.n = playerView.o;
                if (PlayerView.this.A != null) {
                    PlayerView.this.A.c();
                    return;
                }
                return;
            }
            if (!PlayerView.this.y) {
                PlayerView.w(PlayerView.this);
                PlayerView.this.z = false;
                PlayerView playerView2 = PlayerView.this;
                playerView2.o = (int) playerView2.g.s();
                if (PlayerView.this.A != null) {
                    PlayerView.this.A.c(PlayerView.this.o);
                }
                PlayerView.this.p = Math.round(r6.o * 0.25f);
                PlayerView.this.q = Math.round(r6.o * 0.5f);
                PlayerView.this.r = Math.round(r6.o * 0.75f);
                if (PlayerView.this.c <= 0 || PlayerView.this.c >= 100) {
                    PlayerView.this.H = false;
                } else {
                    if (PlayerView.this.b > PlayerView.this.c) {
                        PlayerView playerView3 = PlayerView.this;
                        playerView3.b = playerView3.c / 2;
                    }
                    PlayerView.this.a = Math.round(((r6.b * 1.0f) / 100.0f) * PlayerView.this.o);
                    PlayerView.this.a += BaseResp.CODE_ERROR_PARAMS;
                    PlayerView.this.H = true;
                }
            }
            if (PlayerView.this.n <= 0 || Math.abs(((long) PlayerView.this.n) - PlayerView.this.g.t()) <= 500) {
                return;
            }
            PlayerView.this.g.a(PlayerView.this.n);
        }
    }

    final class 4 implements com.tkay.expressad.exoplayer.l.g {
        @Override
        public final void a() {
        }

        4() {
        }

        @Override
        public final void a(int i, int i2) {
            PlayerView playerView = PlayerView.this;
            playerView.autoFitVideoSize(i, i2, playerView.i);
        }
    }

    private void h() {
        if (this.i == null) {
            TextureView textureView = new TextureView(getContext());
            this.i = textureView;
            textureView.setKeepScreenOn(true);
            RelativeLayout.LayoutParams layoutParams = new RelativeLayout.LayoutParams(-1, -1);
            int i = this.l;
            if (i != 0 && this.m != 0) {
                layoutParams.width = i;
                layoutParams.height = this.m;
            }
            layoutParams.addRule(13);
            removeAllViews();
            addView(this.i, layoutParams);
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:34:0x0121  */
    /* JADX WARN: Removed duplicated region for block: B:41:? A[RETURN, SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private void a(String str, boolean z) {
        a aVar;
        while (true) {
            try {
                if (TextUtils.isEmpty(str)) {
                    return;
                }
                if (this.g == null) {
                    if (this.A != null) {
                        this.A.a(f.a(f.k, "Player show fail with some internal error"));
                        return;
                    }
                    return;
                }
                this.d = TextUtils.equals(str, this.j);
                if (TextUtils.equals(str, this.k) && this.c > 0) {
                    if (z) {
                        com.tkay.core.common.k.c.a("Video Play Fail:Play Network Url", "AdxPlayer videoUrl:" + str + ",readyRate:" + this.c + ",maxVideoCacheSize:" + j.a().c() + ",lastRecycleCheckDownloadedFileSize:" + j.a().d() + ",isChaoDi:true,ChaoDiThrowableMsg:" + this.e, m.a().q());
                    } else {
                        com.tkay.core.common.k.c.a("Video Play Fail:Play Network Url", "AdxPlayer videoUrl:" + str + ",readyRate:" + this.c + ",maxVideoCacheSize:" + j.a().c() + ",lastRecycleCheckDownloadedFileSize:" + j.a().d(), m.a().q());
                    }
                }
                Uri uri = Uri.parse(str);
                if (str.toLowerCase().startsWith("http")) {
                    this.h = new o.c(new q("Tkay_ExoPlayer")).b(uri);
                } else {
                    this.h = new o.c(new com.tkay.expressad.exoplayer.j.o(getContext(), "Tkay_ExoPlayer")).b(uri);
                }
                this.g.a(this.i);
                this.g.a(this.h);
                return;
            } catch (Throwable th) {
                th.printStackTrace();
                if (TextUtils.equals(str, this.k) || z) {
                    aVar = this.A;
                    if (aVar == null) {
                    }
                } else {
                    this.e = th.getMessage();
                    str = this.k;
                    z = true;
                }
            }
        }
        aVar = this.A;
        if (aVar == null) {
            aVar.a(f.a(f.k, th.getMessage()));
        }
    }

    private void i() {
        a aVar = this.A;
        if (aVar != null) {
            aVar.g();
        }
        this.g.a(this.h);
    }

    public void pause() {
        e();
        ad adVar = this.g;
        if (adVar != null) {
            adVar.a(false);
        }
    }

    public void stop() {
        ad adVar = this.g;
        if (adVar != null) {
            adVar.m();
        }
        a aVar = this.A;
        if (aVar != null) {
            aVar.b();
        }
    }

    public void release() {
        e();
        if (this.y) {
            ad adVar = this.g;
            if (adVar != null) {
                if (adVar.J()) {
                    this.g.m();
                }
                w.c cVar = this.J;
                if (cVar != null) {
                    this.g.b(cVar);
                }
                com.tkay.expressad.exoplayer.l.g gVar = this.K;
                if (gVar != null) {
                    this.g.b(gVar);
                }
                this.g.n();
                this.g = null;
            }
            Handler handler = this.B;
            if (handler != null) {
                handler.removeCallbacksAndMessages(null);
            }
            this.y = false;
        }
    }

    public boolean isPlaying() {
        ad adVar = this.g;
        return adVar != null && adVar.J();
    }

    public boolean isMute() {
        return this.C;
    }

    public int getCurrentPosition() {
        return Math.max(this.n, 0);
    }

    public int getVideoLength() {
        return this.o;
    }

    public boolean hasVideo() {
        return this.G;
    }

    public void initMuteStatus(boolean z) {
        this.C = z;
    }

    public boolean isComplete() {
        return this.x;
    }

    public void setMute(boolean z) {
        this.C = z;
        if (z) {
            ad adVar = this.g;
            if (adVar != null) {
                adVar.a(0.0f);
            }
            a aVar = this.A;
            if (aVar != null) {
                aVar.e();
                return;
            }
            return;
        }
        ad adVar2 = this.g;
        if (adVar2 != null) {
            adVar2.a(1.0f);
        }
        a aVar2 = this.A;
        if (aVar2 != null) {
            aVar2.f();
        }
    }

    public void autoFitVideoSize(int i, int i2, View view) {
        float fMax = Math.max(i / view.getMeasuredWidth(), i2 / view.getMeasuredHeight());
        int iCeil = (int) Math.ceil(r4 / fMax);
        int iCeil2 = (int) Math.ceil(r5 / fMax);
        RelativeLayout.LayoutParams layoutParams = (RelativeLayout.LayoutParams) view.getLayoutParams();
        layoutParams.width = iCeil;
        layoutParams.height = iCeil2;
        view.setLayoutParams(layoutParams);
    }

    @Override
    protected void onDetachedFromWindow() {
        super.onDetachedFromWindow();
        release();
    }

    private void a(boolean z) {
        boolean z2;
        if (new File(this.j).exists() || !TextUtils.isEmpty(this.k)) {
            this.G = true;
            z2 = false;
        } else {
            z2 = true;
        }
        if (z2) {
            a aVar = this.A;
            if (aVar != null) {
                aVar.a(f.a(f.k, f.J));
                return;
            }
            return;
        }
        if (this.l == 0 || this.m == 0) {
            try {
                String strG = g();
                int i = this.E;
                int i2 = this.F;
                g.a aVarA = com.tkay.basead.a.b.g.a(strG);
                if (aVarA == null) {
                    aVarA = null;
                } else {
                    float f = (aVarA.a * 1.0f) / aVarA.b;
                    if (f < (i * 1.0f) / i2) {
                        aVarA.b = i2;
                        aVarA.a = (int) (aVarA.b * f);
                    } else {
                        aVarA.a = i;
                        aVarA.b = (int) (aVarA.a / f);
                    }
                }
                if (aVarA != null) {
                    this.l = aVarA.a;
                    this.m = aVarA.b;
                }
                StringBuilder sb = new StringBuilder("computeVideoSize: ");
                sb.append(this.E);
                sb.append(", ");
                sb.append(this.F);
                sb.append(", ");
                sb.append(this.l);
                sb.append(", ");
                sb.append(this.m);
                if (this.E == this.l) {
                    if (this.F - this.m <= h.a(getContext(), 1.0f)) {
                        this.m = this.F;
                        new StringBuilder("computeVideoSize: update height -> ").append(this.m);
                    }
                } else if (this.F == this.m && this.E - this.l <= h.a(getContext(), 1.0f)) {
                    this.l = this.E;
                    new StringBuilder("computeVideoSize: update width -> ").append(this.l);
                }
            } catch (Exception e) {
                e.printStackTrace();
            }
        }
        if (this.i == null) {
            TextureView textureView = new TextureView(getContext());
            this.i = textureView;
            textureView.setKeepScreenOn(true);
            RelativeLayout.LayoutParams layoutParams = new RelativeLayout.LayoutParams(-1, -1);
            int i3 = this.l;
            if (i3 != 0 && this.m != 0) {
                layoutParams.width = i3;
                layoutParams.height = this.m;
            }
            layoutParams.addRule(13);
            removeAllViews();
            addView(this.i, layoutParams);
        }
        if (this.g == null) {
            this.g = i.a(new com.tkay.expressad.exoplayer.f(getContext()), new c(), new d());
            3 r0 = new 3();
            this.J = r0;
            this.g.a(r0);
            4 r02 = new 4();
            this.K = r02;
            this.g.a(r02);
            this.g.a(this.C ? 0.0f : 1.0f);
            this.g.a(z);
            a(g(), false);
        }
        setOnClickListener(new -$$Lambda$PlayerView$4-s3xspIf8SMNa8DRmWjbBihJyo(this));
    }

    public void start() {
        View view = this.I;
        if (view != null) {
            view.setVisibility(8);
        }
        ad adVar = this.g;
        if (adVar != null) {
            adVar.a(true);
        }
        if (this.D == null) {
            this.v = true;
            this.M = 0L;
            Thread thread = new Thread(new -$$Lambda$PlayerView$gv6bnwmnbsoWKbwvRSk5hN5g4h4(this));
            this.D = thread;
            thread.start();
        }
    }

    static void p(PlayerView playerView) {
        a aVar = playerView.A;
        if (aVar != null) {
            aVar.g();
        }
        playerView.g.a(playerView.h);
    }

    static void v(PlayerView playerView) {
        View view = playerView.I;
        if (view != null) {
            view.setVisibility(0);
        }
    }
}
