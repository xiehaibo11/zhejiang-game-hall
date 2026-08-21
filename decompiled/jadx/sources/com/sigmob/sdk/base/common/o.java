package com.sigmob.sdk.base.common;

import android.os.AsyncTask;
import android.text.TextUtils;
import android.webkit.URLUtil;
import com.czhj.sdk.common.ThreadPool.ThreadPoolFactory;
import com.czhj.sdk.common.network.Networking;
import com.czhj.sdk.common.network.ResponseHeader;
import com.czhj.sdk.logger.SigmobLog;
import java.io.IOException;
import java.net.HttpURLConnection;
import java.net.URISyntaxException;
import java.net.URL;
import java.util.HashMap;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

/* JADX INFO: loaded from: classes3.dex */
public class o extends AsyncTask<String, Void, HashMap<String, String>> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final int f4860a = 10;
    private final a b;

    public interface a {
        void a(String str, String str2);

        void a(String str, Throwable th);
    }

    private o(a aVar) {
        this.b = aVar;
    }

    public static String a(String str) {
        if (!str.toLowerCase().contains(com.tkay.china.common.a.a.g)) {
            return null;
        }
        String strB = b(str);
        if (!TextUtils.isEmpty(strB)) {
            return strB;
        }
        String strC = c(str);
        if (TextUtils.isEmpty(strC)) {
            return null;
        }
        return strC;
    }

    private static String a(String str, HttpURLConnection httpURLConnection) throws URISyntaxException, IOException {
        int responseCode = httpURLConnection.getResponseCode();
        if (responseCode < 200 || responseCode >= 400) {
            return null;
        }
        try {
            return URLUtil.guessFileName(str, httpURLConnection.getHeaderField("Content-Disposition"), null);
        } catch (IllegalArgumentException unused) {
            SigmobLog.e("Invalid URL redirection. baseUrl=" + str);
            throw new URISyntaxException(str, "Unable to parse invalid URL");
        } catch (NullPointerException e) {
            SigmobLog.e("Invalid URL redirection. baseUrl=" + str);
            throw e;
        }
    }

    public static void a(String str, a aVar) {
        try {
            String strA = a(str);
            if (TextUtils.isEmpty(strA)) {
                new o(aVar).executeOnExecutor(ThreadPoolFactory.BackgroundThreadPool.getInstance().getExecutorService(), str);
            } else {
                aVar.a(strA, str);
            }
        } catch (Throwable th) {
            aVar.a("Failed to resolve url", th);
        }
    }

    public static String b(String str) {
        try {
            Matcher matcher = Pattern.compile("(fsname=)(.*?apk)", 2).matcher(str);
            if (matcher.find()) {
                return matcher.group(2);
            }
            return null;
        } catch (Throwable unused) {
            return null;
        }
    }

    public static String c(String str) {
        try {
            Matcher matcher = Pattern.compile("[\\w\\.]+\\.apk", 2).matcher(str);
            if (matcher.find()) {
                return matcher.group(0);
            }
            return null;
        } catch (Throwable unused) {
            return null;
        }
    }

    private String d(String str) throws URISyntaxException, IOException {
        String str2 = null;
        while (str != null) {
            try {
                str2 = str;
                str = e(str);
            } catch (Throwable th) {
                SigmobLog.e(th.getMessage());
                return str;
            }
        }
        return str2;
    }

    private static String e(String str) throws URISyntaxException, IOException {
        HttpURLConnection httpURLConnection;
        String str2 = null;
        try {
            httpURLConnection = (HttpURLConnection) new URL(str).openConnection();
            try {
                httpURLConnection.setInstanceFollowRedirects(false);
                httpURLConnection.addRequestProperty(ResponseHeader.USER_AGENT.getKey(), Networking.getUserAgent());
                int responseCode = httpURLConnection.getResponseCode();
                String headerField = httpURLConnection.getHeaderField("Location");
                if (responseCode >= 300 && responseCode < 400) {
                    str2 = headerField;
                }
            } catch (Throwable th) {
                th = th;
                try {
                    SigmobLog.e("resolveRedirectLocation fail", th);
                    if (httpURLConnection != null) {
                    }
                    return str2;
                } finally {
                    if (httpURLConnection != null) {
                        httpURLConnection.disconnect();
                    }
                }
            }
        } catch (Throwable th2) {
            th = th2;
            httpURLConnection = null;
        }
        return str2;
    }

    /* JADX WARN: Removed duplicated region for block: B:29:0x008c  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    private java.lang.String f(java.lang.String r8) throws java.io.IOException {
        /*
            r7 = this;
            r0 = 0
            boolean r1 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L97
            if (r1 != 0) goto Ld
            java.lang.String r8 = a(r8)     // Catch: java.lang.Throwable -> L97
            goto L8e
        Ld:
            java.net.URL r1 = new java.net.URL     // Catch: java.lang.Throwable -> L97
            r1.<init>(r8)     // Catch: java.lang.Throwable -> L97
            java.net.URLConnection r1 = r1.openConnection()     // Catch: java.lang.Throwable -> L97
            java.net.HttpURLConnection r1 = (java.net.HttpURLConnection) r1     // Catch: java.lang.Throwable -> L97
            r2 = 0
            r1.setInstanceFollowRedirects(r2)     // Catch: java.lang.Throwable -> L95
            com.czhj.sdk.common.network.ResponseHeader r2 = com.czhj.sdk.common.network.ResponseHeader.USER_AGENT     // Catch: java.lang.Throwable -> L95
            java.lang.String r2 = r2.getKey()     // Catch: java.lang.Throwable -> L95
            java.lang.String r3 = com.czhj.sdk.common.network.Networking.getUserAgent()     // Catch: java.lang.Throwable -> L95
            r1.addRequestProperty(r2, r3)     // Catch: java.lang.Throwable -> L95
            java.lang.String r2 = a(r8, r1)     // Catch: java.lang.Throwable -> L95
            java.lang.String r3 = ".apk"
            if (r2 == 0) goto L4c
            java.lang.String r4 = "fsname="
            boolean r4 = r2.contains(r4)     // Catch: java.lang.Throwable -> L95
            if (r4 == 0) goto L3e
            java.lang.String r8 = b(r8)     // Catch: java.lang.Throwable -> L95
            goto L8d
        L3e:
            boolean r8 = r2.contains(r3)     // Catch: java.lang.Throwable -> L95
            if (r8 == 0) goto L49
            java.lang.String r8 = c(r2)     // Catch: java.lang.Throwable -> L95
            goto L8d
        L49:
            r0 = r1
            r8 = r2
            goto L8e
        L4c:
            boolean r4 = android.text.TextUtils.isEmpty(r8)     // Catch: java.lang.Throwable -> L95
            if (r4 != 0) goto L8c
            android.net.Uri r4 = android.net.Uri.parse(r8)     // Catch: java.lang.Throwable -> L95
            java.lang.String r4 = r4.getPath()     // Catch: java.lang.Throwable -> L95
            java.lang.String r5 = "/"
            java.lang.String[] r4 = r4.split(r5)     // Catch: java.lang.Throwable -> L95
            int r5 = r4.length     // Catch: java.lang.Throwable -> L95
            r6 = 1
            if (r5 <= r6) goto L68
            int r2 = r4.length     // Catch: java.lang.Throwable -> L95
            int r2 = r2 - r6
            r2 = r4[r2]     // Catch: java.lang.Throwable -> L95
        L68:
            boolean r4 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> L95
            if (r4 != 0) goto L78
            java.lang.String r2 = r2.toLowerCase()     // Catch: java.lang.Throwable -> L95
            boolean r2 = r2.endsWith(r3)     // Catch: java.lang.Throwable -> L95
            if (r2 != 0) goto L8c
        L78:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L95
            r2.<init>()     // Catch: java.lang.Throwable -> L95
            java.lang.String r8 = com.czhj.sdk.common.utils.Md5Util.md5(r8)     // Catch: java.lang.Throwable -> L95
            r2.append(r8)     // Catch: java.lang.Throwable -> L95
            r2.append(r3)     // Catch: java.lang.Throwable -> L95
            java.lang.String r8 = r2.toString()     // Catch: java.lang.Throwable -> L95
            goto L8d
        L8c:
            r8 = r0
        L8d:
            r0 = r1
        L8e:
            if (r0 == 0) goto L93
            r0.disconnect()
        L93:
            r0 = r8
            goto La3
        L95:
            r8 = move-exception
            goto L99
        L97:
            r8 = move-exception
            r1 = r0
        L99:
            java.lang.String r2 = "getDownloadUrlFilename"
            com.czhj.sdk.logger.SigmobLog.e(r2, r8)     // Catch: java.lang.Throwable -> La4
            if (r1 == 0) goto La3
            r1.disconnect()
        La3:
            return r0
        La4:
            r8 = move-exception
            if (r1 == 0) goto Laa
            r1.disconnect()
        Laa:
            throw r8
        */
        throw new UnsupportedOperationException("Method not decompiled: com.sigmob.sdk.base.common.o.f(java.lang.String):java.lang.String");
    }

    /* JADX INFO: Access modifiers changed from: protected */
    @Override // android.os.AsyncTask
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public HashMap<String, String> doInBackground(String... strArr) {
        if (strArr == null || strArr.length == 0) {
            return null;
        }
        HashMap<String, String> map = new HashMap<>();
        try {
            String strD = strArr[0];
            try {
                strD = d(strD);
            } catch (Throwable th) {
                SigmobLog.e(th.getMessage());
            }
            map.put("url", strD);
            map.put("fileName", f(strD));
        } catch (Throwable th2) {
            SigmobLog.e(th2.getMessage());
        }
        return map;
    }

    /* JADX INFO: Access modifiers changed from: protected */
    @Override // android.os.AsyncTask
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public void onPostExecute(HashMap<String, String> map) {
        String str;
        String str2 = null;
        if (map != null) {
            str2 = map.get("fileName");
            str = map.get("url");
        } else {
            str = null;
        }
        this.b.a(str2, str);
    }

    @Override // android.os.AsyncTask
    protected void onCancelled() {
        super.onCancelled();
        this.b.a("Task for resolving url was cancelled", (Throwable) null);
    }
}
