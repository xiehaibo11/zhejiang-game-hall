package com.kwad.sdk.core.config.item;

import android.content.SharedPreferences;
import android.text.TextUtils;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import org.json.JSONArray;
import org.json.JSONException;
import org.json.JSONObject;

public final class o extends b<a> {
    private String amJ;

    public static final class a implements com.kwad.sdk.core.b {
        public Map<Integer, String> amK = new HashMap();
        public List<String> amL = new ArrayList();
        public List<String> amM = new ArrayList();
        public List<String> amN = new ArrayList();
        public int amO;
        private JSONObject amP;

        @Override
        public final void parseJson(JSONObject jSONObject) {
            if (jSONObject == null) {
                return;
            }
            this.amP = jSONObject;
            JSONObject jSONObjectOptJSONObject = jSONObject.optJSONObject("platformInfo");
            if (jSONObjectOptJSONObject != null) {
                Iterator<String> itKeys = jSONObjectOptJSONObject.keys();
                while (itKeys.hasNext()) {
                    String next = itKeys.next();
                    this.amK.put(Integer.valueOf(next), jSONObjectOptJSONObject.optString(next));
                }
            }
            JSONArray jSONArrayOptJSONArray = jSONObject.optJSONArray("keyStacks");
            if (jSONArrayOptJSONArray != null) {
                for (int i = 0; i < jSONArrayOptJSONArray.length(); i++) {
                    this.amL.add(jSONArrayOptJSONArray.optString(i));
                }
            }
            JSONArray jSONArrayOptJSONArray2 = jSONObject.optJSONArray("extendClassNames");
            if (jSONArrayOptJSONArray2 != null) {
                for (int i2 = 0; i2 < jSONArrayOptJSONArray2.length(); i2++) {
                    this.amM.add(jSONArrayOptJSONArray2.optString(i2));
                }
            }
            JSONArray jSONArrayOptJSONArray3 = jSONObject.optJSONArray("keyNames");
            if (jSONArrayOptJSONArray3 != null) {
                for (int i3 = 0; i3 < jSONArrayOptJSONArray3.length(); i3++) {
                    this.amN.add(jSONArrayOptJSONArray3.optString(i3));
                }
            }
            this.amO = jSONObject.optInt("handleType");
        }

        @Override
        public final JSONObject toJson() {
            return this.amP;
        }
    }

    public o() {
        super("sdkPackInfo", null);
    }

    @Override
    public final void a(SharedPreferences sharedPreferences) {
        String strCx = cx(sharedPreferences.getString("sdkPackInfo", null));
        this.amJ = strCx;
        try {
            if (TextUtils.isEmpty(strCx)) {
                return;
            }
            JSONObject jSONObject = new JSONObject(this.amJ);
            a aVar = new a();
            aVar.parseJson(jSONObject);
            setValue(aVar);
        } catch (JSONException e) {
            e.printStackTrace();
        }
    }

    @Override
    public final void b(SharedPreferences.Editor editor) {
        editor.putString("sdkPackInfo", cw(this.amJ));
    }

    @Override
    public final void g(JSONObject jSONObject) {
        JSONObject jSONObjectOptJSONObject = jSONObject.optJSONObject("sdkPackInfo");
        if (jSONObjectOptJSONObject == null) {
            return;
        }
        this.amJ = jSONObjectOptJSONObject.toString();
        a aVar = new a();
        aVar.parseJson(jSONObjectOptJSONObject);
        setValue(aVar);
    }
}
