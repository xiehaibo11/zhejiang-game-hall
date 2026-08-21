package com.kwad.sdk.core.network.idc.a;

import android.text.TextUtils;
import com.kwad.sdk.core.b;
import com.kwad.sdk.core.e.c;
import com.kwad.sdk.utils.t;
import java.util.Collections;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import java.util.Set;
import java.util.concurrent.ConcurrentHashMap;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public final class a implements b {
    private final Map<String, List<String>> apY = new ConcurrentHashMap();

    private Map<String, List<String>> Br() {
        return this.apY;
    }

    public static a de(String str) {
        a aVar = new a();
        try {
            aVar.parseJson(new JSONObject(str));
        } catch (JSONException e) {
            c.printStackTraceOnly(e);
        }
        return aVar;
    }

    public final Set<String> Bs() {
        return this.apY.keySet();
    }

    public final void b(a aVar) {
        this.apY.clear();
        if (aVar != null) {
            this.apY.putAll(aVar.Br());
        }
    }

    public final List<String> dd(String str) {
        List<String> list = this.apY.get(str);
        return list == null ? Collections.emptyList() : list;
    }

    public final boolean isEmpty() {
        return this.apY.isEmpty();
    }

    @Override // com.kwad.sdk.core.b
    public final void parseJson(JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        HashMap map = new HashMap();
        Iterator<String> itKeys = jSONObject.keys();
        while (itKeys.hasNext()) {
            String next = itKeys.next();
            if (!TextUtils.isEmpty(next)) {
                map.put(next, t.h(jSONObject.optJSONArray(next)));
            }
        }
        this.apY.clear();
        this.apY.putAll(map);
    }

    @Override // com.kwad.sdk.core.b
    public final JSONObject toJson() {
        Map<String, List<String>> map = this.apY;
        JSONObject jSONObject = new JSONObject();
        for (String str : map.keySet()) {
            t.putValue(jSONObject, str, t.I(map.get(str)));
        }
        return jSONObject;
    }
}
