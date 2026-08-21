package com.kwad.components.ad.reward.model;

import android.content.Context;
import android.text.TextUtils;
import com.kwad.sdk.utils.y;
import java.text.SimpleDateFormat;
import java.util.Date;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public class b extends com.kwad.sdk.core.response.a.a {
    private static SimpleDateFormat ga = new SimpleDateFormat("yyyy-MM-dd");
    public long iX = -1;
    public int iY = 0;

    public static void L(Context context) {
        String strIw = y.Iw();
        b bVar = new b();
        if (TextUtils.isEmpty(strIw)) {
            bVar.iY = 1;
            bVar.iX = System.currentTimeMillis();
            y.aa(context, bVar.toJson().toString());
            return;
        }
        try {
            bVar.parseJson(new JSONObject(strIw));
            if (b(bVar.iX, System.currentTimeMillis())) {
                bVar.iY++;
            } else {
                bVar.iY = 1;
                bVar.iX = System.currentTimeMillis();
            }
            y.aa(context, bVar.toJson().toString());
        } catch (Exception e) {
            com.kwad.sdk.core.e.c.printStackTrace(e);
        }
    }

    private static boolean b(long j, long j2) {
        if (j > 0 && j2 > 0) {
            try {
                return ga.format(new Date(j)).equals(ga.format(new Date(j2)));
            } catch (Exception e) {
                com.kwad.sdk.core.e.c.printStackTrace(e);
            }
        }
        return false;
    }

    public static int cK() {
        String strIw = y.Iw();
        if (TextUtils.isEmpty(strIw)) {
            return 0;
        }
        b bVar = new b();
        try {
            bVar.parseJson(new JSONObject(strIw));
            if (b(bVar.iX, System.currentTimeMillis())) {
                return bVar.iY;
            }
            return 0;
        } catch (Exception e) {
            com.kwad.sdk.core.e.c.printStackTrace(e);
            return 0;
        }
    }
}
