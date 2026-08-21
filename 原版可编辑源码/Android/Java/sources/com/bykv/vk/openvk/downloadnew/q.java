package com.bykv.vk.openvk.downloadnew;

import android.text.TextUtils;
import com.ss.android.socialbase.downloader.model.HttpHeader;
import java.io.IOException;
import java.io.InputStream;
import java.net.HttpURLConnection;
import java.net.URL;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.zip.GZIPInputStream;

public class q {
    public static HttpURLConnection rg(String str, Map<String, String> map) {
        HttpURLConnection httpURLConnection;
        HttpURLConnection httpURLConnection2 = null;
        if (TextUtils.isEmpty(str)) {
            return null;
        }
        try {
            httpURLConnection = (HttpURLConnection) new URL(str).openConnection();
        } catch (Exception unused) {
        }
        try {
            httpURLConnection.setInstanceFollowRedirects(false);
            httpURLConnection.setRequestProperty("accept", "*/*");
            httpURLConnection.setRequestProperty("connection", "Keep-Alive");
            if (map != null && !map.isEmpty()) {
                for (Map.Entry<String, String> entry : map.entrySet()) {
                    httpURLConnection.setRequestProperty(entry.getKey(), entry.getValue());
                }
            }
            httpURLConnection.connect();
            int responseCode = httpURLConnection.getResponseCode();
            return ((responseCode < 200 || responseCode >= 300) && responseCode >= 300 && responseCode < 400) ? rg(httpURLConnection.getHeaderField("Location"), map) : httpURLConnection;
        } catch (Exception unused2) {
            httpURLConnection2 = httpURLConnection;
            return httpURLConnection2;
        }
    }

    public static Map<String, String> rg(HttpURLConnection httpURLConnection) {
        HashMap map = new HashMap();
        int size = httpURLConnection.getHeaderFields().size();
        for (int i = 0; i < size; i++) {
            map.put(httpURLConnection.getHeaderFieldKey(i), httpURLConnection.getHeaderField(i));
        }
        return map;
    }

    public static rg rg(String str, List<HttpHeader> list) throws IOException {
        int responseCode;
        HashMap map = new HashMap();
        if (list != null && !list.isEmpty()) {
            for (HttpHeader httpHeader : list) {
                map.put(httpHeader.getName(), httpHeader.getValue());
            }
        }
        HttpURLConnection httpURLConnectionRg = rg(str, map);
        if (httpURLConnectionRg == null || (responseCode = httpURLConnectionRg.getResponseCode()) < 200 || responseCode >= 300) {
            return null;
        }
        Map<String, String> mapRg = rg(httpURLConnectionRg);
        InputStream inputStream = httpURLConnectionRg.getInputStream();
        String contentEncoding = httpURLConnectionRg.getContentEncoding();
        if (!TextUtils.isEmpty(contentEncoding) && contentEncoding.contains("gzip")) {
            inputStream = new GZIPInputStream(inputStream);
        }
        return new rg(inputStream, mapRg, responseCode, httpURLConnectionRg);
    }

    public static class rg {
        public Map<String, String> df;
        public HttpURLConnection pt;
        public int q;
        public InputStream rg;

        public rg(InputStream inputStream, Map<String, String> map, int i, HttpURLConnection httpURLConnection) {
            this.rg = inputStream;
            this.df = map;
            this.q = i;
            this.pt = httpURLConnection;
        }
    }
}
