package com.tkay.expressad.exoplayer;

import android.os.Build;
import android.os.Handler;
import android.os.HandlerThread;
import android.os.Looper;
import android.os.Message;
import android.os.SystemClock;
import android.util.Log;
import android.util.Pair;
import com.tkay.expressad.exoplayer.ae;
import com.tkay.expressad.exoplayer.e;
import com.tkay.expressad.exoplayer.h.af;
import com.tkay.expressad.exoplayer.h.r;
import com.tkay.expressad.exoplayer.h.s;
import com.tkay.expressad.exoplayer.i.h;
import com.tkay.expressad.exoplayer.x;
import java.io.IOException;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Iterator;

final class k implements Handler.Callback, e.a, r.a, s.b, h.a, x.a {
    public static final int a = 0;
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

    @Override
    public final void a(com.tkay.expressad.exoplayer.h.z zVar) {
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
        this.R = new u(ae.a, -9223372036854775807L, af.a, iVar);
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

    @Override
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

    @Override
    public final void a(com.tkay.expressad.exoplayer.h.s sVar, ae aeVar, Object obj) {
        this.D.a(8, new a(sVar, aeVar, obj)).sendToTarget();
    }

    @Override
    public final void a(com.tkay.expressad.exoplayer.h.r rVar) {
        this.D.a(9, rVar).sendToTarget();
    }

    private void b(com.tkay.expressad.exoplayer.h.r rVar) {
        this.D.a(10, rVar).sendToTarget();
    }

    @Override
    public final void c() {
        this.D.b(11);
    }

    @Override
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
    @Override
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final boolean handleMessage(Message message) {
        ?? r2;
        ?? r22;
        Message message2;
        RuntimeException runtimeException;
        IOException iOException;
        g gVar;
        ?? r23;
        ?? r24;
        ?? r25;
        boolean z;
        boolean z2;
        boolean zM;
        boolean z3;
        int i2;
        s.a aVarA;
        boolean z4;
        long j2;
        long j3;
        int i3;
        c cVar;
        long j4;
        long jA;
        Message message3 = message;
        char c2 = 2;
         = 2;
         = 2;
        ?? r4 = 2;
        ?? r42 = 2;
        c = 2;
        c2 = 2;
        ?? r43 = 2;
        ?? r44 = 2;
        char c3 = 2;
        try {
            try {
                long j5 = 0;
                try {
                    try {
                        try {
                            try {
                                try {
                                    try {
                                        switch (message3.what) {
                                            case 0:
                                                com.tkay.expressad.exoplayer.h.s sVar = (com.tkay.expressad.exoplayer.h.s) message3.obj;
                                                boolean z5 = message3.arg1 != 0;
                                                boolean z6 = message3.arg2 != 0;
                                                this.Z++;
                                                a(true, z5, z6);
                                                this.C.a();
                                                this.S = sVar;
                                                b(2);
                                                sVar.a(this.G, true, this);
                                                this.D.b(2);
                                                d();
                                                return true;
                                            case 1:
                                                boolean z7 = message3.arg1 != 0;
                                                try {
                                                    this.W = false;
                                                    this.V = z7;
                                                    if (!z7) {
                                                        f();
                                                        g();
                                                    } else if (this.R.f == 3) {
                                                        e();
                                                        this.D.b(2);
                                                    } else if (this.R.f == 2) {
                                                        this.D.b(2);
                                                    }
                                                    d();
                                                    return true;
                                                } catch (g e2) {
                                                    gVar = e2;
                                                    z2 = false;
                                                    r4 = 2;
                                                    r25 = z2;
                                                    Log.e(d, "Playback error.", gVar);
                                                    a(r25, r25);
                                                    this.F.obtainMessage(r4, gVar).sendToTarget();
                                                    d();
                                                    return true;
                                                } catch (IOException e3) {
                                                    iOException = e3;
                                                    z = false;
                                                    r42 = 2;
                                                    r24 = z;
                                                    Log.e(d, "Source error.", iOException);
                                                    a(r24, r24);
                                                    this.F.obtainMessage(r42, g.a(iOException)).sendToTarget();
                                                    d();
                                                    return true;
                                                } catch (RuntimeException e4) {
                                                    e = e4;
                                                    message2 = null;
                                                    runtimeException = e;
                                                    r23 = message2;
                                                    Log.e(d, "Internal runtime error.", runtimeException);
                                                    a(r23, r23);
                                                    this.F.obtainMessage(2, g.a(runtimeException)).sendToTarget();
                                                    d();
                                                    return true;
                                                }
                                            case 2:
                                                long jB = this.O.b();
                                                if (this.S != null) {
                                                    if (this.Z > 0) {
                                                        this.S.b();
                                                    } else {
                                                        this.P.a(this.ab);
                                                        if (this.P.a()) {
                                                            r rVarA = this.P.a(this.ab, this.R);
                                                            if (rVarA == null) {
                                                                this.S.b();
                                                            } else {
                                                                this.P.a(this.z, this.A, this.C.d(), this.S, this.R.a.a(rVarA.a.a, this.I, true).b, rVarA).a((r.a) this, rVarA.b);
                                                                d(true);
                                                            }
                                                        }
                                                        q qVarB = this.P.b();
                                                        if (qVarB == null || qVarB.a()) {
                                                            z = false;
                                                            z2 = false;
                                                            try {
                                                                d(false);
                                                            } catch (g e5) {
                                                                gVar = e5;
                                                                r4 = 2;
                                                                r25 = z2;
                                                                Log.e(d, "Playback error.", gVar);
                                                                a(r25, r25);
                                                                this.F.obtainMessage(r4, gVar).sendToTarget();
                                                                d();
                                                                return true;
                                                            } catch (IOException e6) {
                                                                iOException = e6;
                                                                r42 = 2;
                                                                r24 = z;
                                                                Log.e(d, "Source error.", iOException);
                                                                a(r24, r24);
                                                                this.F.obtainMessage(r42, g.a(iOException)).sendToTarget();
                                                                d();
                                                                return true;
                                                            }
                                                        } else if (!this.R.g) {
                                                            r();
                                                        }
                                                        if (this.P.f()) {
                                                            q qVarC = this.P.c();
                                                            q qVarD = this.P.d();
                                                            boolean z8 = false;
                                                            while (this.V && qVarC != qVarD && this.ab >= qVarC.i.e) {
                                                                if (z8) {
                                                                    d();
                                                                }
                                                                int i4 = qVarC.h.f ? 0 : 3;
                                                                q qVarH = this.P.h();
                                                                a(qVarC);
                                                                this.R = this.R.a(qVarH.h.a, qVarH.h.b, qVarH.h.d);
                                                                this.M.b(i4);
                                                                g();
                                                                qVarC = qVarH;
                                                                z8 = true;
                                                            }
                                                            if (qVarD.h.g) {
                                                                for (int i5 = 0; i5 < this.y.length; i5++) {
                                                                    y yVar = this.y[i5];
                                                                    com.tkay.expressad.exoplayer.h.y yVar2 = qVarD.c[i5];
                                                                    if (yVar2 != null && yVar.f() == yVar2 && yVar.g()) {
                                                                        yVar.h();
                                                                    }
                                                                }
                                                            } else if (qVarD.i != null && qVarD.i.f) {
                                                                while (true) {
                                                                    if (i2 < this.y.length) {
                                                                        y yVar3 = this.y[i2];
                                                                        com.tkay.expressad.exoplayer.h.y yVar4 = qVarD.c[i2];
                                                                        i2 = (yVar3.f() == yVar4 && (yVar4 == null || yVar3.g())) ? i2 + 1 : 0;
                                                                    } else {
                                                                        com.tkay.expressad.exoplayer.i.i iVar = qVarD.k;
                                                                        q qVarG = this.P.g();
                                                                        com.tkay.expressad.exoplayer.i.i iVar2 = qVarG.k;
                                                                        boolean z9 = qVarG.a.c() != -9223372036854775807L;
                                                                        for (int i6 = 0; i6 < this.y.length; i6++) {
                                                                            y yVar5 = this.y[i6];
                                                                            if (iVar.a(i6)) {
                                                                                if (!z9) {
                                                                                    if (!yVar5.i()) {
                                                                                        com.tkay.expressad.exoplayer.i.f fVarA = iVar2.c.a(i6);
                                                                                        boolean zA = iVar2.a(i6);
                                                                                        boolean z10 = this.z[i6].a() == 5;
                                                                                        aa aaVar = iVar.b[i6];
                                                                                        aa aaVar2 = iVar2.b[i6];
                                                                                        if (zA && aaVar2.equals(aaVar) && !z10) {
                                                                                            yVar5.a(a(fVarA), qVarG.c[i6], qVarG.e);
                                                                                        }
                                                                                    }
                                                                                } else {
                                                                                    yVar5.h();
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                    break;
                                                }
                                                if (!this.P.f()) {
                                                    n();
                                                    a(jB, 10L);
                                                } else {
                                                    q qVarC2 = this.P.c();
                                                    com.tkay.expressad.exoplayer.k.ad.a("doSomeWork");
                                                    g();
                                                    long jElapsedRealtime = SystemClock.elapsedRealtime() * 1000;
                                                    qVarC2.a.a(this.R.j - this.J, this.K);
                                                    boolean z11 = true;
                                                    boolean z12 = true;
                                                    for (y yVar6 : this.T) {
                                                        yVar6.a(this.ab, jElapsedRealtime);
                                                        z12 = z12 && yVar6.v();
                                                        if (!yVar6.u() && !yVar6.v()) {
                                                            q qVarD2 = this.P.d();
                                                            z3 = qVarD2.i != null && qVarD2.i.f && yVar6.g();
                                                        }
                                                        if (!z3) {
                                                            yVar6.j();
                                                        }
                                                        z11 = z11 && z3;
                                                    }
                                                    if (!z11) {
                                                        n();
                                                    }
                                                    long j6 = qVarC2.h.e;
                                                    if (z12 && ((j6 == -9223372036854775807L || j6 <= this.R.j) && qVarC2.h.g)) {
                                                        b(4);
                                                        f();
                                                    } else if (this.R.f != 2) {
                                                        if (this.R.f == 3) {
                                                            if (this.T.length == 0) {
                                                                if (!m()) {
                                                                    this.W = this.V;
                                                                    b(2);
                                                                    f();
                                                                }
                                                            } else if (!z11) {
                                                            }
                                                        }
                                                    } else {
                                                        if (this.T.length == 0) {
                                                            zM = m();
                                                        } else if (z11) {
                                                            if (this.R.g) {
                                                                q qVarB2 = this.P.b();
                                                                long jA2 = qVarB2.a(!qVarB2.h.g);
                                                                if (jA2 == Long.MIN_VALUE || this.C.a(jA2 - (this.ab - qVarB2.e), this.L.e().b, this.W)) {
                                                                }
                                                            }
                                                            zM = true;
                                                        } else {
                                                            zM = false;
                                                        }
                                                        if (zM) {
                                                            b(3);
                                                            if (this.V) {
                                                                e();
                                                            }
                                                        }
                                                    }
                                                    if (this.R.f == 2) {
                                                        for (y yVar7 : this.T) {
                                                            yVar7.j();
                                                        }
                                                    }
                                                    if ((this.V && this.R.f == 3) || this.R.f == 2) {
                                                        a(jB, 10L);
                                                    } else if (this.T.length != 0 && this.R.f != 4) {
                                                        a(jB, 1000L);
                                                    } else {
                                                        this.D.b();
                                                    }
                                                    com.tkay.expressad.exoplayer.k.ad.a();
                                                }
                                                d();
                                                return true;
                                            case 3:
                                                d dVar = (d) message3.obj;
                                                this.M.a(1);
                                                Pair<Integer, Long> pairA = a(dVar, true);
                                                try {
                                                    if (pairA == null) {
                                                        aVarA = new s.a(j());
                                                        j3 = -9223372036854775807L;
                                                        j2 = -9223372036854775807L;
                                                    } else {
                                                        int iIntValue = ((Integer) pairA.first).intValue();
                                                        long jLongValue = ((Long) pairA.second).longValue();
                                                        aVarA = this.P.a(iIntValue, jLongValue);
                                                        if (!aVarA.a()) {
                                                            long jLongValue2 = ((Long) pairA.second).longValue();
                                                            z4 = dVar.c == -9223372036854775807L;
                                                            j2 = jLongValue;
                                                            j3 = jLongValue2;
                                                            if (this.S != null || this.Z > 0) {
                                                                this.aa = dVar;
                                                            } else if (j3 == -9223372036854775807L) {
                                                                b(4);
                                                                a(false, true, false);
                                                            } else {
                                                                if (aVarA.equals(this.R.c)) {
                                                                    q qVarC3 = this.P.c();
                                                                    jA = (qVarC3 == null || j3 == 0) ? j3 : qVarC3.a.a(j3, this.Q);
                                                                    if (com.tkay.expressad.exoplayer.b.a(jA) == com.tkay.expressad.exoplayer.b.a(this.R.j)) {
                                                                        this.R = this.R.a(aVarA, this.R.j, j2);
                                                                        if (z4) {
                                                                            cVar = this.M;
                                                                            i3 = 2;
                                                                            cVar.b(i3);
                                                                        }
                                                                        d();
                                                                        return true;
                                                                    }
                                                                } else {
                                                                    jA = j3;
                                                                }
                                                                long jA3 = a(aVarA, jA);
                                                                z4 |= j3 != jA3;
                                                                j4 = jA3;
                                                                this.R = this.R.a(aVarA, j4, j2);
                                                                if (z4) {
                                                                    cVar = this.M;
                                                                    i3 = 2;
                                                                    cVar.b(i3);
                                                                }
                                                                d();
                                                                return true;
                                                            }
                                                            j4 = j3;
                                                            this.R = this.R.a(aVarA, j4, j2);
                                                            if (z4) {
                                                            }
                                                            d();
                                                            return true;
                                                        }
                                                        j2 = jLongValue;
                                                        j3 = 0;
                                                    }
                                                    if (this.S != null) {
                                                        this.aa = dVar;
                                                        j4 = j3;
                                                        this.R = this.R.a(aVarA, j4, j2);
                                                        if (z4) {
                                                        }
                                                    }
                                                    d();
                                                    return true;
                                                } catch (Throwable th) {
                                                    this.R = this.R.a(aVarA, j3, j2);
                                                    if (z4) {
                                                        try {
                                                            this.M.b(2);
                                                            throw th;
                                                        } catch (g e7) {
                                                            e = e7;
                                                            c3 = 2;
                                                            r22 = 0;
                                                            gVar = e;
                                                            r25 = r22;
                                                            r4 = c3;
                                                            Log.e(d, "Playback error.", gVar);
                                                            a(r25, r25);
                                                            this.F.obtainMessage(r4, gVar).sendToTarget();
                                                            d();
                                                            return true;
                                                        } catch (IOException e8) {
                                                            e = e8;
                                                            c2 = 2;
                                                            r2 = 0;
                                                            iOException = e;
                                                            r24 = r2;
                                                            r42 = c2;
                                                            Log.e(d, "Source error.", iOException);
                                                            a(r24, r24);
                                                            this.F.obtainMessage(r42, g.a(iOException)).sendToTarget();
                                                            d();
                                                            return true;
                                                        }
                                                    }
                                                    throw th;
                                                }
                                                z4 = true;
                                            case 4:
                                                this.L.a((v) message3.obj);
                                                d();
                                                return true;
                                            case 5:
                                                this.Q = (ac) message3.obj;
                                                d();
                                                return true;
                                            case 6:
                                                a(message3.arg1 != 0, true);
                                                d();
                                                return true;
                                            case 7:
                                                i();
                                                return true;
                                            case 8:
                                                a aVar = (a) message3.obj;
                                                if (aVar.a == this.S) {
                                                    ae aeVar = this.R.a;
                                                    ae aeVar2 = aVar.b;
                                                    Object obj = aVar.c;
                                                    this.P.a(aeVar2);
                                                    this.R = this.R.a(aeVar2, obj);
                                                    for (int size = this.N.size() - 1; size >= 0; size--) {
                                                        if (!a(this.N.get(size))) {
                                                            try {
                                                                this.N.get(size).a.a(false);
                                                                this.N.remove(size);
                                                            } catch (g e9) {
                                                                gVar = e9;
                                                                r25 = 0;
                                                                Log.e(d, "Playback error.", gVar);
                                                                a(r25, r25);
                                                                this.F.obtainMessage(r4, gVar).sendToTarget();
                                                                d();
                                                                return true;
                                                            } catch (IOException e10) {
                                                                iOException = e10;
                                                                r24 = 0;
                                                                Log.e(d, "Source error.", iOException);
                                                                a(r24, r24);
                                                                this.F.obtainMessage(r42, g.a(iOException)).sendToTarget();
                                                                d();
                                                                return true;
                                                            } catch (RuntimeException e11) {
                                                                runtimeException = e11;
                                                                r23 = 0;
                                                                Log.e(d, "Internal runtime error.", runtimeException);
                                                                a(r23, r23);
                                                                this.F.obtainMessage(2, g.a(runtimeException)).sendToTarget();
                                                                d();
                                                                return true;
                                                            }
                                                        }
                                                    }
                                                    Collections.sort(this.N);
                                                    ?? r26 = this.Z;
                                                    try {
                                                        if (r26 > 0) {
                                                            this.M.a(this.Z);
                                                            this.Z = 0;
                                                            if (this.aa != null) {
                                                                Pair<Integer, Long> pairA2 = a(this.aa, true);
                                                                this.aa = null;
                                                                if (pairA2 == null) {
                                                                    o();
                                                                    r26 = pairA2;
                                                                } else {
                                                                    int iIntValue2 = ((Integer) pairA2.first).intValue();
                                                                    long jLongValue3 = ((Long) pairA2.second).longValue();
                                                                    s.a aVarA2 = this.P.a(iIntValue2, jLongValue3);
                                                                    u uVarA = this.R.a(aVarA2, aVarA2.a() ? 0L : jLongValue3, jLongValue3);
                                                                    this.R = uVarA;
                                                                    r26 = uVarA;
                                                                }
                                                            } else {
                                                                int i7 = (this.R.d > (-9223372036854775807L) ? 1 : (this.R.d == (-9223372036854775807L) ? 0 : -1));
                                                                r26 = i7;
                                                                if (i7 == 0) {
                                                                    boolean zA2 = aeVar2.a();
                                                                    if (zA2) {
                                                                        o();
                                                                        r26 = zA2;
                                                                    } else {
                                                                        Pair<Integer, Long> pairA3 = a(aeVar2, aeVar2.b(this.Y));
                                                                        int iIntValue3 = ((Integer) pairA3.first).intValue();
                                                                        long jLongValue4 = ((Long) pairA3.second).longValue();
                                                                        s.a aVarA3 = this.P.a(iIntValue3, jLongValue4);
                                                                        u uVarA2 = this.R.a(aVarA3, aVarA3.a() ? 0L : jLongValue4, jLongValue4);
                                                                        this.R = uVarA2;
                                                                        r26 = uVarA2;
                                                                    }
                                                                }
                                                            }
                                                        } else {
                                                            int i8 = this.R.c.a;
                                                            long j7 = this.R.e;
                                                            if (aeVar.a()) {
                                                                if (!aeVar2.a()) {
                                                                    s.a aVarA4 = this.P.a(i8, j7);
                                                                    this.R = this.R.a(aVarA4, aVarA4.a() ? 0L : j7, j7);
                                                                }
                                                            } else {
                                                                q qVarE = this.P.e();
                                                                int iA = aeVar2.a(qVarE == null ? aeVar.a(i8, this.I, true).b : qVarE.b);
                                                                if (iA == -1) {
                                                                    int iA2 = a(i8, aeVar, aeVar2);
                                                                    if (iA2 == -1) {
                                                                        o();
                                                                    } else {
                                                                        try {
                                                                            Pair<Integer, Long> pairA4 = a(aeVar2, aeVar2.a(iA2, this.I, false).c);
                                                                            int iIntValue4 = ((Integer) pairA4.first).intValue();
                                                                            long jLongValue5 = ((Long) pairA4.second).longValue();
                                                                            s.a aVarA5 = this.P.a(iIntValue4, jLongValue5);
                                                                            aeVar2.a(iIntValue4, this.I, true);
                                                                            if (qVarE != null) {
                                                                                Object obj2 = this.I.b;
                                                                                qVarE.h = qVarE.h.a();
                                                                                while (qVarE.i != null) {
                                                                                    qVarE = qVarE.i;
                                                                                    if (qVarE.b.equals(obj2)) {
                                                                                        qVarE.h = this.P.a(qVarE.h, iIntValue4);
                                                                                    } else {
                                                                                        qVarE.h = qVarE.h.a();
                                                                                    }
                                                                                }
                                                                            }
                                                                            if (!aVarA5.a()) {
                                                                                j5 = jLongValue5;
                                                                            }
                                                                            this.R = this.R.a(aVarA5, a(aVarA5, j5), jLongValue5);
                                                                        } catch (g e12) {
                                                                            gVar = e12;
                                                                            r25 = 0;
                                                                            Log.e(d, "Playback error.", gVar);
                                                                            a(r25, r25);
                                                                            this.F.obtainMessage(r4, gVar).sendToTarget();
                                                                            d();
                                                                            return true;
                                                                        } catch (IOException e13) {
                                                                            iOException = e13;
                                                                            r24 = 0;
                                                                            Log.e(d, "Source error.", iOException);
                                                                            a(r24, r24);
                                                                            this.F.obtainMessage(r42, g.a(iOException)).sendToTarget();
                                                                            d();
                                                                            return true;
                                                                        } catch (RuntimeException e14) {
                                                                            runtimeException = e14;
                                                                            r23 = 0;
                                                                            Log.e(d, "Internal runtime error.", runtimeException);
                                                                            a(r23, r23);
                                                                            this.F.obtainMessage(2, g.a(runtimeException)).sendToTarget();
                                                                            d();
                                                                            return true;
                                                                        }
                                                                    }
                                                                } else {
                                                                    if (iA != i8) {
                                                                        this.R = this.R.a(iA);
                                                                    }
                                                                    s.a aVar2 = this.R.c;
                                                                    if (aVar2.a()) {
                                                                        s.a aVarA6 = this.P.a(iA, j7);
                                                                        if (!aVarA6.equals(aVar2)) {
                                                                            if (!aVarA6.a()) {
                                                                                j5 = j7;
                                                                            }
                                                                            this.R = this.R.a(aVarA6, a(aVarA6, j5), j7);
                                                                        } else if (!this.P.a(aVar2, this.ab)) {
                                                                            r26 = 0;
                                                                            g(false);
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    } catch (g e15) {
                                                        e = e15;
                                                        r22 = r26;
                                                        gVar = e;
                                                        r25 = r22;
                                                        r4 = c3;
                                                        Log.e(d, "Playback error.", gVar);
                                                        a(r25, r25);
                                                        this.F.obtainMessage(r4, gVar).sendToTarget();
                                                        d();
                                                        return true;
                                                    } catch (IOException e16) {
                                                        e = e16;
                                                        r2 = r26;
                                                        iOException = e;
                                                        r24 = r2;
                                                        r42 = c2;
                                                        Log.e(d, "Source error.", iOException);
                                                        a(r24, r24);
                                                        this.F.obtainMessage(r42, g.a(iOException)).sendToTarget();
                                                        d();
                                                        return true;
                                                    }
                                                    break;
                                                }
                                                d();
                                                return true;
                                            case 9:
                                                if (this.P.a((com.tkay.expressad.exoplayer.h.r) message3.obj)) {
                                                    q qVarB3 = this.P.b();
                                                    float f2 = this.L.e().b;
                                                    qVarB3.f = true;
                                                    qVarB3.j = qVarB3.a.b();
                                                    qVarB3.a(f2);
                                                    long jB2 = qVarB3.b(qVarB3.h.b);
                                                    qVarB3.e += qVarB3.h.b - jB2;
                                                    r rVar = qVarB3.h;
                                                    qVarB3.h = new r(rVar.a, jB2, rVar.c, rVar.d, rVar.e, rVar.f, rVar.g);
                                                    a(qVarB3.k);
                                                    if (!this.P.f()) {
                                                        a(this.P.h().h.b);
                                                        a(null);
                                                    }
                                                    r();
                                                }
                                                d();
                                                return true;
                                            case 10:
                                                if (this.P.a((com.tkay.expressad.exoplayer.h.r) message3.obj)) {
                                                    this.P.a(this.ab);
                                                    r();
                                                }
                                                d();
                                                return true;
                                            case 11:
                                                if (this.P.f()) {
                                                    float f3 = this.L.e().b;
                                                    q qVarC4 = this.P.c();
                                                    q qVarD3 = this.P.d();
                                                    boolean z13 = true;
                                                    while (true) {
                                                        if (qVarC4 != null && qVarC4.f) {
                                                            if (!qVarC4.a(f3)) {
                                                                if (qVarC4 == qVarD3) {
                                                                    z13 = false;
                                                                }
                                                                qVarC4 = qVarC4.i;
                                                                z13 = z13;
                                                            } else {
                                                                if (z13) {
                                                                    q qVarC5 = this.P.c();
                                                                    boolean zA3 = this.P.a(qVarC5);
                                                                    boolean[] zArr = new boolean[this.y.length];
                                                                    long jA4 = qVarC5.a(this.R.j, zA3, zArr);
                                                                    a(qVarC5.k);
                                                                    if (this.R.f != 4 && jA4 != this.R.j) {
                                                                        this.R = this.R.a(this.R.c, jA4, this.R.e);
                                                                        this.M.b(4);
                                                                        a(jA4);
                                                                    }
                                                                    boolean[] zArr2 = new boolean[this.y.length];
                                                                    int i9 = 0;
                                                                    for (int i10 = 0; i10 < this.y.length; i10++) {
                                                                        y yVar8 = this.y[i10];
                                                                        zArr2[i10] = yVar8.a_() != 0;
                                                                        com.tkay.expressad.exoplayer.h.y yVar9 = qVarC5.c[i10];
                                                                        if (yVar9 != null) {
                                                                            i9++;
                                                                        }
                                                                        if (zArr2[i10]) {
                                                                            if (yVar9 != yVar8.f()) {
                                                                                b(yVar8);
                                                                            } else if (zArr[i10]) {
                                                                                yVar8.a(this.ab);
                                                                            }
                                                                        }
                                                                    }
                                                                    this.R = this.R.a(qVarC5.j, qVarC5.k);
                                                                    a(zArr2, i9);
                                                                } else {
                                                                    this.P.a(qVarC4);
                                                                    if (qVarC4.f) {
                                                                        qVarC4.b(Math.max(qVarC4.h.b, this.ab - qVarC4.e));
                                                                        a(qVarC4.k);
                                                                    }
                                                                }
                                                                if (this.R.f != 4) {
                                                                    r();
                                                                    g();
                                                                    this.D.b(2);
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                                d();
                                                return true;
                                            case 12:
                                                int i11 = message3.arg1;
                                                this.X = i11;
                                                if (!this.P.a(i11)) {
                                                    g(true);
                                                }
                                                d();
                                                return true;
                                            case 13:
                                                boolean z14 = message3.arg1 != 0;
                                                this.Y = z14;
                                                if (!this.P.a(z14)) {
                                                    g(true);
                                                }
                                                d();
                                                return true;
                                            case 14:
                                                x xVar = (x) message3.obj;
                                                if (xVar.f() == -9223372036854775807L) {
                                                    d(xVar);
                                                } else if (this.S == null || this.Z > 0) {
                                                    this.N.add(new b(xVar));
                                                } else {
                                                    b bVar = new b(xVar);
                                                    if (a(bVar)) {
                                                        this.N.add(bVar);
                                                        Collections.sort(this.N);
                                                    } else {
                                                        xVar.a(false);
                                                    }
                                                }
                                                d();
                                                return true;
                                            case 15:
                                                x xVar2 = (x) message3.obj;
                                                xVar2.e().post(new 1(xVar2));
                                                d();
                                                return true;
                                            default:
                                                return false;
                                        }
                                    } catch (RuntimeException e17) {
                                        runtimeException = e17;
                                        r23 = 0;
                                    }
                                } catch (RuntimeException e18) {
                                    runtimeException = e18;
                                    r23 = 0;
                                }
                            } catch (RuntimeException e19) {
                                e = e19;
                                message2 = message3;
                            }
                        } catch (g e20) {
                            gVar = e20;
                            z2 = false;
                        } catch (IOException e21) {
                            iOException = e21;
                            z = false;
                        }
                    } catch (g e22) {
                        gVar = e22;
                        r43 = message3;
                        r25 = 0;
                        r4 = r43;
                        Log.e(d, "Playback error.", gVar);
                        a(r25, r25);
                        this.F.obtainMessage(r4, gVar).sendToTarget();
                        d();
                        return true;
                    } catch (IOException e23) {
                        iOException = e23;
                        r44 = message3;
                        r24 = 0;
                        r42 = r44;
                        Log.e(d, "Source error.", iOException);
                        a(r24, r24);
                        this.F.obtainMessage(r42, g.a(iOException)).sendToTarget();
                        d();
                        return true;
                    }
                } catch (g e24) {
                    gVar = e24;
                    r25 = 0;
                    r4 = r43;
                    Log.e(d, "Playback error.", gVar);
                    a(r25, r25);
                    this.F.obtainMessage(r4, gVar).sendToTarget();
                    d();
                    return true;
                } catch (IOException e25) {
                    iOException = e25;
                    r24 = 0;
                    r42 = r44;
                    Log.e(d, "Source error.", iOException);
                    a(r24, r24);
                    this.F.obtainMessage(r42, g.a(iOException)).sendToTarget();
                    d();
                    return true;
                }
            } catch (RuntimeException e26) {
                e = e26;
                message2 = null;
            }
        } catch (g e27) {
            e = e27;
            r22 = 0;
        } catch (IOException e28) {
            e = e28;
            r2 = 0;
        }
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
        s.a aVar = this.P.c().h.a;
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
            long jC = qVarC.a.c();
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
    */
    private void h() throws g {
        boolean zM;
        boolean z;
        long jB = this.O.b();
        com.tkay.expressad.exoplayer.h.s sVar = this.S;
        int i2 = 0;
        boolean z2 = true;
        if (sVar != null) {
            if (this.Z > 0) {
                sVar.b();
            } else {
                this.P.a(this.ab);
                if (this.P.a()) {
                    r rVarA = this.P.a(this.ab, this.R);
                    if (rVarA == null) {
                        this.S.b();
                    } else {
                        this.P.a(this.z, this.A, this.C.d(), this.S, this.R.a.a(rVarA.a.a, this.I, true).b, rVarA).a(this, rVarA.b);
                        d(true);
                    }
                }
                q qVarB = this.P.b();
                if (qVarB == null || qVarB.a()) {
                    d(false);
                } else if (!this.R.g) {
                    r();
                }
                if (this.P.f()) {
                    q qVarC = this.P.c();
                    q qVarD = this.P.d();
                    boolean z3 = false;
                    while (this.V && qVarC != qVarD && this.ab >= qVarC.i.e) {
                        if (z3) {
                            d();
                        }
                        int i3 = qVarC.h.f ? i2 : 3;
                        q qVarH = this.P.h();
                        a(qVarC);
                        this.R = this.R.a(qVarH.h.a, qVarH.h.b, qVarH.h.d);
                        this.M.b(i3);
                        g();
                        z3 = true;
                        qVarC = qVarH;
                        i2 = 0;
                    }
                    if (qVarD.h.g) {
                        int i4 = 0;
                        while (true) {
                            y[] yVarArr = this.y;
                            if (i4 >= yVarArr.length) {
                                break;
                            }
                            y yVar = yVarArr[i4];
                            com.tkay.expressad.exoplayer.h.y yVar2 = qVarD.c[i4];
                            if (yVar2 != null && yVar.f() == yVar2 && yVar.g()) {
                                yVar.h();
                            }
                            i4++;
                        }
                    } else if (qVarD.i != null && qVarD.i.f) {
                        int i5 = 0;
                        while (true) {
                            y[] yVarArr2 = this.y;
                            if (i5 < yVarArr2.length) {
                                y yVar3 = yVarArr2[i5];
                                com.tkay.expressad.exoplayer.h.y yVar4 = qVarD.c[i5];
                                if (yVar3.f() != yVar4 || (yVar4 != null && !yVar3.g())) {
                                    break;
                                } else {
                                    i5++;
                                }
                            } else {
                                com.tkay.expressad.exoplayer.i.i iVar = qVarD.k;
                                q qVarG = this.P.g();
                                com.tkay.expressad.exoplayer.i.i iVar2 = qVarG.k;
                                boolean z4 = qVarG.a.c() != -9223372036854775807L;
                                int i6 = 0;
                                while (true) {
                                    y[] yVarArr3 = this.y;
                                    if (i6 >= yVarArr3.length) {
                                        break;
                                    }
                                    y yVar5 = yVarArr3[i6];
                                    if (iVar.a(i6)) {
                                        if (!z4) {
                                            if (!yVar5.i()) {
                                                com.tkay.expressad.exoplayer.i.f fVarA = iVar2.c.a(i6);
                                                boolean zA = iVar2.a(i6);
                                                boolean z5 = this.z[i6].a() == 5 ? z2 : false;
                                                aa aaVar = iVar.b[i6];
                                                aa aaVar2 = iVar2.b[i6];
                                                if (zA && aaVar2.equals(aaVar) && !z5) {
                                                    yVar5.a(a(fVarA), qVarG.c[i6], qVarG.e);
                                                }
                                            }
                                        } else {
                                            yVar5.h();
                                        }
                                    }
                                    i6++;
                                    z2 = true;
                                }
                            }
                        }
                    }
                }
            }
        }
        if (!this.P.f()) {
            n();
            a(jB, 10L);
            return;
        }
        q qVarC2 = this.P.c();
        com.tkay.expressad.exoplayer.k.ad.a("doSomeWork");
        g();
        long jElapsedRealtime = SystemClock.elapsedRealtime() * 1000;
        qVarC2.a.a(this.R.j - this.J, this.K);
        boolean z6 = true;
        boolean z7 = true;
        for (y yVar6 : this.T) {
            yVar6.a(this.ab, jElapsedRealtime);
            z7 = z7 && yVar6.v();
            if (yVar6.u() || yVar6.v()) {
                z = true;
            } else {
                q qVarD2 = this.P.d();
                if (!(qVarD2.i != null && qVarD2.i.f && yVar6.g())) {
                    z = false;
                }
            }
            if (!z) {
                yVar6.j();
            }
            z6 = z6 && z;
        }
        if (!z6) {
            n();
        }
        long j2 = qVarC2.h.e;
        if (z7 && ((j2 == -9223372036854775807L || j2 <= this.R.j) && qVarC2.h.g)) {
            b(4);
            f();
        } else if (this.R.f != 2) {
            if (this.R.f == 3 && (this.T.length != 0 ? !z6 : !m())) {
                this.W = this.V;
                b(2);
                f();
            }
        } else {
            if (this.T.length == 0) {
                zM = m();
            } else if (!z6) {
                zM = false;
            } else if (this.R.g) {
                q qVarB2 = this.P.b();
                long jA = qVarB2.a(!qVarB2.h.g);
                if (jA == Long.MIN_VALUE || this.C.a(jA - (this.ab - qVarB2.e), this.L.e().b, this.W)) {
                    zM = true;
                }
            } else {
                zM = true;
            }
            if (zM) {
                b(3);
                if (this.V) {
                    e();
                }
            }
        }
        if (this.R.f == 2) {
            for (y yVar7 : this.T) {
                yVar7.j();
            }
        }
        if ((this.V && this.R.f == 3) || this.R.f == 2) {
            a(jB, 10L);
        } else if (this.T.length != 0 && this.R.f != 4) {
            a(jB, 1000L);
        } else {
            this.D.b();
        }
        com.tkay.expressad.exoplayer.k.ad.a();
    }

    private void a(long j2, long j3) {
        this.D.b();
        this.D.a(j2 + j3);
    }

    /* JADX WARN: Removed duplicated region for block: B:47:0x00d4  */
    /* JADX WARN: Removed duplicated region for block: B:56:? A[RETURN, SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private void a(d dVar) {
        long jLongValue;
        boolean z;
        s.a aVar;
        long j2;
        long j3;
        long jA;
        boolean z2 = true;
        this.M.a(1);
        Pair<Integer, Long> pairA = a(dVar, true);
        if (pairA == null) {
            aVar = new s.a(j());
            z = true;
            jLongValue = -9223372036854775807L;
            j2 = -9223372036854775807L;
        } else {
            int iIntValue = ((Integer) pairA.first).intValue();
            long jLongValue2 = ((Long) pairA.second).longValue();
            s.a aVarA = this.P.a(iIntValue, jLongValue2);
            if (aVarA.a()) {
                z = true;
                jLongValue = 0;
            } else {
                jLongValue = ((Long) pairA.second).longValue();
                z = dVar.c == -9223372036854775807L;
            }
            aVar = aVarA;
            j2 = jLongValue2;
        }
        try {
            if (this.S == null || this.Z > 0) {
                this.aa = dVar;
            } else if (jLongValue == -9223372036854775807L) {
                b(4);
                a(false, true, false);
            } else {
                if (aVar.equals(this.R.c)) {
                    q qVarC = this.P.c();
                    jA = (qVarC == null || jLongValue == 0) ? jLongValue : qVarC.a.a(jLongValue, this.Q);
                    if (com.tkay.expressad.exoplayer.b.a(jA) == com.tkay.expressad.exoplayer.b.a(this.R.j)) {
                        this.R = this.R.a(aVar, this.R.j, j2);
                        if (z) {
                            this.M.b(2);
                            return;
                        }
                        return;
                    }
                } else {
                    jA = jLongValue;
                }
                long jA2 = a(aVar, jA);
                if (jLongValue == jA2) {
                    z2 = false;
                }
                z |= z2;
                j3 = jA2;
                this.R = this.R.a(aVar, j3, j2);
                if (z) {
                    return;
                }
                this.M.b(2);
                return;
            }
            j3 = jLongValue;
            this.R = this.R.a(aVar, j3, j2);
            if (z) {
            }
        } catch (Throwable th) {
            this.R = this.R.a(aVar, jLongValue, j2);
            if (z) {
                this.M.b(2);
            }
            throw th;
        }
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
                long jB = qVarH.a.b(j2);
                qVarH.a.a(jB - this.J, this.K);
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
        if (aVar.equals(qVar.h.a) && qVar.f) {
            this.R.a.a(qVar.h.a.a, this.I, false);
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
        ae aeVar = this.R.a;
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
            this.P.a(ae.a);
            Iterator<b> it = this.N.iterator();
            while (it.hasNext()) {
                it.next().a.a(false);
            }
            this.N.clear();
            this.ac = 0;
        }
        this.R = new u(z3 ? ae.a : this.R.a, z3 ? null : this.R.b, z2 ? new s.a(j()) : this.R.c, z2 ? -9223372036854775807L : this.R.j, z2 ? -9223372036854775807L : this.R.e, this.R.f, false, z3 ? af.a : this.R.h, z3 ? this.B : this.R.i);
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
        xVar.e().post(new 1(xVar));
    }

    final class 1 implements Runnable {
        final x a;

        1(x xVar) {
            this.a = xVar;
        }

        @Override
        public final void run() {
            try {
                k.f(this.a);
            } catch (g e) {
                Log.e(k.d, "Unexpected error delivering message on external thread.", e);
                throw new RuntimeException(e);
            }
        }
    }

    private static void f(x xVar) {
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
                this.N.get(size).a.a(false);
                this.N.remove(size);
            }
        }
        Collections.sort(this.N);
    }

    private boolean a(b bVar) {
        if (bVar.d == null) {
            Pair<Integer, Long> pairA = a(new d(bVar.a.a(), bVar.a.g(), com.tkay.expressad.exoplayer.b.b(bVar.a.f())), false);
            if (pairA == null) {
                return false;
            }
            bVar.a(((Integer) pairA.first).intValue(), ((Long) pairA.second).longValue(), this.R.a.a(((Integer) pairA.first).intValue(), this.I, true).b);
        } else {
            int iA = this.R.a.a(bVar.d);
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
    */
    private void b(long j2, long j3) {
        b bVar;
        b bVar2;
        if (this.N.isEmpty() || this.R.c.a()) {
            return;
        }
        if (this.R.d == j2) {
            j2--;
        }
        int i2 = this.R.c.a;
        int i3 = this.ac;
        if (i3 > 0) {
            bVar = this.N.get(i3 - 1);
            while (bVar != null && (bVar.b > i2 || (bVar.b == i2 && bVar.c > j2))) {
                int i4 = this.ac - 1;
                this.ac = i4;
                if (i4 > 0) {
                    bVar = this.N.get(i4 - 1);
                }
            }
            if (this.ac < this.N.size()) {
                bVar2 = this.N.get(this.ac);
                while (bVar2 != null && bVar2.d != null && (bVar2.b < i2 || (bVar2.b == i2 && bVar2.c <= j2))) {
                    int i5 = this.ac + 1;
                    this.ac = i5;
                    if (i5 < this.N.size()) {
                        bVar2 = this.N.get(this.ac);
                    }
                }
                while (bVar2 != null && bVar2.d != null && bVar2.b == i2 && bVar2.c > j2 && bVar2.c <= j3) {
                    d(bVar2.a);
                    if (bVar2.a.h() || bVar2.a.j()) {
                        this.N.remove(this.ac);
                    } else {
                        this.ac++;
                    }
                    bVar2 = this.ac < this.N.size() ? this.N.get(this.ac) : null;
                }
                return;
            }
            bVar2 = null;
        }
        bVar = null;
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
            return qVarC.i.f || qVarC.i.h.a.a();
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
            qVarB.a.a();
        }
    }

    private void a(a aVar) throws g {
        if (aVar.a != this.S) {
            return;
        }
        ae aeVar = this.R.a;
        ae aeVar2 = aVar.b;
        Object obj = aVar.c;
        this.P.a(aeVar2);
        this.R = this.R.a(aeVar2, obj);
        for (int size = this.N.size() - 1; size >= 0; size--) {
            if (!a(this.N.get(size))) {
                this.N.get(size).a.a(false);
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
        int i3 = this.R.c.a;
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
        ae aeVar = this.R.a;
        ae aeVar2 = dVar.a;
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
    */
    private void p() throws g {
        com.tkay.expressad.exoplayer.h.s sVar = this.S;
        if (sVar == null) {
            return;
        }
        if (this.Z > 0) {
            sVar.b();
            return;
        }
        this.P.a(this.ab);
        if (this.P.a()) {
            r rVarA = this.P.a(this.ab, this.R);
            if (rVarA == null) {
                this.S.b();
            } else {
                this.P.a(this.z, this.A, this.C.d(), this.S, this.R.a.a(rVarA.a.a, this.I, true).b, rVarA).a(this, rVarA.b);
                d(true);
            }
        }
        q qVarB = this.P.b();
        int i2 = 0;
        if (qVarB == null || qVarB.a()) {
            d(false);
        } else if (!this.R.g) {
            r();
        }
        if (!this.P.f()) {
            return;
        }
        q qVarC = this.P.c();
        q qVarD = this.P.d();
        boolean z = false;
        while (this.V && qVarC != qVarD && this.ab >= qVarC.i.e) {
            if (z) {
                d();
            }
            int i3 = qVarC.h.f ? 0 : 3;
            q qVarH = this.P.h();
            a(qVarC);
            this.R = this.R.a(qVarH.h.a, qVarH.h.b, qVarH.h.d);
            this.M.b(i3);
            g();
            z = true;
            qVarC = qVarH;
        }
        if (qVarD.h.g) {
            while (true) {
                y[] yVarArr = this.y;
                if (i2 >= yVarArr.length) {
                    return;
                }
                y yVar = yVarArr[i2];
                com.tkay.expressad.exoplayer.h.y yVar2 = qVarD.c[i2];
                if (yVar2 != null && yVar.f() == yVar2 && yVar.g()) {
                    yVar.h();
                }
                i2++;
            }
        } else {
            if (qVarD.i == null || !qVarD.i.f) {
                return;
            }
            int i4 = 0;
            while (true) {
                y[] yVarArr2 = this.y;
                if (i4 < yVarArr2.length) {
                    y yVar3 = yVarArr2[i4];
                    com.tkay.expressad.exoplayer.h.y yVar4 = qVarD.c[i4];
                    if (yVar3.f() != yVar4) {
                        return;
                    }
                    if (yVar4 != null && !yVar3.g()) {
                        return;
                    } else {
                        i4++;
                    }
                } else {
                    com.tkay.expressad.exoplayer.i.i iVar = qVarD.k;
                    q qVarG = this.P.g();
                    com.tkay.expressad.exoplayer.i.i iVar2 = qVarG.k;
                    boolean z2 = qVarG.a.c() != -9223372036854775807L;
                    int i5 = 0;
                    while (true) {
                        y[] yVarArr3 = this.y;
                        if (i5 >= yVarArr3.length) {
                            return;
                        }
                        y yVar5 = yVarArr3[i5];
                        if (iVar.a(i5)) {
                            if (!z2) {
                                if (!yVar5.i()) {
                                    com.tkay.expressad.exoplayer.i.f fVarA = iVar2.c.a(i5);
                                    boolean zA = iVar2.a(i5);
                                    boolean z3 = this.z[i5].a() == 5;
                                    aa aaVar = iVar.b[i5];
                                    aa aaVar2 = iVar2.b[i5];
                                    if (zA && aaVar2.equals(aaVar) && !z3) {
                                        yVar5.a(a(fVarA), qVarG.c[i5], qVarG.e);
                                    }
                                }
                            } else {
                                yVar5.h();
                            }
                        }
                        i5++;
                    }
                }
            }
        }
    }

    private void q() {
        this.P.a(this.ab);
        if (this.P.a()) {
            r rVarA = this.P.a(this.ab, this.R);
            if (rVarA == null) {
                this.S.b();
                return;
            }
            this.P.a(this.z, this.A, this.C.d(), this.S, this.R.a.a(rVarA.a.a, this.I, true).b, rVarA).a(this, rVarA.b);
            d(true);
        }
    }

    private void c(com.tkay.expressad.exoplayer.h.r rVar) throws g {
        if (this.P.a(rVar)) {
            q qVarB = this.P.b();
            float f2 = this.L.e().b;
            qVarB.f = true;
            qVarB.j = qVarB.a.b();
            qVarB.a(f2);
            long jB = qVarB.b(qVarB.h.b);
            qVarB.e += qVarB.h.b - jB;
            r rVar2 = qVarB.h;
            qVarB.h = new r(rVar2.a, jB, rVar2.c, rVar2.d, rVar2.e, rVar2.f, rVar2.g);
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
        public final ae a;
        public final int b;
        public final long c;

        public d(ae aeVar, int i, long j) {
            this.a = aeVar;
            this.b = i;
            this.c = j;
        }
    }

    private static final class b implements Comparable<b> {
        public final x a;
        public int b;
        public long c;
        public Object d;

        @Override
        public final int compareTo(b bVar) {
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
            this.a = xVar;
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
        public final com.tkay.expressad.exoplayer.h.s a;
        public final ae b;
        public final Object c;

        public a(com.tkay.expressad.exoplayer.h.s sVar, ae aeVar, Object obj) {
            this.a = sVar;
            this.b = aeVar;
            this.c = obj;
        }
    }

    private static final class c {
        private u a;
        private int b;
        private boolean c;
        private int d;

        private c() {
        }

        c(byte b) {
            this();
        }

        public final boolean a(u uVar) {
            return uVar != this.a || this.b > 0 || this.c;
        }

        public final void b(u uVar) {
            this.a = uVar;
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
