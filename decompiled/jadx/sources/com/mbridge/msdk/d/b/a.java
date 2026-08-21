package com.mbridge.msdk.d.b;

import android.content.Context;
import android.os.Build;
import com.mbridge.msdk.foundation.same.net.g.d;
import com.mbridge.msdk.foundation.same.net.g.e;
import com.mbridge.msdk.foundation.tools.v;
import com.mbridge.msdk.out.MBConfiguration;
import com.xiaomi.mipush.sdk.Constants;

/* JADX INFO: compiled from: ShortCutsRequest.java */
/* JADX INFO: loaded from: classes2.dex */
public final class a extends com.mbridge.msdk.foundation.same.net.g.a {
    public a(Context context) {
        super(context);
    }

    @Override // com.mbridge.msdk.foundation.same.net.g.a, com.mbridge.msdk.foundation.same.net.g.b
    public final void addExtraParams(String str, d dVar) {
        super.addExtraParams(str, dVar);
        dVar.a("platform", "1");
        dVar.a(com.tkay.expressad.foundation.g.a.bd, Build.VERSION.RELEASE);
        dVar.a("package_name", v.A(this.mContext));
        dVar.a(com.tkay.expressad.foundation.g.a.bf, v.v(this.mContext));
        dVar.a(Constants.EXTRA_KEY_APP_VERSION_CODE, v.u(this.mContext) + "");
        dVar.a("orientation", v.t(this.mContext) + "");
        dVar.a("model", v.x());
        dVar.a("brand", v.z());
        dVar.a("gaid", "");
        dVar.a("gaid2", v.F());
        dVar.a("mnc", v.e(this.mContext));
        dVar.a("mcc", v.d(this.mContext));
        int iD = v.D(this.mContext);
        dVar.a("network_type", iD + "");
        dVar.a("network_str", v.a(this.mContext, iD) + "");
        dVar.a("language", v.s(this.mContext));
        dVar.a("timezone", v.B());
        dVar.a("useragent", v.A());
        dVar.a("sdk_version", MBConfiguration.SDK_VERSION);
        dVar.a(com.tkay.expressad.foundation.g.a.bp, v.j(this.mContext));
        dVar.a(com.tkay.expressad.foundation.g.a.bq, v.x(this.mContext) + "x" + v.y(this.mContext));
        dVar.a("is_clever", com.mbridge.msdk.foundation.same.a.l);
        e.a(dVar, this.mContext);
        e.a(dVar);
    }
}
