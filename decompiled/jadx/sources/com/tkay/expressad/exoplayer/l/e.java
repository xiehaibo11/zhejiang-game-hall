package com.tkay.expressad.exoplayer.l;

import android.content.Context;
import android.graphics.Point;
import android.media.MediaCodec;
import android.media.MediaCrypto;
import android.media.MediaFormat;
import android.os.Handler;
import android.os.SystemClock;
import android.util.Log;
import android.view.Surface;
import com.bykv.vk.openvk.TTVfConstant;
import com.huawei.hms.push.constant.RemoteMessageConst;
import com.tkay.expressad.exoplayer.d.k;
import com.tkay.expressad.exoplayer.k.ad;
import com.tkay.expressad.exoplayer.k.af;
import com.tkay.expressad.exoplayer.k.o;
import com.tkay.expressad.exoplayer.l.h;
import com.tkay.expressad.exoplayer.m;
import java.nio.ByteBuffer;

/* JADX INFO: loaded from: classes3.dex */
public class e extends com.tkay.expressad.exoplayer.f.b {
    private static boolean A = false;
    private static final String s = "MediaCodecVideoRenderer";
    private static final String t = "crop-left";
    private static final String u = "crop-right";
    private static final String v = "crop-bottom";
    private static final String w = "crop-top";
    private static final int[] x = {1920, 1600, 1440, TTVfConstant.EXT_PLUGIN_UNINSTALL, 960, 854, 640, 540, 480};
    private static final int y = 10;
    private static boolean z;
    private final Context B;
    private final f C;
    private final h.a D;
    private final long E;
    private final int F;
    private final boolean G;
    private final long[] H;
    private final long[] I;
    private a J;
    private boolean K;
    private Surface L;
    private Surface M;
    private int N;
    private boolean O;
    private long P;
    private long Q;
    private long R;
    private int S;
    private int T;
    private int U;
    private long V;
    private int W;
    private float X;
    private int Y;
    private int Z;
    private int aa;
    private float ab;
    private int ac;
    private int ad;
    private int ae;
    private float af;
    private boolean ag;
    private int ah;
    private long ai;
    private long aj;
    private int ak;
    b r;

    private static boolean e(long j) {
        return j < -500000;
    }

    private static boolean g(long j) {
        return j < -30000;
    }

    private static boolean h(long j) {
        return j < -500000;
    }

    private e(Context context, com.tkay.expressad.exoplayer.f.c cVar) {
        this(context, cVar, (byte) 0);
    }

    private e(Context context, com.tkay.expressad.exoplayer.f.c cVar, byte b2) {
        this(context, cVar, null, null);
    }

    private e(Context context, com.tkay.expressad.exoplayer.f.c cVar, Handler handler, h hVar) {
        this(context, cVar, 0L, null, handler, hVar, -1);
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public e(Context context, com.tkay.expressad.exoplayer.f.c cVar, long j, com.tkay.expressad.exoplayer.d.g<k> gVar, Handler handler, h hVar, int i) {
        super(2, cVar, gVar, false);
        boolean z2 = false;
        this.E = j;
        this.F = i;
        Context applicationContext = context.getApplicationContext();
        this.B = applicationContext;
        this.C = new f(applicationContext);
        this.D = new h.a(handler, hVar);
        if (af.f6754a <= 22 && "foster".equals(af.b) && "NVIDIA".equals(af.c)) {
            z2 = true;
        }
        this.G = z2;
        this.H = new long[10];
        this.I = new long[10];
        this.aj = -9223372036854775807L;
        this.ai = -9223372036854775807L;
        this.Q = -9223372036854775807L;
        this.Y = -1;
        this.Z = -1;
        this.ab = -1.0f;
        this.X = -1.0f;
        this.N = 1;
        G();
    }

    @Override // com.tkay.expressad.exoplayer.f.b
    protected final int a(com.tkay.expressad.exoplayer.f.c cVar, com.tkay.expressad.exoplayer.d.g<k> gVar, m mVar) {
        boolean z2;
        String str = mVar.h;
        if (!o.b(str)) {
            return 0;
        }
        com.tkay.expressad.exoplayer.d.e eVar = mVar.k;
        if (eVar != null) {
            z2 = false;
            for (int i = 0; i < eVar.b; i++) {
                z2 |= eVar.a(i).d;
            }
        } else {
            z2 = false;
        }
        com.tkay.expressad.exoplayer.f.a aVarA = cVar.a(str, z2);
        if (aVarA == null) {
            return (!z2 || cVar.a(str, false) == null) ? 1 : 2;
        }
        if (!a(gVar, eVar)) {
            return 2;
        }
        boolean zB = aVarA.b(mVar.e);
        if (zB && mVar.m > 0 && mVar.n > 0) {
            if (af.f6754a >= 21) {
                zB = aVarA.a(mVar.m, mVar.n, mVar.o);
            } else {
                boolean z3 = mVar.m * mVar.n <= com.tkay.expressad.exoplayer.f.d.b();
                if (!z3) {
                    Log.d(s, "FalseCheck [legacyFrameSize, " + mVar.m + "x" + mVar.n + "] [" + af.e + "]");
                }
                zB = z3;
            }
        }
        return (zB ? 4 : 3) | (aVarA.f ? 16 : 8) | (aVarA.g ? 32 : 0);
    }

    @Override // com.tkay.expressad.exoplayer.f.b, com.tkay.expressad.exoplayer.a
    protected final void a(boolean z2) {
        super.a(z2);
        int i = r().b;
        this.ah = i;
        this.ag = i != 0;
        this.D.a(this.q);
        this.C.a();
    }

    @Override // com.tkay.expressad.exoplayer.a
    protected final void a(m[] mVarArr, long j) {
        if (this.aj == -9223372036854775807L) {
            this.aj = j;
        } else {
            int i = this.ak;
            if (i == this.H.length) {
                Log.w(s, "Too many stream changes, so dropping offset: " + this.H[this.ak - 1]);
            } else {
                this.ak = i + 1;
            }
            long[] jArr = this.H;
            int i2 = this.ak;
            jArr[i2 - 1] = j;
            this.I[i2 - 1] = this.ai;
        }
        super.a(mVarArr, j);
    }

    @Override // com.tkay.expressad.exoplayer.f.b, com.tkay.expressad.exoplayer.a
    protected final void a(long j, boolean z2) throws com.tkay.expressad.exoplayer.g {
        super.a(j, z2);
        E();
        this.P = -9223372036854775807L;
        this.T = 0;
        this.ai = -9223372036854775807L;
        int i = this.ak;
        if (i != 0) {
            this.aj = this.H[i - 1];
            this.ak = 0;
        }
        if (z2) {
            D();
        } else {
            this.Q = -9223372036854775807L;
        }
    }

    @Override // com.tkay.expressad.exoplayer.f.b, com.tkay.expressad.exoplayer.y
    public final boolean u() {
        Surface surface;
        if (super.u() && (this.O || (((surface = this.M) != null && this.L == surface) || y() == null || this.ag))) {
            this.Q = -9223372036854775807L;
            return true;
        }
        if (this.Q == -9223372036854775807L) {
            return false;
        }
        if (SystemClock.elapsedRealtime() < this.Q) {
            return true;
        }
        this.Q = -9223372036854775807L;
        return false;
    }

    @Override // com.tkay.expressad.exoplayer.f.b, com.tkay.expressad.exoplayer.a
    protected final void n() {
        super.n();
        this.S = 0;
        this.R = SystemClock.elapsedRealtime();
        this.V = SystemClock.elapsedRealtime() * 1000;
    }

    @Override // com.tkay.expressad.exoplayer.f.b, com.tkay.expressad.exoplayer.a
    protected final void o() {
        this.Q = -9223372036854775807L;
        J();
        super.o();
    }

    @Override // com.tkay.expressad.exoplayer.f.b, com.tkay.expressad.exoplayer.a
    protected final void p() {
        this.Y = -1;
        this.Z = -1;
        this.ab = -1.0f;
        this.X = -1.0f;
        this.aj = -9223372036854775807L;
        this.ai = -9223372036854775807L;
        this.ak = 0;
        G();
        E();
        this.C.b();
        this.r = null;
        this.ag = false;
        try {
            super.p();
        } finally {
            this.D.b(this.q);
        }
    }

    @Override // com.tkay.expressad.exoplayer.a, com.tkay.expressad.exoplayer.x.b
    public final void a(int i, Object obj) {
        if (i != 1) {
            if (i == 4) {
                this.N = ((Integer) obj).intValue();
                MediaCodec mediaCodecY = y();
                if (mediaCodecY != null) {
                    mediaCodecY.setVideoScalingMode(this.N);
                    return;
                }
                return;
            }
            super.a(i, obj);
            return;
        }
        Surface surfaceA = (Surface) obj;
        if (surfaceA == null) {
            Surface surface = this.M;
            if (surface != null) {
                surfaceA = surface;
            } else {
                com.tkay.expressad.exoplayer.f.a aVarZ = z();
                if (aVarZ != null && b(aVarZ)) {
                    surfaceA = c.a(this.B, aVarZ.h);
                    this.M = surfaceA;
                }
            }
        }
        if (this.L != surfaceA) {
            this.L = surfaceA;
            int iA_ = a_();
            if (iA_ == 1 || iA_ == 2) {
                MediaCodec mediaCodecY2 = y();
                if (af.f6754a < 23 || mediaCodecY2 == null || surfaceA == null || this.K) {
                    A();
                    x();
                } else {
                    mediaCodecY2.setOutputSurface(surfaceA);
                }
            }
            if (surfaceA != null && surfaceA != this.M) {
                I();
                E();
                if (iA_ == 2) {
                    D();
                    return;
                }
                return;
            }
            G();
            E();
            return;
        }
        if (surfaceA == null || surfaceA == this.M) {
            return;
        }
        I();
        if (this.O) {
            this.D.a(this.L);
        }
    }

    private void a(Surface surface) {
        if (surface == null) {
            Surface surface2 = this.M;
            if (surface2 != null) {
                surface = surface2;
            } else {
                com.tkay.expressad.exoplayer.f.a aVarZ = z();
                if (aVarZ != null && b(aVarZ)) {
                    surface = c.a(this.B, aVarZ.h);
                    this.M = surface;
                }
            }
        }
        if (this.L != surface) {
            this.L = surface;
            int iA_ = a_();
            if (iA_ == 1 || iA_ == 2) {
                MediaCodec mediaCodecY = y();
                if (af.f6754a < 23 || mediaCodecY == null || surface == null || this.K) {
                    A();
                    x();
                } else {
                    mediaCodecY.setOutputSurface(surface);
                }
            }
            if (surface != null && surface != this.M) {
                I();
                E();
                if (iA_ == 2) {
                    D();
                    return;
                }
                return;
            }
            G();
            E();
            return;
        }
        if (surface == null || surface == this.M) {
            return;
        }
        I();
        if (this.O) {
            this.D.a(this.L);
        }
    }

    @Override // com.tkay.expressad.exoplayer.f.b
    protected final boolean a(com.tkay.expressad.exoplayer.f.a aVar) {
        return this.L != null || b(aVar);
    }

    @Override // com.tkay.expressad.exoplayer.f.b
    protected final void a(com.tkay.expressad.exoplayer.f.a aVar, MediaCodec mediaCodec, m mVar, MediaCrypto mediaCrypto) {
        a aVar2;
        m[] mVarArrQ = q();
        int iMax = mVar.m;
        int iMax2 = mVar.n;
        int iB = b(aVar, mVar);
        byte b2 = 0;
        if (mVarArrQ.length == 1) {
            aVar2 = new a(iMax, iMax2, iB);
        } else {
            boolean z2 = false;
            for (m mVar2 : mVarArrQ) {
                if (a(aVar.f, mVar, mVar2)) {
                    z2 |= mVar2.m == -1 || mVar2.n == -1;
                    iMax = Math.max(iMax, mVar2.m);
                    iMax2 = Math.max(iMax2, mVar2.n);
                    iB = Math.max(iB, b(aVar, mVar2));
                }
            }
            if (z2) {
                Log.w(s, "Resolutions unknown. Codec max resolution: " + iMax + "x" + iMax2);
                Point pointA = a(aVar, mVar);
                if (pointA != null) {
                    iMax = Math.max(iMax, pointA.x);
                    iMax2 = Math.max(iMax2, pointA.y);
                    iB = Math.max(iB, a(aVar, mVar.h, iMax, iMax2));
                    Log.w(s, "Codec max resolution adjusted to: " + iMax + "x" + iMax2);
                }
            }
            aVar2 = new a(iMax, iMax2, iB);
        }
        this.J = aVar2;
        boolean z3 = this.G;
        int i = this.ah;
        MediaFormat mediaFormat = new MediaFormat();
        mediaFormat.setString("mime", mVar.h);
        mediaFormat.setInteger("width", mVar.m);
        mediaFormat.setInteger("height", mVar.n);
        com.tkay.expressad.exoplayer.f.e.a(mediaFormat, mVar.j);
        float f = mVar.o;
        if (f != -1.0f) {
            mediaFormat.setFloat("frame-rate", f);
        }
        com.tkay.expressad.exoplayer.f.e.a(mediaFormat, "rotation-degrees", mVar.p);
        com.tkay.expressad.exoplayer.l.b bVar = mVar.t;
        if (bVar != null) {
            com.tkay.expressad.exoplayer.f.e.a(mediaFormat, "color-transfer", bVar.c);
            com.tkay.expressad.exoplayer.f.e.a(mediaFormat, "color-standard", bVar.f6784a);
            com.tkay.expressad.exoplayer.f.e.a(mediaFormat, "color-range", bVar.b);
            byte[] bArr = bVar.d;
            if (bArr != null) {
                mediaFormat.setByteBuffer("hdr-static-info", ByteBuffer.wrap(bArr));
            }
        }
        mediaFormat.setInteger("max-width", aVar2.f6788a);
        mediaFormat.setInteger("max-height", aVar2.b);
        com.tkay.expressad.exoplayer.f.e.a(mediaFormat, "max-input-size", aVar2.c);
        if (af.f6754a >= 23) {
            mediaFormat.setInteger(RemoteMessageConst.Notification.PRIORITY, 0);
        }
        if (z3) {
            mediaFormat.setInteger("auto-frc", 0);
        }
        if (i != 0) {
            mediaFormat.setFeatureEnabled("tunneled-playback", true);
            mediaFormat.setInteger("audio-session-id", i);
        }
        if (this.L == null) {
            com.tkay.expressad.exoplayer.k.a.b(b(aVar));
            if (this.M == null) {
                this.M = c.a(this.B, aVar.h);
            }
            this.L = this.M;
        }
        mediaCodec.configure(mediaFormat, this.L, mediaCrypto, 0);
        if (af.f6754a < 23 || !this.ag) {
            return;
        }
        this.r = new b(this, mediaCodec, b2);
    }

    @Override // com.tkay.expressad.exoplayer.f.b
    protected final int a(com.tkay.expressad.exoplayer.f.a aVar, m mVar, m mVar2) {
        if (!a(aVar.f, mVar, mVar2) || mVar2.m > this.J.f6788a || mVar2.n > this.J.b || b(aVar, mVar2) > this.J.c) {
            return 0;
        }
        return mVar.b(mVar2) ? 1 : 3;
    }

    @Override // com.tkay.expressad.exoplayer.f.b
    protected final void A() {
        try {
            super.A();
        } finally {
            this.U = 0;
            Surface surface = this.M;
            if (surface != null) {
                if (this.L == surface) {
                    this.L = null;
                }
                this.M.release();
                this.M = null;
            }
        }
    }

    @Override // com.tkay.expressad.exoplayer.f.b
    protected final void B() throws com.tkay.expressad.exoplayer.g {
        super.B();
        this.U = 0;
    }

    @Override // com.tkay.expressad.exoplayer.f.b
    protected final void a(String str, long j, long j2) {
        this.D.a(str, j, j2);
        this.K = a(str);
    }

    @Override // com.tkay.expressad.exoplayer.f.b
    protected final void b(m mVar) throws com.tkay.expressad.exoplayer.g {
        super.b(mVar);
        this.D.a(mVar);
        this.X = mVar.q;
        this.W = mVar.p;
    }

    @Override // com.tkay.expressad.exoplayer.f.b
    protected final void a(com.tkay.expressad.exoplayer.c.e eVar) {
        this.U++;
        this.ai = Math.max(eVar.f, this.ai);
        if (af.f6754a >= 23 || !this.ag) {
            return;
        }
        C();
    }

    @Override // com.tkay.expressad.exoplayer.f.b
    protected final void a(MediaCodec mediaCodec, MediaFormat mediaFormat) {
        int integer;
        int integer2;
        boolean z2 = mediaFormat.containsKey(u) && mediaFormat.containsKey(t) && mediaFormat.containsKey(v) && mediaFormat.containsKey(w);
        if (z2) {
            integer = (mediaFormat.getInteger(u) - mediaFormat.getInteger(t)) + 1;
        } else {
            integer = mediaFormat.getInteger("width");
        }
        this.Y = integer;
        if (z2) {
            integer2 = (mediaFormat.getInteger(v) - mediaFormat.getInteger(w)) + 1;
        } else {
            integer2 = mediaFormat.getInteger("height");
        }
        this.Z = integer2;
        this.ab = this.X;
        if (af.f6754a >= 21) {
            int i = this.W;
            if (i == 90 || i == 270) {
                int i2 = this.Y;
                this.Y = this.Z;
                this.Z = i2;
                this.ab = 1.0f / this.ab;
            }
        } else {
            this.aa = this.W;
        }
        mediaCodec.setVideoScalingMode(this.N);
    }

    /* JADX WARN: Code restructure failed: missing block: B:29:0x005f, code lost:
    
        if ((g(r8) && r10 - r18.V > 100000) != false) goto L72;
     */
    @Override // com.tkay.expressad.exoplayer.f.b
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    protected final boolean a(long r19, long r21, android.media.MediaCodec r23, java.nio.ByteBuffer r24, int r25, int r26, long r27, boolean r29) throws com.tkay.expressad.exoplayer.g {
        /*
            Method dump skipped, instruction units count: 267
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.tkay.expressad.exoplayer.l.e.a(long, long, android.media.MediaCodec, java.nio.ByteBuffer, int, int, long, boolean):boolean");
    }

    @Override // com.tkay.expressad.exoplayer.f.b
    protected final void c(long j) {
        this.U--;
        while (true) {
            int i = this.ak;
            if (i == 0 || j < this.I[0]) {
                return;
            }
            long[] jArr = this.H;
            this.aj = jArr[0];
            int i2 = i - 1;
            this.ak = i2;
            System.arraycopy(jArr, 1, jArr, 0, i2);
            long[] jArr2 = this.I;
            System.arraycopy(jArr2, 1, jArr2, 0, this.ak);
        }
    }

    private static boolean d(long j) {
        return g(j);
    }

    private static boolean b(long j, long j2) {
        return g(j) && j2 > 100000;
    }

    private void a(MediaCodec mediaCodec, int i) {
        ad.a("skipVideoBuffer");
        mediaCodec.releaseOutputBuffer(i, false);
        ad.a();
        this.q.f++;
    }

    private void b(MediaCodec mediaCodec, int i) {
        ad.a("dropVideoBuffer");
        mediaCodec.releaseOutputBuffer(i, false);
        ad.a();
        b(1);
    }

    private boolean f(long j) throws com.tkay.expressad.exoplayer.g {
        int iB = b(j);
        if (iB == 0) {
            return false;
        }
        this.q.i++;
        b(this.U + iB);
        B();
        return true;
    }

    private void b(int i) {
        this.q.g += i;
        this.S += i;
        this.T += i;
        this.q.h = Math.max(this.T, this.q.h);
        if (this.S >= this.F) {
            J();
        }
    }

    private void c(MediaCodec mediaCodec, int i) {
        H();
        ad.a("releaseOutputBuffer");
        mediaCodec.releaseOutputBuffer(i, true);
        ad.a();
        this.V = SystemClock.elapsedRealtime() * 1000;
        this.q.e++;
        this.T = 0;
        C();
    }

    private void a(MediaCodec mediaCodec, int i, long j) {
        H();
        ad.a("releaseOutputBuffer");
        mediaCodec.releaseOutputBuffer(i, j);
        ad.a();
        this.V = SystemClock.elapsedRealtime() * 1000;
        this.q.e++;
        this.T = 0;
        C();
    }

    private boolean b(com.tkay.expressad.exoplayer.f.a aVar) {
        if (af.f6754a < 23 || this.ag || a(aVar.c)) {
            return false;
        }
        return !aVar.h || c.a(this.B);
    }

    private void D() {
        this.Q = this.E > 0 ? SystemClock.elapsedRealtime() + this.E : -9223372036854775807L;
    }

    private void E() {
        MediaCodec mediaCodecY;
        byte b2 = 0;
        this.O = false;
        if (af.f6754a < 23 || !this.ag || (mediaCodecY = y()) == null) {
            return;
        }
        this.r = new b(this, mediaCodecY, b2);
    }

    final void C() {
        if (this.O) {
            return;
        }
        this.O = true;
        this.D.a(this.L);
    }

    private void F() {
        if (this.O) {
            this.D.a(this.L);
        }
    }

    private void G() {
        this.ac = -1;
        this.ad = -1;
        this.af = -1.0f;
        this.ae = -1;
    }

    private void H() {
        if (this.Y == -1 && this.Z == -1) {
            return;
        }
        if (this.ac == this.Y && this.ad == this.Z && this.ae == this.aa && this.af == this.ab) {
            return;
        }
        this.D.a(this.Y, this.Z, this.aa, this.ab);
        this.ac = this.Y;
        this.ad = this.Z;
        this.ae = this.aa;
        this.af = this.ab;
    }

    private void I() {
        if (this.ac == -1 && this.ad == -1) {
            return;
        }
        this.D.a(this.ac, this.ad, this.ae, this.af);
    }

    private void J() {
        if (this.S > 0) {
            long jElapsedRealtime = SystemClock.elapsedRealtime();
            this.D.a(this.S, jElapsedRealtime - this.R);
            this.S = 0;
            this.R = jElapsedRealtime;
        }
    }

    private static void a(MediaCodec mediaCodec, Surface surface) {
        mediaCodec.setOutputSurface(surface);
    }

    private static void a(MediaFormat mediaFormat, int i) {
        mediaFormat.setFeatureEnabled("tunneled-playback", true);
        mediaFormat.setInteger("audio-session-id", i);
    }

    private static MediaFormat a(m mVar, a aVar, boolean z2, int i) {
        MediaFormat mediaFormat = new MediaFormat();
        mediaFormat.setString("mime", mVar.h);
        mediaFormat.setInteger("width", mVar.m);
        mediaFormat.setInteger("height", mVar.n);
        com.tkay.expressad.exoplayer.f.e.a(mediaFormat, mVar.j);
        float f = mVar.o;
        if (f != -1.0f) {
            mediaFormat.setFloat("frame-rate", f);
        }
        com.tkay.expressad.exoplayer.f.e.a(mediaFormat, "rotation-degrees", mVar.p);
        com.tkay.expressad.exoplayer.l.b bVar = mVar.t;
        if (bVar != null) {
            com.tkay.expressad.exoplayer.f.e.a(mediaFormat, "color-transfer", bVar.c);
            com.tkay.expressad.exoplayer.f.e.a(mediaFormat, "color-standard", bVar.f6784a);
            com.tkay.expressad.exoplayer.f.e.a(mediaFormat, "color-range", bVar.b);
            byte[] bArr = bVar.d;
            if (bArr != null) {
                mediaFormat.setByteBuffer("hdr-static-info", ByteBuffer.wrap(bArr));
            }
        }
        mediaFormat.setInteger("max-width", aVar.f6788a);
        mediaFormat.setInteger("max-height", aVar.b);
        com.tkay.expressad.exoplayer.f.e.a(mediaFormat, "max-input-size", aVar.c);
        if (af.f6754a >= 23) {
            mediaFormat.setInteger(RemoteMessageConst.Notification.PRIORITY, 0);
        }
        if (z2) {
            mediaFormat.setInteger("auto-frc", 0);
        }
        if (i != 0) {
            mediaFormat.setFeatureEnabled("tunneled-playback", true);
            mediaFormat.setInteger("audio-session-id", i);
        }
        return mediaFormat;
    }

    private static a a(com.tkay.expressad.exoplayer.f.a aVar, m mVar, m[] mVarArr) {
        int iMax = mVar.m;
        int iMax2 = mVar.n;
        int iB = b(aVar, mVar);
        if (mVarArr.length == 1) {
            return new a(iMax, iMax2, iB);
        }
        boolean z2 = false;
        for (m mVar2 : mVarArr) {
            if (a(aVar.f, mVar, mVar2)) {
                z2 |= mVar2.m == -1 || mVar2.n == -1;
                iMax = Math.max(iMax, mVar2.m);
                iMax2 = Math.max(iMax2, mVar2.n);
                iB = Math.max(iB, b(aVar, mVar2));
            }
        }
        if (z2) {
            Log.w(s, "Resolutions unknown. Codec max resolution: " + iMax + "x" + iMax2);
            Point pointA = a(aVar, mVar);
            if (pointA != null) {
                iMax = Math.max(iMax, pointA.x);
                iMax2 = Math.max(iMax2, pointA.y);
                iB = Math.max(iB, a(aVar, mVar.h, iMax, iMax2));
                Log.w(s, "Codec max resolution adjusted to: " + iMax + "x" + iMax2);
            }
        }
        return new a(iMax, iMax2, iB);
    }

    private static Point a(com.tkay.expressad.exoplayer.f.a aVar, m mVar) {
        boolean z2 = mVar.n > mVar.m;
        int i = z2 ? mVar.n : mVar.m;
        int i2 = z2 ? mVar.m : mVar.n;
        float f = i2 / i;
        for (int i3 : x) {
            int i4 = (int) (i3 * f);
            if (i3 <= i || i4 <= i2) {
                break;
            }
            if (af.f6754a >= 21) {
                int i5 = z2 ? i4 : i3;
                if (!z2) {
                    i3 = i4;
                }
                Point pointA = aVar.a(i5, i3);
                if (aVar.a(pointA.x, pointA.y, mVar.o)) {
                    return pointA;
                }
            } else {
                int iA = af.a(i3, 16) * 16;
                int iA2 = af.a(i4, 16) * 16;
                if (iA * iA2 <= com.tkay.expressad.exoplayer.f.d.b()) {
                    int i6 = z2 ? iA2 : iA;
                    if (!z2) {
                        iA = iA2;
                    }
                    return new Point(i6, iA);
                }
            }
        }
        return null;
    }

    private static int b(com.tkay.expressad.exoplayer.f.a aVar, m mVar) {
        if (mVar.i != -1) {
            int size = mVar.j.size();
            int length = 0;
            for (int i = 0; i < size; i++) {
                length += mVar.j.get(i).length;
            }
            return mVar.i + length;
        }
        return a(aVar, mVar.h, mVar.m, mVar.n);
    }

    /* JADX WARN: Failed to restore switch over string. Please report as a decompilation issue */
    private static int a(com.tkay.expressad.exoplayer.f.a aVar, String str, int i, int i2) {
        byte b2;
        int iA;
        if (i == -1 || i2 == -1) {
            return -1;
        }
        int i3 = 4;
        switch (str.hashCode()) {
            case -1664118616:
                b2 = !str.equals("video/3gpp") ? (byte) -1 : (byte) 0;
                break;
            case -1662541442:
                b2 = !str.equals("video/hevc") ? (byte) -1 : (byte) 4;
                break;
            case 1187890754:
                b2 = !str.equals("video/mp4v-es") ? (byte) -1 : (byte) 1;
                break;
            case 1331836730:
                b2 = !str.equals("video/avc") ? (byte) -1 : (byte) 2;
                break;
            case 1599127256:
                b2 = !str.equals("video/x-vnd.on2.vp8") ? (byte) -1 : (byte) 3;
                break;
            case 1599127257:
                b2 = !str.equals("video/x-vnd.on2.vp9") ? (byte) -1 : (byte) 5;
                break;
            default:
                b2 = -1;
                break;
        }
        if (b2 == 0 || b2 == 1) {
            iA = i * i2;
            i3 = 2;
        } else if (b2 != 2) {
            if (b2 != 3) {
                if (b2 != 4 && b2 != 5) {
                    return -1;
                }
                iA = i * i2;
            }
            iA = i * i2;
            i3 = 2;
        } else {
            if ("BRAVIA 4K 2015".equals(af.d) || ("Amazon".equals(af.c) && ("KFSOWI".equals(af.d) || ("AFTS".equals(af.d) && aVar.h)))) {
                return -1;
            }
            iA = af.a(i, 16) * af.a(i2, 16) * 16 * 16;
            i3 = 2;
        }
        return (iA * 3) / (i3 * 2);
    }

    private static boolean a(boolean z2, m mVar, m mVar2) {
        if (mVar.h.equals(mVar2.h) && mVar.p == mVar2.p) {
            return (z2 || (mVar.m == mVar2.m && mVar.n == mVar2.n)) && af.a(mVar.t, mVar2.t);
        }
        return false;
    }

    private static boolean K() {
        return af.f6754a <= 22 && "foster".equals(af.b) && "NVIDIA".equals(af.c);
    }

    /* JADX WARN: Failed to restore switch over string. Please report as a decompilation issue */
    /* JADX WARN: Removed duplicated region for block: B:368:0x059a  */
    /* JADX WARN: Removed duplicated region for block: B:383:0x05c5  */
    /* JADX WARN: Removed duplicated region for block: B:387:0x05cb A[Catch: all -> 0x05d3, TryCatch #0 {, blocks: (B:9:0x0014, B:11:0x0018, B:12:0x0020, B:369:0x059b, B:372:0x05a1, B:388:0x05cd, B:387:0x05cb, B:377:0x05b2, B:380:0x05bc, B:371:0x059f, B:14:0x0025, B:17:0x0031, B:20:0x003d, B:23:0x0049, B:26:0x0055, B:29:0x0061, B:32:0x006d, B:35:0x0079, B:38:0x0085, B:41:0x0091, B:44:0x009d, B:47:0x00a9, B:50:0x00b5, B:53:0x00bf, B:56:0x00cb, B:59:0x00d7, B:62:0x00e3, B:65:0x00ef, B:68:0x00fb, B:71:0x0106, B:74:0x0112, B:77:0x011e, B:80:0x012a, B:83:0x0136, B:86:0x0142, B:89:0x014e, B:92:0x015a, B:95:0x0166, B:98:0x0172, B:101:0x017e, B:104:0x018a, B:107:0x0196, B:110:0x01a2, B:113:0x01ae, B:116:0x01ba, B:119:0x01c5, B:122:0x01d1, B:125:0x01dd, B:128:0x01e9, B:131:0x01f5, B:134:0x0201, B:137:0x020d, B:140:0x0219, B:143:0x0225, B:146:0x0231, B:149:0x023d, B:152:0x0249, B:155:0x0255, B:158:0x0261, B:161:0x026d, B:164:0x0278, B:167:0x0284, B:170:0x0290, B:173:0x029c, B:176:0x02a8, B:179:0x02b4, B:182:0x02c0, B:185:0x02cc, B:188:0x02d8, B:191:0x02e3, B:194:0x02ee, B:197:0x02f9, B:200:0x0305, B:203:0x0311, B:206:0x031d, B:209:0x0329, B:212:0x0335, B:215:0x0341, B:218:0x034d, B:221:0x0359, B:224:0x0365, B:227:0x0371, B:230:0x037d, B:233:0x0389, B:236:0x0395, B:239:0x03a1, B:242:0x03ad, B:245:0x03b9, B:248:0x03c5, B:251:0x03d1, B:254:0x03dd, B:257:0x03e9, B:260:0x03f5, B:263:0x0401, B:266:0x040d, B:269:0x0419, B:272:0x0425, B:275:0x0431, B:278:0x043d, B:281:0x0449, B:284:0x0454, B:287:0x0460, B:290:0x046c, B:293:0x0478, B:296:0x0484, B:299:0x048f, B:302:0x049b, B:305:0x04a7, B:308:0x04b3, B:311:0x04bf, B:314:0x04cb, B:317:0x04d7, B:320:0x04e3, B:323:0x04ef, B:326:0x04fb, B:329:0x0507, B:332:0x0513, B:335:0x051f, B:338:0x052b, B:341:0x0537, B:344:0x0542, B:347:0x054d, B:350:0x0558, B:353:0x0563, B:356:0x056e, B:359:0x0579, B:362:0x0584, B:365:0x058f, B:389:0x05cf), top: B:396:0x0014 }] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    private static boolean a(java.lang.String r6) {
        /*
            Method dump skipped, instruction units count: 2210
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.tkay.expressad.exoplayer.l.e.a(java.lang.String):boolean");
    }

    protected static final class a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public final int f6788a;
        public final int b;
        public final int c;

        public a(int i, int i2, int i3) {
            this.f6788a = i;
            this.b = i2;
            this.c = i3;
        }
    }

    private final class b implements MediaCodec.OnFrameRenderedListener {
        /* synthetic */ b(e eVar, MediaCodec mediaCodec, byte b) {
            this(mediaCodec);
        }

        private b(MediaCodec mediaCodec) {
            mediaCodec.setOnFrameRenderedListener(this, new Handler());
        }

        @Override // android.media.MediaCodec.OnFrameRenderedListener
        public final void onFrameRendered(MediaCodec mediaCodec, long j, long j2) {
            if (this != e.this.r) {
                return;
            }
            e.this.C();
        }
    }
}
