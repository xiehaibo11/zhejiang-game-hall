package com.kwad.sdk.api.loader;

import android.text.TextUtils;
import com.kwad.components.offline.api.BuildConfig;
import com.kwad.sdk.api.core.RequestParamsUtils;
import com.kwad.sdk.api.core.TLSConnectionUtils;
import com.kwad.sdk.api.loader.a;
import cz.msebera.android.httpclient.HttpHeaders;
import java.io.DataOutputStream;
import java.net.HttpURLConnection;
import java.net.ProtocolException;
import java.net.URL;
import java.util.HashMap;
import java.util.Map;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
class f {
    static final /* synthetic */ boolean $assertionsDisabled = false;
    private final v aio;
    private int aip;
    private String aiq;
    private final String mUrl;

    public interface a {
        void a(a.b bVar);
    }

    f(v vVar) {
        this.aio = vVar;
        String strYz = vVar.yz();
        this.mUrl = strYz;
        this.aiq = strYz;
    }

    /* JADX WARN: Not initialized variable reg: 2, insn: 0x004c: MOVE (r1 I:??[OBJECT, ARRAY]) = (r2 I:??[OBJECT, ARRAY]), block:B:37:0x004c */
    /* JADX WARN: Removed duplicated region for block: B:53:0x004f A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:58:0x0059 A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:66:? A[SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    private static java.lang.String a(java.io.InputStream r5) throws java.lang.Throwable {
        /*
            r0 = 1024(0x400, float:1.435E-42)
            byte[] r0 = new byte[r0]
            r1 = 0
            java.io.ByteArrayOutputStream r2 = new java.io.ByteArrayOutputStream     // Catch: java.lang.Throwable -> L2f java.io.IOException -> L31
            r2.<init>()     // Catch: java.lang.Throwable -> L2f java.io.IOException -> L31
        La:
            int r3 = r5.read(r0)     // Catch: java.io.IOException -> L2d java.lang.Throwable -> L4b
            r4 = -1
            if (r3 == r4) goto L16
            r4 = 0
            r2.write(r0, r4, r3)     // Catch: java.io.IOException -> L2d java.lang.Throwable -> L4b
            goto La
        L16:
            java.lang.String r0 = r2.toString()     // Catch: java.io.IOException -> L2d java.lang.Throwable -> L4b
            if (r5 == 0) goto L24
            r5.close()     // Catch: java.io.IOException -> L20
            goto L24
        L20:
            r5 = move-exception
            r5.printStackTrace()
        L24:
            r2.close()     // Catch: java.io.IOException -> L28
            goto L2c
        L28:
            r5 = move-exception
            r5.printStackTrace()
        L2c:
            return r0
        L2d:
            r0 = move-exception
            goto L33
        L2f:
            r0 = move-exception
            goto L4d
        L31:
            r0 = move-exception
            r2 = r1
        L33:
            r0.printStackTrace()     // Catch: java.lang.Throwable -> L4b
            if (r5 == 0) goto L40
            r5.close()     // Catch: java.io.IOException -> L3c
            goto L40
        L3c:
            r5 = move-exception
            r5.printStackTrace()
        L40:
            if (r2 == 0) goto L4a
            r2.close()     // Catch: java.io.IOException -> L46
            goto L4a
        L46:
            r5 = move-exception
            r5.printStackTrace()
        L4a:
            return r1
        L4b:
            r0 = move-exception
            r1 = r2
        L4d:
            if (r5 == 0) goto L57
            r5.close()     // Catch: java.io.IOException -> L53
            goto L57
        L53:
            r5 = move-exception
            r5.printStackTrace()
        L57:
            if (r1 == 0) goto L61
            r1.close()     // Catch: java.io.IOException -> L5d
            goto L61
        L5d:
            r5 = move-exception
            r5.printStackTrace()
        L61:
            throw r0
        */
        throw new UnsupportedOperationException("Method not decompiled: com.kwad.sdk.api.loader.f.a(java.io.InputStream):java.lang.String");
    }

    private static void a(HttpURLConnection httpURLConnection, Map<String, String> map) {
        if (map == null || httpURLConnection == null) {
            return;
        }
        for (Map.Entry<String, String> entry : map.entrySet()) {
            httpURLConnection.setRequestProperty(entry.getKey(), entry.getValue());
        }
    }

    private static HttpURLConnection bW(String str) throws ProtocolException {
        HttpURLConnection httpURLConnection = (HttpURLConnection) new URL(str).openConnection();
        TLSConnectionUtils.wrapHttpURLConnection(httpURLConnection);
        httpURLConnection.setConnectTimeout(10000);
        httpURLConnection.setReadTimeout(30000);
        httpURLConnection.setUseCaches(false);
        httpURLConnection.setDoInput(true);
        httpURLConnection.setRequestMethod("POST");
        httpURLConnection.setDoOutput(true);
        httpURLConnection.setInstanceFollowRedirects(true);
        return httpURLConnection;
    }

    private String d(Map<String, String> map) {
        String strAy = g.ay(this.aio.getContext());
        if (TextUtils.isEmpty(strAy)) {
            strAy = this.aio.yA().getSDKVersion();
        }
        int sDKVersionCode = this.aio.yA().getSDKVersionCode();
        JSONObject appInfo = this.aio.yA().getAppInfo();
        JSONObject deviceInfo = this.aio.yA().getDeviceInfo();
        JSONObject networkInfo = this.aio.yA().getNetworkInfo();
        JSONObject jSONObject = new JSONObject();
        l.putValue(jSONObject, "sdkApiVersion", BuildConfig.VERSION_NAME);
        l.putValue(jSONObject, "sdkApiVersionCode", BuildConfig.VERSION_CODE);
        l.putValue(jSONObject, com.heytap.mcssdk.constant.b.C, strAy);
        l.putValue(jSONObject, "SDKVersionCode", sDKVersionCode);
        l.putValue(jSONObject, "sdkType", 1);
        l.putValue(jSONObject, "appInfo", appInfo);
        l.putValue(jSONObject, "deviceInfo", deviceInfo);
        l.putValue(jSONObject, "networkInfo", networkInfo);
        l.putValue(jSONObject, "sdkAbi", w.wO());
        String string = jSONObject.toString();
        this.aio.yA().addHp(map);
        JSONObject jSONObject2 = new JSONObject();
        l.putValue(jSONObject2, "version", BuildConfig.VERSION_NAME);
        l.putValue(jSONObject2, com.tkay.expressad.videocommon.e.b.u, appInfo.optString(com.tkay.expressad.videocommon.e.b.u));
        l.putValue(jSONObject2, "message", this.aio.yA().getRM(string));
        this.aio.yA().sR(this.mUrl, map, jSONObject2.toString());
        return jSONObject2.toString();
    }

    private static Map<String, String> yq() {
        HashMap map = new HashMap();
        map.put(HttpHeaders.ACCEPT_LANGUAGE, "zh-CN");
        map.put("Connection", "keep-alive");
        map.put("Charset", "UTF-8");
        map.put("Content-Type", "application/json; charset=UTF-8");
        map.put("User-Agent", RequestParamsUtils.getUserAgent());
        return map;
    }

    public final void a(a aVar) {
        HttpURLConnection httpURLConnection = null;
        try {
            Map<String, String> mapYq = yq();
            String strD = d(mapYq);
            HttpURLConnection httpURLConnectionBW = bW(this.aiq);
            a(httpURLConnectionBW, mapYq);
            httpURLConnectionBW.connect();
            new DataOutputStream(httpURLConnectionBW.getOutputStream()).write(strD.getBytes());
            int responseCode = httpURLConnectionBW.getResponseCode();
            if (responseCode == 200) {
                String strA = a(httpURLConnectionBW.getInputStream());
                a.b bVar = new a.b();
                JSONObject jSONObject = new JSONObject(strA);
                String strOptString = jSONObject.optString("data");
                if (!TextUtils.isEmpty(strOptString) && !"null".equals(strOptString)) {
                    jSONObject.put("data", new JSONObject(this.aio.yA().getRD(strOptString)));
                }
                bVar.parseJson(jSONObject);
                aVar.a(bVar);
            } else {
                if (responseCode / 100 != 3) {
                    throw new RuntimeException("response code = " + responseCode);
                }
                if (this.aip < 21) {
                    this.aiq = httpURLConnectionBW.getHeaderField("Location");
                    this.aip++;
                    a(aVar);
                }
            }
            if (httpURLConnectionBW != null) {
                try {
                    httpURLConnectionBW.disconnect();
                } catch (Exception unused) {
                }
            }
        } catch (Exception unused2) {
            if (0 != 0) {
                try {
                    httpURLConnection.disconnect();
                } catch (Exception unused3) {
                }
            }
        } catch (Throwable th) {
            if (0 != 0) {
                try {
                    httpURLConnection.disconnect();
                } catch (Exception unused4) {
                }
            }
            throw th;
        }
    }
}
