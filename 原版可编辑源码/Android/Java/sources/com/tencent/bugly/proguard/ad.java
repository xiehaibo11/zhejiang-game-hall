package com.tencent.bugly.proguard;

import android.util.Pair;
import java.io.BufferedReader;
import java.io.Closeable;
import java.io.DataOutputStream;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.net.HttpURLConnection;
import java.net.URL;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import org.json.HTTP;
import org.json.JSONArray;
import org.json.JSONObject;

public final class ad {
    public static Pair<Integer, String> a(List<String> list) {
        try {
            HashMap map = new HashMap();
            map.put("Atta-Type", "batch-report");
            JSONObject jSONObject = new JSONObject();
            jSONObject.put("attaid", "0d000062340").put("token", "2273782735").put("type", "batch").put("version", "v1.0.0");
            JSONArray jSONArray = new JSONArray();
            Iterator<String> it = list.iterator();
            while (it.hasNext()) {
                jSONArray.put(it.next());
            }
            jSONObject.put("datas", jSONArray);
            return a("https://h.trace.qq.com/kv", jSONObject.toString(), map);
        } catch (Throwable th) {
            al.b(th);
            return new Pair<>(-1, th.getMessage());
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:44:0x00d9  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private static Pair<Integer, String> a(String str, String str2, Map<String, String> map) throws Throwable {
        InputStream inputStream;
        HttpURLConnection httpURLConnection;
        String message;
        HttpURLConnection httpURLConnection2;
        InputStream inputStream2;
        BufferedReader bufferedReader;
        StringBuilder sb;
        DataOutputStream dataOutputStream = null;
        int responseCode = -1;
        try {
            httpURLConnection2 = (HttpURLConnection) new URL(str).openConnection();
            try {
                httpURLConnection2.setRequestMethod("POST");
                httpURLConnection2.setDoOutput(true);
                httpURLConnection2.setDoInput(true);
                httpURLConnection2.setUseCaches(false);
                httpURLConnection2.setRequestProperty("Content-Type", "application/x-www-form-urlencoded");
                a(httpURLConnection2, map);
                httpURLConnection2.setConnectTimeout(5000);
                httpURLConnection2.setReadTimeout(5000);
                httpURLConnection2.connect();
                byte[] bytes = str2.getBytes("UTF-8");
                DataOutputStream dataOutputStream2 = new DataOutputStream(httpURLConnection2.getOutputStream());
                try {
                    dataOutputStream2.write(bytes);
                    dataOutputStream2.flush();
                    dataOutputStream2.close();
                    responseCode = httpURLConnection2.getResponseCode();
                    if (responseCode >= 400) {
                        inputStream2 = httpURLConnection2.getErrorStream();
                    } else {
                        inputStream2 = httpURLConnection2.getInputStream();
                    }
                } catch (Throwable th) {
                    th = th;
                    httpURLConnection = httpURLConnection2;
                    inputStream = null;
                    dataOutputStream = dataOutputStream2;
                }
            } catch (Throwable th2) {
                th = th2;
                httpURLConnection = httpURLConnection2;
                inputStream = null;
            }
        } catch (Throwable th3) {
            th = th3;
            inputStream = null;
            httpURLConnection = null;
        }
        try {
            bufferedReader = new BufferedReader(new InputStreamReader(inputStream2, "UTF-8"));
            sb = new StringBuilder();
        } catch (Throwable th4) {
            httpURLConnection = httpURLConnection2;
            inputStream = inputStream2;
            th = th4;
            a(dataOutputStream);
            a(inputStream);
            if (httpURLConnection != null) {
            }
            throw th;
        }
        while (true) {
            String line = bufferedReader.readLine();
            if (line == null) {
                break;
            }
            sb.append(line);
            sb.append(HTTP.CRLF);
            return new Pair<>(Integer.valueOf(responseCode), message);
        }
        bufferedReader.close();
        String string = sb.toString();
        a((Closeable) null);
        a(inputStream2);
        if (httpURLConnection2 != null) {
            httpURLConnection2.disconnect();
        }
        message = string;
        return new Pair<>(Integer.valueOf(responseCode), message);
    }

    private static void a(HttpURLConnection httpURLConnection, Map<String, String> map) {
        if (httpURLConnection == null || map == null || map.isEmpty()) {
            return;
        }
        for (Map.Entry<String, String> entry : map.entrySet()) {
            httpURLConnection.setRequestProperty(entry.getKey(), entry.getValue());
        }
    }

    private static void a(Closeable closeable) {
        if (closeable == null) {
            return;
        }
        try {
            closeable.close();
        } catch (Exception e) {
            al.b(e);
        }
    }
}
