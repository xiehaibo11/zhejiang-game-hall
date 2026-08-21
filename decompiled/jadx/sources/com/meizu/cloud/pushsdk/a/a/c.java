package com.meizu.cloud.pushsdk.a.a;

import com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlNode;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes3.dex */
public class c {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final int f4480a;
    private final String b;

    public c(int i, String str) {
        this.f4480a = i;
        this.b = str;
    }

    public String toString() {
        JSONObject jSONObject = new JSONObject();
        try {
            jSONObject.put("code", this.f4480a);
            jSONObject.put(TtmlNode.TAG_BODY, this.b);
        } catch (JSONException e) {
            e.printStackTrace();
        }
        return "[NetResponse] " + jSONObject.toString();
    }
}
