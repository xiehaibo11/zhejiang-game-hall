package com.kwad.components.ad.reward.g;

import android.content.Context;
import android.text.TextUtils;
import com.kwad.sdk.core.e.c;
import com.kwad.sdk.utils.y;
import org.json.JSONObject;

public final class a {
    public static long rJ = -1;
    public static int rK;

    public static void J(Context context) {
        b bVar = new b();
        if (e(System.currentTimeMillis())) {
            rK++;
        } else {
            rK = 1;
        }
        rJ = System.currentTimeMillis();
        bVar.rL = rK;
        bVar.gb = rJ;
        y.Y(context, bVar.toJson().toString());
    }

    public static int cI() {
        if (!e(System.currentTimeMillis())) {
            rK = 0;
        }
        return rK;
    }

    private static boolean e(long j) {
        return he() > 0 && j > 0 && he() / 2460601000L == j / 2460601000L;
    }

    private static long he() {
        long j = rJ;
        if (j != -1) {
            return j;
        }
        String strIu = y.Iu();
        if (TextUtils.isEmpty(strIu)) {
            return 0L;
        }
        b bVar = new b();
        try {
            bVar.parseJson(new JSONObject(strIu));
            rJ = bVar.gb;
            rK = bVar.rL;
        } catch (Exception e) {
            c.printStackTraceOnly(e);
        }
        return rJ;
    }
}
