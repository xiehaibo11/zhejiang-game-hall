package com.kwad.sdk.collector;

import com.tkay.expressad.atsignalcommon.mraid.CallMraidJS;
import java.util.Iterator;
import java.util.List;
import org.json.JSONArray;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public final class g {
    public static int PERMISSION_DENIED = 2;
    public static int PERMISSION_GRANTED = 1;
    public static int ajL;
    private String ajK;
    private int state;

    public g(String str, int i) {
        this.state = ajL;
        this.ajK = str;
        this.state = i;
    }

    public static JSONArray p(List<g> list) {
        JSONArray jSONArray = new JSONArray();
        if (list == null) {
            return jSONArray;
        }
        Iterator<g> it = list.iterator();
        while (it.hasNext()) {
            jSONArray.put(it.next().toJson());
        }
        return jSONArray;
    }

    private JSONObject toJson() {
        JSONObject jSONObject = new JSONObject();
        try {
            jSONObject.put("name", yI());
            jSONObject.put(CallMraidJS.b, this.state);
        } catch (JSONException e) {
            com.kwad.sdk.core.e.c.printStackTrace(e);
        }
        return jSONObject;
    }

    private String yI() {
        int iLastIndexOf;
        String str = this.ajK;
        return ((str.startsWith("com.android.") || this.ajK.startsWith("android.permission")) && (iLastIndexOf = this.ajK.lastIndexOf(".")) < this.ajK.length() + (-1)) ? this.ajK.substring(iLastIndexOf + 1) : str;
    }
}
