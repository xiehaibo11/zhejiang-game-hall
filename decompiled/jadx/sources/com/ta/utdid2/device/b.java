package com.ta.utdid2.device;

import android.content.Context;
import com.ta.utdid2.a.a.f;
import java.util.zip.Adler32;

/* JADX INFO: loaded from: classes3.dex */
public class b {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static a f5296a;
    static final Object d = new Object();

    static long a(a aVar) {
        if (aVar == null) {
            return 0L;
        }
        String str = String.format("%s%s%s%s%s", aVar.getUtdid(), aVar.getDeviceId(), Long.valueOf(aVar.a()), aVar.getImsi(), aVar.getImei());
        if (f.isEmpty(str)) {
            return 0L;
        }
        Adler32 adler32 = new Adler32();
        adler32.reset();
        adler32.update(str.getBytes());
        return adler32.getValue();
    }

    private static a a(Context context) {
        if (context == null) {
            return null;
        }
        synchronized (d) {
            String value = c.a(context).getValue();
            if (f.isEmpty(value)) {
                return null;
            }
            if (value.endsWith("\n")) {
                value = value.substring(0, value.length() - 1);
            }
            a aVar = new a();
            long jCurrentTimeMillis = System.currentTimeMillis();
            String imei = com.ta.utdid2.a.a.d.getImei(context);
            String imsi = com.ta.utdid2.a.a.d.getImsi(context);
            aVar.b(imei);
            aVar.setImei(imei);
            aVar.b(jCurrentTimeMillis);
            aVar.setImsi(imsi);
            aVar.c(value);
            aVar.a(a(aVar));
            return aVar;
        }
    }

    public static synchronized a b(Context context) {
        if (f5296a != null) {
            return f5296a;
        }
        if (context == null) {
            return null;
        }
        a aVarA = a(context);
        f5296a = aVarA;
        return aVarA;
    }
}
