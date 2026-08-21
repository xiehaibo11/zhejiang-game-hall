package com.ss.android.downloadlib.addownload.rg;

import android.text.TextUtils;
import com.ss.android.downloadlib.addownload.bm;
import java.util.Iterator;
import java.util.concurrent.CopyOnWriteArrayList;
import org.json.JSONObject;

class df {
    df() {
    }

    CopyOnWriteArrayList<com.ss.android.downloadlib.addownload.model.rg> rg(String str, String str2) {
        CopyOnWriteArrayList<com.ss.android.downloadlib.addownload.model.rg> copyOnWriteArrayList = new CopyOnWriteArrayList<>();
        try {
            String string = bm.getContext().getSharedPreferences(str, 0).getString(str2, "");
            if (!TextUtils.isEmpty(string)) {
                JSONObject jSONObject = new JSONObject(string);
                Iterator<String> itKeys = jSONObject.keys();
                while (itKeys.hasNext()) {
                    com.ss.android.downloadlib.addownload.model.rg rgVarRg = com.ss.android.downloadlib.addownload.model.rg.rg(jSONObject.optJSONObject(itKeys.next()));
                    if (rgVarRg != null) {
                        copyOnWriteArrayList.add(rgVarRg);
                    }
                }
            }
        } catch (Exception e) {
            e.printStackTrace();
        }
        return copyOnWriteArrayList;
    }

    void rg(String str, String str2, CopyOnWriteArrayList<com.ss.android.downloadlib.addownload.model.rg> copyOnWriteArrayList) {
        if (copyOnWriteArrayList == null) {
            return;
        }
        JSONObject jSONObject = new JSONObject();
        try {
            for (com.ss.android.downloadlib.addownload.model.rg rgVar : copyOnWriteArrayList) {
                if (rgVar != null) {
                    jSONObject.put(String.valueOf(rgVar.df), rgVar.rg());
                }
            }
        } catch (Exception e) {
            e.printStackTrace();
        }
        bm.getContext().getSharedPreferences(str, 0).edit().putString(str2, jSONObject.toString()).apply();
    }

    void df(String str, String str2) {
        if (TextUtils.isEmpty(str) || TextUtils.isEmpty(str2)) {
            return;
        }
        bm.getContext().getSharedPreferences(str, 0).edit().putString(str2, "").apply();
    }
}
