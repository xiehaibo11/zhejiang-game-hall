package com.tkay.expressad.exoplayer.b;

import android.media.AudioAttributes;
import android.media.AudioFormat;
import android.media.AudioTrack;
import android.os.ConditionVariable;
import android.os.SystemClock;
import android.util.Log;
import com.alipay.sdk.app.OpenAuthTask;
import com.tkay.expressad.exoplayer.b.h;
import com.tkay.expressad.exoplayer.b.j;
import com.tkay.expressad.exoplayer.k.af;
import com.tkay.expressad.exoplayer.v;
import java.lang.annotation.Retention;
import java.lang.annotation.RetentionPolicy;
import java.nio.ByteBuffer;
import java.nio.ByteOrder;
import java.util.ArrayDeque;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;

/* JADX INFO: loaded from: classes3.dex */
public final class l implements h {
    public static boolean b = false;
    public static boolean c = false;
    private static final long d = 250000;
    private static final long e = 750000;
    private static final long f = 250000;
    private static final int g = 4;
    private static final int h = -2;
    private static final int i = 0;
    private static final int j = 1;
    private static final int k = 1;
    private static final int l = 1;
    private static final String m = "AudioTrack";
    private static final int n = 0;
    private static final int o = 1;
    private static final int p = 2;
    private h.c A;
    private AudioTrack B;
    private AudioTrack C;
    private boolean D;
    private boolean E;
    private int F;
    private int G;
    private int H;
    private int I;
    private com.tkay.expressad.exoplayer.b.b J;
    private boolean K;
    private boolean L;
    private int M;
    private v N;
    private v O;
    private long P;
    private long Q;
    private ByteBuffer R;
    private int S;
    private int T;
    private long U;
    private long V;
    private int W;
    private long X;
    private long Y;
    private int Z;
    private int aa;
    private long ab;
    private float ac;
    private com.tkay.expressad.exoplayer.b.f[] ad;
    private ByteBuffer[] ae;
    private ByteBuffer af;
    private ByteBuffer ag;
    private byte[] ah;
    private int ai;
    private int aj;
    private boolean ak;
    private boolean al;
    private int am;
    private boolean an;
    private long ao;
    private final com.tkay.expressad.exoplayer.b.c q;
    private final a r;
    private final boolean s;
    private final k t;
    private final u u;
    private final com.tkay.expressad.exoplayer.b.f[] v;
    private final com.tkay.expressad.exoplayer.b.f[] w;
    private final ConditionVariable x;
    private final j y;
    private final ArrayDeque<d> z;

    public interface a {
        long a(long j);

        v a(v vVar);

        com.tkay.expressad.exoplayer.b.f[] a();

        long b();
    }

    @Retention(RetentionPolicy.SOURCE)
    private @interface f {
    }

    public static final class c extends RuntimeException {
        /* synthetic */ c(String str, byte b) {
            this(str);
        }

        private c(String str) {
            super(str);
        }
    }

    public static class b implements a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private final com.tkay.expressad.exoplayer.b.f[] f6504a;
        private final q b = new q();
        private final t c;

        public b(com.tkay.expressad.exoplayer.b.f... fVarArr) {
            this.f6504a = (com.tkay.expressad.exoplayer.b.f[]) Arrays.copyOf(fVarArr, fVarArr.length + 2);
            t tVar = new t();
            this.c = tVar;
            com.tkay.expressad.exoplayer.b.f[] fVarArr2 = this.f6504a;
            fVarArr2[fVarArr.length] = this.b;
            fVarArr2[fVarArr.length + 1] = tVar;
        }

        @Override // com.tkay.expressad.exoplayer.b.l.a
        public final com.tkay.expressad.exoplayer.b.f[] a() {
            return this.f6504a;
        }

        @Override // com.tkay.expressad.exoplayer.b.l.a
        public final v a(v vVar) {
            this.b.a(vVar.d);
            return new v(this.c.a(vVar.b), this.c.b(vVar.c), vVar.d);
        }

        @Override // com.tkay.expressad.exoplayer.b.l.a
        public final long a(long j) {
            return this.c.a(j);
        }

        @Override // com.tkay.expressad.exoplayer.b.l.a
        public final long b() {
            return this.b.j();
        }
    }

    public l(com.tkay.expressad.exoplayer.b.c cVar, com.tkay.expressad.exoplayer.b.f[] fVarArr) {
        this(cVar, fVarArr, (byte) 0);
    }

    private l(com.tkay.expressad.exoplayer.b.c cVar, com.tkay.expressad.exoplayer.b.f[] fVarArr, byte b2) {
        this(cVar, new b(fVarArr));
    }

    private l(com.tkay.expressad.exoplayer.b.c cVar, a aVar) {
        this.q = cVar;
        this.r = (a) com.tkay.expressad.exoplayer.k.a.a(aVar);
        this.s = false;
        this.x = new ConditionVariable(true);
        this.y = new j(new e(this, (byte) 0));
        this.t = new k();
        this.u = new u();
        ArrayList arrayList = new ArrayList();
        Collections.addAll(arrayList, new p(), this.t, this.u);
        Collections.addAll(arrayList, aVar.a());
        this.v = (com.tkay.expressad.exoplayer.b.f[]) arrayList.toArray(new com.tkay.expressad.exoplayer.b.f[arrayList.size()]);
        this.w = new com.tkay.expressad.exoplayer.b.f[]{new n()};
        this.ac = 1.0f;
        this.aa = 0;
        this.J = com.tkay.expressad.exoplayer.b.b.f6483a;
        this.am = 0;
        this.O = v.f6813a;
        this.aj = -1;
        this.ad = new com.tkay.expressad.exoplayer.b.f[0];
        this.ae = new ByteBuffer[0];
        this.z = new ArrayDeque<>();
    }

    @Override // com.tkay.expressad.exoplayer.b.h
    public final void a(h.c cVar) {
        this.A = cVar;
    }

    @Override // com.tkay.expressad.exoplayer.b.h
    public final boolean a(int i2) {
        if (af.b(i2)) {
            return i2 != 4 || af.f6754a >= 21;
        }
        com.tkay.expressad.exoplayer.b.c cVar = this.q;
        return cVar != null && cVar.a(i2);
    }

    @Override // com.tkay.expressad.exoplayer.b.h
    public final long a(boolean z) {
        long j2;
        long jA;
        long j3;
        if (!q() || this.aa == 0) {
            return Long.MIN_VALUE;
        }
        long jMin = Math.min(this.y.a(z), e(s()));
        long j4 = this.ab;
        d dVarRemove = null;
        while (!this.z.isEmpty() && jMin >= this.z.getFirst().c) {
            dVarRemove = this.z.remove();
        }
        if (dVarRemove != null) {
            this.O = dVarRemove.f6505a;
            this.Q = dVarRemove.c;
            this.P = dVarRemove.b - this.ab;
        }
        if (this.O.b == 1.0f) {
            j3 = (jMin + this.P) - this.Q;
        } else {
            if (this.z.isEmpty()) {
                j2 = this.P;
                jA = this.r.a(jMin - this.Q);
            } else {
                j2 = this.P;
                jA = af.a(jMin - this.Q, this.O.b);
            }
            j3 = jA + j2;
        }
        return j4 + j3 + e(this.r.b());
    }

    /* JADX WARN: Removed duplicated region for block: B:60:0x00cc  */
    @Override // com.tkay.expressad.exoplayer.b.h
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public final void a(int r10, int r11, int r12, int[] r13, int r14, int r15) throws com.tkay.expressad.exoplayer.b.h.a {
        /*
            Method dump skipped, instruction units count: 376
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.tkay.expressad.exoplayer.b.l.a(int, int, int, int[], int, int):void");
    }

    private void k() {
        ArrayList arrayList = new ArrayList();
        for (com.tkay.expressad.exoplayer.b.f fVar : v()) {
            if (fVar.a()) {
                arrayList.add(fVar);
            } else {
                fVar.h();
            }
        }
        int size = arrayList.size();
        this.ad = (com.tkay.expressad.exoplayer.b.f[]) arrayList.toArray(new com.tkay.expressad.exoplayer.b.f[size]);
        this.ae = new ByteBuffer[size];
        l();
    }

    private void l() {
        int i2 = 0;
        while (true) {
            com.tkay.expressad.exoplayer.b.f[] fVarArr = this.ad;
            if (i2 >= fVarArr.length) {
                return;
            }
            com.tkay.expressad.exoplayer.b.f fVar = fVarArr[i2];
            fVar.h();
            this.ae[i2] = fVar.f();
            i2++;
        }
    }

    private void m() throws h.b {
        v vVarA;
        this.x.block();
        AudioTrack audioTrackT = t();
        this.C = audioTrackT;
        int audioSessionId = audioTrackT.getAudioSessionId();
        if (b && af.f6754a < 21) {
            AudioTrack audioTrack = this.B;
            if (audioTrack != null && audioSessionId != audioTrack.getAudioSessionId()) {
                p();
            }
            if (this.B == null) {
                this.B = new AudioTrack(3, OpenAuthTask.SYS_ERR, 4, 2, 2, 0, audioSessionId);
            }
        }
        if (this.am != audioSessionId) {
            this.am = audioSessionId;
            h.c cVar = this.A;
            if (cVar != null) {
                cVar.a(audioSessionId);
            }
        }
        if (this.L) {
            vVarA = this.r.a(this.O);
        } else {
            vVarA = v.f6813a;
        }
        this.O = vVarA;
        k();
        this.y.a(this.C, this.I, this.W, this.M);
        o();
    }

    @Override // com.tkay.expressad.exoplayer.b.h
    public final void a() {
        this.al = true;
        if (q()) {
            this.y.a();
            this.C.play();
        }
    }

    @Override // com.tkay.expressad.exoplayer.b.h
    public final void b() {
        if (this.aa == 1) {
            this.aa = 2;
        }
    }

    @Override // com.tkay.expressad.exoplayer.b.h
    public final boolean a(ByteBuffer byteBuffer, long j2) throws h.b, h.d {
        int iA;
        v vVarA;
        ByteBuffer byteBuffer2 = this.af;
        com.tkay.expressad.exoplayer.k.a.a(byteBuffer2 == null || byteBuffer == byteBuffer2);
        if (!q()) {
            this.x.block();
            AudioTrack audioTrackT = t();
            this.C = audioTrackT;
            int audioSessionId = audioTrackT.getAudioSessionId();
            if (b && af.f6754a < 21) {
                AudioTrack audioTrack = this.B;
                if (audioTrack != null && audioSessionId != audioTrack.getAudioSessionId()) {
                    p();
                }
                if (this.B == null) {
                    this.B = new AudioTrack(3, OpenAuthTask.SYS_ERR, 4, 2, 2, 0, audioSessionId);
                }
            }
            if (this.am != audioSessionId) {
                this.am = audioSessionId;
                h.c cVar = this.A;
                if (cVar != null) {
                    cVar.a(audioSessionId);
                }
            }
            if (this.L) {
                vVarA = this.r.a(this.O);
            } else {
                vVarA = v.f6813a;
            }
            this.O = vVarA;
            k();
            this.y.a(this.C, this.I, this.W, this.M);
            o();
            if (this.al) {
                a();
            }
        }
        if (!this.y.a(s())) {
            return false;
        }
        if (this.af == null) {
            if (!byteBuffer.hasRemaining()) {
                return true;
            }
            if (!this.D && this.Z == 0) {
                int i2 = this.I;
                if (i2 == 7 || i2 == 8) {
                    iA = m.a(byteBuffer);
                } else if (i2 == 5) {
                    iA = com.tkay.expressad.exoplayer.b.a.a();
                } else if (i2 == 6) {
                    iA = com.tkay.expressad.exoplayer.b.a.a(byteBuffer);
                } else if (i2 == 14) {
                    int iB = com.tkay.expressad.exoplayer.b.a.b(byteBuffer);
                    iA = iB == -1 ? 0 : com.tkay.expressad.exoplayer.b.a.a(byteBuffer, iB) * 16;
                } else {
                    throw new IllegalStateException("Unexpected audio encoding: ".concat(String.valueOf(i2)));
                }
                this.Z = iA;
                if (iA == 0) {
                    return true;
                }
            }
            if (this.N != null) {
                if (!n()) {
                    return false;
                }
                v vVar = this.N;
                this.N = null;
                this.z.add(new d(this.r.a(vVar), Math.max(0L, j2), e(s()), (byte) 0));
                k();
            }
            if (this.aa == 0) {
                this.ab = Math.max(0L, j2);
                this.aa = 1;
            } else {
                long jR = this.ab + ((r() * 1000000) / ((long) this.F));
                if (this.aa == 1 && Math.abs(jR - j2) > 200000) {
                    Log.e(m, "Discontinuity detected [expected " + jR + ", got " + j2 + "]");
                    this.aa = 2;
                }
                if (this.aa == 2) {
                    this.ab += j2 - jR;
                    this.aa = 1;
                    h.c cVar2 = this.A;
                    if (cVar2 != null) {
                        cVar2.a();
                    }
                }
            }
            if (this.D) {
                this.U += (long) byteBuffer.remaining();
            } else {
                this.V += (long) this.Z;
            }
            this.af = byteBuffer;
        }
        if (this.K) {
            a(j2);
        } else {
            b(this.af, j2);
        }
        if (!this.af.hasRemaining()) {
            this.af = null;
            return true;
        }
        if (!this.y.c(s())) {
            return false;
        }
        Log.w(m, "Resetting stalled audio track");
        i();
        return true;
    }

    private void a(long j2) throws h.d {
        ByteBuffer byteBuffer;
        int length = this.ad.length;
        int i2 = length;
        while (i2 >= 0) {
            if (i2 > 0) {
                byteBuffer = this.ae[i2 - 1];
            } else {
                byteBuffer = this.af;
                if (byteBuffer == null) {
                    byteBuffer = com.tkay.expressad.exoplayer.b.f.f6488a;
                }
            }
            if (i2 == length) {
                b(byteBuffer, j2);
            } else {
                com.tkay.expressad.exoplayer.b.f fVar = this.ad[i2];
                fVar.a(byteBuffer);
                ByteBuffer byteBufferF = fVar.f();
                this.ae[i2] = byteBufferF;
                if (byteBufferF.hasRemaining()) {
                    i2++;
                }
            }
            if (byteBuffer.hasRemaining()) {
                return;
            } else {
                i2--;
            }
        }
    }

    private void b(ByteBuffer byteBuffer, long j2) throws h.d {
        if (byteBuffer.hasRemaining()) {
            ByteBuffer byteBuffer2 = this.ag;
            int iWrite = 0;
            if (byteBuffer2 != null) {
                com.tkay.expressad.exoplayer.k.a.a(byteBuffer2 == byteBuffer);
            } else {
                this.ag = byteBuffer;
                if (af.f6754a < 21) {
                    int iRemaining = byteBuffer.remaining();
                    byte[] bArr = this.ah;
                    if (bArr == null || bArr.length < iRemaining) {
                        this.ah = new byte[iRemaining];
                    }
                    int iPosition = byteBuffer.position();
                    byteBuffer.get(this.ah, 0, iRemaining);
                    byteBuffer.position(iPosition);
                    this.ai = 0;
                }
            }
            int iRemaining2 = byteBuffer.remaining();
            if (af.f6754a < 21) {
                int iB = this.y.b(this.X);
                if (iB > 0) {
                    iWrite = this.C.write(this.ah, this.ai, Math.min(iRemaining2, iB));
                    if (iWrite > 0) {
                        this.ai += iWrite;
                        byteBuffer.position(byteBuffer.position() + iWrite);
                    }
                }
            } else if (this.an) {
                com.tkay.expressad.exoplayer.k.a.b(j2 != -9223372036854775807L);
                iWrite = a(this.C, byteBuffer, iRemaining2, j2);
            } else {
                iWrite = this.C.write(byteBuffer, iRemaining2, 1);
            }
            this.ao = SystemClock.elapsedRealtime();
            if (iWrite < 0) {
                throw new h.d(iWrite);
            }
            if (this.D) {
                this.X += (long) iWrite;
            }
            if (iWrite == iRemaining2) {
                if (!this.D) {
                    this.Y += (long) this.Z;
                }
                this.ag = null;
            }
        }
    }

    @Override // com.tkay.expressad.exoplayer.b.h
    public final void c() {
        if (!this.ak && q() && n()) {
            this.y.d(s());
            this.C.stop();
            this.S = 0;
            this.ak = true;
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:13:0x0021  */
    /* JADX WARN: Removed duplicated region for block: B:20:0x0038  */
    /* JADX WARN: Unsupported multi-entry loop pattern (BACK_EDGE: B:19:0x0032 -> B:9:0x0012). Please report as a decompilation issue!!! */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    private boolean n() throws com.tkay.expressad.exoplayer.b.h.d {
        /*
            r9 = this;
            int r0 = r9.aj
            r1 = -1
            r2 = 1
            r3 = 0
            if (r0 != r1) goto L14
            boolean r0 = r9.K
            if (r0 == 0) goto Ld
            r0 = r3
            goto L10
        Ld:
            com.tkay.expressad.exoplayer.b.f[] r0 = r9.ad
            int r0 = r0.length
        L10:
            r9.aj = r0
        L12:
            r0 = r2
            goto L15
        L14:
            r0 = r3
        L15:
            int r4 = r9.aj
            com.tkay.expressad.exoplayer.b.f[] r5 = r9.ad
            int r6 = r5.length
            r7 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            if (r4 >= r6) goto L38
            r4 = r5[r4]
            if (r0 == 0) goto L28
            r4.e()
        L28:
            r9.a(r7)
            boolean r0 = r4.g()
            if (r0 != 0) goto L32
            return r3
        L32:
            int r0 = r9.aj
            int r0 = r0 + r2
            r9.aj = r0
            goto L12
        L38:
            java.nio.ByteBuffer r0 = r9.ag
            if (r0 == 0) goto L44
            r9.b(r0, r7)
            java.nio.ByteBuffer r0 = r9.ag
            if (r0 == 0) goto L44
            return r3
        L44:
            r9.aj = r1
            return r2
        */
        throw new UnsupportedOperationException("Method not decompiled: com.tkay.expressad.exoplayer.b.l.n():boolean");
    }

    @Override // com.tkay.expressad.exoplayer.b.h
    public final boolean d() {
        if (q()) {
            return this.ak && !e();
        }
        return true;
    }

    @Override // com.tkay.expressad.exoplayer.b.h
    public final boolean e() {
        return q() && this.y.e(s());
    }

    @Override // com.tkay.expressad.exoplayer.b.h
    public final v a(v vVar) {
        if (q() && !this.L) {
            v vVar2 = v.f6813a;
            this.O = vVar2;
            return vVar2;
        }
        v vVar3 = this.N;
        if (vVar3 == null) {
            if (this.z.isEmpty()) {
                vVar3 = this.O;
            } else {
                vVar3 = this.z.getLast().f6505a;
            }
        }
        if (!vVar.equals(vVar3)) {
            if (q()) {
                this.N = vVar;
            } else {
                this.O = this.r.a(vVar);
            }
        }
        return this.O;
    }

    @Override // com.tkay.expressad.exoplayer.b.h
    public final v f() {
        return this.O;
    }

    @Override // com.tkay.expressad.exoplayer.b.h
    public final void a(com.tkay.expressad.exoplayer.b.b bVar) {
        if (this.J.equals(bVar)) {
            return;
        }
        this.J = bVar;
        if (this.an) {
            return;
        }
        i();
        this.am = 0;
    }

    @Override // com.tkay.expressad.exoplayer.b.h
    public final void b(int i2) {
        if (this.am != i2) {
            this.am = i2;
            i();
        }
    }

    @Override // com.tkay.expressad.exoplayer.b.h
    public final void c(int i2) {
        com.tkay.expressad.exoplayer.k.a.b(af.f6754a >= 21);
        if (this.an && this.am == i2) {
            return;
        }
        this.an = true;
        this.am = i2;
        i();
    }

    @Override // com.tkay.expressad.exoplayer.b.h
    public final void g() {
        if (this.an) {
            this.an = false;
            this.am = 0;
            i();
        }
    }

    @Override // com.tkay.expressad.exoplayer.b.h
    public final void a(float f2) {
        if (this.ac != f2) {
            this.ac = f2;
            o();
        }
    }

    private void o() {
        if (q()) {
            if (af.f6754a < 21) {
                AudioTrack audioTrack = this.C;
                float f2 = this.ac;
                audioTrack.setStereoVolume(f2, f2);
                return;
            }
            this.C.setVolume(this.ac);
        }
    }

    @Override // com.tkay.expressad.exoplayer.b.h
    public final void h() {
        this.al = false;
        if (q() && this.y.c()) {
            this.C.pause();
        }
    }

    /* JADX WARN: Type inference failed for: r1v2, types: [com.tkay.expressad.exoplayer.b.l$1] */
    @Override // com.tkay.expressad.exoplayer.b.h
    public final void i() {
        if (q()) {
            this.U = 0L;
            this.V = 0L;
            this.X = 0L;
            this.Y = 0L;
            this.Z = 0;
            v vVar = this.N;
            if (vVar != null) {
                this.O = vVar;
                this.N = null;
            } else if (!this.z.isEmpty()) {
                this.O = this.z.getLast().f6505a;
            }
            this.z.clear();
            this.P = 0L;
            this.Q = 0L;
            this.af = null;
            this.ag = null;
            l();
            this.ak = false;
            this.aj = -1;
            this.R = null;
            this.S = 0;
            this.aa = 0;
            if (this.y.b()) {
                this.C.pause();
            }
            final AudioTrack audioTrack = this.C;
            this.C = null;
            this.y.d();
            this.x.close();
            new Thread() { // from class: com.tkay.expressad.exoplayer.b.l.1
                @Override // java.lang.Thread, java.lang.Runnable
                public final void run() {
                    try {
                        audioTrack.flush();
                        audioTrack.release();
                    } finally {
                        l.this.x.open();
                    }
                }
            }.start();
        }
    }

    @Override // com.tkay.expressad.exoplayer.b.h
    public final void j() {
        i();
        p();
        for (com.tkay.expressad.exoplayer.b.f fVar : this.v) {
            fVar.i();
        }
        for (com.tkay.expressad.exoplayer.b.f fVar2 : this.w) {
            fVar2.i();
        }
        this.am = 0;
        this.al = false;
    }

    /* JADX WARN: Type inference failed for: r1v1, types: [com.tkay.expressad.exoplayer.b.l$2] */
    private void p() {
        final AudioTrack audioTrack = this.B;
        if (audioTrack == null) {
            return;
        }
        this.B = null;
        new Thread() { // from class: com.tkay.expressad.exoplayer.b.l.2
            @Override // java.lang.Thread, java.lang.Runnable
            public final void run() {
                audioTrack.release();
            }
        }.start();
    }

    private long b(long j2) {
        long j3;
        long jA;
        d dVarRemove = null;
        while (!this.z.isEmpty() && j2 >= this.z.getFirst().c) {
            dVarRemove = this.z.remove();
        }
        if (dVarRemove != null) {
            this.O = dVarRemove.f6505a;
            this.Q = dVarRemove.c;
            this.P = dVarRemove.b - this.ab;
        }
        if (this.O.b == 1.0f) {
            return (j2 + this.P) - this.Q;
        }
        if (this.z.isEmpty()) {
            j3 = this.P;
            jA = this.r.a(j2 - this.Q);
        } else {
            j3 = this.P;
            jA = af.a(j2 - this.Q, this.O.b);
        }
        return j3 + jA;
    }

    private long c(long j2) {
        return j2 + e(this.r.b());
    }

    private boolean q() {
        return this.C != null;
    }

    private long d(long j2) {
        return (j2 * 1000000) / ((long) this.F);
    }

    private long e(long j2) {
        return (j2 * 1000000) / ((long) this.G);
    }

    private long f(long j2) {
        return (j2 * ((long) this.G)) / 1000000;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public long r() {
        return this.D ? this.U / ((long) this.T) : this.V;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public long s() {
        return this.D ? this.X / ((long) this.W) : this.Y;
    }

    private AudioTrack t() throws h.b {
        AudioTrack audioTrack;
        AudioAttributes audioAttributesA;
        if (af.f6754a < 21) {
            int iF = af.f(this.J.d);
            if (this.am == 0) {
                audioTrack = new AudioTrack(iF, this.G, this.H, this.I, this.M, 1);
            } else {
                audioTrack = new AudioTrack(iF, this.G, this.H, this.I, this.M, 1, this.am);
            }
        } else {
            if (this.an) {
                audioAttributesA = new AudioAttributes.Builder().setContentType(3).setFlags(16).setUsage(1).build();
            } else {
                audioAttributesA = this.J.a();
            }
            AudioAttributes audioAttributes = audioAttributesA;
            AudioFormat audioFormatBuild = new AudioFormat.Builder().setChannelMask(this.H).setEncoding(this.I).setSampleRate(this.G).build();
            int i2 = this.am;
            if (i2 == 0) {
                i2 = 0;
            }
            audioTrack = new AudioTrack(audioAttributes, audioFormatBuild, this.M, 1, i2);
        }
        int state = audioTrack.getState();
        if (state == 1) {
            return audioTrack;
        }
        try {
            audioTrack.release();
        } catch (Exception unused) {
        }
        throw new h.b(state, this.G, this.H, this.M);
    }

    private AudioTrack u() {
        AudioAttributes audioAttributesA;
        if (this.an) {
            audioAttributesA = new AudioAttributes.Builder().setContentType(3).setFlags(16).setUsage(1).build();
        } else {
            audioAttributesA = this.J.a();
        }
        AudioAttributes audioAttributes = audioAttributesA;
        AudioFormat audioFormatBuild = new AudioFormat.Builder().setChannelMask(this.H).setEncoding(this.I).setSampleRate(this.G).build();
        int i2 = this.am;
        if (i2 == 0) {
            i2 = 0;
        }
        return new AudioTrack(audioAttributes, audioFormatBuild, this.M, 1, i2);
    }

    private static AudioTrack d(int i2) {
        return new AudioTrack(3, OpenAuthTask.SYS_ERR, 4, 2, 2, 0, i2);
    }

    private com.tkay.expressad.exoplayer.b.f[] v() {
        if (this.E) {
            return this.w;
        }
        return this.v;
    }

    private static int a(int i2, ByteBuffer byteBuffer) {
        if (i2 == 7 || i2 == 8) {
            return m.a(byteBuffer);
        }
        if (i2 == 5) {
            return com.tkay.expressad.exoplayer.b.a.a();
        }
        if (i2 == 6) {
            return com.tkay.expressad.exoplayer.b.a.a(byteBuffer);
        }
        if (i2 == 14) {
            int iB = com.tkay.expressad.exoplayer.b.a.b(byteBuffer);
            if (iB == -1) {
                return 0;
            }
            return com.tkay.expressad.exoplayer.b.a.a(byteBuffer, iB) * 16;
        }
        throw new IllegalStateException("Unexpected audio encoding: ".concat(String.valueOf(i2)));
    }

    private static int a(AudioTrack audioTrack, ByteBuffer byteBuffer, int i2) {
        return audioTrack.write(byteBuffer, i2, 1);
    }

    private int a(AudioTrack audioTrack, ByteBuffer byteBuffer, int i2, long j2) {
        if (this.R == null) {
            ByteBuffer byteBufferAllocate = ByteBuffer.allocate(16);
            this.R = byteBufferAllocate;
            byteBufferAllocate.order(ByteOrder.BIG_ENDIAN);
            this.R.putInt(1431633921);
        }
        if (this.S == 0) {
            this.R.putInt(4, i2);
            this.R.putLong(8, j2 * 1000);
            this.R.position(0);
            this.S = i2;
        }
        int iRemaining = this.R.remaining();
        if (iRemaining > 0) {
            int iWrite = audioTrack.write(this.R, iRemaining, 1);
            if (iWrite < 0) {
                this.S = 0;
                return iWrite;
            }
            if (iWrite < iRemaining) {
                return 0;
            }
        }
        int iWrite2 = audioTrack.write(byteBuffer, i2, 1);
        if (iWrite2 < 0) {
            this.S = 0;
            return iWrite2;
        }
        this.S -= iWrite2;
        return iWrite2;
    }

    private static void a(AudioTrack audioTrack, float f2) {
        audioTrack.setVolume(f2);
    }

    private static void b(AudioTrack audioTrack, float f2) {
        audioTrack.setStereoVolume(f2, f2);
    }

    private static final class d {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private final v f6505a;
        private final long b;
        private final long c;

        /* synthetic */ d(v vVar, long j, long j2, byte b) {
            this(vVar, j, j2);
        }

        private d(v vVar, long j, long j2) {
            this.f6505a = vVar;
            this.b = j;
            this.c = j2;
        }
    }

    private final class e implements j.a {
        private e() {
        }

        /* synthetic */ e(l lVar, byte b) {
            this();
        }

        @Override // com.tkay.expressad.exoplayer.b.j.a
        public final void a(long j, long j2, long j3, long j4) {
            String str = "Spurious audio timestamp (frame position mismatch): " + j + ", " + j2 + ", " + j3 + ", " + j4 + ", " + l.this.r() + ", " + l.this.s();
            if (l.c) {
                throw new c(str, (byte) 0);
            }
            Log.w(l.m, str);
        }

        @Override // com.tkay.expressad.exoplayer.b.j.a
        public final void b(long j, long j2, long j3, long j4) {
            String str = "Spurious audio timestamp (system clock mismatch): " + j + ", " + j2 + ", " + j3 + ", " + j4 + ", " + l.this.r() + ", " + l.this.s();
            if (l.c) {
                throw new c(str, (byte) 0);
            }
            Log.w(l.m, str);
        }

        @Override // com.tkay.expressad.exoplayer.b.j.a
        public final void a(long j) {
            Log.w(l.m, "Ignoring impossibly large audio latency: ".concat(String.valueOf(j)));
        }

        @Override // com.tkay.expressad.exoplayer.b.j.a
        public final void a(int i, long j) {
            if (l.this.A != null) {
                l.this.A.a(i, j, SystemClock.elapsedRealtime() - l.this.ao);
            }
        }
    }
}
