package com.kwad.sdk.core.config.item;

import android.content.SharedPreferences;
import com.kwad.sdk.utils.ah;
import com.kwad.sdk.utils.t;
import java.util.ArrayList;
import java.util.List;
import java.util.concurrent.CopyOnWriteArrayList;
import org.json.JSONArray;
import org.json.JSONObject;

public final class q extends b<List<String>> {
    public q(String str, List<String> list) {
        super(str, list);
    }

    @Override
    public final List<String> getValue() {
        List<String> list = (List) super.getValue();
        return list == null ? new ArrayList() : list;
    }

    @Override
    public final void a(SharedPreferences sharedPreferences) {
        List listFw = t.fw(cx(sharedPreferences.getString(getKey(), "")));
        if (ah.J(listFw)) {
            setValue(listFw);
        } else {
            setValue(zZ());
        }
    }

    @Override
    public final void b(SharedPreferences.Editor editor) {
        if (ah.J(getValue())) {
            editor.putString(getKey(), cw(t.toJsonArray(getValue()).toString()));
        }
    }

    @Override
    public final void g(JSONObject jSONObject) {
        JSONArray jSONArrayOptJSONArray;
        if (jSONObject != null && (jSONArrayOptJSONArray = jSONObject.optJSONArray(getKey())) != null && jSONArrayOptJSONArray.length() > 0) {
            CopyOnWriteArrayList copyOnWriteArrayList = new CopyOnWriteArrayList();
            for (int i = 0; i < jSONArrayOptJSONArray.length(); i++) {
                String strOptString = jSONArrayOptJSONArray.optString(i);
                if (strOptString != null && !strOptString.isEmpty()) {
                    copyOnWriteArrayList.add(strOptString);
                }
            }
            if (copyOnWriteArrayList.size() > 0) {
                setValue(copyOnWriteArrayList);
                return;
            }
        }
        setValue(zZ());
    }
}
