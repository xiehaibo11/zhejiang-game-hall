package com.mbridge.msdk.mbbanner.common.b;

import com.mbridge.msdk.foundation.entity.CampaignEx;
import com.mbridge.msdk.foundation.tools.z;
import java.util.List;
import java.util.Random;

public class e implements c {
    private static final String a = e.class.getSimpleName();
    private c b;
    private com.mbridge.msdk.c.d c;
    private boolean d = false;

    public e(c cVar, com.mbridge.msdk.c.d dVar) {
        this.c = dVar;
        this.b = cVar;
    }

    @Override
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
                    z.d(a, this.d + "");
                }
            } catch (Exception e) {
                z.c(a, "Exception", e);
            }
        }
        c cVar = this.b;
        if (cVar != null) {
            cVar.a(list);
        }
    }

    @Override
    public final void a(String str) {
        c cVar = this.b;
        if (cVar != null) {
            cVar.a(str);
        }
    }

    @Override
    public final void a() {
        c cVar = this.b;
        if (cVar == null || this.d) {
            return;
        }
        cVar.a();
    }

    @Override
    public final void b() {
        c cVar = this.b;
        if (cVar != null) {
            cVar.b();
        }
    }

    @Override
    public final void c() {
        c cVar = this.b;
        if (cVar != null) {
            cVar.c();
        }
    }

    @Override
    public final void d() {
        c cVar = this.b;
        if (cVar != null) {
            cVar.d();
        }
    }

    @Override
    public final void a(CampaignEx campaignEx, boolean z) {
        c cVar = this.b;
        if (cVar != null) {
            cVar.a(campaignEx, this.d);
        }
    }

    @Override
    public final void e() {
        c cVar = this.b;
        if (cVar != null) {
            cVar.e();
        }
    }

    @Override
    public final void a(boolean z) {
        c cVar = this.b;
        if (cVar != null) {
            cVar.a(z);
        }
    }
}
