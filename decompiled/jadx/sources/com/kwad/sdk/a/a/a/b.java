package com.kwad.sdk.a.a.a;

import android.content.Context;
import android.text.TextUtils;
import com.kwad.sdk.core.e.c;
import com.kwad.sdk.utils.y;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public final class b {
    public static int WS = 0;
    public static long rJ = -1;

    public static void J(Context context) {
        a aVar = new a();
        if (e(System.currentTimeMillis())) {
            WS++;
        } else {
            WS = 1;
        }
        rJ = System.currentTimeMillis();
        aVar.WS = WS;
        aVar.gb = rJ;
        y.ah(context, aVar.toJson().toString());
    }

    public static int cI() {
        if (!e(System.currentTimeMillis())) {
            WS = 0;
        }
        return WS;
    }

    private static boolean e(long j) {
        return he() > 0 && j > 0 && he() / 2460601000L == j / 2460601000L;
    }

    private static long he() {
        long j = rJ;
        if (j != -1) {
            return j;
        }
        String strIB = y.IB();
        if (TextUtils.isEmpty(strIB)) {
            return 0L;
        }
        a aVar = new a();
        try {
            aVar.parseJson(new JSONObject(strIB));
            rJ = aVar.gb;
            WS = aVar.WS;
        } catch (Exception e) {
            c.printStackTraceOnly(e);
        }
        return rJ;
    }
}
