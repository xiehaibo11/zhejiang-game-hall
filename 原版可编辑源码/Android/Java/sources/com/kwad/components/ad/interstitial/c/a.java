package com.kwad.components.ad.interstitial.c;

import android.content.Context;
import android.text.TextUtils;
import com.kwad.sdk.core.e.c;
import com.kwad.sdk.utils.y;
import java.text.SimpleDateFormat;
import java.util.Date;
import org.json.JSONObject;

public class a extends com.kwad.sdk.core.response.a.a {
    private static SimpleDateFormat ga = new SimpleDateFormat("yyyy-MM-dd");
    public long iX = -1;
    public int iY = 0;

    public static void L(Context context) {
        String strIx = y.Ix();
        a aVar = new a();
        if (TextUtils.isEmpty(strIx)) {
            aVar.iY = 1;
            aVar.iX = System.currentTimeMillis();
            y.ab(context, aVar.toJson().toString());
            return;
        }
        try {
            aVar.parseJson(new JSONObject(strIx));
            if (b(aVar.iX, System.currentTimeMillis())) {
                aVar.iY++;
            } else {
                aVar.iY = 1;
                aVar.iX = System.currentTimeMillis();
            }
            y.ab(context, aVar.toJson().toString());
        } catch (Exception e) {
            c.printStackTrace(e);
        }
    }

    private static boolean b(long j, long j2) {
        if (j > 0 && j2 > 0) {
            try {
                return ga.format(new Date(j)).equals(ga.format(new Date(j2)));
            } catch (Exception e) {
                c.printStackTrace(e);
            }
        }
        return false;
    }

    public static int cK() {
        String strIx = y.Ix();
        if (TextUtils.isEmpty(strIx)) {
            return 0;
        }
        a aVar = new a();
        try {
            aVar.parseJson(new JSONObject(strIx));
            if (b(aVar.iX, System.currentTimeMillis())) {
                return aVar.iY;
            }
            return 0;
        } catch (Exception e) {
            c.printStackTrace(e);
            return 0;
        }
    }
}
