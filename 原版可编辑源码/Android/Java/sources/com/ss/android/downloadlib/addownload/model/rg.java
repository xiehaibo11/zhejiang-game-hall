package com.ss.android.downloadlib.addownload.model;

import com.ss.android.downloadlib.utils.b;
import org.json.JSONException;
import org.json.JSONObject;

public class rg {
    public String c;
    public long df;
    public String fw;
    public String pp;
    public String pt;
    public long q;
    public long rg;
    public volatile long ux;

    public rg() {
    }

    public rg(long j, long j2, long j3, String str, String str2, String str3, String str4) {
        this.rg = j;
        this.df = j2;
        this.q = j3;
        this.pt = str;
        this.pp = str2;
        this.c = str3;
        this.fw = str4;
    }

    public JSONObject rg() {
        JSONObject jSONObject = new JSONObject();
        try {
            jSONObject.put("mDownloadId", this.rg);
            jSONObject.put("mAdId", this.df);
            jSONObject.put("mExtValue", this.q);
            jSONObject.put("mPackageName", this.pt);
            jSONObject.put("mAppName", this.pp);
            jSONObject.put("mLogExtra", this.c);
            jSONObject.put("mFileName", this.fw);
            jSONObject.put("mTimeStamp", this.ux);
        } catch (JSONException e) {
            e.printStackTrace();
        }
        return jSONObject;
    }

    public static rg rg(JSONObject jSONObject) {
        if (jSONObject == null) {
            return null;
        }
        rg rgVar = new rg();
        try {
            rgVar.rg = b.rg(jSONObject, "mDownloadId");
            rgVar.df = b.rg(jSONObject, "mAdId");
            rgVar.q = b.rg(jSONObject, "mExtValue");
            rgVar.pt = jSONObject.optString("mPackageName");
            rgVar.pp = jSONObject.optString("mAppName");
            rgVar.c = jSONObject.optString("mLogExtra");
            rgVar.fw = jSONObject.optString("mFileName");
            rgVar.ux = b.rg(jSONObject, "mTimeStamp");
            return rgVar;
        } catch (Exception e) {
            e.printStackTrace();
            return null;
        }
    }
}
