package com.mbridge.msdk.video.bt.a;

import android.util.Base64;
import com.mbridge.msdk.foundation.tools.z;
import com.mbridge.msdk.mbjscommon.windvane.h;
import com.mbridge.msdk.video.bt.module.MBridgeBTVideoView;
import java.util.LinkedHashMap;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: compiled from: H5MediaPlayerManager.java */
/* JADX INFO: loaded from: classes3.dex */
public class a {
    private static final String c = a.class.getSimpleName();
    private static LinkedHashMap<String, MBridgeBTVideoView> e = new LinkedHashMap<>();
    private String d = "handlerNativeResult";

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    int f4072a = 0;
    int b = 1;

    /* JADX INFO: renamed from: com.mbridge.msdk.video.bt.a.a$a, reason: collision with other inner class name */
    /* JADX INFO: compiled from: H5MediaPlayerManager.java */
    private static final class C0302a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private static a f4073a = new a();
    }

    public static a a() {
        return C0302a.f4073a;
    }

    public final void a(String str, MBridgeBTVideoView mBridgeBTVideoView) {
        e.put(str, mBridgeBTVideoView);
    }

    public final void a(String str) {
        e.remove(str);
    }

    /* JADX WARN: Removed duplicated region for block: B:55:0x00d8  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public final void a(java.lang.Object r11, java.lang.String r12, org.json.JSONArray r13, int r14) {
        /*
            Method dump skipped, instruction units count: 378
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.mbridge.msdk.video.bt.a.a.a(java.lang.Object, java.lang.String, org.json.JSONArray, int):void");
    }

    private void a(int i, String str, Object obj) {
        try {
            JSONObject jSONObject = new JSONObject();
            jSONObject.put("code", i);
            jSONObject.put("message", str);
            h.a().a(obj, Base64.encodeToString(jSONObject.toString().getBytes(), 2));
        } catch (JSONException e2) {
            z.a(c, e2.getMessage());
        } catch (Throwable th) {
            z.a(c, th.getMessage());
        }
    }
}
