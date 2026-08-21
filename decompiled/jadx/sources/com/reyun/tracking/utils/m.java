package com.reyun.tracking.utils;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.net.HttpURLConnection;
import java.net.MalformedURLException;
import java.net.URL;
import java.security.KeyManagementException;
import java.security.NoSuchAlgorithmException;
import javax.net.ssl.HttpsURLConnection;
import javax.net.ssl.SSLContext;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes3.dex */
class m implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private String f4751a;
    private n b;

    public m(String str, n nVar) {
        this.f4751a = str;
        this.b = nVar;
    }

    @Override // java.lang.Runnable
    public void run() {
        n nVar;
        String str;
        com.reyun.tracking.a.a.d("Tracking", "========== GET Request Begin ==========");
        com.reyun.tracking.a.a.d("Tracking", "Request url:" + this.f4751a);
        try {
            HttpURLConnection httpURLConnection = (HttpURLConnection) new URL(this.f4751a).openConnection();
            httpURLConnection.setConnectTimeout(5000);
            httpURLConnection.setReadTimeout(5000);
            httpURLConnection.setRequestMethod("GET");
            if (httpURLConnection instanceof HttpsURLConnection) {
                SSLContext sSLContext = SSLContext.getInstance("TLS");
                sSLContext.init(null, null, null);
                ((HttpsURLConnection) httpURLConnection).setSSLSocketFactory(sSLContext.getSocketFactory());
            }
            BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(httpURLConnection.getInputStream()));
            int responseCode = httpURLConnection.getResponseCode();
            if (200 != responseCode) {
                this.b.a(new Exception("Request http server failed!"), "response Code=" + responseCode);
                return;
            }
            StringBuilder sb = new StringBuilder();
            while (true) {
                String line = bufferedReader.readLine();
                if (line == null) {
                    break;
                } else {
                    sb.append(line);
                }
            }
            JSONObject jSONObject = new JSONObject(sb.toString());
            com.reyun.tracking.a.a.d("Tracking", "response json:" + jSONObject.toString());
            int iOptInt = jSONObject.optInt("status", 1);
            if (iOptInt == 0) {
                this.b.a(responseCode, jSONObject);
                return;
            }
            this.b.a(new Exception("Request server failed! response Code=" + iOptInt), jSONObject.optString("message"));
        } catch (MalformedURLException e) {
            e = e;
            nVar = this.b;
            str = "response Code=-2";
            nVar.a(e, str);
        } catch (IOException e2) {
            this.b.a(e2, "response Code=-3");
            e2.printStackTrace();
        } catch (KeyManagementException e3) {
            e = e3;
            nVar = this.b;
            str = "response Code=-5";
            nVar.a(e, str);
        } catch (NoSuchAlgorithmException e4) {
            e = e4;
            nVar = this.b;
            str = "response Code=-4";
            nVar.a(e, str);
        } catch (JSONException e5) {
            e = e5;
            nVar = this.b;
            str = "response Code=-6";
            nVar.a(e, str);
        } catch (Exception e6) {
            e = e6;
            nVar = this.b;
            str = "response Code=-999";
            nVar.a(e, str);
        }
    }
}
