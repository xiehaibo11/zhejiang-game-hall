package com.ss.android.downloadlib.addownload.compliance;

import com.ss.android.downloadlib.addownload.model.c;
import com.ss.android.downloadlib.constants.EventConstants;
import com.ss.android.downloadlib.event.AdEventHandler;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes3.dex */
class pp {
    public static void rg(String str, long j) {
        com.ss.android.downloadlib.addownload.model.pp ppVarPp = c.rg().pp(j);
        if (ppVarPp.re()) {
            return;
        }
        ppVarPp.q.setRefer(str);
        AdEventHandler.rg().df(EventConstants.Label.LP_APP_DIALOG_CLICK, ppVarPp);
    }

    public static void df(String str, long j) {
        rg(str, null, j);
    }

    public static void rg(String str, JSONObject jSONObject, long j) {
        AdEventHandler.rg().df(str, jSONObject, c.rg().pp(j));
    }

    public static void rg(String str, com.ss.android.downloadlib.addownload.model.pp ppVar) {
        AdEventHandler.rg().df(str, ppVar);
    }

    public static void rg(int i, com.ss.android.downloadlib.addownload.model.pp ppVar) {
        JSONObject jSONObject = new JSONObject();
        try {
            jSONObject.putOpt("error_code", Integer.valueOf(i));
        } catch (Exception e) {
            e.printStackTrace();
        }
        AdEventHandler.rg().df(EventConstants.Label.LP_COMPLIANCE_ERROR, jSONObject, ppVar);
    }

    public static void rg(int i, long j) {
        JSONObject jSONObject = new JSONObject();
        try {
            jSONObject.putOpt("error_code", Integer.valueOf(i));
        } catch (Exception e) {
            e.printStackTrace();
        }
        AdEventHandler.rg().df(EventConstants.Label.LP_COMPLIANCE_ERROR, jSONObject, c.rg().pp(j));
    }
}
