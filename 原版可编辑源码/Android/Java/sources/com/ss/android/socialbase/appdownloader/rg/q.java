package com.ss.android.socialbase.appdownloader.rg;

import android.content.Context;
import android.content.Intent;
import android.net.Uri;
import android.text.TextUtils;
import com.ss.android.socialbase.downloader.setting.DownloadSetting;
import com.tkay.expressad.foundation.h.i;
import java.util.Iterator;
import org.json.JSONObject;

public class q extends rg {
    private final JSONObject pt;

    public q(Context context, DownloadSetting downloadSetting, String str, JSONObject jSONObject) {
        super(context, downloadSetting, str);
        this.pt = jSONObject;
    }

    @Override
    public Intent df() {
        String strOptString = this.pt.optString("action");
        String strOptString2 = this.pt.optString("category");
        int iOptInt = this.pt.optInt("flags", 1342210048);
        String strOptString3 = this.pt.optString("path_extra_key");
        String strOptString4 = this.pt.optString("path_data_key");
        JSONObject jSONObjectOptJSONObject = this.pt.optJSONObject("extra");
        JSONObject jSONObjectOptJSONObject2 = this.pt.optJSONObject("extra_type");
        if (TextUtils.isEmpty(strOptString)) {
            return null;
        }
        Intent intent = new Intent(strOptString);
        if (!TextUtils.isEmpty(strOptString2)) {
            intent.addCategory(strOptString2);
        }
        if (!TextUtils.isEmpty(strOptString4)) {
            try {
                intent.setData(Uri.parse(String.format(strOptString4, this.q)));
            } catch (Throwable unused) {
            }
        }
        intent.setFlags(iOptInt);
        if (!TextUtils.isEmpty(strOptString3)) {
            intent.putExtra(strOptString3, this.q);
        }
        rg(intent, jSONObjectOptJSONObject, jSONObjectOptJSONObject2);
        return intent;
    }

    private static void rg(Intent intent, JSONObject jSONObject, JSONObject jSONObject2) {
        Iterator<String> itKeys;
        if (jSONObject == null || jSONObject2 == null || jSONObject.length() != jSONObject2.length() || intent == null || (itKeys = jSONObject.keys()) == null) {
            return;
        }
        while (itKeys.hasNext()) {
            String next = itKeys.next();
            String strOptString = jSONObject2.optString(next);
            if (strOptString != null) {
                rg(jSONObject, next, strOptString, intent);
            }
        }
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    /* JADX WARN: Failed to restore switch over string. Please report as a decompilation issue */
    /* JADX WARN: Removed duplicated region for block: B:20:0x003e  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private static void rg(JSONObject jSONObject, String str, String str2, Intent intent) {
        byte b;
        switch (str2.hashCode()) {
            case -1325958191:
                b = !str2.equals("double") ? (byte) -1 : (byte) 3;
                break;
            case -891985903:
                if (str2.equals(i.g)) {
                    b = 4;
                    break;
                }
                break;
            case 104431:
                if (str2.equals("int")) {
                    b = 0;
                    break;
                }
                break;
            case 3327612:
                if (str2.equals("long")) {
                    b = 2;
                    break;
                }
                break;
            case 64711720:
                if (str2.equals("boolean")) {
                    b = 1;
                    break;
                }
                break;
        }
        if (b == 0) {
            intent.putExtra(str, jSONObject.optInt(str));
            return;
        }
        if (b == 1) {
            intent.putExtra(str, jSONObject.optBoolean(str));
            return;
        }
        if (b == 2) {
            intent.putExtra(str, jSONObject.optLong(str));
        } else if (b == 3) {
            intent.putExtra(str, jSONObject.optDouble(str));
        } else {
            if (b != 4) {
                return;
            }
            intent.putExtra(str, jSONObject.optString(str));
        }
    }
}
