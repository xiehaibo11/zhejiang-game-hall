package com.mbridge.msdk.mbjscommon.confirmation;

import android.content.Context;
import com.mbridge.msdk.foundation.entity.CampaignEx;
import com.mbridge.msdk.foundation.tools.z;

public final class c implements com.mbridge.msdk.widget.dialog.a {
    private static String a = "MBAlertDialogProxyListener";
    private com.mbridge.msdk.widget.dialog.a b;
    private Context c;
    private CampaignEx d;
    private String e;
    private String f;
    private int g = 2;

    public c(com.mbridge.msdk.widget.dialog.a aVar, Context context, CampaignEx campaignEx, String str, String str2) {
        this.b = aVar;
        this.c = context;
        this.d = campaignEx;
        this.e = str;
        this.f = str2;
    }

    public final void a(int i) {
        this.g = i;
    }

    @Override
    public final void a() {
        e.a().b();
        z.a(a, "onDialogCancel");
        com.mbridge.msdk.foundation.same.report.e.a(this.c, this.d, this.e, this.f, this.g, 1, 2);
        com.mbridge.msdk.widget.dialog.a aVar = this.b;
        if (aVar != null) {
            aVar.a();
        }
    }

    @Override
    public final void b() {
        e.a().b();
        z.a(a, "onDialogConfirm");
        com.mbridge.msdk.foundation.same.report.e.a(this.c, this.d, this.e, this.f, this.g, 0, 2);
        com.mbridge.msdk.widget.dialog.a aVar = this.b;
        if (aVar != null) {
            aVar.b();
        }
    }

    @Override
    public final void c() {
        z.a(a, "onDialogCancel");
        com.mbridge.msdk.foundation.same.report.e.a(this.c, this.d, this.e, this.f, this.g, 2, 2);
        com.mbridge.msdk.widget.dialog.a aVar = this.b;
        if (aVar != null) {
            aVar.c();
        }
    }
}
