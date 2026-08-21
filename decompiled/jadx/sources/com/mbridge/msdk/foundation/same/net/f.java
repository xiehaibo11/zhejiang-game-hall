package com.mbridge.msdk.foundation.same.net;

import com.mbridge.msdk.foundation.tools.z;
import org.json.JSONObject;

/* JADX INFO: compiled from: Listener.java */
/* JADX INFO: loaded from: classes2.dex */
public class f<T> implements e<T> {
    private long startTime;
    public String unitId = "";
    public String placementId = "";
    public int adType = 0;
    private com.mbridge.msdk.foundation.same.report.a.a mRequestTime = null;

    @Override // com.mbridge.msdk.foundation.same.net.e
    public void onCancel() {
    }

    @Override // com.mbridge.msdk.foundation.same.net.e
    public void onError(com.mbridge.msdk.foundation.same.net.a.a aVar) {
    }

    @Override // com.mbridge.msdk.foundation.same.net.e
    public void onFinish() {
    }

    @Override // com.mbridge.msdk.foundation.same.net.e
    public void onNetworking() {
    }

    @Override // com.mbridge.msdk.foundation.same.net.e
    public void onProgressChange(long j, long j2) {
    }

    @Override // com.mbridge.msdk.foundation.same.net.e
    public void onRetry() {
    }

    @Override // com.mbridge.msdk.foundation.same.net.e
    public void onPreExecute() {
        this.startTime = System.currentTimeMillis();
    }

    @Override // com.mbridge.msdk.foundation.same.net.e
    public void onSuccess(k<T> kVar) {
        try {
            String str = com.mbridge.msdk.foundation.controller.a.f().k() + "_" + this.placementId + "_" + this.unitId + "_" + this.adType;
            com.mbridge.msdk.c.b.a().d(this.unitId);
            z.d("Listener", kVar.f3462a + " " + str);
            if (kVar.f3462a instanceof JSONObject) {
                com.mbridge.msdk.foundation.same.net.f.c.a().a(str, ((JSONObject) kVar.f3462a).optInt("status"), ((JSONObject) kVar.f3462a).toString(), System.currentTimeMillis());
            }
            if (kVar.f3462a instanceof String) {
                com.mbridge.msdk.foundation.same.net.f.c.a().a(str, new JSONObject((String) kVar.f3462a).optInt("status"), (String) kVar.f3462a, System.currentTimeMillis());
            }
        } catch (Exception e) {
            z.d("Listener", e.getMessage());
        }
    }

    public void setUnitId(String str) {
        this.unitId = str;
    }

    public void setPlacementId(String str) {
        this.placementId = str;
    }

    public void setAdType(int i) {
        this.adType = i;
    }

    public void calcRequestTime(long j) {
        com.mbridge.msdk.foundation.same.report.a.a aVar = new com.mbridge.msdk.foundation.same.report.a.a(new com.mbridge.msdk.foundation.entity.j());
        this.mRequestTime = aVar;
        aVar.b(this.unitId);
        this.mRequestTime.a(1);
        this.mRequestTime.a((j - this.startTime) + "");
    }

    public void saveRequestTime(int i) {
        com.mbridge.msdk.foundation.same.report.a.a aVar = this.mRequestTime;
        if (aVar != null) {
            aVar.b(i);
            this.mRequestTime.a();
        }
    }

    public void saveHbState(int i) {
        com.mbridge.msdk.foundation.same.report.a.a aVar = this.mRequestTime;
        if (aVar != null) {
            aVar.c(i);
        }
    }
}
