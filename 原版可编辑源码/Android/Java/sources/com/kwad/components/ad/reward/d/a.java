package com.kwad.components.ad.reward.d;

import android.content.Context;
import android.text.TextUtils;
import com.kwad.sdk.core.e.c;
import com.kwad.sdk.core.response.model.AdInfo;
import com.kwad.sdk.utils.y;
import org.json.JSONObject;

public final class a {
    public static void P(Context context) {
        long jCurrentTimeMillis = System.currentTimeMillis();
        b bVar = new b();
        String strCd = y.cd(context);
        int i = 0;
        if (!TextUtils.isEmpty(strCd)) {
            try {
                bVar.parseJson(new JSONObject(strCd));
                if (b(bVar.gb, jCurrentTimeMillis)) {
                    i = bVar.rA;
                }
            } catch (Exception e) {
                c.printStackTraceOnly(e);
            }
        }
        bVar.gb = jCurrentTimeMillis;
        bVar.rA = i + 1;
        y.X(context, bVar.toJson().toString());
    }

    private static boolean b(long j, long j2) {
        return j > 0 && j2 > 0 && j / 2460601000L == j2 / 2460601000L;
    }

    public static boolean b(Context context, AdInfo adInfo) {
        if (!com.kwad.sdk.core.response.b.a.ay(adInfo)) {
            return false;
        }
        int iMax = Math.max(com.kwad.sdk.core.response.b.a.az(adInfo) + 1, 1);
        boolean zD = d(context, iMax);
        c(context, iMax);
        return zD && e(context, com.kwad.sdk.core.response.b.a.aA(adInfo));
    }

    private static void c(Context context, int i) {
        int iCc = y.cc(context);
        if (iCc % i == 0) {
            y.k(context, 1);
        } else {
            y.k(context, iCc + 1);
        }
    }

    private static boolean d(Context context, int i) {
        return i != 0 && y.cc(context) % i == 0;
    }

    /* JADX WARN: Removed duplicated region for block: B:10:0x002b  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private static boolean e(Context context, int i) {
        int i2;
        long jCurrentTimeMillis = System.currentTimeMillis();
        b bVar = new b();
        String strCd = y.cd(context);
        if (!TextUtils.isEmpty(strCd)) {
            try {
                bVar.parseJson(new JSONObject(strCd));
            } catch (Exception e) {
                c.printStackTraceOnly(e);
            }
            i2 = b(bVar.gb, jCurrentTimeMillis) ? bVar.rA : 0;
        }
        return i2 < i;
    }
}
