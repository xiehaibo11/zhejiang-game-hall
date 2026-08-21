package com.sigmob.sdk.base.common;

import android.net.Uri;
import android.os.AsyncTask;
import android.text.TextUtils;
import android.webkit.URLUtil;
import com.czhj.sdk.common.ThreadPool.ThreadPoolFactory;
import com.czhj.sdk.common.network.Networking;
import com.czhj.sdk.common.network.ResponseHeader;
import com.czhj.sdk.common.utils.Md5Util;
import com.czhj.sdk.logger.SigmobLog;
import java.io.IOException;
import java.net.HttpURLConnection;
import java.net.URISyntaxException;
import java.net.URL;
import java.util.HashMap;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

public class o extends AsyncTask<String, Void, HashMap<String, String>> {
    private static final int a = 10;
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
    */
    private String f(String str) throws IOException {
        HttpURLConnection httpURLConnection;
        String strC;
        HttpURLConnection httpURLConnection2 = null;
        try {
            if (TextUtils.isEmpty(null)) {
                httpURLConnection = (HttpURLConnection) new URL(str).openConnection();
                try {
                    httpURLConnection.setInstanceFollowRedirects(false);
                    httpURLConnection.addRequestProperty(ResponseHeader.USER_AGENT.getKey(), Networking.getUserAgent());
                    String strA = a(str, httpURLConnection);
                    if (strA != null) {
                        if (strA.contains("fsname=")) {
                            strC = b(str);
                        } else if (strA.contains(com.tkay.china.common.a.a.g)) {
                            strC = c(strA);
                        } else {
                            httpURLConnection2 = httpURLConnection;
                            strC = strA;
                        }
                    } else if (!TextUtils.isEmpty(str)) {
                        String[] strArrSplit = Uri.parse(str).getPath().split("/");
                        if (strArrSplit.length > 1) {
                            strA = strArrSplit[strArrSplit.length - 1];
                        }
                        if (TextUtils.isEmpty(strA) || !strA.toLowerCase().endsWith(com.tkay.china.common.a.a.g)) {
                            strC = Md5Util.md5(str) + com.tkay.china.common.a.a.g;
                        } else {
                            strC = null;
                        }
                    }
                    httpURLConnection2 = httpURLConnection;
                } catch (Throwable th) {
                    th = th;
                    try {
                        SigmobLog.e("getDownloadUrlFilename", th);
                    } finally {
                        if (httpURLConnection != null) {
                            httpURLConnection.disconnect();
                        }
                    }
                }
            } else {
                strC = a(str);
            }
            if (httpURLConnection2 != null) {
                httpURLConnection2.disconnect();
            }
            return strC;
        } catch (Throwable th2) {
            th = th2;
            httpURLConnection = null;
        }
    }

    @Override
    protected HashMap<String, String> doInBackground(String... strArr) {
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

    @Override
    protected void onPostExecute(HashMap<String, String> map) {
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

    @Override
    protected void onCancelled() {
        super.onCancelled();
        this.b.a("Task for resolving url was cancelled", (Throwable) null);
    }
}
