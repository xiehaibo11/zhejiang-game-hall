package com.vivo.push.cache;

import android.content.Context;
import android.text.TextUtils;
import android.util.Base64;
import com.vivo.push.util.f;
import com.vivo.push.util.p;
import com.vivo.push.util.z;
import com.xiaomi.mipush.sdk.Constants;
import java.util.ArrayList;
import java.util.List;

public final class a extends c<com.vivo.push.model.a> {
    public a(Context context) {
        super(context);
    }

    public static boolean a(int i) {
        return i != -1 ? (i & 1) != 0 : z.b("persist.sys.log.ctrl", "no").equals("yes");
    }

    @Override
    protected final String a() {
        return "com.vivo.pushservice.back_up";
    }

    @Override
    public final List<com.vivo.push.model.a> a(String str) {
        if (TextUtils.isEmpty(str)) {
            return null;
        }
        ArrayList arrayList = new ArrayList();
        if (!TextUtils.isEmpty(str)) {
            for (String str2 : str.trim().split("@#")) {
                String strTrim = str2.trim();
                String[] strArrSplit = strTrim.trim().split(Constants.ACCEPT_TIME_SEPARATOR_SP);
                if (strArrSplit.length >= 2) {
                    try {
                        arrayList.add(new com.vivo.push.model.a(strArrSplit[0], strTrim.substring(strArrSplit[0].length() + 1)));
                    } catch (Exception e) {
                        p.d("AppConfigSettings", "str2Clients E: ".concat(String.valueOf(e)));
                    }
                }
            }
        }
        return arrayList;
    }

    public final int b() {
        com.vivo.push.model.a aVarC = c("push_mode");
        if (aVarC != null && !TextUtils.isEmpty(aVarC.b())) {
            try {
                return Integer.parseInt(aVarC.b());
            } catch (Exception unused) {
            }
        }
        return -1;
    }

    @Override
    final String b(String str) {
        return new String(f.a(f.a(e()), f.a(f()), Base64.decode(str, 2)), "utf-8");
    }

    public final com.vivo.push.model.a c(String str) {
        synchronized (a) {
            for (T t : this.b) {
                if (!TextUtils.isEmpty(t.a()) && t.a().equals(str)) {
                    return t;
                }
            }
            return null;
        }
    }
}
