package com.tkay.expressad.video.signal.a;

import android.app.Activity;
import android.content.Context;
import android.content.res.Configuration;
import android.text.TextUtils;
import com.tkay.core.api.TYAdConst;
import com.tkay.expressad.foundation.h.v;
import com.tkay.expressad.video.module.TkayContainerView;
import java.util.ArrayList;
import java.util.List;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes3.dex */
public final class m extends f {
    private Activity b;
    private TkayContainerView c;

    public m(Activity activity, TkayContainerView tkayContainerView) {
        this.b = activity;
        this.c = tkayContainerView;
    }

    @Override // com.tkay.expressad.video.signal.a.f, com.tkay.expressad.video.signal.i
    public final String a() {
        if (this.c == null) {
            super.a();
        } else {
            try {
                ArrayList arrayList = new ArrayList();
                arrayList.add(this.c.getCampaign());
                String unitID = this.c.getUnitID();
                String str = com.tkay.expressad.out.n.f7028a + ",3.0.1";
                com.tkay.expressad.videocommon.e.d dVarA = com.tkay.expressad.videocommon.e.c.a() == null ? null : com.tkay.expressad.videocommon.e.c.a().a(com.tkay.expressad.foundation.b.b.b().e(), unitID);
                JSONObject jSONObject = new JSONObject();
                if (dVarA != null) {
                    jSONObject = dVarA.R();
                }
                new StringBuilder("getEndScreenInfo success campaign = ").append(this.c.getCampaign());
                return a(arrayList, unitID, str, jSONObject);
            } catch (Throwable th) {
                th.printStackTrace();
            }
        }
        return super.a();
    }

    @Override // com.tkay.expressad.video.signal.a.f, com.tkay.expressad.video.signal.h
    public final void install(com.tkay.expressad.foundation.d.c cVar) {
        super.install(cVar);
        TkayContainerView tkayContainerView = this.c;
        if (tkayContainerView != null) {
            tkayContainerView.install(cVar);
        }
    }

    @Override // com.tkay.expressad.video.signal.a.f, com.tkay.expressad.video.signal.h
    public final void toggleCloseBtn(int i) {
        super.toggleCloseBtn(i);
        TkayContainerView tkayContainerView = this.c;
        if (tkayContainerView != null) {
            tkayContainerView.toggleCloseBtn(i);
        }
    }

    @Override // com.tkay.expressad.video.signal.a.f, com.tkay.expressad.video.signal.i
    public final void a(String str) {
        super.a(str);
        try {
            if (this.b == null || TextUtils.isEmpty(str) || !str.equals("click") || this.c == null) {
                return;
            }
            this.c.triggerCloseBtn(str);
        } catch (Throwable th) {
            th.printStackTrace();
        }
    }

    @Override // com.tkay.expressad.video.signal.a.f, com.tkay.expressad.video.signal.h
    public final void notifyCloseBtn(int i) {
        super.notifyCloseBtn(i);
        TkayContainerView tkayContainerView = this.c;
        if (tkayContainerView != null) {
            tkayContainerView.notifyCloseBtn(i);
        }
    }

    @Override // com.tkay.expressad.video.signal.a.f, com.tkay.expressad.video.signal.i, com.tkay.expressad.video.signal.h
    public final void handlerPlayableException(String str) {
        super.handlerPlayableException(str);
        try {
            if (this.b == null || TextUtils.isEmpty(str) || this.c == null) {
                return;
            }
            this.c.handlerPlayableException(str);
        } catch (Throwable th) {
            th.printStackTrace();
        }
    }

    @Override // com.tkay.expressad.video.signal.a.f, com.tkay.expressad.video.signal.i
    public final void b(String str) {
        super.b(str);
        try {
            if (this.b == null || TextUtils.isEmpty(str)) {
                return;
            }
            if (str.equals("landscape")) {
                this.b.setRequestedOrientation(0);
            } else if (str.equals("portrait")) {
                this.b.setRequestedOrientation(1);
            }
        } catch (Throwable th) {
            th.printStackTrace();
        }
    }

    @Override // com.tkay.expressad.video.signal.a.f, com.tkay.expressad.video.signal.h
    public final void webviewshow() {
        super.webviewshow();
        try {
            if (this.c != null) {
                this.c.webviewshow();
            }
        } catch (Throwable th) {
            th.printStackTrace();
        }
    }

    @Override // com.tkay.expressad.video.signal.a.f, com.tkay.expressad.video.signal.h
    public final void orientation(Configuration configuration) {
        super.orientation(configuration);
        try {
            if (this.c != null) {
                this.c.orientation(configuration);
            }
        } catch (Throwable th) {
            th.printStackTrace();
        }
    }

    private static String a(List<com.tkay.expressad.foundation.d.c> list, String str, String str2, JSONObject jSONObject) {
        try {
            if (list.size() <= 0) {
                return null;
            }
            com.tkay.expressad.foundation.h.b bVar = new com.tkay.expressad.foundation.h.b(com.tkay.expressad.foundation.b.b.b().d());
            Object objB = com.tkay.expressad.foundation.d.c.b(list);
            JSONObject jSONObject2 = new JSONObject();
            jSONObject2.put("campaignList", objB);
            jSONObject2.put("device", bVar.a());
            jSONObject2.put("unit_id", str);
            jSONObject2.put(TYAdConst.NETWORK_REQUEST_PARAMS_KEY.SDK_INFO, str2);
            jSONObject2.put("unitSetting", jSONObject);
            if (com.tkay.expressad.d.b.a() != null) {
                com.tkay.expressad.d.b.a();
                String strA = com.tkay.expressad.d.b.a(com.tkay.expressad.foundation.b.b.b().e());
                if (!TextUtils.isEmpty(strA)) {
                    JSONObject jSONObject3 = new JSONObject(strA);
                    try {
                        Context contextD = com.tkay.expressad.foundation.b.b.b().d();
                        String string = v.b(contextD, "Tkay_ConfirmTitle".concat(String.valueOf(str)), "").toString();
                        String string2 = v.b(contextD, "Tkay_ConfirmContent".concat(String.valueOf(str)), "").toString();
                        String string3 = v.b(contextD, "Tkay_CancelText".concat(String.valueOf(str)), "").toString();
                        String string4 = v.b(contextD, "Tkay_ConfirmText".concat(String.valueOf(str)), "").toString();
                        if (!TextUtils.isEmpty(string)) {
                            jSONObject3.put(com.tkay.expressad.d.a.b.ct, string);
                        }
                        if (!TextUtils.isEmpty(string2)) {
                            jSONObject3.put(com.tkay.expressad.d.a.b.cu, string2);
                        }
                        if (!TextUtils.isEmpty(string3)) {
                            jSONObject3.put(com.tkay.expressad.d.a.b.cv, string3);
                        }
                        if (!TextUtils.isEmpty(string4)) {
                            jSONObject3.put(com.tkay.expressad.d.a.b.cx, string4);
                        }
                        if (!TextUtils.isEmpty(string4)) {
                            jSONObject3.put(com.tkay.expressad.d.a.b.cw, string4);
                        }
                    } catch (Exception e) {
                        e.printStackTrace();
                    }
                    com.tkay.expressad.d.b.a();
                    String strB = com.tkay.expressad.d.b.b(str);
                    if (!TextUtils.isEmpty(strB)) {
                        jSONObject3.put("ivreward", new JSONObject(strB));
                    }
                    jSONObject2.put("appSetting", jSONObject3);
                }
            }
            return jSONObject2.toString();
        } catch (Exception e2) {
            e2.printStackTrace();
            return null;
        }
    }

    private static com.tkay.expressad.videocommon.e.d c(String str) {
        if (com.tkay.expressad.videocommon.e.c.a() == null) {
            return null;
        }
        return com.tkay.expressad.videocommon.e.c.a().a(com.tkay.expressad.foundation.b.b.b().e(), str);
    }

    private static void a(JSONObject jSONObject, String str) {
        try {
            Context contextD = com.tkay.expressad.foundation.b.b.b().d();
            String string = v.b(contextD, "Tkay_ConfirmTitle".concat(String.valueOf(str)), "").toString();
            String string2 = v.b(contextD, "Tkay_ConfirmContent".concat(String.valueOf(str)), "").toString();
            String string3 = v.b(contextD, "Tkay_CancelText".concat(String.valueOf(str)), "").toString();
            String string4 = v.b(contextD, "Tkay_ConfirmText".concat(String.valueOf(str)), "").toString();
            if (!TextUtils.isEmpty(string)) {
                jSONObject.put(com.tkay.expressad.d.a.b.ct, string);
            }
            if (!TextUtils.isEmpty(string2)) {
                jSONObject.put(com.tkay.expressad.d.a.b.cu, string2);
            }
            if (!TextUtils.isEmpty(string3)) {
                jSONObject.put(com.tkay.expressad.d.a.b.cv, string3);
            }
            if (!TextUtils.isEmpty(string4)) {
                jSONObject.put(com.tkay.expressad.d.a.b.cx, string4);
            }
            if (TextUtils.isEmpty(string4)) {
                return;
            }
            jSONObject.put(com.tkay.expressad.d.a.b.cw, string4);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}
