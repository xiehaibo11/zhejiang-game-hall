package com.kwad.components.ad.interstitial.b;

import android.content.Context;
import android.text.TextUtils;
import com.kwad.sdk.core.e.c;
import com.kwad.sdk.utils.y;
import java.text.SimpleDateFormat;
import java.util.Date;
import org.json.JSONObject;

public class b extends com.kwad.sdk.core.response.a.a {
    private static SimpleDateFormat ga = new SimpleDateFormat("yyyy-MM-dd");
    public long gb = -1;
    public int iV = 0;
    public int iW = 0;

    public static void J(Context context) {
        String strIs = y.Is();
        b bVar = new b();
        if (TextUtils.isEmpty(strIs)) {
            bVar.iV = 1;
            bVar.gb = System.currentTimeMillis();
            y.V(context, bVar.toJson().toString());
            return;
        }
        try {
            bVar.parseJson(new JSONObject(strIs));
            if (b(bVar.gb, System.currentTimeMillis())) {
                bVar.iV++;
            } else {
                bVar.iV = 1;
                bVar.iW = 0;
                bVar.gb = System.currentTimeMillis();
            }
            y.V(context, bVar.toJson().toString());
        } catch (Exception e) {
            c.printStackTraceOnly(e);
        }
    }

    public static void K(Context context) {
        String strIs = y.Is();
        b bVar = new b();
        if (TextUtils.isEmpty(strIs)) {
            bVar.iW = 1;
            bVar.gb = System.currentTimeMillis();
            y.V(context, bVar.toJson().toString());
            return;
        }
        try {
            bVar.parseJson(new JSONObject(strIs));
            if (b(bVar.gb, System.currentTimeMillis())) {
                bVar.iW++;
            } else {
                bVar.iW = 1;
                bVar.iV = 0;
                bVar.gb = System.currentTimeMillis();
            }
            y.V(context, bVar.toJson().toString());
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
        String strIs = y.Is();
        if (TextUtils.isEmpty(strIs)) {
            return 0;
        }
        b bVar = new b();
        try {
            bVar.parseJson(new JSONObject(strIs));
            return bVar.iV;
        } catch (Exception e) {
            c.printStackTraceOnly(e);
            return 0;
        }
    }

    public static int cJ() {
        String strIs = y.Is();
        if (TextUtils.isEmpty(strIs)) {
            return 0;
        }
        b bVar = new b();
        try {
            bVar.parseJson(new JSONObject(strIs));
            return bVar.iW;
        } catch (Exception e) {
            c.printStackTraceOnly(e);
            return 0;
        }
    }
}
