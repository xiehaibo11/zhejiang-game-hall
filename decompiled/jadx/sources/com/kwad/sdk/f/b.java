package com.kwad.sdk.f;

import java.util.HashMap;
import java.util.Map;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
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

    @Override // com.kwad.sdk.f.a
    public final String Fo() {
        c cVar = aBY;
        return cVar != null ? cVar.Fo() : FB();
    }

    @Override // com.kwad.sdk.f.a
    public final String Fp() {
        c cVar = aBY;
        return cVar != null ? cVar.Fp() : FB();
    }

    @Override // com.kwad.sdk.f.a
    public final String Fq() {
        c cVar = aBY;
        return cVar != null ? cVar.Fq() : FB();
    }

    @Override // com.kwad.sdk.f.a
    public final String Fr() {
        c cVar = aBY;
        return cVar != null ? cVar.Fr() : FB();
    }

    @Override // com.kwad.sdk.f.a
    public final String Fs() {
        c cVar = aBY;
        return cVar != null ? cVar.Fs() : FB();
    }

    @Override // com.kwad.sdk.f.a
    public final String Ft() {
        c cVar = aBY;
        return cVar != null ? cVar.Ft() : FB();
    }

    @Override // com.kwad.sdk.f.a
    public final String Fu() {
        c cVar = aBY;
        return cVar != null ? cVar.Fu() : FB();
    }

    @Override // com.kwad.sdk.f.a
    public final String Fv() {
        c cVar = aBY;
        return cVar != null ? cVar.Fv() : FB();
    }

    @Override // com.kwad.sdk.f.a
    public final String Fw() {
        c cVar = aBY;
        return cVar != null ? cVar.Fw() : FB();
    }

    @Override // com.kwad.sdk.f.a
    public final String Fx() {
        c cVar = aBY;
        return cVar != null ? cVar.Fx() : FB();
    }

    @Override // com.kwad.sdk.f.a
    public final String Fy() {
        c cVar = aBY;
        return cVar != null ? cVar.Fy() : FB();
    }

    @Override // com.kwad.sdk.f.a
    public final String Fz() {
        c cVar = aBY;
        return cVar != null ? cVar.Fz() : FB();
    }

    @Override // com.kwad.sdk.f.a
    public final String getAppId() {
        c cVar = aBY;
        return cVar != null ? cVar.getAppId() : FB();
    }

    @Override // com.kwad.sdk.f.a
    public final String getDeviceId() {
        c cVar = aBY;
        return cVar != null ? cVar.getDeviceId() : FB();
    }

    @Override // com.kwad.sdk.f.a
    public final String getIccId() {
        c cVar = aBY;
        return cVar != null ? cVar.getIccId() : FB();
    }

    @Override // com.kwad.sdk.f.a
    public final String getIp() {
        c cVar = aBY;
        return cVar != null ? cVar.getIp() : FB();
    }

    @Override // com.kwad.sdk.f.a
    public final String getLocation() {
        c cVar = aBY;
        return cVar != null ? cVar.getLocation() : FB();
    }

    @Override // com.kwad.sdk.f.a
    public final String getOaid() {
        c cVar = aBY;
        return cVar != null ? cVar.getOaid() : FB();
    }

    @Override // com.kwad.sdk.f.a
    public final String getSdkVersion() {
        c cVar = aBY;
        return cVar != null ? cVar.getSdkVersion() : FB();
    }
}
