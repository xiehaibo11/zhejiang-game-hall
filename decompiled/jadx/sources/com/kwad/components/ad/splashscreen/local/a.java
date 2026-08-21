package com.kwad.components.ad.splashscreen.local;

import android.content.Context;
import android.text.TextUtils;
import com.kwad.sdk.core.e.c;
import com.kwad.sdk.utils.y;
import java.text.SimpleDateFormat;
import java.util.Date;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public class a extends com.kwad.sdk.core.response.a.a {
    private static SimpleDateFormat ga = new SimpleDateFormat("yyyy-MM-dd");
    public long gb = 0;
    public int gc = 0;

    public static void T(Context context) {
        String strIv = y.Iv();
        a aVar = new a();
        if (TextUtils.isEmpty(strIv)) {
            aVar.gc = 1;
            aVar.gb = System.currentTimeMillis();
            y.Z(context, aVar.toJson().toString());
            return;
        }
        try {
            aVar.parseJson(new JSONObject(strIv));
            if (b(aVar.gb, System.currentTimeMillis())) {
                aVar.gc++;
            } else {
                aVar.gc = 1;
            }
            aVar.gb = System.currentTimeMillis();
            y.Z(context, aVar.toJson().toString());
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
}
