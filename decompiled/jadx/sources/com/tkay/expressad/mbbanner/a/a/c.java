package com.tkay.expressad.mbbanner.a.a;

import android.content.Context;
import android.content.Intent;
import android.net.Uri;
import android.os.Bundle;
import android.text.TextUtils;
import android.util.Base64;
import com.meizu.cloud.pushsdk.notification.model.AdvertisementOption;
import com.tkay.core.common.a.i;
import com.tkay.core.common.b.m;
import com.tkay.expressad.atsignalcommon.bridge.CommonBannerJSBridgeImp;
import com.tkay.expressad.atsignalcommon.bridge.CommonJSBridgeImpUtils;
import com.tkay.expressad.atsignalcommon.mraid.CallMraidJS;
import com.tkay.expressad.atsignalcommon.windvane.j;
import com.tkay.expressad.foundation.g.a.f;
import com.tkay.expressad.foundation.h.s;
import com.tkay.expressad.videocommon.b.g;
import com.tkay.expressad.videocommon.b.l;
import java.io.File;
import java.lang.ref.WeakReference;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import org.json.JSONArray;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes3.dex */
public final class c extends CommonBannerJSBridgeImp {
    private static final String b = "BannerJSBridgeImpl";
    private WeakReference<Context> c;
    private List<com.tkay.expressad.foundation.d.c> d;
    private String e;
    private String f;
    private int g;
    private com.tkay.expressad.mbbanner.a.c.a h;
    private b i;
    private boolean j = false;

    public c(Context context, String str, String str2) {
        this.e = str;
        this.f = str2;
        this.c = new WeakReference<>(context);
    }

    public final void a(com.tkay.expressad.mbbanner.a.c.a aVar) {
        if (aVar != null) {
            this.h = aVar;
        }
    }

    public final void a(List<com.tkay.expressad.foundation.d.c> list) {
        this.d = list;
    }

    public final void a(int i) {
        this.g = i;
    }

    public final void a() {
        if (this.h != null) {
            this.h = null;
        }
        if (this.i != null) {
            this.i = null;
        }
    }

    @Override // com.tkay.expressad.atsignalcommon.bridge.CommonBannerJSBridgeImp, com.tkay.expressad.atsignalcommon.bridge.IBannerJSBridge
    public final void readyStatus(Object obj, String str) {
        if (obj != null) {
            try {
                int iOptInt = new JSONObject(str).optInt("isReady", 1);
                j.a().a(obj, CommonJSBridgeImpUtils.codeToJsonString(0));
                if (this.h != null) {
                    this.h.b(iOptInt);
                }
            } catch (Throwable unused) {
            }
        }
    }

    @Override // com.tkay.expressad.atsignalcommon.bridge.CommonBannerJSBridgeImp, com.tkay.expressad.atsignalcommon.bridge.IBannerJSBridge
    public final void init(Object obj, String str) {
        try {
            JSONObject jSONObject = new JSONObject();
            com.tkay.expressad.foundation.h.c cVar = new com.tkay.expressad.foundation.h.c(m.a().f());
            JSONObject jSONObject2 = new JSONObject();
            jSONObject2.put("dev_close_state", this.g);
            jSONObject.put("sdkSetting", jSONObject2);
            jSONObject.put("device", cVar.a());
            jSONObject.put("campaignList", com.tkay.expressad.foundation.d.c.b(this.d));
            com.tkay.expressad.d.b.a();
            com.tkay.expressad.d.c cVarC = com.tkay.expressad.d.b.c(com.tkay.expressad.foundation.b.b.b().e(), this.f);
            if (cVarC == null) {
                cVarC = com.tkay.expressad.d.c.c(this.f);
            }
            if (!TextUtils.isEmpty(this.e)) {
                cVarC.e(this.e);
            }
            jSONObject.put("unitSetting", cVarC.s());
            com.tkay.expressad.d.b.a();
            com.tkay.expressad.d.b.a(com.tkay.expressad.foundation.b.b.b().e());
            jSONObject.put("appSetting", new JSONObject());
            j.a().a(obj, Base64.encodeToString(jSONObject.toString().getBytes(), 2));
        } catch (Throwable unused) {
        }
    }

    @Override // com.tkay.expressad.atsignalcommon.bridge.CommonBannerJSBridgeImp, com.tkay.expressad.atsignalcommon.bridge.IBannerJSBridge
    public final void click(Object obj, String str) {
        try {
            if (this.d == null) {
                return;
            }
            com.tkay.expressad.foundation.d.c cVar = null;
            if (this.d != null && this.d.size() > 0) {
                cVar = this.d.get(0);
            }
            if (TextUtils.isEmpty(str)) {
                return;
            }
            try {
                JSONObject jSONObjectA = com.tkay.expressad.foundation.d.c.a(cVar);
                JSONObject jSONObject = new JSONObject(str).getJSONObject(AdvertisementOption.PRIORITY_VALID_TIME);
                Iterator<String> itKeys = jSONObject.keys();
                while (itKeys.hasNext()) {
                    String next = itKeys.next();
                    jSONObjectA.put(next, jSONObject.getString(next));
                }
                com.tkay.expressad.foundation.d.c cVarB = com.tkay.expressad.foundation.d.c.b(jSONObjectA);
                String strOptString = jSONObjectA.optString("unitId");
                if (!TextUtils.isEmpty(strOptString)) {
                    cVarB.l(strOptString);
                }
                cVar = cVarB;
            } catch (JSONException e) {
                e.printStackTrace();
            }
            if (this.h != null) {
                this.h.a(cVar);
            }
        } catch (Throwable unused) {
        }
    }

    @Override // com.tkay.expressad.atsignalcommon.bridge.CommonBannerJSBridgeImp, com.tkay.expressad.atsignalcommon.bridge.IBannerJSBridge
    public final void toggleCloseBtn(Object obj, String str) {
        try {
            if (TextUtils.isEmpty(str)) {
                return;
            }
            int iOptInt = new JSONObject(str).optInt(CallMraidJS.b);
            if (this.h != null) {
                this.h.a(iOptInt);
            }
        } catch (Throwable unused) {
        }
    }

    @Override // com.tkay.expressad.atsignalcommon.bridge.CommonBannerJSBridgeImp, com.tkay.expressad.atsignalcommon.bridge.IBannerJSBridge
    public final void triggerCloseBtn(Object obj, String str) {
        try {
            if (TextUtils.isEmpty(str)) {
                return;
            }
            new JSONObject(str).optString(CallMraidJS.b);
            if (this.h != null) {
                this.h.a();
            }
            j.a().a(obj, CommonJSBridgeImpUtils.codeToJsonString(0));
        } catch (Throwable unused) {
            j.a().a(obj, CommonJSBridgeImpUtils.codeToJsonString(-1));
        }
    }

    @Override // com.tkay.expressad.atsignalcommon.bridge.CommonBannerJSBridgeImp, com.tkay.expressad.atsignalcommon.bridge.IBannerJSBridge
    public final void sendImpressions(Object obj, String str) {
        try {
            if (TextUtils.isEmpty(str)) {
                return;
            }
            JSONArray jSONArray = new JSONArray(str);
            ArrayList arrayList = new ArrayList();
            for (int i = 0; i < jSONArray.length(); i++) {
                String string = jSONArray.getString(i);
                for (com.tkay.expressad.foundation.d.c cVar : this.d) {
                    if (cVar.aZ().equals(string)) {
                        f.a(this.f, cVar, f.e);
                        arrayList.add(string);
                    }
                }
            }
        } catch (Throwable unused) {
        }
    }

    @Override // com.tkay.expressad.atsignalcommon.mraid.IMraidJSBridge
    public final void open(String str) {
        try {
            if (this.d.size() > 1) {
                m.a().f().startActivity(new Intent("android.intent.action.VIEW", Uri.parse(str)));
                str = null;
            }
            if (this.h != null) {
                this.h.a(true, str);
            }
        } catch (Throwable unused) {
        }
    }

    @Override // com.tkay.expressad.atsignalcommon.mraid.IMraidJSBridge
    public final void close() {
        try {
            if (this.h != null) {
                this.h.b();
            }
        } catch (Throwable unused) {
        }
    }

    @Override // com.tkay.expressad.atsignalcommon.mraid.IMraidJSBridge
    public final void unload() {
        close();
    }

    @Override // com.tkay.expressad.atsignalcommon.mraid.IMraidJSBridge
    public final com.tkay.expressad.foundation.d.c getMraidCampaign() {
        List<com.tkay.expressad.foundation.d.c> list = this.d;
        if (list == null || list.size() <= 0) {
            return null;
        }
        return this.d.get(0);
    }

    @Override // com.tkay.expressad.atsignalcommon.mraid.IMraidJSBridge
    public final void useCustomClose(boolean z) {
        int i = z ? 2 : 1;
        try {
            if (this.h != null) {
                this.h.a(i);
            }
        } catch (Throwable unused) {
        }
    }

    @Override // com.tkay.expressad.atsignalcommon.mraid.IMraidJSBridge
    public final void expand(String str, boolean z) {
        Context context;
        try {
            String strP = "";
            if (getMraidCampaign() != null) {
                if (TextUtils.isEmpty(getMraidCampaign().q())) {
                    strP = getMraidCampaign().p();
                } else {
                    strP = "file:////" + getMraidCampaign().q();
                }
            }
            Bundle bundle = new Bundle();
            if (TextUtils.isEmpty(str)) {
                str = strP;
            }
            bundle.putString("url", str);
            bundle.putBoolean("shouldUseCustomClose", z);
            if (this.c != null && (context = this.c.get()) != null) {
                if (this.i != null && this.i.isShowing()) {
                    return;
                }
                b bVar = new b(context, bundle, this.h);
                this.i = bVar;
                bVar.a(this.f, this.d);
                this.i.show();
            }
            if (this.h != null) {
                this.h.a(true);
            }
        } catch (Throwable unused) {
        }
    }

    @Override // com.tkay.expressad.atsignalcommon.bridge.CommonBannerJSBridgeImp, com.tkay.expressad.atsignalcommon.bridge.IBannerJSBridge
    public final void getFileInfo(Object obj, String str) {
        if (TextUtils.isEmpty(str)) {
            CommonJSBridgeImpUtils.callbackExcep(obj, "params is empty");
            return;
        }
        try {
            a(obj, new JSONObject(str));
        } catch (Throwable th) {
            th.getMessage();
        }
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r12v0, types: [java.lang.Object, org.json.JSONArray] */
    /* JADX WARN: Type inference failed for: r17v1 */
    /* JADX WARN: Type inference failed for: r17v2 */
    /* JADX WARN: Type inference failed for: r17v3 */
    /* JADX WARN: Type inference failed for: r17v4 */
    /* JADX WARN: Type inference failed for: r17v5 */
    /* JADX WARN: Type inference failed for: r17v6 */
    /* JADX WARN: Type inference failed for: r3v0, types: [java.lang.String] */
    /* JADX WARN: Type inference failed for: r3v1 */
    /* JADX WARN: Type inference failed for: r3v10 */
    /* JADX WARN: Type inference failed for: r3v13 */
    /* JADX WARN: Type inference failed for: r3v2, types: [java.lang.String] */
    /* JADX WARN: Type inference failed for: r3v22 */
    /* JADX WARN: Type inference failed for: r3v4 */
    /* JADX WARN: Type inference failed for: r3v5 */
    /* JADX WARN: Type inference failed for: r3v8 */
    /* JADX WARN: Type inference failed for: r7v0, types: [org.json.JSONObject] */
    /* JADX WARN: Type inference failed for: r8v0, types: [java.lang.Object, org.json.JSONObject] */
    private static void a(Object obj, JSONObject jSONObject) {
        String str;
        ?? r17;
        String str2;
        boolean z;
        File file;
        ?? r3 = "message";
        String str3 = "code";
        ?? jSONObject2 = new JSONObject();
        int i = 1;
        try {
            jSONObject2.put("code", 0);
            jSONObject2.put("message", "");
            JSONArray jSONArray = jSONObject.getJSONArray("resource");
            if (jSONArray != null && jSONArray.length() > 0) {
                ?? jSONArray2 = new JSONArray();
                int length = jSONArray.length();
                int i2 = 0;
                r3 = r3;
                while (i2 < length) {
                    JSONObject jSONObject3 = jSONArray.getJSONObject(i2);
                    String strOptString = jSONObject3.optString("ref", "");
                    int i3 = jSONObject3.getInt("type");
                    ?? jSONObject4 = new JSONObject();
                    if (i3 == i && !TextUtils.isEmpty(strOptString)) {
                        JSONObject jSONObject5 = new JSONObject();
                        l.a();
                        i iVarB = l.b(strOptString);
                        if (iVarB != null) {
                            jSONObject5.put("type", i);
                            r17 = r3;
                            str2 = str3;
                            try {
                                jSONObject5.put("videoDataLength", iVarB.d());
                                String strB = iVarB.b();
                                if (TextUtils.isEmpty(strB)) {
                                    jSONObject5.put("path", "");
                                    jSONObject5.put("path4Web", "");
                                } else {
                                    jSONObject5.put("path", strB);
                                    jSONObject5.put("path4Web", strB);
                                }
                                if (iVarB.c() == 100) {
                                    jSONObject5.put("downloaded", 1);
                                    z = false;
                                } else {
                                    z = false;
                                    jSONObject5.put("downloaded", 0);
                                }
                                jSONObject4.put(strOptString, jSONObject5);
                                jSONArray2.put(jSONObject4);
                            } catch (Throwable th) {
                                th = th;
                                r3 = r17;
                                str = str2;
                            }
                        } else {
                            r17 = r3;
                            str2 = str3;
                            z = false;
                        }
                    } else {
                        r17 = r3;
                        str2 = str3;
                        z = false;
                        if (i3 == 2 && !TextUtils.isEmpty(strOptString)) {
                            JSONObject jSONObject6 = new JSONObject();
                            jSONObject6.put("type", 2);
                            jSONObject6.put("path", g.a().a(strOptString) == null ? "" : g.a().c(strOptString));
                            jSONObject4.put(strOptString, jSONObject6);
                            jSONArray2.put(jSONObject4);
                        } else if (i3 == 3 && !TextUtils.isEmpty(strOptString)) {
                            try {
                                file = new File(strOptString);
                            } catch (Throwable th2) {
                                if (com.tkay.expressad.b.f6449a) {
                                    th2.printStackTrace();
                                }
                            }
                            String strConcat = (file.exists() && file.isFile() && file.canRead()) ? "file:////".concat(String.valueOf(strOptString)) : "";
                            JSONObject jSONObject7 = new JSONObject();
                            jSONObject7.put("type", 3);
                            jSONObject7.put("path", strConcat);
                            jSONObject4.put(strOptString, jSONObject7);
                            jSONArray2.put(jSONObject4);
                        } else if (i3 == 4 && !TextUtils.isEmpty(strOptString)) {
                            JSONObject jSONObject8 = new JSONObject();
                            jSONObject8.put("type", 4);
                            jSONObject8.put("path", s.a(strOptString) == null ? "" : s.a(strOptString));
                            jSONObject4.put(strOptString, jSONObject8);
                            jSONArray2.put(jSONObject4);
                        }
                    }
                    i2++;
                    r3 = r17;
                    str3 = str2;
                    i = 1;
                }
                r17 = r3;
                str2 = str3;
                jSONObject2.put("resource", jSONArray2);
                j.a().a(obj, Base64.encodeToString(jSONObject2.toString().getBytes(), 2));
                return;
            }
            str = "code";
            r3 = 1;
            try {
                try {
                    jSONObject2.put(str, 1);
                    try {
                        jSONObject2.put("message", "resource is null");
                        j.a().a(obj, Base64.encodeToString(jSONObject2.toString().getBytes(), 2));
                        return;
                    } catch (JSONException e) {
                        e = e;
                        e.getMessage();
                        return;
                    }
                } catch (Throwable th3) {
                    th = th3;
                }
            } catch (JSONException e2) {
                e = e2;
            } catch (Throwable th4) {
                th = th4;
                r3 = "message";
            }
        } catch (Throwable th5) {
            th = th5;
            str = str3;
        }
        try {
            jSONObject2.put(str, 1);
            jSONObject2.put(r3, th.getLocalizedMessage());
            j.a().a(obj, Base64.encodeToString(jSONObject2.toString().getBytes(), 2));
        } catch (JSONException e3) {
            e3.getMessage();
        }
    }
}
