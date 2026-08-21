package com.tkay.basead.d.b.a;

import android.net.Uri;
import com.mbridge.msdk.MBridgeConstans;
import com.tkay.basead.c.d;
import com.tkay.core.common.f.h;
import com.tkay.core.common.f.i;
import com.tkay.core.common.k.c;
import java.io.BufferedReader;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.net.HttpURLConnection;
import java.net.URL;
import org.json.JSONObject;

public final class a {
    /* JADX WARN: Not initialized variable reg: 1, insn: 0x00a5: MOVE (r0 I:??[OBJECT, ARRAY]) = (r1 I:??[OBJECT, ARRAY]), block:B:30:0x00a5 */
    /* JADX WARN: Removed duplicated region for block: B:27:0x00a0 A[PHI: r1
      0x00a0: PHI (r1v3 java.net.HttpURLConnection) = (r1v2 java.net.HttpURLConnection), (r1v6 java.net.HttpURLConnection) binds: [B:26:0x009e, B:17:0x0085] A[DONT_GENERATE, DONT_INLINE]] */
    /* JADX WARN: Removed duplicated region for block: B:32:0x00a8  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static d a(i iVar, h hVar, String str) throws Throwable {
        HttpURLConnection httpURLConnection;
        HttpURLConnection httpURLConnection2;
        int responseCode;
        HttpURLConnection httpURLConnection3 = null;
        try {
            try {
                httpURLConnection = (HttpURLConnection) new URL(str).openConnection();
                try {
                    httpURLConnection.setRequestMethod("GET");
                    httpURLConnection.setInstanceFollowRedirects(false);
                    httpURLConnection.setConnectTimeout(30000);
                    httpURLConnection.connect();
                    responseCode = httpURLConnection.getResponseCode();
                } catch (Exception e) {
                    e = e;
                    c.a(iVar, hVar, hVar.A(), str, "", e.getMessage());
                    if (httpURLConnection != null) {
                    }
                }
            } catch (Throwable th) {
                th = th;
                httpURLConnection3 = httpURLConnection2;
                if (httpURLConnection3 != null) {
                    httpURLConnection3.disconnect();
                }
                throw th;
            }
        } catch (Exception e2) {
            e = e2;
            httpURLConnection = null;
        } catch (Throwable th2) {
            th = th2;
            if (httpURLConnection3 != null) {
            }
            throw th;
        }
        if (responseCode == 200) {
            InputStream inputStream = httpURLConnection.getInputStream();
            InputStreamReader inputStreamReader = new InputStreamReader(inputStream);
            BufferedReader bufferedReader = new BufferedReader(inputStreamReader);
            StringBuilder sb = new StringBuilder();
            while (true) {
                String line = bufferedReader.readLine();
                if (line == null) {
                    break;
                }
                sb.append(line);
            }
            JSONObject jSONObjectOptJSONObject = new JSONObject(sb.toString()).optJSONObject("data");
            d dVar = new d(jSONObjectOptJSONObject.optString("dstlink"), "", jSONObjectOptJSONObject.optString(MBridgeConstans.DYNAMIC_VIEW_WX_CLICKID));
            bufferedReader.close();
            inputStreamReader.close();
            if (inputStream != null) {
                inputStream.close();
            }
            if (httpURLConnection != null) {
                httpURLConnection.disconnect();
            }
            return dVar;
        }
        c.a(iVar, hVar, hVar.A(), str, String.valueOf(responseCode), "");
        if (httpURLConnection != null) {
            httpURLConnection.disconnect();
        }
        return null;
    }

    public static String a(String str) {
        try {
            return Uri.parse(str).getQueryParameter("qz_gdt");
        } catch (Throwable unused) {
            return null;
        }
    }
}
