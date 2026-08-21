package com.mbridge.msdk.mbjscommon.windvane;

import android.text.TextUtils;

/* JADX INFO: compiled from: MVCallJs.java */
/* JADX INFO: loaded from: classes2.dex */
public final class e {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static e f3734a = new e();

    private e() {
    }

    public static e a() {
        return f3734a;
    }

    public final void a(Object obj, String str) {
        if (obj instanceof a) {
            a aVar = (a) obj;
            String str2 = TextUtils.isEmpty(str) ? String.format("javascript:window.OfferWall.onSuccess(%s,'');", aVar.g) : String.format("javascript:window.OfferWall.onSuccess(%s,'%s');", aVar.g, k.c(str));
            if (aVar.f3733a != null) {
                try {
                    aVar.f3733a.loadUrl(str2);
                } catch (Exception e) {
                    e.printStackTrace();
                } catch (Throwable th) {
                    th.printStackTrace();
                }
            }
        }
    }
}
