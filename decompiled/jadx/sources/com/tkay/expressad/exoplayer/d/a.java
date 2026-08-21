package com.tkay.expressad.exoplayer.d;

import android.util.Log;
import com.tkay.expressad.exoplayer.k.af;
import com.xiaomi.mipush.sdk.Constants;
import org.json.JSONArray;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes3.dex */
final class a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final String f6521a = "ClearKeyUtil";

    private a() {
    }

    private static byte[] b(byte[] bArr) {
        return af.f6754a >= 27 ? bArr : af.c(af.a(bArr).replace('+', '-').replace('/', '_'));
    }

    public static byte[] a(byte[] bArr) {
        if (af.f6754a >= 27) {
            return bArr;
        }
        try {
            JSONObject jSONObject = new JSONObject(af.a(bArr));
            StringBuilder sb = new StringBuilder("{\"keys\":[");
            JSONArray jSONArray = jSONObject.getJSONArray("keys");
            for (int i = 0; i < jSONArray.length(); i++) {
                if (i != 0) {
                    sb.append(Constants.ACCEPT_TIME_SEPARATOR_SP);
                }
                JSONObject jSONObject2 = jSONArray.getJSONObject(i);
                sb.append("{\"k\":\"");
                sb.append(b(jSONObject2.getString("k")));
                sb.append("\",\"kid\":\"");
                sb.append(b(jSONObject2.getString("kid")));
                sb.append("\",\"kty\":\"");
                sb.append(jSONObject2.getString("kty"));
                sb.append("\"}");
            }
            sb.append("]}");
            return af.c(sb.toString());
        } catch (JSONException e) {
            Log.e(f6521a, "Failed to adjust response data: " + af.a(bArr), e);
            return bArr;
        }
    }

    private static String a(String str) {
        return str.replace('+', '-').replace('/', '_');
    }

    private static String b(String str) {
        return str.replace('-', '+').replace('_', '/');
    }
}
