package com.sigmob.sdk.base;

import android.graphics.Bitmap;
import android.net.Uri;
import android.os.Build;
import android.text.TextUtils;
import android.webkit.CookieSyncManager;
import android.webkit.URLUtil;
import android.webkit.WebResourceRequest;
import android.webkit.WebResourceResponse;
import android.webkit.WebView;
import android.webkit.WebViewClient;
import com.czhj.sdk.logger.SigmobLog;
import com.huawei.hms.framework.common.ContainerUtils;
import java.io.ByteArrayInputStream;
import java.io.ByteArrayOutputStream;
import java.io.IOException;
import java.io.InputStream;
import java.net.CookieManager;
import java.net.HttpCookie;
import java.net.HttpURLConnection;
import java.net.URL;
import java.nio.charset.Charset;
import java.text.MessageFormat;
import java.util.List;
import java.util.Locale;
import java.util.Map;

/* JADX INFO: loaded from: classes3.dex */
public class e extends WebViewClient {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    static final String f4882a = "Set-Cookie";
    static final String b = "Referer";
    private static final String c = "mraid.js";
    private static final String d = "Cookie";
    private CookieManager e = new CookieManager();
    private boolean f = false;
    private String g;

    public static WebResourceResponse a(Uri uri) {
        return null;
    }

    private WebResourceResponse a(String str, String str2, Map<String, String> map) {
        String str3 = "text/html";
        if (!URLUtil.isHttpUrl(str) && !URLUtil.isHttpsUrl(str)) {
            return null;
        }
        try {
            String host = Uri.parse(str).getHost();
            if (host != null && !host.equals("127.0.0.1")) {
                HttpURLConnection httpURLConnection = (HttpURLConnection) new URL(str).openConnection();
                httpURLConnection.setRequestMethod(str2);
                if (map != null && map.size() > 0) {
                    for (Map.Entry<String, String> entry : map.entrySet()) {
                        httpURLConnection.setRequestProperty(entry.getKey(), entry.getValue());
                    }
                }
                String cookie = android.webkit.CookieManager.getInstance().getCookie(str);
                if (!TextUtils.isEmpty(cookie)) {
                    for (String str4 : cookie.split(";")) {
                        httpURLConnection.addRequestProperty("Cookie".toLowerCase(), str4.replace(" ", ""));
                    }
                }
                httpURLConnection.connect();
                String contentType = httpURLConnection.getContentType();
                String contentEncoding = httpURLConnection.getContentEncoding();
                InputStream inputStream = httpURLConnection.getInputStream();
                a(httpURLConnection, this.e);
                if (contentType.contains("text/html")) {
                    inputStream = a(inputStream, contentEncoding);
                } else {
                    str3 = contentType;
                }
                return new WebResourceResponse(str3, contentEncoding, inputStream);
            }
            return null;
        } catch (Exception e) {
            e.printStackTrace();
            return null;
        }
    }

    private InputStream a(InputStream inputStream, String str) throws IOException {
        byte[] bArr = new byte[1024];
        ByteArrayOutputStream byteArrayOutputStream = new ByteArrayOutputStream();
        while (true) {
            int i = inputStream.read(bArr);
            if (i == -1) {
                break;
            }
            byteArrayOutputStream.write(bArr, 0, i);
        }
        String str2 = new String(byteArrayOutputStream.toByteArray());
        if (str == null) {
            str = Charset.defaultCharset().displayName();
        }
        return new ByteArrayInputStream(str2.getBytes(str));
    }

    public static void a(HttpURLConnection httpURLConnection, CookieManager cookieManager) {
        if (cookieManager == null || httpURLConnection == null) {
            return;
        }
        Map<String, List<String>> headerFields = httpURLConnection.getHeaderFields();
        SigmobLog.d("headerFields : " + headerFields.toString());
        List<String> list = headerFields.get("Set-Cookie");
        if (list != null) {
            for (String str : list) {
                try {
                    List<HttpCookie> list2 = HttpCookie.parse(str);
                    if (list2 != null) {
                        SigmobLog.d("{0} -- Reading Cookies from the response :" + httpURLConnection.getURL().toString());
                        SigmobLog.d("{0} -- Reading Cookies from the response :" + list2.get(0));
                        for (HttpCookie httpCookie : list2) {
                            SigmobLog.d(httpCookie.toString());
                            android.webkit.CookieManager.getInstance().setCookie(httpURLConnection.getURL().toString(), httpCookie.getName() + ContainerUtils.KEY_VALUE_DELIMITER + httpCookie.getValue());
                        }
                    }
                } catch (NullPointerException unused) {
                    SigmobLog.e(MessageFormat.format("{0} -- Null header for the cookie : {1}", httpURLConnection.getURL().toString(), str.toString()));
                }
            }
            if (Build.VERSION.SDK_INT >= 21) {
                android.webkit.CookieManager.getInstance().flush();
            } else {
                CookieSyncManager.getInstance().sync();
            }
        }
    }

    public void a(boolean z) {
        this.f = z;
    }

    boolean a(String str) {
        return c.equals(Uri.parse(str.toLowerCase(Locale.US)).getLastPathSegment());
    }

    public void b(String str) {
        try {
            Uri uri = Uri.parse(str);
            this.g = uri.getScheme() + "://" + uri.getHost() + "/" + uri.getPath();
        } catch (Throwable unused) {
        }
    }

    @Override // android.webkit.WebViewClient
    public void onPageStarted(WebView webView, String str, Bitmap bitmap) {
        super.onPageStarted(webView, str, bitmap);
    }

    @Override // android.webkit.WebViewClient
    public void onReceivedError(WebView webView, int i, String str, String str2) {
        super.onReceivedError(webView, i, str, str2);
    }

    @Override // android.webkit.WebViewClient
    public WebResourceResponse shouldInterceptRequest(WebView webView, WebResourceRequest webResourceRequest) {
        WebResourceResponse webResourceResponseA;
        try {
            WebResourceResponse webResourceResponseA2 = a(webResourceRequest.getUrl());
            if (webResourceResponseA2 != null) {
                return webResourceResponseA2;
            }
        } catch (Throwable unused) {
        }
        return (!this.f || a(webResourceRequest.getUrl().toString()) || (webResourceResponseA = a(webResourceRequest.getUrl().toString(), webResourceRequest.getMethod(), webResourceRequest.getRequestHeaders())) == null) ? super.shouldInterceptRequest(webView, webResourceRequest) : webResourceResponseA;
    }

    @Override // android.webkit.WebViewClient
    public WebResourceResponse shouldInterceptRequest(WebView webView, String str) {
        WebResourceResponse webResourceResponseA;
        try {
            WebResourceResponse webResourceResponseA2 = a(Uri.parse(str));
            if (webResourceResponseA2 != null) {
                return webResourceResponseA2;
            }
        } catch (Throwable unused) {
        }
        return (!this.f || a(str) || (webResourceResponseA = a(str, "GET", null)) == null) ? super.shouldInterceptRequest(webView, str) : webResourceResponseA;
    }
}
