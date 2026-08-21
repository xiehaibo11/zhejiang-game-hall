package com.mbridge.msdk.foundation.same.report;

import android.text.TextUtils;
import com.mbridge.msdk.foundation.tools.z;
import org.json.JSONArray;

public class a {
    private static String a = "DomainReport";

    /* JADX WARN: Removed duplicated region for block: B:27:0x0052  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static boolean a(com.mbridge.msdk.c.a aVar, String str) {
        boolean z = false;
        if (aVar != null) {
            try {
                if (!TextUtils.isEmpty(str)) {
                    int iAE = aVar.aE();
                    JSONArray jSONArrayK = aVar.k();
                    JSONArray jSONArrayL = aVar.l();
                    if (jSONArrayL != null) {
                        for (int i = 0; i < jSONArrayL.length(); i++) {
                            if (str.contains(jSONArrayL.getString(i))) {
                                return false;
                            }
                        }
                    }
                    if (iAE != 2) {
                        z = true;
                    } else if (jSONArrayK != null) {
                        for (int i2 = 0; i2 < jSONArrayK.length(); i2++) {
                            if (str.contains(jSONArrayK.getString(i2))) {
                                return true;
                            }
                        }
                    }
                }
            } catch (Exception e) {
                z.d(a, e.getMessage());
                return true;
            }
        }
        return z;
    }
}
