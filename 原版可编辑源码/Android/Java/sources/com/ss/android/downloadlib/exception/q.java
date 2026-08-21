package com.ss.android.downloadlib.exception;

import android.text.TextUtils;
import android.util.Log;
import com.ss.android.downloadlib.addownload.bm;
import com.ss.android.downloadlib.utils.b;
import com.ss.android.socialbase.appdownloader.c.pp;
import org.json.JSONObject;

public class q implements com.ss.android.download.api.df.rg {

    private static class rg {
        private static q rg = new q();
    }

    public static q rg() {
        return rg.rg;
    }

    @Override
    public void rg(Throwable th, String str) {
        rg(true, th, str);
    }

    public void rg(boolean z, Throwable th, String str) {
        if (df()) {
            return;
        }
        if (th == null) {
            th = new Throwable();
        }
        if (z) {
            df(th);
        }
        JSONObject jSONObject = new JSONObject();
        if (TextUtils.isEmpty(str)) {
            str = th.getMessage();
        }
        b.rg(jSONObject, "msg", str);
        b.rg(jSONObject, "stack", Log.getStackTraceString(th));
        bm.ux().rg("service_ttdownloader", 1, jSONObject);
    }

    public void rg(String str) {
        rg(true, str);
    }

    public void rg(boolean z, String str) {
        if (df()) {
            return;
        }
        if (z) {
            df(new RuntimeException(str));
        }
        JSONObject jSONObject = new JSONObject();
        b.rg(jSONObject, "msg", str);
        b.rg(jSONObject, "stack", rg(new Throwable()));
        bm.ux().rg("service_ttdownloader", 2, jSONObject);
    }

    public void df(String str) {
        df(true, str);
    }

    public void df(boolean z, String str) {
        if (df()) {
            return;
        }
        if (z) {
            df(new RuntimeException(str));
        }
        JSONObject jSONObject = new JSONObject();
        b.rg(jSONObject, "msg", str);
        b.rg(jSONObject, "stack", rg(new Throwable()));
        bm.ux().rg("service_ttdownloader", 3, jSONObject);
    }

    private void df(Throwable th) {
        if (pp.df(bm.getContext())) {
            throw new com.ss.android.downloadlib.exception.rg(th);
        }
    }

    public static String rg(Throwable th) {
        try {
            return Log.getStackTraceString(th);
        } catch (Exception unused) {
            return null;
        }
    }

    private boolean df() {
        return bm.rz().optInt("enable_monitor", 1) != 1;
    }
}
