package com.mbridge.msdk.video.bt.module.b;

import android.content.Context;
import com.mbridge.msdk.foundation.entity.CampaignEx;
import com.mbridge.msdk.foundation.tools.z;
import java.util.List;
import java.util.Random;

/* JADX INFO: compiled from: DeductionShowRewardListener.java */
/* JADX INFO: loaded from: classes3.dex */
public final class b extends c {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private h f4125a;
    private com.mbridge.msdk.videocommon.d.c b;
    private String c;
    private String d;
    private boolean e;
    private Context f;
    private boolean g;
    private boolean h = false;
    private boolean i = false;
    private boolean j = false;
    private boolean k = false;

    public b(Context context, boolean z, com.mbridge.msdk.videocommon.d.c cVar, CampaignEx campaignEx, h hVar, String str, String str2) {
        this.g = false;
        this.f4125a = hVar;
        this.g = a(cVar, campaignEx);
        this.b = cVar;
        this.c = str2;
        this.d = str;
        this.e = z;
        this.f = context;
    }

    @Override // com.mbridge.msdk.video.bt.module.b.c, com.mbridge.msdk.video.bt.module.b.h
    public final void a() {
        super.a();
        if (this.f4125a == null || this.h) {
            return;
        }
        boolean z = this.g;
        if (!z || (z && !a(1))) {
            this.f4125a.a();
        }
        this.f4125a.a(2, this.d, this.c);
        this.h = true;
    }

    @Override // com.mbridge.msdk.video.bt.module.b.c, com.mbridge.msdk.video.bt.module.b.h
    public final void a(boolean z, com.mbridge.msdk.videocommon.b.d dVar) {
        super.a(z, dVar);
        h hVar = this.f4125a;
        if (hVar == null || this.j) {
            return;
        }
        hVar.a(7, this.d, this.c);
        if (!this.g) {
            this.f4125a.a(z, dVar);
            this.j = true;
            return;
        }
        if (!a(5)) {
            if (c() == 0 && a(1)) {
                this.f4125a.a("");
            }
            this.f4125a.a(z, dVar);
        } else {
            this.k = true;
        }
        this.j = true;
    }

    @Override // com.mbridge.msdk.video.bt.module.b.c, com.mbridge.msdk.video.bt.module.b.h
    public final void a(boolean z, int i) {
        super.a(z, i);
        h hVar = this.f4125a;
        if (hVar == null || this.j) {
            return;
        }
        if (!this.g) {
            hVar.a(z, i);
        } else {
            if (a(5)) {
                return;
            }
            if (c() == 0 && a(1)) {
                this.f4125a.a("");
            }
            this.f4125a.a(z, i);
        }
    }

    @Override // com.mbridge.msdk.video.bt.module.b.c, com.mbridge.msdk.video.bt.module.b.h
    public final void a(String str) {
        super.a(str);
        if (this.f4125a == null || this.i) {
            return;
        }
        boolean z = this.g;
        if (!z || (z && !a(1))) {
            this.f4125a.a(str);
        }
        this.f4125a.a(4, this.d, this.c);
        this.i = true;
    }

    @Override // com.mbridge.msdk.video.bt.module.b.c, com.mbridge.msdk.video.bt.module.b.h
    public final void a(boolean z, String str, String str2) {
        super.a(z, str, str2);
        if (this.f4125a != null) {
            boolean z2 = this.g;
            if ((!z2 || (z2 && !a(4))) && !a(z)) {
                this.f4125a.a(z, str, str2);
            }
        }
    }

    @Override // com.mbridge.msdk.video.bt.module.b.c, com.mbridge.msdk.video.bt.module.b.h
    public final void b(String str, String str2) {
        boolean z;
        super.b(str, str2);
        if (this.f4125a != null && (!(z = this.g) || (z && !a(3)))) {
            this.f4125a.b(str, str2);
        }
        h hVar = this.f4125a;
        if (hVar != null) {
            hVar.a(6, str, str2);
        }
    }

    @Override // com.mbridge.msdk.video.bt.module.b.c, com.mbridge.msdk.video.bt.module.b.h
    public final void a(String str, String str2) {
        boolean z;
        super.a(str, str2);
        if (this.f4125a != null && (!(z = this.g) || (z && !a(2)))) {
            this.f4125a.a(str, str2);
        }
        h hVar = this.f4125a;
        if (hVar != null) {
            hVar.a(5, str, str2);
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:10:0x002d  */
    /* JADX WARN: Removed duplicated region for block: B:13:0x0038 A[Catch: Exception -> 0x0079, TryCatch #0 {Exception -> 0x0079, blocks: (B:3:0x0001, B:5:0x0011, B:7:0x001b, B:9:0x0025, B:11:0x002e, B:13:0x0038, B:16:0x003f, B:18:0x0045, B:20:0x004e, B:22:0x0052, B:24:0x0056, B:26:0x005b, B:29:0x0063, B:34:0x0070, B:36:0x0076), top: B:39:0x0001 }] */
    /* JADX WARN: Removed duplicated region for block: B:16:0x003f A[Catch: Exception -> 0x0079, TryCatch #0 {Exception -> 0x0079, blocks: (B:3:0x0001, B:5:0x0011, B:7:0x001b, B:9:0x0025, B:11:0x002e, B:13:0x0038, B:16:0x003f, B:18:0x0045, B:20:0x004e, B:22:0x0052, B:24:0x0056, B:26:0x005b, B:29:0x0063, B:34:0x0070, B:36:0x0076), top: B:39:0x0001 }] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    private boolean a(com.mbridge.msdk.videocommon.d.c r8, com.mbridge.msdk.foundation.entity.CampaignEx r9) {
        /*
            r7 = this;
            r0 = 0
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L79
            java.lang.String r1 = r1.k()     // Catch: java.lang.Exception -> L79
            boolean r2 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Exception -> L79
            r3 = 0
            if (r2 != 0) goto L2d
            com.mbridge.msdk.c.b r2 = com.mbridge.msdk.c.b.a()     // Catch: java.lang.Exception -> L79
            com.mbridge.msdk.c.a r1 = r2.b(r1)     // Catch: java.lang.Exception -> L79
            if (r1 != 0) goto L23
            com.mbridge.msdk.c.b r1 = com.mbridge.msdk.c.b.a()     // Catch: java.lang.Exception -> L79
            com.mbridge.msdk.c.a r1 = r1.b()     // Catch: java.lang.Exception -> L79
        L23:
            if (r1 == 0) goto L2d
            long r1 = r1.W()     // Catch: java.lang.Exception -> L79
            r5 = 1000(0x3e8, double:4.94E-321)
            long r1 = r1 * r5
            goto L2e
        L2d:
            r1 = r3
        L2e:
            com.mbridge.msdk.videocommon.d.b r5 = com.mbridge.msdk.videocommon.d.b.a()     // Catch: java.lang.Exception -> L79
            com.mbridge.msdk.videocommon.d.a r5 = r5.b()     // Catch: java.lang.Exception -> L79
            if (r5 == 0) goto L3c
            long r3 = r5.e()     // Catch: java.lang.Exception -> L79
        L3c:
            r5 = 1
            if (r9 == 0) goto L59
            boolean r1 = r9.isSpareOffer(r3, r1)     // Catch: java.lang.Exception -> L79
            if (r1 == 0) goto L56
            r9.setSpareOfferFlag(r5)     // Catch: java.lang.Exception -> L79
            int r8 = r8.C()     // Catch: java.lang.Exception -> L79
            if (r8 != r5) goto L52
            r9.setCbt(r5)     // Catch: java.lang.Exception -> L79
            return r5
        L52:
            r9.setCbt(r0)     // Catch: java.lang.Exception -> L79
            return r0
        L56:
            r9.setSpareOfferFlag(r0)     // Catch: java.lang.Exception -> L79
        L59:
            if (r9 == 0) goto L6e
            boolean r1 = r9.isBidCampaign()     // Catch: java.lang.Exception -> L79
            if (r1 != 0) goto L6e
            if (r8 == 0) goto L6e
            int r8 = r8.d()     // Catch: java.lang.Exception -> L79
            r9.setCbt(r8)     // Catch: java.lang.Exception -> L79
            if (r8 != r5) goto L6d
            r0 = r5
        L6d:
            return r0
        L6e:
            if (r9 == 0) goto L79
            boolean r8 = r9.isBidCampaign()     // Catch: java.lang.Exception -> L79
            if (r8 == 0) goto L79
            r9.setCbt(r0)     // Catch: java.lang.Exception -> L79
        L79:
            return r0
        */
        throw new UnsupportedOperationException("Method not decompiled: com.mbridge.msdk.video.bt.module.b.b.a(com.mbridge.msdk.videocommon.d.c, com.mbridge.msdk.foundation.entity.CampaignEx):boolean");
    }

    private int c() {
        com.mbridge.msdk.videocommon.b.c cVarZ;
        com.mbridge.msdk.videocommon.d.c cVar = this.b;
        if (cVar == null || (cVarZ = cVar.z()) == null) {
            return 1;
        }
        return cVarZ.a();
    }

    private boolean a(int i) {
        com.mbridge.msdk.videocommon.b.c cVarZ;
        com.mbridge.msdk.videocommon.d.c cVar = this.b;
        if (cVar != null && (cVarZ = cVar.z()) != null) {
            if (cVarZ.a() == 0) {
                return i <= 4;
            }
            List<Integer> listB = cVarZ.b();
            if (listB != null) {
                return listB.contains(Integer.valueOf(i));
            }
        }
        return i <= 4;
    }

    @Override // com.mbridge.msdk.video.bt.module.b.c, com.mbridge.msdk.video.bt.module.b.h
    public final boolean b() {
        return this.k;
    }

    private boolean a(boolean z) {
        try {
        } catch (Throwable th) {
            z.c("DeductionShowRewardListener", "", th);
        }
        if (this.b == null) {
            return false;
        }
        int iA = this.b.A();
        if (iA == 1) {
            return z;
        }
        if (iA == 2) {
            return z && d();
        }
        if (iA != 3) {
            return false;
        }
        return d();
    }

    private boolean d() {
        try {
            if (this.b == null) {
                return false;
            }
            double dB = this.b.B();
            if (dB == 1.0d) {
                return false;
            }
            return new Random().nextDouble() > dB;
        } catch (Throwable th) {
            z.c("DeductionShowRewardListener", "", th);
            return false;
        }
    }
}
