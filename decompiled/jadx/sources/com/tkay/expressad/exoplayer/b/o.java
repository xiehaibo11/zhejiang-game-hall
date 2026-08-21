package com.tkay.expressad.exoplayer.b;

import android.content.Context;
import android.content.pm.PackageManager;
import android.media.MediaCodec;
import android.media.MediaFormat;
import android.os.Handler;
import com.huawei.hms.push.constant.RemoteMessageConst;
import com.tkay.expressad.exoplayer.b.g;
import com.tkay.expressad.exoplayer.b.h;
import com.tkay.expressad.exoplayer.k.af;
import com.tkay.expressad.exoplayer.v;
import java.nio.ByteBuffer;

/* JADX INFO: loaded from: classes3.dex */
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

    @Override // com.tkay.expressad.exoplayer.f.b
    protected final int a(com.tkay.expressad.exoplayer.f.a aVar, com.tkay.expressad.exoplayer.m mVar, com.tkay.expressad.exoplayer.m mVar2) {
        return 0;
    }

    @Override // com.tkay.expressad.exoplayer.a, com.tkay.expressad.exoplayer.y
    public final com.tkay.expressad.exoplayer.k.n c() {
        return this;
    }

    static /* synthetic */ boolean b(o oVar) {
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

    @Override // com.tkay.expressad.exoplayer.f.b
    protected final int a(com.tkay.expressad.exoplayer.f.c cVar, com.tkay.expressad.exoplayer.d.g<com.tkay.expressad.exoplayer.d.k> gVar, com.tkay.expressad.exoplayer.m mVar) {
        boolean z;
        String str = mVar.h;
        boolean z2 = false;
        if (!com.tkay.expressad.exoplayer.k.o.a(str)) {
            return 0;
        }
        int i = af.f6754a >= 21 ? 32 : 0;
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
        if (af.f6754a < 21 || ((mVar.v == -1 || aVarA.a(mVar.v)) && (mVar.u == -1 || aVarA.b(mVar.u)))) {
            z2 = true;
        }
        return i | 8 | (z2 ? 4 : 3);
    }

    @Override // com.tkay.expressad.exoplayer.f.b
    protected final com.tkay.expressad.exoplayer.f.a a(com.tkay.expressad.exoplayer.f.c cVar, com.tkay.expressad.exoplayer.m mVar, boolean z) {
        com.tkay.expressad.exoplayer.f.a aVarA;
        return (!a(mVar.h) || (aVarA = cVar.a()) == null) ? super.a(cVar, mVar, z) : aVarA;
    }

    private boolean a(String str) {
        int iE = com.tkay.expressad.exoplayer.k.o.e(str);
        return iE != 0 && this.t.a(iE);
    }

    /* JADX WARN: Removed duplicated region for block: B:16:0x0032  */
    @Override // com.tkay.expressad.exoplayer.f.b
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    protected final void a(com.tkay.expressad.exoplayer.f.a r7, android.media.MediaCodec r8, com.tkay.expressad.exoplayer.m r9, android.media.MediaCrypto r10) {
        /*
            r6 = this;
            r6.q()
            int r0 = com.tkay.expressad.exoplayer.k.af.f6754a
            r1 = 23
            r2 = 1
            r3 = 24
            r4 = 0
            if (r0 >= r3) goto L32
            java.lang.String r0 = r7.c
            java.lang.String r5 = "OMX.google.raw.decoder"
            boolean r0 = r5.equals(r0)
            if (r0 == 0) goto L32
            int r0 = com.tkay.expressad.exoplayer.k.af.f6754a
            if (r0 != r1) goto L2d
            android.content.Context r0 = r6.r
            android.content.pm.PackageManager r0 = r0.getPackageManager()
            if (r0 == 0) goto L2d
            java.lang.String r5 = "android.software.leanback"
            boolean r0 = r0.hasSystemFeature(r5)
            if (r0 == 0) goto L2d
            r0 = r4
            goto L2e
        L2d:
            r0 = r2
        L2e:
            if (r0 == 0) goto L32
            r0 = -1
            goto L34
        L32:
            int r0 = r9.i
        L34:
            r6.u = r0
            java.lang.String r0 = r7.c
            int r5 = com.tkay.expressad.exoplayer.k.af.f6754a
            if (r5 >= r3) goto L6d
            java.lang.String r3 = "OMX.SEC.aac.dec"
            boolean r0 = r3.equals(r0)
            if (r0 == 0) goto L6d
            java.lang.String r0 = com.tkay.expressad.exoplayer.k.af.c
            java.lang.String r3 = "samsung"
            boolean r0 = r3.equals(r0)
            if (r0 == 0) goto L6d
            java.lang.String r0 = com.tkay.expressad.exoplayer.k.af.b
            java.lang.String r3 = "zeroflte"
            boolean r0 = r0.startsWith(r3)
            if (r0 != 0) goto L6e
            java.lang.String r0 = com.tkay.expressad.exoplayer.k.af.b
            java.lang.String r3 = "herolte"
            boolean r0 = r0.startsWith(r3)
            if (r0 != 0) goto L6e
            java.lang.String r0 = com.tkay.expressad.exoplayer.k.af.b
            java.lang.String r3 = "heroqlte"
            boolean r0 = r0.startsWith(r3)
            if (r0 == 0) goto L6d
            goto L6e
        L6d:
            r2 = r4
        L6e:
            r6.w = r2
            boolean r0 = r7.i
            r6.v = r0
            java.lang.String r0 = r7.d
            if (r0 != 0) goto L7b
            java.lang.String r7 = "audio/raw"
            goto L7d
        L7b:
            java.lang.String r7 = r7.d
        L7d:
            int r0 = r6.u
            android.media.MediaFormat r2 = new android.media.MediaFormat
            r2.<init>()
            java.lang.String r3 = "mime"
            r2.setString(r3, r7)
            int r7 = r9.u
            java.lang.String r5 = "channel-count"
            r2.setInteger(r5, r7)
            int r7 = r9.v
            java.lang.String r5 = "sample-rate"
            r2.setInteger(r5, r7)
            java.util.List<byte[]> r7 = r9.j
            com.tkay.expressad.exoplayer.f.e.a(r2, r7)
            java.lang.String r7 = "max-input-size"
            com.tkay.expressad.exoplayer.f.e.a(r2, r7, r0)
            int r7 = com.tkay.expressad.exoplayer.k.af.f6754a
            if (r7 < r1) goto Laa
            java.lang.String r7 = "priority"
            r2.setInteger(r7, r4)
        Laa:
            r7 = 0
            r8.configure(r2, r7, r10, r4)
            boolean r8 = r6.v
            if (r8 == 0) goto Lba
            r6.x = r2
            java.lang.String r7 = r9.h
            r2.setString(r3, r7)
            return
        Lba:
            r6.x = r7
            return
        */
        throw new UnsupportedOperationException("Method not decompiled: com.tkay.expressad.exoplayer.b.o.a(com.tkay.expressad.exoplayer.f.a, android.media.MediaCodec, com.tkay.expressad.exoplayer.m, android.media.MediaCrypto):void");
    }

    @Override // com.tkay.expressad.exoplayer.f.b
    protected final void a(String str, long j, long j2) {
        this.s.a(str, j, j2);
    }

    @Override // com.tkay.expressad.exoplayer.f.b
    protected final void b(com.tkay.expressad.exoplayer.m mVar) throws com.tkay.expressad.exoplayer.g {
        super.b(mVar);
        this.s.a(mVar);
        this.y = "audio/raw".equals(mVar.h) ? mVar.w : 2;
        this.z = mVar.u;
        this.A = mVar.x;
        this.B = mVar.y;
    }

    @Override // com.tkay.expressad.exoplayer.f.b
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

    @Override // com.tkay.expressad.exoplayer.f.b, com.tkay.expressad.exoplayer.a
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

    @Override // com.tkay.expressad.exoplayer.f.b, com.tkay.expressad.exoplayer.a
    protected final void a(long j, boolean z) throws com.tkay.expressad.exoplayer.g {
        super.a(j, z);
        this.t.i();
        this.C = j;
        this.D = true;
        this.E = true;
    }

    @Override // com.tkay.expressad.exoplayer.f.b, com.tkay.expressad.exoplayer.a
    protected final void n() {
        super.n();
        this.t.a();
    }

    @Override // com.tkay.expressad.exoplayer.f.b, com.tkay.expressad.exoplayer.a
    protected final void o() {
        F();
        this.t.h();
        super.o();
    }

    @Override // com.tkay.expressad.exoplayer.f.b, com.tkay.expressad.exoplayer.a
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

    @Override // com.tkay.expressad.exoplayer.f.b, com.tkay.expressad.exoplayer.y
    public final boolean v() {
        return super.v() && this.t.d();
    }

    @Override // com.tkay.expressad.exoplayer.f.b, com.tkay.expressad.exoplayer.y
    public final boolean u() {
        return this.t.e() || super.u();
    }

    @Override // com.tkay.expressad.exoplayer.k.n
    public final long d() {
        if (a_() == 2) {
            F();
        }
        return this.C;
    }

    @Override // com.tkay.expressad.exoplayer.k.n
    public final v a(v vVar) {
        return this.t.a(vVar);
    }

    @Override // com.tkay.expressad.exoplayer.k.n
    public final v e() {
        return this.t.f();
    }

    @Override // com.tkay.expressad.exoplayer.f.b
    protected final void a(com.tkay.expressad.exoplayer.c.e eVar) {
        if (!this.D || eVar.b()) {
            return;
        }
        if (Math.abs(eVar.f - this.C) > 500000) {
            this.C = eVar.f;
        }
        this.D = false;
    }

    @Override // com.tkay.expressad.exoplayer.f.b
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

    @Override // com.tkay.expressad.exoplayer.f.b
    protected final void w() throws com.tkay.expressad.exoplayer.g {
        try {
            this.t.c();
        } catch (h.d e) {
            throw com.tkay.expressad.exoplayer.g.a(e, s());
        }
    }

    @Override // com.tkay.expressad.exoplayer.a, com.tkay.expressad.exoplayer.x.b
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
        if (af.f6754a < 24 && "OMX.google.raw.decoder".equals(aVar.c)) {
            boolean z = true;
            if (af.f6754a == 23 && (packageManager = this.r.getPackageManager()) != null && packageManager.hasSystemFeature("android.software.leanback")) {
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
        if (af.f6754a >= 23) {
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
        if (af.f6754a < 24 && "OMX.SEC.aac.dec".equals(str) && "samsung".equals(af.c)) {
            return af.b.startsWith("zeroflte") || af.b.startsWith("herolte") || af.b.startsWith("heroqlte");
        }
        return false;
    }

    private final class a implements h.c {
        private a() {
        }

        /* synthetic */ a(o oVar, byte b) {
            this();
        }

        @Override // com.tkay.expressad.exoplayer.b.h.c
        public final void a(int i) {
            o.this.s.a(i);
        }

        @Override // com.tkay.expressad.exoplayer.b.h.c
        public final void a() {
            o.b(o.this);
        }

        @Override // com.tkay.expressad.exoplayer.b.h.c
        public final void a(int i, long j, long j2) {
            o.this.s.a(i, j, j2);
        }
    }

    private int a(com.tkay.expressad.exoplayer.f.a aVar, com.tkay.expressad.exoplayer.m mVar) {
        PackageManager packageManager;
        if (af.f6754a < 24 && "OMX.google.raw.decoder".equals(aVar.c)) {
            boolean z = true;
            if (af.f6754a == 23 && (packageManager = this.r.getPackageManager()) != null && packageManager.hasSystemFeature("android.software.leanback")) {
                z = false;
            }
            if (z) {
                return -1;
            }
        }
        return mVar.i;
    }
}
