package com.mbridge.msdk.rover;

import android.content.Context;
import android.os.Build;
import android.text.TextUtils;
import com.mbridge.msdk.foundation.tools.SameMD5;
import com.mbridge.msdk.foundation.tools.t;
import com.mbridge.msdk.foundation.tools.v;
import com.mbridge.msdk.out.MBConfiguration;
import com.xiaomi.mipush.sdk.Constants;
import org.json.JSONObject;

public final class g extends com.mbridge.msdk.foundation.same.net.g.b {
    public g(Context context) {
        super(context);
    }

    @Override
    public final void addExtraParams(String str, com.mbridge.msdk.foundation.same.net.g.d dVar) {
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
        dVar.a("network_str", v.a(this.mContext, iD));
        dVar.a("language", v.s(this.mContext));
        dVar.a("timezone", v.B());
        dVar.a("useragent", v.A());
        dVar.a("sdk_version", MBConfiguration.SDK_VERSION);
        dVar.a(com.tkay.expressad.foundation.g.a.bp, v.j(this.mContext));
        dVar.a(com.tkay.expressad.foundation.g.a.bq, v.x(this.mContext) + "x" + v.y(this.mContext));
        StringBuilder sb = new StringBuilder();
        sb.append(com.mbridge.msdk.foundation.controller.a.f().k());
        sb.append(com.mbridge.msdk.foundation.controller.a.f().l());
        dVar.a("sign", SameMD5.getMD5(sb.toString()));
        dVar.a("app_id", com.mbridge.msdk.foundation.controller.a.f().k());
        com.mbridge.msdk.c.a aVarB = com.mbridge.msdk.c.b.a().b(com.mbridge.msdk.foundation.controller.a.f().k());
        if (aVarB != null) {
            JSONObject jSONObject = new JSONObject();
            try {
                if (aVarB.Z() == 1) {
                    if (v.b(this.mContext) != null) {
                        jSONObject.put("imei", v.b(this.mContext));
                    }
                    if (v.i(this.mContext) != null) {
                        jSONObject.put("mac", v.i(this.mContext));
                    }
                }
                if (aVarB.aa() == 1 && v.g(this.mContext) != null) {
                    jSONObject.put("android_id", v.g(this.mContext));
                }
                if (!TextUtils.isEmpty(jSONObject.toString())) {
                    String strA = t.a(jSONObject.toString());
                    if (!TextUtils.isEmpty(strA)) {
                        dVar.a("dvi", strA);
                        return;
                    } else {
                        dVar.a("dvi", "");
                        return;
                    }
                }
                dVar.a("dvi", "");
                return;
            } catch (Exception e) {
                e.printStackTrace();
                return;
            }
        }
        dVar.a("dvi", "");
    }
}
