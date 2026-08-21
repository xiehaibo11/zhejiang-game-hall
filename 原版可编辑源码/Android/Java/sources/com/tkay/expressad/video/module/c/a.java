package com.tkay.expressad.video.module.c;

import android.content.Context;
import android.os.Build;
import android.text.TextUtils;
import com.tkay.expressad.foundation.g.f.h.b;
import com.tkay.expressad.foundation.h.j;
import com.tkay.expressad.foundation.h.k;
import com.tkay.expressad.out.n;
import com.xiaomi.mipush.sdk.Constants;
import org.json.JSONObject;

public final class a extends com.tkay.expressad.foundation.g.f.h.a {
    public a(Context context) {
        super(context);
    }

    @Override
    public final void a(String str, b bVar) {
        super.a(str, bVar);
        bVar.a("platform", "1");
        bVar.a(com.tkay.expressad.foundation.g.a.bd, Build.VERSION.RELEASE);
        bVar.a("package_name", k.h(this.a));
        bVar.a(com.tkay.expressad.foundation.g.a.bf, k.d(this.a));
        StringBuilder sb = new StringBuilder();
        sb.append(k.c(this.a));
        bVar.a(Constants.EXTRA_KEY_APP_VERSION_CODE, sb.toString());
        StringBuilder sb2 = new StringBuilder();
        sb2.append(k.b(this.a));
        bVar.a("orientation", sb2.toString());
        bVar.a("gaid", "");
        bVar.a("sdk_version", n.a);
        com.tkay.expressad.d.b.a();
        com.tkay.expressad.foundation.b.b.b().e();
        if (com.tkay.expressad.d.b.b() != null) {
            JSONObject jSONObject = new JSONObject();
            try {
                if (TextUtils.isEmpty(jSONObject.toString())) {
                    return;
                }
                String strA = j.a(jSONObject.toString());
                if (TextUtils.isEmpty(strA)) {
                    return;
                }
                bVar.a("dvi", strA);
            } catch (Exception e) {
                e.printStackTrace();
            }
        }
    }
}
