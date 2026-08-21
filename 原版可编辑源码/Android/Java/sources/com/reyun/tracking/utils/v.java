package com.reyun.tracking.utils;

import com.reyun.tracking.sdk.Tracking;
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.net.HttpURLConnection;
import java.net.URL;
import org.json.JSONObject;

class v implements Runnable {
    final s a;

    v(s sVar) {
        this.a = sVar;
    }

    @Override
    public void run() {
        String string;
        try {
            com.reyun.tracking.a.a.d(Tracking.TAG, "setAttributionQuery");
            HttpURLConnection httpURLConnection = (HttpURLConnection) new URL("https://uri6.com/tkio/attributionquery?os=android&appkey=" + Tracking.getAppId() + "&deviceid=" + com.reyun.tracking.a.a.b(this.a.a).toUpperCase() + "&oaid=" + com.reyun.tracking.a.h.a).openConnection();
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
