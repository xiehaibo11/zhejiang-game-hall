package com.mbridge.msdk.video.bt.module.b;

import android.content.Context;
import android.text.TextUtils;
import com.mbridge.msdk.foundation.entity.CampaignEx;
import com.mbridge.msdk.foundation.tools.z;
import java.util.List;
import java.util.Random;

public final class b extends c {
    private h a;
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
        this.a = hVar;
        this.g = a(cVar, campaignEx);
        this.b = cVar;
        this.c = str2;
        this.d = str;
        this.e = z;
        this.f = context;
    }

    @Override
    public final void a() {
        super.a();
        if (this.a == null || this.h) {
            return;
        }
        boolean z = this.g;
        if (!z || (z && !a(1))) {
            this.a.a();
        }
        this.a.a(2, this.d, this.c);
        this.h = true;
    }

    @Override
    public final void a(boolean z, com.mbridge.msdk.videocommon.b.d dVar) {
        super.a(z, dVar);
        h hVar = this.a;
        if (hVar == null || this.j) {
            return;
        }
        hVar.a(7, this.d, this.c);
        if (!this.g) {
            this.a.a(z, dVar);
            this.j = true;
            return;
        }
        if (!a(5)) {
            if (c() == 0 && a(1)) {
                this.a.a("");
            }
            this.a.a(z, dVar);
        } else {
            this.k = true;
        }
        this.j = true;
    }

    @Override
    public final void a(boolean z, int i) {
        super.a(z, i);
        h hVar = this.a;
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
                this.a.a("");
            }
            this.a.a(z, i);
        }
    }

    @Override
    public final void a(String str) {
        super.a(str);
        if (this.a == null || this.i) {
            return;
        }
        boolean z = this.g;
        if (!z || (z && !a(1))) {
            this.a.a(str);
        }
        this.a.a(4, this.d, this.c);
        this.i = true;
    }

    @Override
    public final void a(boolean z, String str, String str2) {
        super.a(z, str, str2);
        if (this.a != null) {
            boolean z2 = this.g;
            if ((!z2 || (z2 && !a(4))) && !a(z)) {
                this.a.a(z, str, str2);
            }
        }
    }

    @Override
    public final void b(String str, String str2) {
        boolean z;
        super.b(str, str2);
        if (this.a != null && (!(z = this.g) || (z && !a(3)))) {
            this.a.b(str, str2);
        }
        h hVar = this.a;
        if (hVar != null) {
            hVar.a(6, str, str2);
        }
    }

    @Override
    public final void a(String str, String str2) {
        boolean z;
        super.a(str, str2);
        if (this.a != null && (!(z = this.g) || (z && !a(2)))) {
            this.a.a(str, str2);
        }
        h hVar = this.a;
        if (hVar != null) {
            hVar.a(5, str, str2);
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:10:0x002d  */
    /* JADX WARN: Removed duplicated region for block: B:13:0x0038 A[Catch: Exception -> 0x0079, TryCatch #0 {Exception -> 0x0079, blocks: (B:3:0x0001, B:5:0x0011, B:7:0x001b, B:9:0x0025, B:11:0x002e, B:13:0x0038, B:16:0x003f, B:18:0x0045, B:20:0x004e, B:22:0x0052, B:24:0x0056, B:26:0x005b, B:29:0x0063, B:34:0x0070, B:36:0x0076), top: B:39:0x0001 }] */
    /* JADX WARN: Removed duplicated region for block: B:16:0x003f A[Catch: Exception -> 0x0079, TryCatch #0 {Exception -> 0x0079, blocks: (B:3:0x0001, B:5:0x0011, B:7:0x001b, B:9:0x0025, B:11:0x002e, B:13:0x0038, B:16:0x003f, B:18:0x0045, B:20:0x004e, B:22:0x0052, B:24:0x0056, B:26:0x005b, B:29:0x0063, B:34:0x0070, B:36:0x0076), top: B:39:0x0001 }] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private boolean a(com.mbridge.msdk.videocommon.d.c cVar, CampaignEx campaignEx) {
        long jW;
        try {
            String strK = com.mbridge.msdk.foundation.controller.a.f().k();
            if (!TextUtils.isEmpty(strK)) {
                com.mbridge.msdk.c.a aVarB = com.mbridge.msdk.c.b.a().b(strK);
                if (aVarB == null) {
                    aVarB = com.mbridge.msdk.c.b.a().b();
                }
                if (aVarB != null) {
                    jW = aVarB.W() * 1000;
                }
                com.mbridge.msdk.videocommon.d.a aVarB2 = com.mbridge.msdk.videocommon.d.b.a().b();
                if (aVarB2 != null) {
                }
                if (campaignEx != null) {
                }
                if (campaignEx == null) {
                }
                if (campaignEx != null) {
                    campaignEx.setCbt(0);
                }
            } else {
                jW = 0;
                com.mbridge.msdk.videocommon.d.a aVarB22 = com.mbridge.msdk.videocommon.d.b.a().b();
                long jE = aVarB22 != null ? aVarB22.e() : 0L;
                if (campaignEx != null) {
                    if (campaignEx.isSpareOffer(jE, jW)) {
                        campaignEx.setSpareOfferFlag(1);
                        if (cVar.C() == 1) {
                            campaignEx.setCbt(1);
                            return true;
                        }
                        campaignEx.setCbt(0);
                        return false;
                    }
                    campaignEx.setSpareOfferFlag(0);
                }
                if (campaignEx == null && !campaignEx.isBidCampaign() && cVar != null) {
                    int iD = cVar.d();
                    campaignEx.setCbt(iD);
                    return iD == 1;
                }
                if (campaignEx != null && campaignEx.isBidCampaign()) {
                    campaignEx.setCbt(0);
                }
            }
        } catch (Exception unused) {
        }
        return false;
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

    @Override
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
