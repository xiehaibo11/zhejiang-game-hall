package com.reyun.tracking.utils;

import com.reyun.tracking.sdk.Tracking;
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.net.HttpURLConnection;
import java.net.URL;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes3.dex */
class v implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ s f4759a;

    v(s sVar) {
        this.f4759a = sVar;
    }

    @Override // java.lang.Runnable
    public void run() {
        String string;
        try {
            com.reyun.tracking.a.a.d(Tracking.TAG, "setAttributionQuery");
            HttpURLConnection httpURLConnection = (HttpURLConnection) new URL("https://uri6.com/tkio/attributionquery?os=android&appkey=" + Tracking.getAppId() + "&deviceid=" + com.reyun.tracking.a.a.b(this.f4759a.f4756a).toUpperCase() + "&oaid=" + com.reyun.tracking.a.h.f4703a).openConnection();
            httpURLConnection.setConnectTimeout(5000);
            httpURLConnection.setReadTimeout(5000);
            httpURLConnection.setRequestMethod("GET");
            httpURLConnection.connect();
            int responseCode = httpURLConnection.getResponseCode();
            IAttributionQueryListener attributionQueryListener = Tracking.getAttributionQueryListener();
            if (responseCode == 200) {
                BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(httpURLConnection.getInputStream()));
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
                if (attributionQueryListener == null) {
                    return;
                } else {
                    string = jSONObject.toString();
                }
            } else if (attributionQueryListener == null) {
                return;
            } else {
                string = "";
            }
            attributionQueryListener.onComplete(responseCode, string);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}
