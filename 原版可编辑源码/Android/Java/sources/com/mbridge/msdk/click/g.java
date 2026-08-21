package com.mbridge.msdk.click;

import android.text.TextUtils;
import android.webkit.URLUtil;
import com.alibaba.sdk.android.oss.common.RequestParameters;
import com.mbridge.msdk.foundation.entity.CampaignEx;
import com.mbridge.msdk.foundation.tools.v;
import com.mbridge.msdk.foundation.tools.z;
import com.ss.android.download.api.constant.BaseConstants;
import cz.msebera.android.httpclient.HttpHeaders;
import java.io.BufferedReader;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.net.HttpURLConnection;
import java.net.URL;
import java.util.zip.GZIPInputStream;

public class g {
    private static final String a = g.class.getSimpleName();
    private com.mbridge.msdk.c.a b;
    private String c;
    private boolean d = true;
    private final int e = com.sigmob.sdk.base.network.c.g;
    private a f;

    public g() {
        com.mbridge.msdk.c.a aVarB = com.mbridge.msdk.c.b.a().b(com.mbridge.msdk.foundation.controller.a.f().k());
        this.b = aVarB;
        if (aVarB == null) {
            this.b = com.mbridge.msdk.c.b.a().b();
        }
    }

    public static class a {
        public String a;
        public String b;
        public String c;
        public String d;
        public int e;
        public int f;
        public String g;
        public String h;

        public final String toString() {
            return "http响应头：...\nstatusCode=" + this.f + ", location=" + this.a + ", contentType=" + this.b + ", contentLength=" + this.e + ", contentEncoding=" + this.c + ", referer=" + this.d;
        }

        public final String a() {
            return "statusCode=" + this.f + ", location=" + this.a + ", contentType=" + this.b + ", contentLength=" + this.e + ", contentEncoding=" + this.c + ", referer=" + this.d;
        }
    }

    public final a a(String str, boolean z, boolean z2, CampaignEx campaignEx) {
        byte[] bytes;
        HttpURLConnection httpURLConnection = null;
        if (!URLUtil.isNetworkUrl(str)) {
            return null;
        }
        String strReplace = str.replace(" ", "%20");
        URLUtil.isHttpsUrl(strReplace);
        z.b(a, strReplace);
        this.f = new a();
        try {
            HttpURLConnection httpURLConnection2 = (HttpURLConnection) new URL(strReplace).openConnection();
            try {
                httpURLConnection2.setRequestMethod("GET");
                if ((!z && !z2) || campaignEx == null) {
                    httpURLConnection2.setRequestProperty("User-Agent", v.A());
                }
                if (z && campaignEx != null && campaignEx.getcUA() == 1) {
                    httpURLConnection2.setRequestProperty("User-Agent", v.A());
                }
                if (z2 && campaignEx != null && campaignEx.getImpUA() == 1) {
                    httpURLConnection2.setRequestProperty("User-Agent", v.A());
                }
                httpURLConnection2.setRequestProperty("Accept-Encoding", "gzip");
                if (this.b.af() && !TextUtils.isEmpty(this.c)) {
                    httpURLConnection2.setRequestProperty(RequestParameters.SUBRESOURCE_REFERER, this.c);
                }
                httpURLConnection2.setConnectTimeout(BaseConstants.Time.MINUTE);
                httpURLConnection2.setReadTimeout(BaseConstants.Time.MINUTE);
                httpURLConnection2.setInstanceFollowRedirects(false);
                httpURLConnection2.connect();
                this.f.a = httpURLConnection2.getHeaderField("Location");
                this.f.d = httpURLConnection2.getHeaderField(HttpHeaders.REFERER);
                this.f.f = httpURLConnection2.getResponseCode();
                this.f.b = httpURLConnection2.getContentType();
                this.f.e = httpURLConnection2.getContentLength();
                this.f.c = httpURLConnection2.getContentEncoding();
                z.b(a, this.f.toString());
                boolean zEqualsIgnoreCase = "gzip".equalsIgnoreCase(this.f.c);
                if (this.f.f == 200 && this.d && this.f.e > 0 && this.f.e < 3145728 && !TextUtils.isEmpty(strReplace) && !strReplace.endsWith(com.tkay.china.common.a.a.g)) {
                    try {
                        String strA = a(httpURLConnection2.getInputStream(), zEqualsIgnoreCase);
                        if (!TextUtils.isEmpty(strA) && (bytes = strA.getBytes()) != null && bytes.length > 0 && bytes.length < 3145728) {
                            this.f.g = strA.trim();
                        }
                    } catch (Throwable unused) {
                    }
                }
                this.c = strReplace;
                if (httpURLConnection2 != null) {
                    httpURLConnection2.disconnect();
                }
                return this.f;
            } catch (Throwable th) {
                th = th;
                httpURLConnection = httpURLConnection2;
                try {
                    this.f.h = th.getMessage();
                    z.c("http jump", "connecting");
                    return this.f;
                } finally {
                    if (httpURLConnection != null) {
                        httpURLConnection.disconnect();
                    }
                }
            }
        } catch (Throwable th2) {
            th = th2;
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:21:0x0033 A[Catch: all -> 0x002c, TryCatch #5 {all -> 0x002c, blocks: (B:4:0x0008, B:5:0x000e, B:19:0x002f, B:21:0x0033, B:22:0x0040), top: B:36:0x0008 }] */
    /* JADX WARN: Removed duplicated region for block: B:24:0x0045 A[Catch: Exception -> 0x0049, TRY_ENTER, TRY_LEAVE, TryCatch #2 {Exception -> 0x0049, blocks: (B:10:0x0022, B:24:0x0045), top: B:39:0x0006 }] */
    /* JADX WARN: Removed duplicated region for block: B:41:0x0054 A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private String a(InputStream inputStream, boolean z) throws Throwable {
        Throwable th;
        Exception e;
        StringBuilder sb = new StringBuilder();
        BufferedReader bufferedReader = null;
        try {
            if (z) {
                try {
                    try {
                        inputStream = new GZIPInputStream(inputStream);
                    } catch (Exception e2) {
                        e = e2;
                        if (this.f == null) {
                            a aVar = new a();
                            this.f = aVar;
                            aVar.h = e.getMessage();
                        }
                        e.printStackTrace();
                        if (bufferedReader != null) {
                            bufferedReader.close();
                        }
                        return sb.toString();
                    }
                } catch (Throwable th2) {
                    th = th2;
                    if (bufferedReader != null) {
                        try {
                            bufferedReader.close();
                        } catch (Exception e3) {
                            e3.printStackTrace();
                        }
                    }
                    throw th;
                }
            }
            BufferedReader bufferedReader2 = new BufferedReader(new InputStreamReader(inputStream));
            while (true) {
                try {
                    String line = bufferedReader2.readLine();
                    if (line == null) {
                        break;
                    }
                    sb.append(line);
                } catch (Exception e4) {
                    e = e4;
                    bufferedReader = bufferedReader2;
                    if (this.f == null) {
                    }
                    e.printStackTrace();
                    if (bufferedReader != null) {
                    }
                    return sb.toString();
                } catch (Throwable th3) {
                    th = th3;
                    bufferedReader = bufferedReader2;
                    if (bufferedReader != null) {
                    }
                    throw th;
                }
            }
            bufferedReader2.close();
        } catch (Exception e5) {
            e5.printStackTrace();
        }
        return sb.toString();
    }
}
