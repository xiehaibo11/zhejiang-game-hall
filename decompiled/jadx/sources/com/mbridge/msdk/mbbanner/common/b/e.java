package com.mbridge.msdk.mbbanner.common.b;

import com.mbridge.msdk.foundation.entity.CampaignEx;
import com.mbridge.msdk.foundation.tools.z;
import java.util.List;
import java.util.Random;

/* JADX INFO: compiled from: DeductionBannerShowListener.java */
/* JADX INFO: loaded from: classes2.dex */
public class e implements c {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final String f3608a = e.class.getSimpleName();
    private c b;
    private com.mbridge.msdk.c.d c;
    private boolean d = false;

    public e(c cVar, com.mbridge.msdk.c.d dVar) {
        this.c = dVar;
        this.b = cVar;
    }

    @Override // com.mbridge.msdk.mbbanner.common.b.c
    public final void a(List<CampaignEx> list) {
        if (list != null) {
            try {
                if (list.size() > 0) {
                    com.mbridge.msdk.c.d dVar = this.c;
                    boolean z = false;
                    if (!list.get(0).isBidCampaign() && dVar != null && dVar.e() != 1.0d) {
                        if (new Random().nextDouble() > dVar.e()) {
                            z = true;
                        }
                    }
                    this.d = z;
                    z.d(f3608a, this.d + "");
                }
            } catch (Exception e) {
                z.c(f3608a, "Exception", e);
            }
        }
        c cVar = this.b;
        if (cVar != null) {
            cVar.a(list);
        }
    }

    @Override // com.mbridge.msdk.mbbanner.common.b.c
    public final void a(String str) {
        c cVar = this.b;
        if (cVar != null) {
            cVar.a(str);
        }
    }

    @Override // com.mbridge.msdk.mbbanner.common.b.c
    public final void a() {
        c cVar = this.b;
        if (cVar == null || this.d) {
            return;
        }
        cVar.a();
    }

    @Override // com.mbridge.msdk.mbbanner.common.b.c
    public final void b() {
        c cVar = this.b;
        if (cVar != null) {
            cVar.b();
        }
    }

    @Override // com.mbridge.msdk.mbbanner.common.b.c
    public final void c() {
        c cVar = this.b;
        if (cVar != null) {
            cVar.c();
        }
    }

    @Override // com.mbridge.msdk.mbbanner.common.b.c
    public final void d() {
        c cVar = this.b;
        if (cVar != null) {
            cVar.d();
        }
    }

    @Override // com.mbridge.msdk.mbbanner.common.b.c
    public final void a(CampaignEx campaignEx, boolean z) {
        c cVar = this.b;
        if (cVar != null) {
            cVar.a(campaignEx, this.d);
        }
    }

    @Override // com.mbridge.msdk.mbbanner.common.b.c
    public final void e() {
        c cVar = this.b;
        if (cVar != null) {
            cVar.e();
        }
    }

    @Override // com.mbridge.msdk.mbbanner.common.b.c
    public final void a(boolean z) {
        c cVar = this.b;
        if (cVar != null) {
            cVar.a(z);
        }
    }
}
