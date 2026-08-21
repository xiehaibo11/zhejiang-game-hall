package com.kwad.sdk.f;

import java.util.HashMap;
import java.util.Map;
import org.json.JSONObject;

public class b implements a {
    private static volatile b aBX;
    private static c aBY;

    private b() {
    }

    public static synchronized b FA() {
        if (aBX == null) {
            synchronized (b.class) {
                if (aBX == null) {
                    aBX = new b();
                }
            }
        }
        return aBX;
    }

    private static String FB() {
        return a(false, "", 2);
    }

    public static String a(boolean z, Object obj, int i) {
        HashMap map = new HashMap();
        map.put("userSet", String.valueOf(z));
        map.put("value", obj);
        map.put("errorCode", String.valueOf(i));
        return new JSONObject((Map<String, Object>) map).toString();
    }

    public static void a(c cVar) {
        aBY = cVar;
    }

    @Override
    public final String Fo() {
        c cVar = aBY;
        return cVar != null ? cVar.Fo() : FB();
    }

    @Override
    public final String Fp() {
        c cVar = aBY;
        return cVar != null ? cVar.Fp() : FB();
    }

    @Override
    public final String Fq() {
        c cVar = aBY;
        return cVar != null ? cVar.Fq() : FB();
    }

    @Override
    public final String Fr() {
        c cVar = aBY;
        return cVar != null ? cVar.Fr() : FB();
    }

    @Override
    public final String Fs() {
        c cVar = aBY;
        return cVar != null ? cVar.Fs() : FB();
    }

    @Override
    public final String Ft() {
        c cVar = aBY;
        return cVar != null ? cVar.Ft() : FB();
    }

    @Override
    public final String Fu() {
        c cVar = aBY;
        return cVar != null ? cVar.Fu() : FB();
    }

    @Override
    public final String Fv() {
        c cVar = aBY;
        return cVar != null ? cVar.Fv() : FB();
    }

    @Override
    public final String Fw() {
        c cVar = aBY;
        return cVar != null ? cVar.Fw() : FB();
    }

    @Override
    public final String Fx() {
        c cVar = aBY;
        return cVar != null ? cVar.Fx() : FB();
    }

    @Override
    public final String Fy() {
        c cVar = aBY;
        return cVar != null ? cVar.Fy() : FB();
    }

    @Override
    public final String Fz() {
        c cVar = aBY;
        return cVar != null ? cVar.Fz() : FB();
    }

    @Override
    public final String getAppId() {
        c cVar = aBY;
        return cVar != null ? cVar.getAppId() : FB();
    }

    @Override
    public final String getDeviceId() {
        c cVar = aBY;
        return cVar != null ? cVar.getDeviceId() : FB();
    }

    @Override
    public final String getIccId() {
        c cVar = aBY;
        return cVar != null ? cVar.getIccId() : FB();
    }

    @Override
    public final String getIp() {
        c cVar = aBY;
        return cVar != null ? cVar.getIp() : FB();
    }

    @Override
    public final String getLocation() {
        c cVar = aBY;
        return cVar != null ? cVar.getLocation() : FB();
    }

    @Override
    public final String getOaid() {
        c cVar = aBY;
        return cVar != null ? cVar.getOaid() : FB();
    }

    @Override
    public final String getSdkVersion() {
        c cVar = aBY;
        return cVar != null ? cVar.getSdkVersion() : FB();
    }
}
