package com.huawei.hms.framework.network.grs.c;

import android.content.Context;
import android.os.SystemClock;
import com.huawei.hms.framework.common.IoUtils;
import com.huawei.hms.framework.common.Logger;
import com.huawei.hms.framework.network.grs.GrsBaseInfo;
import java.io.IOException;
import java.io.InputStream;
import java.io.OutputStream;
import java.util.Map;
import java.util.concurrent.Callable;
import javax.net.ssl.HttpsURLConnection;

public class j extends b implements Callable<f> {
    private static final String i = "j";

    public j(String str, int i2, a aVar, Context context, String str2, GrsBaseInfo grsBaseInfo, com.huawei.hms.framework.network.grs.a.c cVar) {
        super(str, i2, aVar, context, str2, grsBaseInfo, cVar);
    }

    @Override
    public f call() {
        long j;
        long jCurrentTimeMillis;
        long jElapsedRealtime;
        Logger.i(i, "Post call execute");
        long jCurrentTimeMillis2 = 0;
        try {
            jElapsedRealtime = SystemClock.elapsedRealtime();
        } catch (IOException e) {
            e = e;
            j = 0;
        }
        try {
            jCurrentTimeMillis2 = System.currentTimeMillis();
            HttpsURLConnection httpsURLConnectionA = com.huawei.hms.framework.network.grs.d.a.a.a(c(), b(), e());
            byte[] bArr = null;
            InputStream inputStream = null;
            if (httpsURLConnectionA == null) {
                Logger.w(i, "create HttpsURLConnection instance by url return null.");
                return null;
            }
            httpsURLConnectionA.setRequestProperty("Content-Type", "application/json; charset=UTF-8");
            httpsURLConnectionA.setRequestMethod("POST");
            httpsURLConnectionA.setDoOutput(true);
            httpsURLConnectionA.setDoInput(true);
            httpsURLConnectionA.connect();
            OutputStream outputStream = httpsURLConnectionA.getOutputStream();
            outputStream.write(f().a("services", "").getBytes("UTF-8"));
            outputStream.close();
            int responseCode = httpsURLConnectionA.getResponseCode();
            if (responseCode == 200) {
                try {
                    inputStream = httpsURLConnectionA.getInputStream();
                    byte[] byteArray = IoUtils.toByteArray(inputStream);
                    IoUtils.closeSecure(inputStream);
                    bArr = byteArray;
                } catch (Throwable th) {
                    IoUtils.closeSecure(inputStream);
                    throw th;
                }
            }
            Map headerFields = httpsURLConnectionA.getHeaderFields();
            httpsURLConnectionA.disconnect();
            long jElapsedRealtime2 = SystemClock.elapsedRealtime();
            jCurrentTimeMillis = System.currentTimeMillis();
            this.a = new f(responseCode, headerFields, bArr == null ? new byte[0] : bArr, jElapsedRealtime2 - jElapsedRealtime);
        } catch (IOException e2) {
            e = e2;
            long j2 = jCurrentTimeMillis2;
            jCurrentTimeMillis2 = jElapsedRealtime;
            j = j2;
            long jElapsedRealtime3 = SystemClock.elapsedRealtime();
            jCurrentTimeMillis = System.currentTimeMillis();
            Logger.w(i, "RequestCallableV2 run task catch IOException", e);
            this.a = new f(e, jElapsedRealtime3 - jCurrentTimeMillis2);
            jCurrentTimeMillis2 = j;
        }
        this.a.a(c());
        this.a.a(d());
        this.a.b(jCurrentTimeMillis2);
        this.a.a(jCurrentTimeMillis);
        if (a() != null) {
            a().a(this.a);
        }
        return this.a;
    }
}
