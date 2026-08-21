package com.huawei.hms.framework.network.grs.b;

import android.content.Context;
import android.text.TextUtils;
import com.huawei.hms.framework.common.Logger;
import com.huawei.hms.framework.network.grs.GrsApp;
import java.util.ArrayList;
import java.util.HashSet;
import org.json.JSONArray;
import org.json.JSONException;
import org.json.JSONObject;

public class d extends a {
    public d(Context context, boolean z) {
        this.e = z;
        String appConfigName = GrsApp.getInstance().getAppConfigName();
        Logger.i("LocalManagerV2", "appConfigName is" + appConfigName);
        if (a(TextUtils.isEmpty(appConfigName) ? "grs_app_global_route_config.json" : appConfigName, context, true) == 0) {
            this.d = true;
        }
    }

    @Override
    public int a(String str) {
        this.a = new com.huawei.hms.framework.network.grs.local.model.a();
        try {
            JSONObject jSONObject = new JSONObject(str).getJSONArray("applications").getJSONObject(0);
            this.a.b(jSONObject.getString("name"));
            JSONArray jSONArray = jSONObject.getJSONArray("services");
            if (jSONArray != null && jSONArray.length() != 0) {
                if (jSONObject.has("customservices")) {
                    b(jSONObject.getJSONArray("customservices"));
                }
                return 0;
            }
            return -1;
        } catch (JSONException e) {
            Logger.w("LocalManagerV2", "parse appbean failed maybe json style is wrong.", e);
            return -1;
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:45:0x0096 A[Catch: JSONException -> 0x00af, LOOP:1: B:43:0x0090->B:45:0x0096, LOOP_END, TryCatch #0 {JSONException -> 0x00af, blocks: (B:3:0x0010, B:7:0x001f, B:13:0x002d, B:16:0x0034, B:19:0x003c, B:21:0x0042, B:23:0x004d, B:25:0x0056, B:27:0x005f, B:33:0x0076, B:37:0x0081, B:39:0x0088, B:43:0x0090, B:45:0x0096, B:46:0x00a2, B:31:0x0070, B:36:0x007d, B:10:0x0026), top: B:53:0x0010 }] */
    @Override
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public int b(String str) {
        JSONArray jSONArray;
        JSONArray jSONArray2;
        HashSet hashSet;
        int i;
        String str2 = "countryOrAreaGroups";
        this.b = new ArrayList(16);
        try {
            JSONObject jSONObject = new JSONObject(str);
            if (jSONObject.has("countryOrAreaGroups")) {
                jSONArray = jSONObject.getJSONArray(str2);
            } else if (jSONObject.has("countryGroups")) {
                str2 = "countryGroups";
                jSONArray = jSONObject.getJSONArray(str2);
            } else {
                Logger.e("LocalManagerV2", "maybe local config json is wrong because the default countryOrAreaGroups isn't config.");
                jSONArray = null;
            }
            if (jSONArray == null) {
                return -1;
            }
            if (jSONArray.length() != 0) {
                for (int i2 = 0; i2 < jSONArray.length(); i2++) {
                    JSONObject jSONObject2 = jSONArray.getJSONObject(i2);
                    com.huawei.hms.framework.network.grs.local.model.b bVar = new com.huawei.hms.framework.network.grs.local.model.b();
                    bVar.b(jSONObject2.getString("id"));
                    bVar.c(jSONObject2.getString("name"));
                    bVar.a(jSONObject2.getString("description"));
                    String str3 = "countries";
                    if (!jSONObject2.has("countriesOrAreas")) {
                        if (!jSONObject2.has("countries")) {
                            Logger.w("LocalManagerV2", "current country or area group has not config countries or areas.");
                            jSONArray2 = null;
                        }
                        hashSet = new HashSet(16);
                        if (jSONArray2 != null && jSONArray2.length() != 0) {
                            for (i = 0; i < jSONArray2.length(); i++) {
                                hashSet.add((String) jSONArray2.get(i));
                            }
                            bVar.a(hashSet);
                            this.b.add(bVar);
                        }
                        return -1;
                    }
                    str3 = "countriesOrAreas";
                    jSONArray2 = jSONObject2.getJSONArray(str3);
                    hashSet = new HashSet(16);
                    if (jSONArray2 != null) {
                        while (i < jSONArray2.length()) {
                        }
                        bVar.a(hashSet);
                        this.b.add(bVar);
                    }
                    return -1;
                }
            }
            return 0;
        } catch (JSONException e) {
            Logger.w("LocalManagerV2", "parse countrygroup failed maybe json style is wrong.", e);
            return -1;
        }
    }

    @Override
    public int e(String str) {
        return d(str);
    }
}
