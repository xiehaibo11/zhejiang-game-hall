package com.tkay.expressad.exoplayer.b;

import android.content.Context;
import android.content.pm.PackageManager;
import android.media.MediaCodec;
import android.media.MediaCrypto;
import android.media.MediaFormat;
import android.os.Handler;
import android.view.Surface;
import com.huawei.hms.push.constant.RemoteMessageConst;
import com.tkay.expressad.exoplayer.b.g;
import com.tkay.expressad.exoplayer.b.h;
import com.tkay.expressad.exoplayer.k.af;
import com.tkay.expressad.exoplayer.v;
import java.nio.ByteBuffer;

public final class o extends com.tkay.expressad.exoplayer.f.b implements com.tkay.expressad.exoplayer.k.n {
    private int A;
    private int B;
    private long C;
    private boolean D;
    private boolean E;
    private final Context r;
    private final g.a s;
    private final h t;
    private int u;
    private boolean v;
    private boolean w;
    private MediaFormat x;
    private int y;
    private int z;

    private static void C() {
    }

    private static void D() {
    }

    private static void E() {
    }

    @Override
    protected final int a(com.tkay.expressad.exoplayer.f.a aVar, com.tkay.expressad.exoplayer.m mVar, com.tkay.expressad.exoplayer.m mVar2) {
        return 0;
    }

    @Override
    public final com.tkay.expressad.exoplayer.k.n c() {
        return this;
    }

    static boolean b(o oVar) {
        oVar.E = true;
        return true;
    }

    private o(Context context, com.tkay.expressad.exoplayer.f.c cVar) {
        this(context, cVar, null);
    }

    private o(Context context, com.tkay.expressad.exoplayer.f.c cVar, com.tkay.expressad.exoplayer.d.g<com.tkay.expressad.exoplayer.d.k> gVar) {
        this(context, cVar, gVar, null, null);
    }

    private o(Context context, com.tkay.expressad.exoplayer.f.c cVar, Handler handler, g gVar) {
        this(context, cVar, null, handler, gVar);
    }

    private o(Context context, com.tkay.expressad.exoplayer.f.c cVar, com.tkay.expressad.exoplayer.d.g<com.tkay.expressad.exoplayer.d.k> gVar, Handler handler, g gVar2) {
        this(context, cVar, gVar, handler, gVar2, (c) null, new f[0]);
    }

    public o(Context context, com.tkay.expressad.exoplayer.f.c cVar, com.tkay.expressad.exoplayer.d.g<com.tkay.expressad.exoplayer.d.k> gVar, Handler handler, g gVar2, c cVar2, f... fVarArr) {
        this(context, cVar, gVar, handler, gVar2, new l(cVar2, fVarArr));
    }

    private o(Context context, com.tkay.expressad.exoplayer.f.c cVar, com.tkay.expressad.exoplayer.d.g<com.tkay.expressad.exoplayer.d.k> gVar, Handler handler, g gVar2, h hVar) {
        super(1, cVar, gVar, false);
        this.r = context.getApplicationContext();
        this.t = hVar;
        this.s = new g.a(handler, gVar2);
        hVar.a(new a(this, (byte) 0));
    }

    @Override
    protected final int a(com.tkay.expressad.exoplayer.f.c cVar, com.tkay.expressad.exoplayer.d.g<com.tkay.expressad.exoplayer.d.k> gVar, com.tkay.expressad.exoplayer.m mVar) {
        boolean z;
        String str = mVar.h;
        boolean z2 = false;
        if (!com.tkay.expressad.exoplayer.k.o.a(str)) {
            return 0;
        }
        int i = af.a >= 21 ? 32 : 0;
        boolean zA = a(gVar, mVar.k);
        if (zA && a(str) && cVar.a() != null) {
            return i | 8 | 4;
        }
        if (("audio/raw".equals(str) && !this.t.a(mVar.w)) || !this.t.a(2)) {
            return 1;
        }
        com.tkay.expressad.exoplayer.d.e eVar = mVar.k;
        if (eVar != null) {
            z = false;
            for (int i2 = 0; i2 < eVar.b; i2++) {
                z |= eVar.a(i2).d;
            }
        } else {
            z = false;
        }
        com.tkay.expressad.exoplayer.f.a aVarA = cVar.a(str, z);
        if (aVarA == null) {
            return (!z || cVar.a(str, false) == null) ? 1 : 2;
        }
        if (!zA) {
            return 2;
        }
        if (af.a < 21 || ((mVar.v == -1 || aVarA.a(mVar.v)) && (mVar.u == -1 || aVarA.b(mVar.u)))) {
            z2 = true;
        }
        return i | 8 | (z2 ? 4 : 3);
    }

    @Override
    protected final com.tkay.expressad.exoplayer.f.a a(com.tkay.expressad.exoplayer.f.c cVar, com.tkay.expressad.exoplayer.m mVar, boolean z) {
        com.tkay.expressad.exoplayer.f.a aVarA;
        return (!a(mVar.h) || (aVarA = cVar.a()) == null) ? super.a(cVar, mVar, z) : aVarA;
    }

    private boolean a(String str) {
        int iE = com.tkay.expressad.exoplayer.k.o.e(str);
        return iE != 0 && this.t.a(iE);
    }

    /* JADX WARN: Removed duplicated region for block: B:16:0x0032  */
    @Override
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    protected final void a(com.tkay.expressad.exoplayer.f.a aVar, MediaCodec mediaCodec, com.tkay.expressad.exoplayer.m mVar, MediaCrypto mediaCrypto) {
        int i;
        PackageManager packageManager;
        q();
        boolean z = true;
        if (af.a < 24 && "OMX.google.raw.decoder".equals(aVar.c)) {
            if ((af.a == 23 && (packageManager = this.r.getPackageManager()) != null && packageManager.hasSystemFeature("android.software.leanback")) ? false : true) {
                i = -1;
            }
        } else {
            i = mVar.i;
        }
        this.u = i;
        String str = aVar.c;
        if (af.a >= 24 || !"OMX.SEC.aac.dec".equals(str) || !"samsung".equals(af.c) || (!af.b.startsWith("zeroflte") && !af.b.startsWith("herolte") && !af.b.startsWith("heroqlte"))) {
            z = false;
        }
        this.w = z;
        this.v = aVar.i;
        String str2 = aVar.d == null ? "audio/raw" : aVar.d;
        int i2 = this.u;
        MediaFormat mediaFormat = new MediaFormat();
        mediaFormat.setString("mime", str2);
        mediaFormat.setInteger("channel-count", mVar.u);
        mediaFormat.setInteger("sample-rate", mVar.v);
        com.tkay.expressad.exoplayer.f.e.a(mediaFormat, mVar.j);
        com.tkay.expressad.exoplayer.f.e.a(mediaFormat, "max-input-size", i2);
        if (af.a >= 23) {
            mediaFormat.setInteger(RemoteMessageConst.Notification.PRIORITY, 0);
        }
        mediaCodec.configure(mediaFormat, (Surface) null, mediaCrypto, 0);
        if (this.v) {
            this.x = mediaFormat;
            mediaFormat.setString("mime", mVar.h);
        } else {
            this.x = null;
        }
    }

    @Override
    protected final void a(String str, long j, long j2) {
        this.s.a(str, j, j2);
    }

    @Override
    protected final void b(com.tkay.expressad.exoplayer.m mVar) throws com.tkay.expressad.exoplayer.g {
        super.b(mVar);
        this.s.a(mVar);
        this.y = "audio/raw".equals(mVar.h) ? mVar.w : 2;
        this.z = mVar.u;
        this.A = mVar.x;
        this.B = mVar.y;
    }

    @Override
    protected final void a(MediaCodec mediaCodec, MediaFormat mediaFormat) throws com.tkay.expressad.exoplayer.g {
        int iE;
        int[] iArr;
        int i;
        MediaFormat mediaFormat2 = this.x;
        if (mediaFormat2 != null) {
            iE = com.tkay.expressad.exoplayer.k.o.e(mediaFormat2.getString("mime"));
            mediaFormat = this.x;
        } else {
            iE = this.y;
        }
        int i2 = iE;
        int integer = mediaFormat.getInteger("channel-count");
        int integer2 = mediaFormat.getInteger("sample-rate");
        if (this.w && integer == 6 && (i = this.z) < 6) {
            iArr = new int[i];
            for (int i3 = 0; i3 < this.z; i3++) {
                iArr[i3] = i3;
            }
        } else {
            iArr = null;
        }
        try {
            this.t.a(i2, integer, integer2, iArr, this.A, this.B);
        } catch (h.a e) {
            throw com.tkay.expressad.exoplayer.g.a(e, s());
        }
    }

    @Override
    protected final void a(boolean z) {
        super.a(z);
        this.s.a(this.q);
        int i = r().b;
        if (i != 0) {
            this.t.c(i);
        } else {
            this.t.g();
        }
    }

    @Override
    protected final void a(long j, boolean z) throws com.tkay.expressad.exoplayer.g {
        super.a(j, z);
        this.t.i();
        this.C = j;
        this.D = true;
        this.E = true;
    }

    @Override
    protected final void n() {
        super.n();
        this.t.a();
    }

    @Override
    protected final void o() {
        F();
        this.t.h();
        super.o();
    }

    @Override
    protected final void p() {
        try {
            this.t.j();
            try {
                super.p();
            } finally {
            }
        } catch (Throwable th) {
            try {
                super.p();
                throw th;
            } finally {
            }
        }
    }

    @Override
    public final boolean v() {
        return super.v() && this.t.d();
    }

    @Override
    public final boolean u() {
        return this.t.e() || super.u();
    }

    @Override
    public final long d() {
        if (a_() == 2) {
            F();
        }
        return this.C;
    }

    @Override
    public final v a(v vVar) {
        return this.t.a(vVar);
    }

    @Override
    public final v e() {
        return this.t.f();
    }

    @Override
    protected final void a(com.tkay.expressad.exoplayer.c.e eVar) {
        if (!this.D || eVar.b()) {
            return;
        }
        if (Math.abs(eVar.f - this.C) > 500000) {
            this.C = eVar.f;
        }
        this.D = false;
    }

    @Override
    protected final boolean a(long j, long j2, MediaCodec mediaCodec, ByteBuffer byteBuffer, int i, int i2, long j3, boolean z) throws com.tkay.expressad.exoplayer.g {
        if (this.v && (i2 & 2) != 0) {
            mediaCodec.releaseOutputBuffer(i, false);
            return true;
        }
        if (z) {
            mediaCodec.releaseOutputBuffer(i, false);
            this.q.f++;
            this.t.b();
            return true;
        }
        try {
            if (!this.t.a(byteBuffer, j3)) {
                return false;
            }
            mediaCodec.releaseOutputBuffer(i, false);
            this.q.e++;
            return true;
        } catch (h.b | h.d e) {
            throw com.tkay.expressad.exoplayer.g.a(e, s());
        }
    }

    @Override
    protected final void w() throws com.tkay.expressad.exoplayer.g {
        try {
            this.t.c();
        } catch (h.d e) {
            throw com.tkay.expressad.exoplayer.g.a(e, s());
        }
    }

    @Override
    public final void a(int i, Object obj) {
        if (i == 2) {
            this.t.a(((Float) obj).floatValue());
        } else if (i == 3) {
            this.t.a((b) obj);
        } else {
            super.a(i, obj);
        }
    }

    private int b(com.tkay.expressad.exoplayer.f.a aVar, com.tkay.expressad.exoplayer.m mVar) {
        PackageManager packageManager;
        if (af.a < 24 && "OMX.google.raw.decoder".equals(aVar.c)) {
            boolean z = true;
            if (af.a == 23 && (packageManager = this.r.getPackageManager()) != null && packageManager.hasSystemFeature("android.software.leanback")) {
                z = false;
            }
            if (z) {
                return -1;
            }
        }
        return mVar.i;
    }

    private static MediaFormat a(com.tkay.expressad.exoplayer.m mVar, String str, int i) {
        MediaFormat mediaFormat = new MediaFormat();
        mediaFormat.setString("mime", str);
        mediaFormat.setInteger("channel-count", mVar.u);
        mediaFormat.setInteger("sample-rate", mVar.v);
        com.tkay.expressad.exoplayer.f.e.a(mediaFormat, mVar.j);
        com.tkay.expressad.exoplayer.f.e.a(mediaFormat, "max-input-size", i);
        if (af.a >= 23) {
            mediaFormat.setInteger(RemoteMessageConst.Notification.PRIORITY, 0);
        }
        return mediaFormat;
    }

    private void F() {
        long jA = this.t.a(v());
        if (jA != Long.MIN_VALUE) {
            if (!this.E) {
                jA = Math.max(this.C, jA);
            }
            this.C = jA;
            this.E = false;
        }
    }

    private static boolean a(com.tkay.expressad.exoplayer.m mVar, com.tkay.expressad.exoplayer.m mVar2) {
        return mVar.h.equals(mVar2.h) && mVar.u == mVar2.u && mVar.v == mVar2.v && mVar.x == 0 && mVar.y == 0 && mVar2.x == 0 && mVar2.y == 0 && mVar.b(mVar2);
    }

    private static boolean b(String str) {
        if (af.a < 24 && "OMX.SEC.aac.dec".equals(str) && "samsung".equals(af.c)) {
            return af.b.startsWith("zeroflte") || af.b.startsWith("herolte") || af.b.startsWith("heroqlte");
        }
        return false;
    }

    private final class a implements h.c {
        private a() {
        }

        a(o oVar, byte b) {
            this();
        }

        @Override
        public final void a(int i) {
            o.this.s.a(i);
        }

        @Override
        public final void a() {
            o.b(o.this);
        }

        @Override
        public final void a(int i, long j, long j2) {
            o.this.s.a(i, j, j2);
        }
    }

    private int a(com.tkay.expressad.exoplayer.f.a aVar, com.tkay.expressad.exoplayer.m mVar) {
        PackageManager packageManager;
        if (af.a < 24 && "OMX.google.raw.decoder".equals(aVar.c)) {
            boolean z = true;
            if (af.a == 23 && (packageManager = this.r.getPackageManager()) != null && packageManager.hasSystemFeature("android.software.leanback")) {
                z = false;
            }
            if (z) {
                return -1;
            }
        }
        return mVar.i;
    }
}
