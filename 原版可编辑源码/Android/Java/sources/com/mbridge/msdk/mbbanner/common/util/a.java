package com.mbridge.msdk.mbbanner.common.util;

import android.os.Handler;
import android.os.Looper;
import com.mbridge.msdk.foundation.entity.CampaignUnit;
import com.mbridge.msdk.foundation.tools.z;
import com.mbridge.msdk.mbbanner.common.b.b;

public class a {
    private static final String a = a.class.getSimpleName();
    private final Handler b = new Handler(Looper.getMainLooper());
    private boolean c;

    public final void a(boolean z) {
        this.c = z;
    }

    public final void a(final b bVar, final CampaignUnit campaignUnit, final String str) {
        z.d(a, "postCampaignSuccess unitId=" + str);
        this.b.post(new Runnable() {
            @Override
            public final void run() {
                b bVar2 = bVar;
                if (bVar2 != null) {
                    bVar2.a(str, campaignUnit, a.this.c);
                }
            }
        });
    }

    public final void a(final b bVar, final String str, final String str2) {
        z.b(a, "postCampaignFail errorMsg=" + str + " unitId=" + str2);
        this.b.post(new Runnable() {
            @Override
            public final void run() {
                b bVar2 = bVar;
                if (bVar2 != null) {
                    bVar2.a(str2, str, a.this.c);
                }
            }
        });
    }

    public final void a(final b bVar, final String str) {
        z.d(a, "postResourceSuccess unitId=" + str);
        this.b.post(new Runnable() {
            @Override
            public final void run() {
                b bVar2 = bVar;
                if (bVar2 != null) {
                    bVar2.a(str, a.this.c);
                }
            }
        });
    }

    public final void b(final b bVar, final String str) {
        z.d(a, "postResourceFail unitId=" + str);
        this.b.post(new Runnable() {
            @Override
            public final void run() {
                b bVar2 = bVar;
                if (bVar2 != null) {
                    bVar2.b(str, a.this.c);
                }
            }
        });
    }
}
