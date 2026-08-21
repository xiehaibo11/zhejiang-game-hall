package com.mbridge.msdk.mbbanner.common.util;

import android.os.Handler;
import android.os.Looper;
import com.mbridge.msdk.foundation.entity.CampaignUnit;
import com.mbridge.msdk.foundation.tools.z;
import com.mbridge.msdk.mbbanner.common.b.b;

/* JADX INFO: compiled from: BannerDelivery.java */
/* JADX INFO: loaded from: classes2.dex */
public class a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final String f3642a = a.class.getSimpleName();
    private final Handler b = new Handler(Looper.getMainLooper());
    private boolean c;

    public final void a(boolean z) {
        this.c = z;
    }

    public final void a(final b bVar, final CampaignUnit campaignUnit, final String str) {
        z.d(f3642a, "postCampaignSuccess unitId=" + str);
        this.b.post(new Runnable() { // from class: com.mbridge.msdk.mbbanner.common.util.a.1
            @Override // java.lang.Runnable
            public final void run() {
                b bVar2 = bVar;
                if (bVar2 != null) {
                    bVar2.a(str, campaignUnit, a.this.c);
                }
            }
        });
    }

    public final void a(final b bVar, final String str, final String str2) {
        z.b(f3642a, "postCampaignFail errorMsg=" + str + " unitId=" + str2);
        this.b.post(new Runnable() { // from class: com.mbridge.msdk.mbbanner.common.util.a.2
            @Override // java.lang.Runnable
            public final void run() {
                b bVar2 = bVar;
                if (bVar2 != null) {
                    bVar2.a(str2, str, a.this.c);
                }
            }
        });
    }

    public final void a(final b bVar, final String str) {
        z.d(f3642a, "postResourceSuccess unitId=" + str);
        this.b.post(new Runnable() { // from class: com.mbridge.msdk.mbbanner.common.util.a.3
            @Override // java.lang.Runnable
            public final void run() {
                b bVar2 = bVar;
                if (bVar2 != null) {
                    bVar2.a(str, a.this.c);
                }
            }
        });
    }

    public final void b(final b bVar, final String str) {
        z.d(f3642a, "postResourceFail unitId=" + str);
        this.b.post(new Runnable() { // from class: com.mbridge.msdk.mbbanner.common.util.a.4
            @Override // java.lang.Runnable
            public final void run() {
                b bVar2 = bVar;
                if (bVar2 != null) {
                    bVar2.b(str, a.this.c);
                }
            }
        });
    }
}
