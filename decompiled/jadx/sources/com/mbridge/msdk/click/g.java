package com.mbridge.msdk.click;

import android.text.TextUtils;
import android.webkit.URLUtil;
import com.alibaba.sdk.android.oss.common.RequestParameters;
import com.mbridge.msdk.foundation.entity.CampaignEx;
import com.mbridge.msdk.foundation.tools.v;
import com.mbridge.msdk.foundation.tools.z;
import com.ss.android.download.api.constant.BaseConstants;
import cz.msebera.android.httpclient.HttpHeaders;
import java.net.HttpURLConnection;
import java.net.URL;

/* JADX INFO: compiled from: JavaHttpSpider.java */
/* JADX INFO: loaded from: classes2.dex */
public class g {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final String f3157a = g.class.getSimpleName();
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

    /* JADX INFO: compiled from: JavaHttpSpider.java */
    public static class a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public String f3158a;
        public String b;
        public String c;
        public String d;
        public int e;
        public int f;
        public String g;
        public String h;

        public final String toString() {
            return "http响应头：...\nstatusCode=" + this.f + ", location=" + this.f3158a + ", contentType=" + this.b + ", contentLength=" + this.e + ", contentEncoding=" + this.c + ", referer=" + this.d;
        }

        public final String a() {
            return "statusCode=" + this.f + ", location=" + this.f3158a + ", contentType=" + this.b + ", contentLength=" + this.e + ", contentEncoding=" + this.c + ", referer=" + this.d;
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
        z.b(f3157a, strReplace);
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
                this.f.f3158a = httpURLConnection2.getHeaderField("Location");
                this.f.d = httpURLConnection2.getHeaderField(HttpHeaders.REFERER);
                this.f.f = httpURLConnection2.getResponseCode();
                this.f.b = httpURLConnection2.getContentType();
                this.f.e = httpURLConnection2.getContentLength();
                this.f.c = httpURLConnection2.getContentEncoding();
                z.b(f3157a, this.f.toString());
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
        To view partially-correct add '--show-bad-code' argument
    */
    private java.lang.String a(java.io.InputStream r4, boolean r5) throws java.lang.Throwable {
        /*
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r1 = 0
            if (r5 == 0) goto Le
            java.util.zip.GZIPInputStream r5 = new java.util.zip.GZIPInputStream     // Catch: java.lang.Throwable -> L2c java.lang.Exception -> L2e
            r5.<init>(r4)     // Catch: java.lang.Throwable -> L2c java.lang.Exception -> L2e
            r4 = r5
        Le:
            java.io.BufferedReader r5 = new java.io.BufferedReader     // Catch: java.lang.Throwable -> L2c java.lang.Exception -> L2e
            java.io.InputStreamReader r2 = new java.io.InputStreamReader     // Catch: java.lang.Throwable -> L2c java.lang.Exception -> L2e
            r2.<init>(r4)     // Catch: java.lang.Throwable -> L2c java.lang.Exception -> L2e
            r5.<init>(r2)     // Catch: java.lang.Throwable -> L2c java.lang.Exception -> L2e
        L18:
            java.lang.String r4 = r5.readLine()     // Catch: java.lang.Throwable -> L26 java.lang.Exception -> L29
            if (r4 == 0) goto L22
            r0.append(r4)     // Catch: java.lang.Throwable -> L26 java.lang.Exception -> L29
            goto L18
        L22:
            r5.close()     // Catch: java.lang.Exception -> L49
            goto L4d
        L26:
            r4 = move-exception
            r1 = r5
            goto L52
        L29:
            r4 = move-exception
            r1 = r5
            goto L2f
        L2c:
            r4 = move-exception
            goto L52
        L2e:
            r4 = move-exception
        L2f:
            com.mbridge.msdk.click.g$a r5 = r3.f     // Catch: java.lang.Throwable -> L2c
            if (r5 != 0) goto L40
            com.mbridge.msdk.click.g$a r5 = new com.mbridge.msdk.click.g$a     // Catch: java.lang.Throwable -> L2c
            r5.<init>()     // Catch: java.lang.Throwable -> L2c
            r3.f = r5     // Catch: java.lang.Throwable -> L2c
            java.lang.String r2 = r4.getMessage()     // Catch: java.lang.Throwable -> L2c
            r5.h = r2     // Catch: java.lang.Throwable -> L2c
        L40:
            r4.printStackTrace()     // Catch: java.lang.Throwable -> L2c
            if (r1 == 0) goto L4d
            r1.close()     // Catch: java.lang.Exception -> L49
            goto L4d
        L49:
            r4 = move-exception
            r4.printStackTrace()
        L4d:
            java.lang.String r4 = r0.toString()
            return r4
        L52:
            if (r1 == 0) goto L5c
            r1.close()     // Catch: java.lang.Exception -> L58
            goto L5c
        L58:
            r5 = move-exception
            r5.printStackTrace()
        L5c:
            throw r4
        */
        throw new UnsupportedOperationException("Method not decompiled: com.mbridge.msdk.click.g.a(java.io.InputStream, boolean):java.lang.String");
    }
}
