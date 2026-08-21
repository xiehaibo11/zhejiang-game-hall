package com.kwad.components.ad.interstitial.b;

import android.content.Context;
import android.text.TextUtils;
import com.kwad.sdk.core.e.c;
import com.kwad.sdk.utils.y;
import java.text.SimpleDateFormat;
import java.util.Date;
import org.json.JSONObject;

public class a extends com.kwad.sdk.core.response.a.a {
    private static SimpleDateFormat ga = new SimpleDateFormat("yyyy-MM-dd");
    public long gb = -1;
    public int iU = 0;

    public static void J(Context context) {
        String strIt = y.It();
        a aVar = new a();
        if (TextUtils.isEmpty(strIt)) {
            aVar.iU = 1;
            aVar.gb = System.currentTimeMillis();
            y.W(context, aVar.toJson().toString());
            return;
        }
        try {
            aVar.parseJson(new JSONObject(strIt));
            if (b(aVar.gb, System.currentTimeMillis())) {
                aVar.iU++;
            } else {
                aVar.iU = 1;
                aVar.gb = System.currentTimeMillis();
            }
            y.W(context, aVar.toJson().toString());
        } catch (Exception e) {
            c.printStackTraceOnly(e);
        }
    }

    private static boolean b(long j, long j2) {
        if (j > 0 && j2 > 0) {
            try {
                return ga.format(new Date(j)).equals(ga.format(new Date(j2)));
            } catch (Exception e) {
                c.printStackTraceOnly(e);
            }
        }
        return false;
    }

    public static int cI() {
        String strIt = y.It();
        if (TextUtils.isEmpty(strIt)) {
            return 0;
        }
        a aVar = new a();
        try {
            aVar.parseJson(new JSONObject(strIt));
            if (b(aVar.gb, System.currentTimeMillis())) {
                return aVar.iU;
            }
            return 0;
        } catch (Exception e) {
            c.printStackTraceOnly(e);
            return 0;
        }
    }
}
