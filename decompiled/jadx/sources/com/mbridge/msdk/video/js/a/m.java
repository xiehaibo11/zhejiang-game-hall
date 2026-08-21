package com.mbridge.msdk.video.js.a;

import android.app.Activity;
import android.content.Context;
import android.text.TextUtils;
import com.mbridge.msdk.foundation.entity.CampaignEx;
import com.mbridge.msdk.foundation.tools.ag;
import com.mbridge.msdk.foundation.tools.z;
import com.mbridge.msdk.video.module.MBridgeContainerView;
import com.tkay.core.api.TYAdConst;
import java.util.ArrayList;
import java.util.List;
import org.json.JSONObject;

/* JADX INFO: compiled from: JSRewardVideoV1.java */
/* JADX INFO: loaded from: classes3.dex */
public final class m extends f {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private Activity f4200a;
    private MBridgeContainerView b;

    public m(Activity activity, MBridgeContainerView mBridgeContainerView) {
        this.f4200a = activity;
        this.b = mBridgeContainerView;
    }

    @Override // com.mbridge.msdk.video.js.a.f, com.mbridge.msdk.video.js.h
    public final String a() {
        if (this.b == null) {
            super.a();
        } else {
            try {
                ArrayList arrayList = new ArrayList();
                arrayList.add(this.b.getCampaign());
                String unitID = this.b.getUnitID();
                com.mbridge.msdk.videocommon.d.c cVarA = com.mbridge.msdk.videocommon.d.b.a() == null ? null : com.mbridge.msdk.videocommon.d.b.a().a(com.mbridge.msdk.foundation.controller.a.f().k(), unitID);
                JSONObject jSONObject = new JSONObject();
                if (cVarA != null) {
                    jSONObject = cVarA.G();
                }
                z.a("JSRewardVideoV1", "getEndScreenInfo success campaign = " + this.b.getCampaign());
                return a(arrayList, unitID, "MAL_16.3.67,3.0.1", jSONObject);
            } catch (Throwable th) {
                th.printStackTrace();
            }
        }
        return super.a();
    }

    @Override // com.mbridge.msdk.video.js.a.f, com.mbridge.msdk.video.js.g
    public final void toggleCloseBtn(int i) {
        super.toggleCloseBtn(i);
        MBridgeContainerView mBridgeContainerView = this.b;
        if (mBridgeContainerView != null) {
            mBridgeContainerView.toggleCloseBtn(i);
        }
    }

    @Override // com.mbridge.msdk.video.js.a.f, com.mbridge.msdk.video.js.h
    public final void a(String str) {
        super.a(str);
        try {
            if (this.f4200a == null || TextUtils.isEmpty(str) || !str.equals("click") || this.b == null) {
                return;
            }
            this.b.triggerCloseBtn(str);
        } catch (Throwable th) {
            th.printStackTrace();
        }
    }

    @Override // com.mbridge.msdk.video.js.a.f, com.mbridge.msdk.video.js.g
    public final void notifyCloseBtn(int i) {
        super.notifyCloseBtn(i);
        MBridgeContainerView mBridgeContainerView = this.b;
        if (mBridgeContainerView != null) {
            mBridgeContainerView.notifyCloseBtn(i);
        }
    }

    @Override // com.mbridge.msdk.video.js.a.f, com.mbridge.msdk.video.js.h
    public final void c(String str) {
        super.c(str);
        try {
            if (this.f4200a == null || TextUtils.isEmpty(str) || this.b == null) {
                return;
            }
            this.b.handlerPlayableException(str);
        } catch (Throwable th) {
            th.printStackTrace();
        }
    }

    @Override // com.mbridge.msdk.video.js.a.f, com.mbridge.msdk.video.js.h
    public final void b(String str) {
        super.b(str);
        try {
            if (this.f4200a != null && !TextUtils.isEmpty(str)) {
                if (str.equals("landscape")) {
                    this.f4200a.setRequestedOrientation(0);
                } else if (str.equals("portrait")) {
                    this.f4200a.setRequestedOrientation(1);
                }
            }
        } catch (Throwable th) {
            th.printStackTrace();
        }
    }

    private String a(List<CampaignEx> list, String str, String str2, JSONObject jSONObject) {
        if (list == null) {
            return null;
        }
        try {
            if (list.size() <= 0) {
                return null;
            }
            com.mbridge.msdk.foundation.tools.d dVar = new com.mbridge.msdk.foundation.tools.d(com.mbridge.msdk.foundation.controller.a.f().j());
            Object camplistToJson = CampaignEx.parseCamplistToJson(list);
            JSONObject jSONObject2 = new JSONObject();
            jSONObject2.put("campaignList", camplistToJson);
            jSONObject2.put("device", dVar.a());
            jSONObject2.put("unit_id", str);
            jSONObject2.put(TYAdConst.NETWORK_REQUEST_PARAMS_KEY.SDK_INFO, str2);
            jSONObject2.put("unitSetting", jSONObject);
            if (com.mbridge.msdk.c.b.a() != null) {
                String strC = com.mbridge.msdk.c.b.a().c(com.mbridge.msdk.foundation.controller.a.f().k());
                if (!TextUtils.isEmpty(strC)) {
                    JSONObject jSONObject3 = new JSONObject(strC);
                    try {
                        Context contextJ = com.mbridge.msdk.foundation.controller.a.f().j();
                        String string = ag.b(contextJ, "MBridge_ConfirmTitle" + str, "").toString();
                        String string2 = ag.b(contextJ, "MBridge_ConfirmContent" + str, "").toString();
                        String string3 = ag.b(contextJ, "MBridge_CancelText" + str, "").toString();
                        String string4 = ag.b(contextJ, "MBridge_ConfirmText" + str, "").toString();
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
                    String strE = com.mbridge.msdk.c.b.a().e(str);
                    if (!TextUtils.isEmpty(strE)) {
                        jSONObject3.put("ivreward", new JSONObject(strE));
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
}
