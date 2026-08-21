package com.reyun.tracking.sdk;

import android.support.v4.os.EnvironmentCompat;
import java.io.DataOutputStream;
import java.io.IOException;
import java.net.HttpURLConnection;
import java.net.ProtocolException;
import java.net.URL;
import org.json.JSONException;
import org.json.JSONObject;

final class g implements Runnable {
    final boolean a;

    g(boolean z) {
        this.a = z;
    }

    @Override
    public void run() {
        String str;
        try {
            URL url = new URL("https://www.trackingio.com/authorization/close_data_share");
            JSONObject jSONObject = new JSONObject();
            jSONObject.put(com.tkay.core.common.l.ad, Tracking._oid == null ? EnvironmentCompat.MEDIA_UNKNOWN : Tracking._oid);
            jSONObject.put("appid", Tracking.getAppId());
            jSONObject.put("deviceid", Tracking.getDeviceId());
            jSONObject.put("timestamp", System.currentTimeMillis());
            jSONObject.put("imei", com.reyun.tracking.a.a.g(Tracking.m_context));
            jSONObject.put("oaid", com.reyun.tracking.a.h.a);
            jSONObject.put("androidid", com.reyun.tracking.a.a.c(Tracking.m_context));
            jSONObject.put("isopen", this.a ? 1 : 0);
            HttpURLConnection httpURLConnection = (HttpURLConnection) url.openConnection();
            httpURLConnection.setConnectTimeout(5000);
            httpURLConnection.setReadTimeout(5000);
            httpURLConnection.setRequestMethod("POST");
            com.reyun.tracking.a.a.d("Tracking", "Request data:\n" + jSONObject);
            httpURLConnection.setDoOutput(true);
            DataOutputStream dataOutputStream = new DataOutputStream(httpURLConnection.getOutputStream());
            dataOutputStream.write(jSONObject.toString().getBytes("UTF-8"));
            dataOutputStream.flush();
            dataOutputStream.close();
            int responseCode = httpURLConnection.getResponseCode();
            if (200 == responseCode) {
                str = this.a ? "打开数据共享成功" : "关闭数据共享成功";
            } else {
                str = "共享数据失败：" + responseCode;
            }
            com.reyun.tracking.a.a.d(Tracking.TAG, str);
        } catch (ProtocolException e) {
            e.printStackTrace();
        } catch (IOException e2) {
            e2.printStackTrace();
        } catch (JSONException e3) {
            e3.printStackTrace();
        } catch (Exception e4) {
            e4.printStackTrace();
        }
    }
}
