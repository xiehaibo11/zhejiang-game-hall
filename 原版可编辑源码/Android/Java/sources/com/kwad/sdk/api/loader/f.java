package com.kwad.sdk.api.loader;

import android.text.TextUtils;
import com.kwad.components.offline.api.BuildConfig;
import com.kwad.sdk.api.core.RequestParamsUtils;
import com.kwad.sdk.api.core.TLSConnectionUtils;
import com.kwad.sdk.api.loader.a;
import cz.msebera.android.httpclient.HttpHeaders;
import java.io.ByteArrayOutputStream;
import java.io.DataOutputStream;
import java.io.IOException;
import java.io.InputStream;
import java.net.HttpURLConnection;
import java.net.ProtocolException;
import java.net.URL;
import java.util.HashMap;
import java.util.Map;
import org.json.JSONObject;

class f {
    static final boolean $assertionsDisabled = false;
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
    */
    private static String a(InputStream inputStream) throws Throwable {
        ByteArrayOutputStream byteArrayOutputStream;
        ByteArrayOutputStream byteArrayOutputStream2;
        byte[] bArr = new byte[1024];
        ByteArrayOutputStream byteArrayOutputStream3 = null;
        try {
            try {
                byteArrayOutputStream = new ByteArrayOutputStream();
                while (true) {
                    try {
                        int i = inputStream.read(bArr);
                        if (i == -1) {
                            break;
                        }
                        byteArrayOutputStream.write(bArr, 0, i);
                    } catch (IOException e) {
                        e = e;
                        e.printStackTrace();
                        if (inputStream != null) {
                            try {
                                inputStream.close();
                            } catch (IOException e2) {
                                e2.printStackTrace();
                            }
                        }
                        if (byteArrayOutputStream != null) {
                            try {
                                byteArrayOutputStream.close();
                            } catch (IOException e3) {
                                e3.printStackTrace();
                            }
                        }
                        return null;
                    }
                }
                String string = byteArrayOutputStream.toString();
                if (inputStream != null) {
                    try {
                        inputStream.close();
                    } catch (IOException e4) {
                        e4.printStackTrace();
                    }
                }
                try {
                    byteArrayOutputStream.close();
                } catch (IOException e5) {
                    e5.printStackTrace();
                }
                return string;
            } catch (Throwable th) {
                th = th;
                byteArrayOutputStream3 = byteArrayOutputStream2;
                if (inputStream != null) {
                    try {
                        inputStream.close();
                    } catch (IOException e6) {
                        e6.printStackTrace();
                    }
                }
                if (byteArrayOutputStream3 != null) {
                    throw th;
                }
                try {
                    byteArrayOutputStream3.close();
                    throw th;
                } catch (IOException e7) {
                    e7.printStackTrace();
                    throw th;
                }
            }
        } catch (IOException e8) {
            e = e8;
            byteArrayOutputStream = null;
        } catch (Throwable th2) {
            th = th2;
            if (inputStream != null) {
            }
            if (byteArrayOutputStream3 != null) {
            }
        }
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
