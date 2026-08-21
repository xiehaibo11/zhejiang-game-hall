package com.tkay.expressad.exoplayer;

import android.os.Build;
import android.os.Handler;
import android.os.HandlerThread;
import android.os.Looper;
import android.util.Log;
import android.util.Pair;
import com.tkay.expressad.exoplayer.ae;
import com.tkay.expressad.exoplayer.e;
import com.tkay.expressad.exoplayer.h.af;
import com.tkay.expressad.exoplayer.h.r;
import com.tkay.expressad.exoplayer.h.s;
import com.tkay.expressad.exoplayer.i.h;
import com.tkay.expressad.exoplayer.x;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Iterator;

/* JADX INFO: loaded from: classes3.dex */
final class k implements Handler.Callback, e.a, r.a, s.b, h.a, x.a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static final int f6745a = 0;
    public static final int b = 1;
    public static final int c = 2;
    private static final String d = "ExoPlayerImplInternal";
    private static final int e = 0;
    private static final int f = 1;
    private static final int g = 2;
    private static final int h = 3;
    private static final int i = 4;
    private static final int j = 5;
    private static final int k = 6;
    private static final int l = 7;
    private static final int m = 8;
    private static final int n = 9;
    private static final int o = 10;
    private static final int p = 11;
    private static final int q = 12;
    private static final int r = 13;
    private static final int s = 14;
    private static final int t = 15;
    private static final int u = 10;
    private static final int v = 10;
    private static final int w = 1000;
    private static final long x = 500;
    private final com.tkay.expressad.exoplayer.i.h A;
    private final com.tkay.expressad.exoplayer.i.i B;
    private final p C;
    private final com.tkay.expressad.exoplayer.k.k D;
    private final HandlerThread E;
    private final Handler F;
    private final h G;
    private final ae.b H;
    private final ae.a I;
    private final e L;
    private final ArrayList<b> N;
    private final com.tkay.expressad.exoplayer.k.c O;
    private u R;
    private com.tkay.expressad.exoplayer.h.s S;
    private y[] T;
    private boolean U;
    private boolean V;
    private boolean W;
    private int X;
    private boolean Y;
    private int Z;
    private d aa;
    private long ab;
    private int ac;
    private final y[] y;
    private final z[] z;
    private final s P = new s();
    private final long J = 0;
    private final boolean K = false;
    private ac Q = ac.e;
    private final c M = new c(0);

    @Override // com.tkay.expressad.exoplayer.h.z.a
    public final /* synthetic */ void a(com.tkay.expressad.exoplayer.h.z zVar) {
        this.D.a(10, (com.tkay.expressad.exoplayer.h.r) zVar).sendToTarget();
    }

    public k(y[] yVarArr, com.tkay.expressad.exoplayer.i.h hVar, com.tkay.expressad.exoplayer.i.i iVar, p pVar, boolean z, int i2, boolean z2, Handler handler, h hVar2, com.tkay.expressad.exoplayer.k.c cVar) {
        this.y = yVarArr;
        this.A = hVar;
        this.B = iVar;
        this.C = pVar;
        this.V = z;
        this.X = i2;
        this.Y = z2;
        this.F = handler;
        this.G = hVar2;
        this.O = cVar;
        this.R = new u(ae.f6477a, -9223372036854775807L, af.f6633a, iVar);
        this.z = new z[yVarArr.length];
        for (int i3 = 0; i3 < yVarArr.length; i3++) {
            yVarArr[i3].a(i3);
            this.z[i3] = yVarArr[i3].b();
        }
        this.L = new e(this, cVar);
        this.N = new ArrayList<>();
        this.T = new y[0];
        this.H = new ae.b();
        this.I = new ae.a();
        hVar.a((h.a) this);
        HandlerThread handlerThread = new HandlerThread("ExoPlayerImplInternal:Handler", -16);
        this.E = handlerThread;
        handlerThread.start();
        this.D = cVar.a(this.E.getLooper(), this);
    }

    public final void a(com.tkay.expressad.exoplayer.h.s sVar, boolean z, boolean z2) {
        this.D.a(z ? 1 : 0, z2 ? 1 : 0, sVar).sendToTarget();
    }

    public final void a(boolean z) {
        this.D.a(1, z ? 1 : 0).sendToTarget();
    }

    public final void a(int i2) {
        this.D.a(12, i2).sendToTarget();
    }

    public final void b(boolean z) {
        this.D.a(13, z ? 1 : 0).sendToTarget();
    }

    public final void a(ae aeVar, int i2, long j2) {
        this.D.a(3, new d(aeVar, i2, j2)).sendToTarget();
    }

    public final void b(v vVar) {
        this.D.a(4, vVar).sendToTarget();
    }

    public final void a(ac acVar) {
        this.D.a(5, acVar).sendToTarget();
    }

    public final void c(boolean z) {
        this.D.a(6, z ? 1 : 0).sendToTarget();
    }

    @Override // com.tkay.expressad.exoplayer.x.a
    public final synchronized void a(x xVar) {
        if (this.U) {
            Log.w(d, "Ignoring messages sent after release.");
            xVar.a(false);
        } else {
            this.D.a(14, xVar).sendToTarget();
        }
    }

    public final synchronized void a() {
        if (!this.U && this.E.isAlive()) {
            this.D.b(7);
            long jA = 500;
            long jA2 = this.O.a() + 500;
            boolean z = false;
            while (!this.U && jA > 0) {
                try {
                    wait(jA);
                } catch (InterruptedException unused) {
                    z = true;
                }
                jA = jA2 - this.O.a();
            }
            if (z) {
                Thread.currentThread().interrupt();
            }
        }
    }

    public final Looper b() {
        return this.E.getLooper();
    }

    @Override // com.tkay.expressad.exoplayer.h.s.b
    public final void a(com.tkay.expressad.exoplayer.h.s sVar, ae aeVar, Object obj) {
        this.D.a(8, new a(sVar, aeVar, obj)).sendToTarget();
    }

    @Override // com.tkay.expressad.exoplayer.h.r.a
    public final void a(com.tkay.expressad.exoplayer.h.r rVar) {
        this.D.a(9, rVar).sendToTarget();
    }

    private void b(com.tkay.expressad.exoplayer.h.r rVar) {
        this.D.a(10, rVar).sendToTarget();
    }

    @Override // com.tkay.expressad.exoplayer.i.h.a
    public final void c() {
        this.D.b(11);
    }

    @Override // com.tkay.expressad.exoplayer.e.a
    public final void a(v vVar) {
        this.F.obtainMessage(1, vVar).sendToTarget();
        float f2 = vVar.b;
        for (q qVarE = this.P.e(); qVarE != null; qVarE = qVarE.i) {
            if (qVarE.k != null) {
                for (com.tkay.expressad.exoplayer.i.f fVar : qVarE.k.c.a()) {
                    if (fVar != null) {
                        fVar.a(f2);
                    }
                }
            }
        }
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Removed duplicated region for block: B:186:0x0435 A[Catch: IOException -> 0x056a, g -> 0x056f, RuntimeException -> 0x0934, TRY_LEAVE, TryCatch #17 {RuntimeException -> 0x0934, blocks: (B:499:0x0925, B:50:0x00fb, B:51:0x010e, B:52:0x0115, B:54:0x011a, B:58:0x0127, B:60:0x012f, B:61:0x0131, B:63:0x0135, B:65:0x013b, B:66:0x013f, B:68:0x0143, B:69:0x0148, B:70:0x014b, B:74:0x0179, B:76:0x017f, B:71:0x015b, B:73:0x0164, B:79:0x0191, B:81:0x019d, B:82:0x01a9, B:84:0x01b5, B:86:0x0214, B:87:0x0224, B:88:0x0229, B:90:0x0233, B:92:0x0252, B:94:0x0260, B:97:0x026e, B:104:0x0283, B:105:0x0286, B:107:0x028f, B:110:0x0299, B:112:0x029d, B:114:0x02a8, B:115:0x02ad, B:119:0x02ce, B:120:0x02d8, B:122:0x02e0, B:124:0x02e6, B:125:0x02eb, B:129:0x0316, B:134:0x0326, B:136:0x0336, B:138:0x033c, B:142:0x034d, B:143:0x0357, B:145:0x035f, B:147:0x036b, B:149:0x0372, B:151:0x0378, B:152:0x037d, B:155:0x0384, B:157:0x03a8, B:158:0x03b4, B:160:0x03b8, B:162:0x03c2, B:163:0x03cd, B:164:0x03d6, B:168:0x03de, B:176:0x03ff, B:177:0x0407, B:179:0x0411, B:181:0x041d, B:185:0x0425, B:186:0x0435, B:146:0x0369, B:191:0x0445, B:193:0x044a, B:197:0x0451, B:198:0x0457, B:199:0x045f, B:200:0x046a, B:202:0x047a, B:247:0x0534, B:249:0x0542, B:237:0x051b, B:233:0x0508, B:235:0x0518, B:251:0x0547, B:253:0x0558, B:255:0x055b, B:261:0x0569, B:204:0x0489, B:207:0x04a9, B:208:0x04b1, B:268:0x0574, B:270:0x057e, B:272:0x0582, B:273:0x0589, B:275:0x0598, B:277:0x05a4, B:278:0x05aa, B:279:0x05e2, B:281:0x05ea, B:284:0x05f1, B:286:0x05f7, B:290:0x05ff, B:292:0x0607, B:293:0x0614, B:296:0x061a, B:299:0x0626, B:300:0x0629, B:304:0x0632, B:305:0x0668, B:308:0x066f, B:310:0x0674, B:312:0x067e, B:314:0x0684, B:316:0x068a, B:317:0x068d, B:318:0x0690, B:320:0x0694, B:324:0x069d, B:326:0x06a2, B:329:0x06b2, B:332:0x06ba, B:333:0x06bd, B:338:0x06da, B:340:0x06df, B:343:0x06eb, B:345:0x06f1, B:349:0x0709, B:351:0x0713, B:354:0x071b, B:355:0x0729, B:356:0x072c, B:363:0x073a, B:365:0x0744, B:366:0x074c, B:368:0x0777, B:370:0x0780, B:374:0x0789, B:376:0x078f, B:378:0x0795, B:380:0x079f, B:382:0x07a5, B:391:0x07b6, B:396:0x07c0, B:398:0x07c7, B:399:0x07ca, B:403:0x07d9, B:405:0x07e1, B:407:0x07e7, B:443:0x086c, B:445:0x0873, B:447:0x0879, B:448:0x0881, B:450:0x0885, B:454:0x0893, B:461:0x08b0, B:452:0x088c, B:455:0x0899, B:457:0x089e, B:459:0x08a5, B:460:0x08ab, B:408:0x07f0, B:410:0x07f7, B:412:0x07fc, B:428:0x0840, B:430:0x0848, B:414:0x0803, B:417:0x080b, B:421:0x081a, B:423:0x0824, B:431:0x084c, B:433:0x0853, B:435:0x0858, B:439:0x0861, B:441:0x0866, B:442:0x0869, B:462:0x08b5, B:468:0x08bf, B:470:0x08c3, B:471:0x08ca, B:473:0x08d1, B:475:0x08d7, B:477:0x08db, B:480:0x08e2, B:488:0x08f4, B:492:0x08ff, B:496:0x0906, B:498:0x0917), top: B:527:0x0014 }] */
    /* JADX WARN: Removed duplicated region for block: B:245:0x0530 A[Catch: all -> 0x0546, TRY_LEAVE, TryCatch #15 {all -> 0x0546, blocks: (B:214:0x04bd, B:216:0x04c1, B:221:0x04cb, B:222:0x04d4, B:224:0x04de, B:228:0x04ea, B:230:0x04f4, B:232:0x0504, B:240:0x0521, B:244:0x052c, B:245:0x0530), top: B:528:0x04bd }] */
    /* JADX WARN: Removed duplicated region for block: B:249:0x0542 A[Catch: RuntimeException -> 0x0934, IOException -> 0x0938, g -> 0x093d, TryCatch #17 {RuntimeException -> 0x0934, blocks: (B:499:0x0925, B:50:0x00fb, B:51:0x010e, B:52:0x0115, B:54:0x011a, B:58:0x0127, B:60:0x012f, B:61:0x0131, B:63:0x0135, B:65:0x013b, B:66:0x013f, B:68:0x0143, B:69:0x0148, B:70:0x014b, B:74:0x0179, B:76:0x017f, B:71:0x015b, B:73:0x0164, B:79:0x0191, B:81:0x019d, B:82:0x01a9, B:84:0x01b5, B:86:0x0214, B:87:0x0224, B:88:0x0229, B:90:0x0233, B:92:0x0252, B:94:0x0260, B:97:0x026e, B:104:0x0283, B:105:0x0286, B:107:0x028f, B:110:0x0299, B:112:0x029d, B:114:0x02a8, B:115:0x02ad, B:119:0x02ce, B:120:0x02d8, B:122:0x02e0, B:124:0x02e6, B:125:0x02eb, B:129:0x0316, B:134:0x0326, B:136:0x0336, B:138:0x033c, B:142:0x034d, B:143:0x0357, B:145:0x035f, B:147:0x036b, B:149:0x0372, B:151:0x0378, B:152:0x037d, B:155:0x0384, B:157:0x03a8, B:158:0x03b4, B:160:0x03b8, B:162:0x03c2, B:163:0x03cd, B:164:0x03d6, B:168:0x03de, B:176:0x03ff, B:177:0x0407, B:179:0x0411, B:181:0x041d, B:185:0x0425, B:186:0x0435, B:146:0x0369, B:191:0x0445, B:193:0x044a, B:197:0x0451, B:198:0x0457, B:199:0x045f, B:200:0x046a, B:202:0x047a, B:247:0x0534, B:249:0x0542, B:237:0x051b, B:233:0x0508, B:235:0x0518, B:251:0x0547, B:253:0x0558, B:255:0x055b, B:261:0x0569, B:204:0x0489, B:207:0x04a9, B:208:0x04b1, B:268:0x0574, B:270:0x057e, B:272:0x0582, B:273:0x0589, B:275:0x0598, B:277:0x05a4, B:278:0x05aa, B:279:0x05e2, B:281:0x05ea, B:284:0x05f1, B:286:0x05f7, B:290:0x05ff, B:292:0x0607, B:293:0x0614, B:296:0x061a, B:299:0x0626, B:300:0x0629, B:304:0x0632, B:305:0x0668, B:308:0x066f, B:310:0x0674, B:312:0x067e, B:314:0x0684, B:316:0x068a, B:317:0x068d, B:318:0x0690, B:320:0x0694, B:324:0x069d, B:326:0x06a2, B:329:0x06b2, B:332:0x06ba, B:333:0x06bd, B:338:0x06da, B:340:0x06df, B:343:0x06eb, B:345:0x06f1, B:349:0x0709, B:351:0x0713, B:354:0x071b, B:355:0x0729, B:356:0x072c, B:363:0x073a, B:365:0x0744, B:366:0x074c, B:368:0x0777, B:370:0x0780, B:374:0x0789, B:376:0x078f, B:378:0x0795, B:380:0x079f, B:382:0x07a5, B:391:0x07b6, B:396:0x07c0, B:398:0x07c7, B:399:0x07ca, B:403:0x07d9, B:405:0x07e1, B:407:0x07e7, B:443:0x086c, B:445:0x0873, B:447:0x0879, B:448:0x0881, B:450:0x0885, B:454:0x0893, B:461:0x08b0, B:452:0x088c, B:455:0x0899, B:457:0x089e, B:459:0x08a5, B:460:0x08ab, B:408:0x07f0, B:410:0x07f7, B:412:0x07fc, B:428:0x0840, B:430:0x0848, B:414:0x0803, B:417:0x080b, B:421:0x081a, B:423:0x0824, B:431:0x084c, B:433:0x0853, B:435:0x0858, B:439:0x0861, B:441:0x0866, B:442:0x0869, B:462:0x08b5, B:468:0x08bf, B:470:0x08c3, B:471:0x08ca, B:473:0x08d1, B:475:0x08d7, B:477:0x08db, B:480:0x08e2, B:488:0x08f4, B:492:0x08ff, B:496:0x0906, B:498:0x0917), top: B:527:0x0014 }] */
    /* JADX WARN: Removed duplicated region for block: B:355:0x0729 A[Catch: RuntimeException -> 0x0934, IOException -> 0x0938, g -> 0x093d, TryCatch #17 {RuntimeException -> 0x0934, blocks: (B:499:0x0925, B:50:0x00fb, B:51:0x010e, B:52:0x0115, B:54:0x011a, B:58:0x0127, B:60:0x012f, B:61:0x0131, B:63:0x0135, B:65:0x013b, B:66:0x013f, B:68:0x0143, B:69:0x0148, B:70:0x014b, B:74:0x0179, B:76:0x017f, B:71:0x015b, B:73:0x0164, B:79:0x0191, B:81:0x019d, B:82:0x01a9, B:84:0x01b5, B:86:0x0214, B:87:0x0224, B:88:0x0229, B:90:0x0233, B:92:0x0252, B:94:0x0260, B:97:0x026e, B:104:0x0283, B:105:0x0286, B:107:0x028f, B:110:0x0299, B:112:0x029d, B:114:0x02a8, B:115:0x02ad, B:119:0x02ce, B:120:0x02d8, B:122:0x02e0, B:124:0x02e6, B:125:0x02eb, B:129:0x0316, B:134:0x0326, B:136:0x0336, B:138:0x033c, B:142:0x034d, B:143:0x0357, B:145:0x035f, B:147:0x036b, B:149:0x0372, B:151:0x0378, B:152:0x037d, B:155:0x0384, B:157:0x03a8, B:158:0x03b4, B:160:0x03b8, B:162:0x03c2, B:163:0x03cd, B:164:0x03d6, B:168:0x03de, B:176:0x03ff, B:177:0x0407, B:179:0x0411, B:181:0x041d, B:185:0x0425, B:186:0x0435, B:146:0x0369, B:191:0x0445, B:193:0x044a, B:197:0x0451, B:198:0x0457, B:199:0x045f, B:200:0x046a, B:202:0x047a, B:247:0x0534, B:249:0x0542, B:237:0x051b, B:233:0x0508, B:235:0x0518, B:251:0x0547, B:253:0x0558, B:255:0x055b, B:261:0x0569, B:204:0x0489, B:207:0x04a9, B:208:0x04b1, B:268:0x0574, B:270:0x057e, B:272:0x0582, B:273:0x0589, B:275:0x0598, B:277:0x05a4, B:278:0x05aa, B:279:0x05e2, B:281:0x05ea, B:284:0x05f1, B:286:0x05f7, B:290:0x05ff, B:292:0x0607, B:293:0x0614, B:296:0x061a, B:299:0x0626, B:300:0x0629, B:304:0x0632, B:305:0x0668, B:308:0x066f, B:310:0x0674, B:312:0x067e, B:314:0x0684, B:316:0x068a, B:317:0x068d, B:318:0x0690, B:320:0x0694, B:324:0x069d, B:326:0x06a2, B:329:0x06b2, B:332:0x06ba, B:333:0x06bd, B:338:0x06da, B:340:0x06df, B:343:0x06eb, B:345:0x06f1, B:349:0x0709, B:351:0x0713, B:354:0x071b, B:355:0x0729, B:356:0x072c, B:363:0x073a, B:365:0x0744, B:366:0x074c, B:368:0x0777, B:370:0x0780, B:374:0x0789, B:376:0x078f, B:378:0x0795, B:380:0x079f, B:382:0x07a5, B:391:0x07b6, B:396:0x07c0, B:398:0x07c7, B:399:0x07ca, B:403:0x07d9, B:405:0x07e1, B:407:0x07e7, B:443:0x086c, B:445:0x0873, B:447:0x0879, B:448:0x0881, B:450:0x0885, B:454:0x0893, B:461:0x08b0, B:452:0x088c, B:455:0x0899, B:457:0x089e, B:459:0x08a5, B:460:0x08ab, B:408:0x07f0, B:410:0x07f7, B:412:0x07fc, B:428:0x0840, B:430:0x0848, B:414:0x0803, B:417:0x080b, B:421:0x081a, B:423:0x0824, B:431:0x084c, B:433:0x0853, B:435:0x0858, B:439:0x0861, B:441:0x0866, B:442:0x0869, B:462:0x08b5, B:468:0x08bf, B:470:0x08c3, B:471:0x08ca, B:473:0x08d1, B:475:0x08d7, B:477:0x08db, B:480:0x08e2, B:488:0x08f4, B:492:0x08ff, B:496:0x0906, B:498:0x0917), top: B:527:0x0014 }] */
    /* JADX WARN: Removed duplicated region for block: B:426:0x083d  */
    /* JADX WARN: Removed duplicated region for block: B:431:0x084c A[Catch: RuntimeException -> 0x0934, IOException -> 0x0938, g -> 0x093d, TryCatch #17 {RuntimeException -> 0x0934, blocks: (B:499:0x0925, B:50:0x00fb, B:51:0x010e, B:52:0x0115, B:54:0x011a, B:58:0x0127, B:60:0x012f, B:61:0x0131, B:63:0x0135, B:65:0x013b, B:66:0x013f, B:68:0x0143, B:69:0x0148, B:70:0x014b, B:74:0x0179, B:76:0x017f, B:71:0x015b, B:73:0x0164, B:79:0x0191, B:81:0x019d, B:82:0x01a9, B:84:0x01b5, B:86:0x0214, B:87:0x0224, B:88:0x0229, B:90:0x0233, B:92:0x0252, B:94:0x0260, B:97:0x026e, B:104:0x0283, B:105:0x0286, B:107:0x028f, B:110:0x0299, B:112:0x029d, B:114:0x02a8, B:115:0x02ad, B:119:0x02ce, B:120:0x02d8, B:122:0x02e0, B:124:0x02e6, B:125:0x02eb, B:129:0x0316, B:134:0x0326, B:136:0x0336, B:138:0x033c, B:142:0x034d, B:143:0x0357, B:145:0x035f, B:147:0x036b, B:149:0x0372, B:151:0x0378, B:152:0x037d, B:155:0x0384, B:157:0x03a8, B:158:0x03b4, B:160:0x03b8, B:162:0x03c2, B:163:0x03cd, B:164:0x03d6, B:168:0x03de, B:176:0x03ff, B:177:0x0407, B:179:0x0411, B:181:0x041d, B:185:0x0425, B:186:0x0435, B:146:0x0369, B:191:0x0445, B:193:0x044a, B:197:0x0451, B:198:0x0457, B:199:0x045f, B:200:0x046a, B:202:0x047a, B:247:0x0534, B:249:0x0542, B:237:0x051b, B:233:0x0508, B:235:0x0518, B:251:0x0547, B:253:0x0558, B:255:0x055b, B:261:0x0569, B:204:0x0489, B:207:0x04a9, B:208:0x04b1, B:268:0x0574, B:270:0x057e, B:272:0x0582, B:273:0x0589, B:275:0x0598, B:277:0x05a4, B:278:0x05aa, B:279:0x05e2, B:281:0x05ea, B:284:0x05f1, B:286:0x05f7, B:290:0x05ff, B:292:0x0607, B:293:0x0614, B:296:0x061a, B:299:0x0626, B:300:0x0629, B:304:0x0632, B:305:0x0668, B:308:0x066f, B:310:0x0674, B:312:0x067e, B:314:0x0684, B:316:0x068a, B:317:0x068d, B:318:0x0690, B:320:0x0694, B:324:0x069d, B:326:0x06a2, B:329:0x06b2, B:332:0x06ba, B:333:0x06bd, B:338:0x06da, B:340:0x06df, B:343:0x06eb, B:345:0x06f1, B:349:0x0709, B:351:0x0713, B:354:0x071b, B:355:0x0729, B:356:0x072c, B:363:0x073a, B:365:0x0744, B:366:0x074c, B:368:0x0777, B:370:0x0780, B:374:0x0789, B:376:0x078f, B:378:0x0795, B:380:0x079f, B:382:0x07a5, B:391:0x07b6, B:396:0x07c0, B:398:0x07c7, B:399:0x07ca, B:403:0x07d9, B:405:0x07e1, B:407:0x07e7, B:443:0x086c, B:445:0x0873, B:447:0x0879, B:448:0x0881, B:450:0x0885, B:454:0x0893, B:461:0x08b0, B:452:0x088c, B:455:0x0899, B:457:0x089e, B:459:0x08a5, B:460:0x08ab, B:408:0x07f0, B:410:0x07f7, B:412:0x07fc, B:428:0x0840, B:430:0x0848, B:414:0x0803, B:417:0x080b, B:421:0x081a, B:423:0x0824, B:431:0x084c, B:433:0x0853, B:435:0x0858, B:439:0x0861, B:441:0x0866, B:442:0x0869, B:462:0x08b5, B:468:0x08bf, B:470:0x08c3, B:471:0x08ca, B:473:0x08d1, B:475:0x08d7, B:477:0x08db, B:480:0x08e2, B:488:0x08f4, B:492:0x08ff, B:496:0x0906, B:498:0x0917), top: B:527:0x0014 }] */
    /* JADX WARN: Removed duplicated region for block: B:439:0x0861 A[Catch: RuntimeException -> 0x0934, IOException -> 0x0938, g -> 0x093d, TRY_LEAVE, TryCatch #17 {RuntimeException -> 0x0934, blocks: (B:499:0x0925, B:50:0x00fb, B:51:0x010e, B:52:0x0115, B:54:0x011a, B:58:0x0127, B:60:0x012f, B:61:0x0131, B:63:0x0135, B:65:0x013b, B:66:0x013f, B:68:0x0143, B:69:0x0148, B:70:0x014b, B:74:0x0179, B:76:0x017f, B:71:0x015b, B:73:0x0164, B:79:0x0191, B:81:0x019d, B:82:0x01a9, B:84:0x01b5, B:86:0x0214, B:87:0x0224, B:88:0x0229, B:90:0x0233, B:92:0x0252, B:94:0x0260, B:97:0x026e, B:104:0x0283, B:105:0x0286, B:107:0x028f, B:110:0x0299, B:112:0x029d, B:114:0x02a8, B:115:0x02ad, B:119:0x02ce, B:120:0x02d8, B:122:0x02e0, B:124:0x02e6, B:125:0x02eb, B:129:0x0316, B:134:0x0326, B:136:0x0336, B:138:0x033c, B:142:0x034d, B:143:0x0357, B:145:0x035f, B:147:0x036b, B:149:0x0372, B:151:0x0378, B:152:0x037d, B:155:0x0384, B:157:0x03a8, B:158:0x03b4, B:160:0x03b8, B:162:0x03c2, B:163:0x03cd, B:164:0x03d6, B:168:0x03de, B:176:0x03ff, B:177:0x0407, B:179:0x0411, B:181:0x041d, B:185:0x0425, B:186:0x0435, B:146:0x0369, B:191:0x0445, B:193:0x044a, B:197:0x0451, B:198:0x0457, B:199:0x045f, B:200:0x046a, B:202:0x047a, B:247:0x0534, B:249:0x0542, B:237:0x051b, B:233:0x0508, B:235:0x0518, B:251:0x0547, B:253:0x0558, B:255:0x055b, B:261:0x0569, B:204:0x0489, B:207:0x04a9, B:208:0x04b1, B:268:0x0574, B:270:0x057e, B:272:0x0582, B:273:0x0589, B:275:0x0598, B:277:0x05a4, B:278:0x05aa, B:279:0x05e2, B:281:0x05ea, B:284:0x05f1, B:286:0x05f7, B:290:0x05ff, B:292:0x0607, B:293:0x0614, B:296:0x061a, B:299:0x0626, B:300:0x0629, B:304:0x0632, B:305:0x0668, B:308:0x066f, B:310:0x0674, B:312:0x067e, B:314:0x0684, B:316:0x068a, B:317:0x068d, B:318:0x0690, B:320:0x0694, B:324:0x069d, B:326:0x06a2, B:329:0x06b2, B:332:0x06ba, B:333:0x06bd, B:338:0x06da, B:340:0x06df, B:343:0x06eb, B:345:0x06f1, B:349:0x0709, B:351:0x0713, B:354:0x071b, B:355:0x0729, B:356:0x072c, B:363:0x073a, B:365:0x0744, B:366:0x074c, B:368:0x0777, B:370:0x0780, B:374:0x0789, B:376:0x078f, B:378:0x0795, B:380:0x079f, B:382:0x07a5, B:391:0x07b6, B:396:0x07c0, B:398:0x07c7, B:399:0x07ca, B:403:0x07d9, B:405:0x07e1, B:407:0x07e7, B:443:0x086c, B:445:0x0873, B:447:0x0879, B:448:0x0881, B:450:0x0885, B:454:0x0893, B:461:0x08b0, B:452:0x088c, B:455:0x0899, B:457:0x089e, B:459:0x08a5, B:460:0x08ab, B:408:0x07f0, B:410:0x07f7, B:412:0x07fc, B:428:0x0840, B:430:0x0848, B:414:0x0803, B:417:0x080b, B:421:0x081a, B:423:0x0824, B:431:0x084c, B:433:0x0853, B:435:0x0858, B:439:0x0861, B:441:0x0866, B:442:0x0869, B:462:0x08b5, B:468:0x08bf, B:470:0x08c3, B:471:0x08ca, B:473:0x08d1, B:475:0x08d7, B:477:0x08db, B:480:0x08e2, B:488:0x08f4, B:492:0x08ff, B:496:0x0906, B:498:0x0917), top: B:527:0x0014 }] */
    /* JADX WARN: Type inference failed for: r2v1 */
    /* JADX WARN: Type inference failed for: r2v11, types: [boolean] */
    /* JADX WARN: Type inference failed for: r2v12, types: [android.os.Handler] */
    /* JADX WARN: Type inference failed for: r2v132 */
    /* JADX WARN: Type inference failed for: r2v133 */
    /* JADX WARN: Type inference failed for: r2v15, types: [boolean] */
    /* JADX WARN: Type inference failed for: r2v16, types: [android.os.Handler] */
    /* JADX WARN: Type inference failed for: r2v174, types: [int] */
    /* JADX WARN: Type inference failed for: r2v175 */
    /* JADX WARN: Type inference failed for: r2v176 */
    /* JADX WARN: Type inference failed for: r2v183 */
    /* JADX WARN: Type inference failed for: r2v189 */
    /* JADX WARN: Type inference failed for: r2v19 */
    /* JADX WARN: Type inference failed for: r2v190 */
    /* JADX WARN: Type inference failed for: r2v191 */
    /* JADX WARN: Type inference failed for: r2v2 */
    /* JADX WARN: Type inference failed for: r2v20 */
    /* JADX WARN: Type inference failed for: r2v205 */
    /* JADX WARN: Type inference failed for: r2v228 */
    /* JADX WARN: Type inference failed for: r2v229 */
    /* JADX WARN: Type inference failed for: r2v23 */
    /* JADX WARN: Type inference failed for: r2v230 */
    /* JADX WARN: Type inference failed for: r2v24 */
    /* JADX WARN: Type inference failed for: r2v277 */
    /* JADX WARN: Type inference failed for: r2v278 */
    /* JADX WARN: Type inference failed for: r2v279 */
    /* JADX WARN: Type inference failed for: r2v280 */
    /* JADX WARN: Type inference failed for: r2v281 */
    /* JADX WARN: Type inference failed for: r2v282 */
    /* JADX WARN: Type inference failed for: r2v283 */
    /* JADX WARN: Type inference failed for: r2v284 */
    /* JADX WARN: Type inference failed for: r2v285 */
    /* JADX WARN: Type inference failed for: r2v286 */
    /* JADX WARN: Type inference failed for: r2v287 */
    /* JADX WARN: Type inference failed for: r2v288 */
    /* JADX WARN: Type inference failed for: r2v5 */
    /* JADX WARN: Type inference failed for: r2v6 */
    /* JADX WARN: Type inference failed for: r2v7, types: [boolean] */
    /* JADX WARN: Type inference failed for: r31v0, types: [com.tkay.expressad.exoplayer.h.r$a, com.tkay.expressad.exoplayer.h.s$b, com.tkay.expressad.exoplayer.k] */
    /* JADX WARN: Type inference failed for: r4v10 */
    /* JADX WARN: Type inference failed for: r4v11 */
    /* JADX WARN: Type inference failed for: r4v14 */
    /* JADX WARN: Type inference failed for: r4v15 */
    /* JADX WARN: Type inference failed for: r4v42 */
    /* JADX WARN: Type inference failed for: r4v43 */
    /* JADX WARN: Type inference failed for: r4v46 */
    /* JADX WARN: Type inference failed for: r4v47 */
    /* JADX WARN: Type inference failed for: r4v48 */
    /* JADX WARN: Type inference failed for: r4v49 */
    /* JADX WARN: Type inference failed for: r4v50 */
    /* JADX WARN: Type inference failed for: r4v51 */
    /* JADX WARN: Type inference failed for: r4v52 */
    /* JADX WARN: Type inference failed for: r4v53 */
    /* JADX WARN: Type inference failed for: r4v6, types: [int] */
    /* JADX WARN: Type inference failed for: r4v7, types: [int] */
    /* JADX WARN: Type inference failed for: r4v8 */
    /* JADX WARN: Type inference failed for: r4v9 */
    @Override // android.os.Handler.Callback
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public final boolean handleMessage(android.os.Message r32) {
        /*
            Method dump skipped, instruction units count: 2488
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.tkay.expressad.exoplayer.k.handleMessage(android.os.Message):boolean");
    }

    private void b(int i2) {
        if (this.R.f != i2) {
            this.R = this.R.b(i2);
        }
    }

    private void d(boolean z) {
        if (this.R.g != z) {
            this.R = this.R.a(z);
        }
    }

    private void d() {
        if (this.M.a(this.R)) {
            this.F.obtainMessage(0, this.M.b, this.M.c ? this.M.d : -1, this.R).sendToTarget();
            this.M.b(this.R);
        }
    }

    private void b(com.tkay.expressad.exoplayer.h.s sVar, boolean z, boolean z2) {
        this.Z++;
        a(true, z, z2);
        this.C.a();
        this.S = sVar;
        b(2);
        sVar.a(this.G, true, this);
        this.D.b(2);
    }

    private void e(boolean z) {
        this.W = false;
        this.V = z;
        if (!z) {
            f();
            g();
        } else if (this.R.f == 3) {
            e();
            this.D.b(2);
        } else if (this.R.f == 2) {
            this.D.b(2);
        }
    }

    private void c(int i2) throws g {
        this.X = i2;
        if (this.P.a(i2)) {
            return;
        }
        g(true);
    }

    private void f(boolean z) throws g {
        this.Y = z;
        if (this.P.a(z)) {
            return;
        }
        g(true);
    }

    private void g(boolean z) throws g {
        s.a aVar = this.P.c().h.f6805a;
        long jA = a(aVar, this.R.j, true);
        if (jA != this.R.j) {
            u uVar = this.R;
            this.R = uVar.a(aVar, jA, uVar.e);
            if (z) {
                this.M.b(4);
            }
        }
    }

    private void e() {
        this.W = false;
        this.L.a();
        for (y yVar : this.T) {
            yVar.b_();
        }
    }

    private void f() {
        this.L.b();
        for (y yVar : this.T) {
            a(yVar);
        }
    }

    private void g() {
        long jA;
        if (this.P.f()) {
            q qVarC = this.P.c();
            long jC = qVarC.f6804a.c();
            if (jC != -9223372036854775807L) {
                a(jC);
                if (jC != this.R.j) {
                    u uVar = this.R;
                    this.R = uVar.a(uVar.c, jC, this.R.e);
                    this.M.b(4);
                }
            } else {
                long jC2 = this.L.c();
                this.ab = jC2;
                long j2 = jC2 - qVarC.e;
                b(this.R.j, j2);
                this.R.j = j2;
            }
            u uVar2 = this.R;
            if (this.T.length == 0) {
                jA = qVarC.h.e;
            } else {
                jA = qVarC.a(true);
            }
            uVar2.k = jA;
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:116:0x021c  */
    /* JADX WARN: Removed duplicated region for block: B:149:0x02a3  */
    /* JADX WARN: Removed duplicated region for block: B:154:0x02b3  */
    /* JADX WARN: Removed duplicated region for block: B:87:0x019d  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    private void h() throws com.tkay.expressad.exoplayer.g {
        /*
            Method dump skipped, instruction units count: 791
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.tkay.expressad.exoplayer.k.h():void");
    }

    private void a(long j2, long j3) {
        this.D.b();
        this.D.a(j2 + j3);
    }

    /* JADX WARN: Removed duplicated region for block: B:47:0x00d4  */
    /* JADX WARN: Removed duplicated region for block: B:56:? A[RETURN, SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    private void a(com.tkay.expressad.exoplayer.k.d r21) {
        /*
            Method dump skipped, instruction units count: 237
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.tkay.expressad.exoplayer.k.a(com.tkay.expressad.exoplayer.k$d):void");
    }

    private long a(s.a aVar, long j2) {
        return a(aVar, j2, this.P.c() != this.P.d());
    }

    private long a(s.a aVar, long j2, boolean z) throws g {
        f();
        this.W = false;
        b(2);
        q qVarC = this.P.c();
        q qVarH = qVarC;
        while (true) {
            if (qVarH == null) {
                break;
            }
            if (a(aVar, j2, qVarH)) {
                this.P.a(qVarH);
                break;
            }
            qVarH = this.P.h();
        }
        if (qVarC != qVarH || z) {
            for (y yVar : this.T) {
                b(yVar);
            }
            this.T = new y[0];
            qVarC = null;
        }
        if (qVarH != null) {
            a(qVarC);
            if (qVarH.g) {
                long jB = qVarH.f6804a.b(j2);
                qVarH.f6804a.a(jB - this.J, this.K);
                j2 = jB;
            }
            a(j2);
            r();
        } else {
            this.P.b(true);
            a(j2);
        }
        this.D.b(2);
        return j2;
    }

    private boolean a(s.a aVar, long j2, q qVar) {
        if (aVar.equals(qVar.h.f6805a) && qVar.f) {
            this.R.f6812a.a(qVar.h.f6805a.f6667a, this.I, false);
            int iB = this.I.b(j2);
            if (iB == -1 || this.I.a(iB) == qVar.h.c) {
                return true;
            }
        }
        return false;
    }

    private void a(long j2) {
        if (this.P.f()) {
            j2 += this.P.c().e;
        }
        this.ab = j2;
        this.L.a(j2);
        for (y yVar : this.T) {
            yVar.a(this.ab);
        }
    }

    private void c(v vVar) {
        this.L.a(vVar);
    }

    private void b(ac acVar) {
        this.Q = acVar;
    }

    private void a(boolean z, boolean z2) {
        a(true, z, z);
        this.M.a(this.Z + (z2 ? 1 : 0));
        this.Z = 0;
        this.C.b();
        b(1);
    }

    private void i() {
        a(true, true, true);
        this.C.c();
        b(1);
        if (Build.VERSION.SDK_INT >= 18) {
            this.E.quitSafely();
        } else {
            this.E.quit();
        }
        synchronized (this) {
            this.U = true;
            notifyAll();
        }
    }

    private int j() {
        ae aeVar = this.R.f6812a;
        if (aeVar.a()) {
            return 0;
        }
        return aeVar.a(aeVar.b(this.Y), this.H, false).f;
    }

    private void a(boolean z, boolean z2, boolean z3) {
        com.tkay.expressad.exoplayer.h.s sVar;
        this.D.b();
        this.W = false;
        this.L.b();
        this.ab = 0L;
        for (y yVar : this.T) {
            try {
                b(yVar);
            } catch (g | RuntimeException e2) {
                Log.e(d, "Stop failed.", e2);
            }
        }
        this.T = new y[0];
        this.P.b(!z2);
        d(false);
        if (z2) {
            this.aa = null;
        }
        if (z3) {
            this.P.a(ae.f6477a);
            Iterator<b> it = this.N.iterator();
            while (it.hasNext()) {
                it.next().f6748a.a(false);
            }
            this.N.clear();
            this.ac = 0;
        }
        this.R = new u(z3 ? ae.f6477a : this.R.f6812a, z3 ? null : this.R.b, z2 ? new s.a(j()) : this.R.c, z2 ? -9223372036854775807L : this.R.j, z2 ? -9223372036854775807L : this.R.e, this.R.f, false, z3 ? af.f6633a : this.R.h, z3 ? this.B : this.R.i);
        if (!z || (sVar = this.S) == null) {
            return;
        }
        sVar.a(this);
        this.S = null;
    }

    private void c(x xVar) {
        if (xVar.f() == -9223372036854775807L) {
            d(xVar);
            return;
        }
        if (this.S == null || this.Z > 0) {
            this.N.add(new b(xVar));
            return;
        }
        b bVar = new b(xVar);
        if (a(bVar)) {
            this.N.add(bVar);
            Collections.sort(this.N);
        } else {
            xVar.a(false);
        }
    }

    private void d(x xVar) {
        if (xVar.e().getLooper() == this.D.a()) {
            f(xVar);
            if (this.R.f == 3 || this.R.f == 2) {
                this.D.b(2);
                return;
            }
            return;
        }
        this.D.a(15, xVar).sendToTarget();
    }

    private void e(x xVar) {
        xVar.e().post(new AnonymousClass1(xVar));
    }

    /* JADX INFO: renamed from: com.tkay.expressad.exoplayer.k$1, reason: invalid class name */
    final class AnonymousClass1 implements Runnable {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        final /* synthetic */ x f6746a;

        AnonymousClass1(x xVar) {
            this.f6746a = xVar;
        }

        @Override // java.lang.Runnable
        public final void run() {
            try {
                k.f(this.f6746a);
            } catch (g e) {
                Log.e(k.d, "Unexpected error delivering message on external thread.", e);
                throw new RuntimeException(e);
            }
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static void f(x xVar) {
        if (xVar.j()) {
            return;
        }
        try {
            xVar.b().a(xVar.c(), xVar.d());
        } finally {
            xVar.a(true);
        }
    }

    private void k() {
        for (int size = this.N.size() - 1; size >= 0; size--) {
            if (!a(this.N.get(size))) {
                this.N.get(size).f6748a.a(false);
                this.N.remove(size);
            }
        }
        Collections.sort(this.N);
    }

    private boolean a(b bVar) {
        if (bVar.d == null) {
            Pair<Integer, Long> pairA = a(new d(bVar.f6748a.a(), bVar.f6748a.g(), com.tkay.expressad.exoplayer.b.b(bVar.f6748a.f())), false);
            if (pairA == null) {
                return false;
            }
            bVar.a(((Integer) pairA.first).intValue(), ((Long) pairA.second).longValue(), this.R.f6812a.a(((Integer) pairA.first).intValue(), this.I, true).b);
        } else {
            int iA = this.R.f6812a.a(bVar.d);
            if (iA == -1) {
                return false;
            }
            bVar.b = iA;
        }
        return true;
    }

    /* JADX WARN: Code restructure failed: missing block: B:61:0x0036, code lost:
    
        r1 = null;
     */
    /* JADX WARN: Code restructure failed: missing block: B:62:0x006f, code lost:
    
        r1 = null;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    private void b(long r6, long r8) {
        /*
            Method dump skipped, instruction units count: 238
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.tkay.expressad.exoplayer.k.b(long, long):void");
    }

    private static void a(y yVar) {
        if (yVar.a_() == 2) {
            yVar.k();
        }
    }

    private void b(y yVar) {
        this.L.b(yVar);
        a(yVar);
        yVar.l();
    }

    private void l() throws g {
        if (this.P.f()) {
            float f2 = this.L.e().b;
            q qVarD = this.P.d();
            boolean z = true;
            for (q qVarC = this.P.c(); qVarC != null && qVarC.f; qVarC = qVarC.i) {
                if (!qVarC.a(f2)) {
                    if (qVarC == qVarD) {
                        z = false;
                    }
                } else {
                    if (z) {
                        q qVarC2 = this.P.c();
                        boolean zA = this.P.a(qVarC2);
                        boolean[] zArr = new boolean[this.y.length];
                        long jA = qVarC2.a(this.R.j, zA, zArr);
                        a(qVarC2.k);
                        if (this.R.f != 4 && jA != this.R.j) {
                            u uVar = this.R;
                            this.R = uVar.a(uVar.c, jA, this.R.e);
                            this.M.b(4);
                            a(jA);
                        }
                        boolean[] zArr2 = new boolean[this.y.length];
                        int i2 = 0;
                        int i3 = 0;
                        while (true) {
                            y[] yVarArr = this.y;
                            if (i2 >= yVarArr.length) {
                                break;
                            }
                            y yVar = yVarArr[i2];
                            zArr2[i2] = yVar.a_() != 0;
                            com.tkay.expressad.exoplayer.h.y yVar2 = qVarC2.c[i2];
                            if (yVar2 != null) {
                                i3++;
                            }
                            if (zArr2[i2]) {
                                if (yVar2 != yVar.f()) {
                                    b(yVar);
                                } else if (zArr[i2]) {
                                    yVar.a(this.ab);
                                }
                            }
                            i2++;
                        }
                        this.R = this.R.a(qVarC2.j, qVarC2.k);
                        a(zArr2, i3);
                    } else {
                        this.P.a(qVarC);
                        if (qVarC.f) {
                            qVarC.b(Math.max(qVarC.h.b, this.ab - qVarC.e));
                            a(qVarC.k);
                        }
                    }
                    if (this.R.f != 4) {
                        r();
                        g();
                        this.D.b(2);
                        return;
                    }
                    return;
                }
            }
        }
    }

    private void a(com.tkay.expressad.exoplayer.i.i iVar) {
        this.C.a(this.y, iVar.c);
    }

    private void a(float f2) {
        for (q qVarE = this.P.e(); qVarE != null; qVarE = qVarE.i) {
            if (qVarE.k != null) {
                for (com.tkay.expressad.exoplayer.i.f fVar : qVarE.k.c.a()) {
                    if (fVar != null) {
                        fVar.a(f2);
                    }
                }
            }
        }
    }

    private boolean h(boolean z) {
        if (this.T.length == 0) {
            return m();
        }
        if (!z) {
            return false;
        }
        if (!this.R.g) {
            return true;
        }
        q qVarB = this.P.b();
        long jA = qVarB.a(!qVarB.h.g);
        return jA == Long.MIN_VALUE || this.C.a(jA - (this.ab - qVarB.e), this.L.e().b, this.W);
    }

    private boolean m() {
        q qVarC = this.P.c();
        long j2 = qVarC.h.e;
        if (j2 == -9223372036854775807L || this.R.j < j2) {
            return true;
        }
        if (qVarC.i != null) {
            return qVarC.i.f || qVarC.i.h.f6805a.a();
        }
        return false;
    }

    private void n() {
        q qVarB = this.P.b();
        q qVarD = this.P.d();
        if (qVarB == null || qVarB.f) {
            return;
        }
        if (qVarD == null || qVarD.i == qVarB) {
            for (y yVar : this.T) {
                if (!yVar.g()) {
                    return;
                }
            }
            qVarB.f6804a.a();
        }
    }

    private void a(a aVar) throws g {
        if (aVar.f6747a != this.S) {
            return;
        }
        ae aeVar = this.R.f6812a;
        ae aeVar2 = aVar.b;
        Object obj = aVar.c;
        this.P.a(aeVar2);
        this.R = this.R.a(aeVar2, obj);
        for (int size = this.N.size() - 1; size >= 0; size--) {
            if (!a(this.N.get(size))) {
                this.N.get(size).f6748a.a(false);
                this.N.remove(size);
            }
        }
        Collections.sort(this.N);
        int i2 = this.Z;
        if (i2 > 0) {
            this.M.a(i2);
            this.Z = 0;
            d dVar = this.aa;
            if (dVar != null) {
                Pair<Integer, Long> pairA = a(dVar, true);
                this.aa = null;
                if (pairA == null) {
                    o();
                    return;
                }
                int iIntValue = ((Integer) pairA.first).intValue();
                long jLongValue = ((Long) pairA.second).longValue();
                s.a aVarA = this.P.a(iIntValue, jLongValue);
                this.R = this.R.a(aVarA, aVarA.a() ? 0L : jLongValue, jLongValue);
                return;
            }
            if (this.R.d == -9223372036854775807L) {
                if (aeVar2.a()) {
                    o();
                    return;
                }
                Pair<Integer, Long> pairA2 = a(aeVar2, aeVar2.b(this.Y));
                int iIntValue2 = ((Integer) pairA2.first).intValue();
                long jLongValue2 = ((Long) pairA2.second).longValue();
                s.a aVarA2 = this.P.a(iIntValue2, jLongValue2);
                this.R = this.R.a(aVarA2, aVarA2.a() ? 0L : jLongValue2, jLongValue2);
                return;
            }
            return;
        }
        int i3 = this.R.c.f6667a;
        long j2 = this.R.e;
        if (aeVar.a()) {
            if (aeVar2.a()) {
                return;
            }
            s.a aVarA3 = this.P.a(i3, j2);
            this.R = this.R.a(aVarA3, aVarA3.a() ? 0L : j2, j2);
            return;
        }
        q qVarE = this.P.e();
        int iA = aeVar2.a(qVarE == null ? aeVar.a(i3, this.I, true).b : qVarE.b);
        if (iA == -1) {
            int iA2 = a(i3, aeVar, aeVar2);
            if (iA2 == -1) {
                o();
                return;
            }
            Pair<Integer, Long> pairA3 = a(aeVar2, aeVar2.a(iA2, this.I, false).c);
            int iIntValue3 = ((Integer) pairA3.first).intValue();
            long jLongValue3 = ((Long) pairA3.second).longValue();
            s.a aVarA4 = this.P.a(iIntValue3, jLongValue3);
            aeVar2.a(iIntValue3, this.I, true);
            if (qVarE != null) {
                Object obj2 = this.I.b;
                qVarE.h = qVarE.h.a();
                while (qVarE.i != null) {
                    qVarE = qVarE.i;
                    if (qVarE.b.equals(obj2)) {
                        qVarE.h = this.P.a(qVarE.h, iIntValue3);
                    } else {
                        qVarE.h = qVarE.h.a();
                    }
                }
            }
            this.R = this.R.a(aVarA4, a(aVarA4, aVarA4.a() ? 0L : jLongValue3), jLongValue3);
            return;
        }
        if (iA != i3) {
            this.R = this.R.a(iA);
        }
        s.a aVar2 = this.R.c;
        if (aVar2.a()) {
            s.a aVarA5 = this.P.a(iA, j2);
            if (!aVarA5.equals(aVar2)) {
                this.R = this.R.a(aVarA5, a(aVarA5, aVarA5.a() ? 0L : j2), j2);
                return;
            }
        }
        if (this.P.a(aVar2, this.ab)) {
            return;
        }
        g(false);
    }

    private void o() {
        b(4);
        a(false, true, false);
    }

    private int a(int i2, ae aeVar, ae aeVar2) {
        int iC = aeVar.c();
        int iA = i2;
        int iA2 = -1;
        for (int i3 = 0; i3 < iC && iA2 == -1; i3++) {
            iA = aeVar.a(iA, this.I, this.H, this.X, this.Y);
            if (iA == -1) {
                break;
            }
            iA2 = aeVar2.a(aeVar.a(iA, this.I, true).b);
        }
        return iA2;
    }

    private Pair<Integer, Long> a(d dVar, boolean z) {
        int iA;
        ae aeVar = this.R.f6812a;
        ae aeVar2 = dVar.f6750a;
        if (aeVar.a()) {
            return null;
        }
        if (aeVar2.a()) {
            aeVar2 = aeVar;
        }
        try {
            Pair<Integer, Long> pairA = aeVar2.a(this.H, this.I, dVar.b, dVar.c);
            if (aeVar == aeVar2) {
                return pairA;
            }
            int iA2 = aeVar.a(aeVar2.a(((Integer) pairA.first).intValue(), this.I, true).b);
            if (iA2 != -1) {
                return Pair.create(Integer.valueOf(iA2), (Long) pairA.second);
            }
            if (!z || (iA = a(((Integer) pairA.first).intValue(), aeVar2, aeVar)) == -1) {
                return null;
            }
            return a(aeVar, aeVar.a(iA, this.I, false).c);
        } catch (IndexOutOfBoundsException unused) {
            throw new o(aeVar, dVar.b, dVar.c);
        }
    }

    private Pair<Integer, Long> a(ae aeVar, int i2) {
        return aeVar.a(this.H, this.I, i2, -9223372036854775807L);
    }

    /* JADX WARN: Removed duplicated region for block: B:91:0x018e  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    private void p() throws com.tkay.expressad.exoplayer.g {
        /*
            Method dump skipped, instruction units count: 405
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.tkay.expressad.exoplayer.k.p():void");
    }

    private void q() {
        this.P.a(this.ab);
        if (this.P.a()) {
            r rVarA = this.P.a(this.ab, this.R);
            if (rVarA == null) {
                this.S.b();
                return;
            }
            this.P.a(this.z, this.A, this.C.d(), this.S, this.R.f6812a.a(rVarA.f6805a.f6667a, this.I, true).b, rVarA).a(this, rVarA.b);
            d(true);
        }
    }

    private void c(com.tkay.expressad.exoplayer.h.r rVar) throws g {
        if (this.P.a(rVar)) {
            q qVarB = this.P.b();
            float f2 = this.L.e().b;
            qVarB.f = true;
            qVarB.j = qVarB.f6804a.b();
            qVarB.a(f2);
            long jB = qVarB.b(qVarB.h.b);
            qVarB.e += qVarB.h.b - jB;
            r rVar2 = qVarB.h;
            qVarB.h = new r(rVar2.f6805a, jB, rVar2.c, rVar2.d, rVar2.e, rVar2.f, rVar2.g);
            a(qVarB.k);
            if (!this.P.f()) {
                a(this.P.h().h.b);
                a((q) null);
            }
            r();
        }
    }

    private void d(com.tkay.expressad.exoplayer.h.r rVar) {
        if (this.P.a(rVar)) {
            this.P.a(this.ab);
            r();
        }
    }

    private void r() {
        q qVarB = this.P.b();
        long jB = qVarB.b();
        if (jB == Long.MIN_VALUE) {
            d(false);
            return;
        }
        boolean zA = this.C.a(jB - (this.ab - qVarB.e), this.L.e().b);
        d(zA);
        if (zA) {
            qVarB.a(this.ab);
        }
    }

    private void a(q qVar) throws g {
        q qVarC = this.P.c();
        if (qVarC == null || qVar == qVarC) {
            return;
        }
        boolean[] zArr = new boolean[this.y.length];
        int i2 = 0;
        int i3 = 0;
        while (true) {
            y[] yVarArr = this.y;
            if (i2 < yVarArr.length) {
                y yVar = yVarArr[i2];
                zArr[i2] = yVar.a_() != 0;
                if (qVarC.k.a(i2)) {
                    i3++;
                }
                if (zArr[i2] && (!qVarC.k.a(i2) || (yVar.i() && yVar.f() == qVar.c[i2]))) {
                    b(yVar);
                }
                i2++;
            } else {
                this.R = this.R.a(qVarC.j, qVarC.k);
                a(zArr, i3);
                return;
            }
        }
    }

    private void a(boolean[] zArr, int i2) throws g {
        this.T = new y[i2];
        q qVarC = this.P.c();
        int i3 = 0;
        for (int i4 = 0; i4 < this.y.length; i4++) {
            if (qVarC.k.a(i4)) {
                a(i4, zArr[i4], i3);
                i3++;
            }
        }
    }

    private void a(int i2, boolean z, int i3) throws g {
        q qVarC = this.P.c();
        y yVar = this.y[i2];
        this.T[i3] = yVar;
        if (yVar.a_() == 0) {
            aa aaVar = qVarC.k.b[i2];
            m[] mVarArrA = a(qVarC.k.c.a(i2));
            boolean z2 = this.V && this.R.f == 3;
            yVar.a(aaVar, mVarArrA, qVarC.c[i2], this.ab, !z && z2, qVarC.e);
            this.L.a(yVar);
            if (z2) {
                yVar.b_();
            }
        }
    }

    private boolean c(y yVar) {
        q qVarD = this.P.d();
        return qVarD.i != null && qVarD.i.f && yVar.g();
    }

    private static m[] a(com.tkay.expressad.exoplayer.i.f fVar) {
        int iG = fVar != null ? fVar.g() : 0;
        m[] mVarArr = new m[iG];
        for (int i2 = 0; i2 < iG; i2++) {
            mVarArr[i2] = fVar.a(i2);
        }
        return mVarArr;
    }

    private static final class d {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public final ae f6750a;
        public final int b;
        public final long c;

        public d(ae aeVar, int i, long j) {
            this.f6750a = aeVar;
            this.b = i;
            this.c = j;
        }
    }

    private static final class b implements Comparable<b> {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public final x f6748a;
        public int b;
        public long c;
        public Object d;

        @Override // java.lang.Comparable
        public final /* synthetic */ int compareTo(b bVar) {
            b bVar2 = bVar;
            if ((this.d == null) != (bVar2.d == null)) {
                return this.d != null ? -1 : 1;
            }
            if (this.d == null) {
                return 0;
            }
            int i = this.b - bVar2.b;
            return i != 0 ? i : com.tkay.expressad.exoplayer.k.af.b(this.c, bVar2.c);
        }

        public b(x xVar) {
            this.f6748a = xVar;
        }

        public final void a(int i, long j, Object obj) {
            this.b = i;
            this.c = j;
            this.d = obj;
        }

        private int a(b bVar) {
            if ((this.d == null) != (bVar.d == null)) {
                return this.d != null ? -1 : 1;
            }
            if (this.d == null) {
                return 0;
            }
            int i = this.b - bVar.b;
            return i != 0 ? i : com.tkay.expressad.exoplayer.k.af.b(this.c, bVar.c);
        }
    }

    private static final class a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public final com.tkay.expressad.exoplayer.h.s f6747a;
        public final ae b;
        public final Object c;

        public a(com.tkay.expressad.exoplayer.h.s sVar, ae aeVar, Object obj) {
            this.f6747a = sVar;
            this.b = aeVar;
            this.c = obj;
        }
    }

    private static final class c {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private u f6749a;
        private int b;
        private boolean c;
        private int d;

        private c() {
        }

        /* synthetic */ c(byte b) {
            this();
        }

        public final boolean a(u uVar) {
            return uVar != this.f6749a || this.b > 0 || this.c;
        }

        public final void b(u uVar) {
            this.f6749a = uVar;
            this.b = 0;
            this.c = false;
        }

        public final void a(int i) {
            this.b += i;
        }

        public final void b(int i) {
            if (this.c && this.d != 4) {
                com.tkay.expressad.exoplayer.k.a.a(i == 4);
            } else {
                this.c = true;
                this.d = i;
            }
        }
    }
}
