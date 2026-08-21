package com.mbridge.msdk.foundation.entity;

import android.text.TextUtils;
import com.mbridge.msdk.foundation.tools.z;
import com.mbridge.msdk.system.NoProGuard;
import java.io.Serializable;
import org.json.JSONException;
import org.json.JSONObject;

public class AabEntity implements NoProGuard, Serializable {
    private static String TAG = AabEntity.class.getSimpleName();
    public int hlp;

    public int getHlp() {
        return this.hlp;
    }

    public void setHlp(int i) {
        this.hlp = i;
    }

    public static AabEntity parser(String str) {
        if (TextUtils.isEmpty(str)) {
            return null;
        }
        try {
            JSONObject jSONObject = new JSONObject(str);
            AabEntity aabEntity = new AabEntity();
            if (jSONObject.has("hlp")) {
                aabEntity.setHlp(jSONObject.optInt("hlp"));
            }
            return aabEntity;
        } catch (Throwable th) {
            z.d(TAG, th.getMessage());
            return null;
        }
    }

    public JSONObject toJson() {
        JSONObject jSONObject = new JSONObject();
        try {
            jSONObject.put("hlp", this.hlp);
        } catch (JSONException e) {
            e.printStackTrace();
        }
        return jSONObject;
    }
}
