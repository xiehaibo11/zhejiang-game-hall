package com.meizu.cloud.pushsdk.c.c;

import android.net.TrafficStats;
import com.meizu.cloud.pushsdk.c.c.k;
import com.meizu.cloud.pushsdk.util.MinSdkChecker;
import com.ss.android.download.api.constant.BaseConstants;
import cz.msebera.android.httpclient.client.methods.HttpPatch;
import java.io.IOException;
import java.net.HttpURLConnection;
import java.net.ProtocolException;
import java.net.URL;

/* JADX INFO: loaded from: classes3.dex */
public class e implements a {
    private static l a(final HttpURLConnection httpURLConnection) {
        if (!httpURLConnection.getDoInput()) {
            return null;
        }
        final com.meizu.cloud.pushsdk.c.g.d dVarA = com.meizu.cloud.pushsdk.c.g.g.a(com.meizu.cloud.pushsdk.c.g.g.a(a(httpURLConnection.getResponseCode()) ? httpURLConnection.getInputStream() : httpURLConnection.getErrorStream()));
        return new l() { // from class: com.meizu.cloud.pushsdk.c.c.e.1
            @Override // com.meizu.cloud.pushsdk.c.c.l
            public com.meizu.cloud.pushsdk.c.g.d a() {
                return dVarA;
            }
        };
    }

    private static void a(HttpURLConnection httpURLConnection, i iVar) throws ProtocolException {
        String str;
        String str2;
        int iC = iVar.c();
        if (iC != 0) {
            if (iC == 1) {
                str2 = "POST";
            } else if (iC == 2) {
                str2 = "PUT";
            } else if (iC == 3) {
                str = "DELETE";
            } else if (iC == 4) {
                str = "HEAD";
            } else {
                if (iC != 5) {
                    throw new IllegalStateException("Unknown method type.");
                }
                str2 = HttpPatch.METHOD_NAME;
            }
            httpURLConnection.setRequestMethod(str2);
            b(httpURLConnection, iVar);
            return;
        }
        str = "GET";
        httpURLConnection.setRequestMethod(str);
    }

    protected static boolean a(int i) {
        return i >= 200 && i < 300;
    }

    private HttpURLConnection b(i iVar) {
        URL url = new URL(iVar.a().toString());
        if (MinSdkChecker.isSupportNotificationChannel()) {
            TrafficStats.setThreadStatsTag(2006537699);
        }
        HttpURLConnection httpURLConnectionA = a(url);
        httpURLConnectionA.setConnectTimeout(BaseConstants.Time.MINUTE);
        httpURLConnectionA.setReadTimeout(BaseConstants.Time.MINUTE);
        httpURLConnectionA.setUseCaches(false);
        httpURLConnectionA.setDoInput(true);
        return httpURLConnectionA;
    }

    private static void b(HttpURLConnection httpURLConnection, i iVar) {
        j jVarE = iVar.e();
        if (jVarE != null) {
            httpURLConnection.setDoOutput(true);
            httpURLConnection.addRequestProperty("Content-Type", jVarE.a().toString());
            com.meizu.cloud.pushsdk.c.g.c cVarA = com.meizu.cloud.pushsdk.c.g.g.a(com.meizu.cloud.pushsdk.c.g.g.a(httpURLConnection.getOutputStream()));
            jVarE.a(cVarA);
            cVarA.close();
        }
    }

    @Override // com.meizu.cloud.pushsdk.c.c.a
    public k a(i iVar) throws IOException {
        HttpURLConnection httpURLConnectionB = b(iVar);
        for (String str : iVar.d().b()) {
            String strA = iVar.a(str);
            com.meizu.cloud.pushsdk.c.a.a.b("current header name " + str + " value " + strA);
            httpURLConnectionB.addRequestProperty(str, strA);
        }
        a(httpURLConnectionB, iVar);
        return new k.a().a(httpURLConnectionB.getResponseCode()).a(iVar.d()).a(httpURLConnectionB.getResponseMessage()).a(iVar).a(a(httpURLConnectionB)).a();
    }

    protected HttpURLConnection a(URL url) {
        HttpURLConnection httpURLConnection = (HttpURLConnection) url.openConnection();
        httpURLConnection.setInstanceFollowRedirects(HttpURLConnection.getFollowRedirects());
        return httpURLConnection;
    }
}
