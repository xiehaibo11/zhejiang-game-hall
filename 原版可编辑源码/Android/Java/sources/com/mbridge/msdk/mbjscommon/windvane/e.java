package com.mbridge.msdk.mbjscommon.windvane;

import android.text.TextUtils;

public final class e {
    private static e a = new e();

    private e() {
    }

    public static e a() {
        return a;
    }

    public final void a(Object obj, String str) {
        if (obj instanceof a) {
            a aVar = (a) obj;
            String str2 = TextUtils.isEmpty(str) ? String.format("javascript:window.OfferWall.onSuccess(%s,'');", aVar.g) : String.format("javascript:window.OfferWall.onSuccess(%s,'%s');", aVar.g, k.c(str));
            if (aVar.a != null) {
                try {
                    aVar.a.loadUrl(str2);
                } catch (Exception e) {
                    e.printStackTrace();
                } catch (Throwable th) {
                    th.printStackTrace();
                }
            }
        }
    }
}
