package com.kwad.sdk.crash.online.monitor.a;

import android.text.TextUtils;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public class a extends com.kwad.sdk.core.response.a.a {
    public List<String> aAT = new ArrayList();
    public List<String> aAU = new ArrayList();
    public List<String> aAV = new ArrayList();
    public List<String> aAW = new ArrayList();
    public List<b> aAX = new ArrayList();
    public Map<String, b> aAY = new HashMap();
    public int aAZ;
    public int aBa;
    public int aBb;
    public double aqQ;

    public final boolean Fc() {
        return (this.aBb & 4) != 0;
    }

    public final boolean Fd() {
        return (this.aBb & 1) != 0;
    }

    public final boolean Fe() {
        return (this.aBb & 2) != 0;
    }

    public final boolean Ff() {
        return this.aBb == 0;
    }

    @Override // com.kwad.sdk.core.response.a.a
    public void afterParseJson(JSONObject jSONObject) {
        super.afterParseJson(jSONObject);
        List<b> list = this.aAX;
        if (list != null) {
            for (b bVar : list) {
                this.aAY.put(bVar.appId, bVar);
            }
            this.aAX.clear();
        }
    }

    public final b eK(String str) {
        if (this.aAY == null) {
            return null;
        }
        b bVar = TextUtils.isEmpty(str) ? null : this.aAY.get(str);
        return bVar == null ? this.aAY.get("000000000") : bVar;
    }
}
