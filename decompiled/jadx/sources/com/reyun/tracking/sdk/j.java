package com.reyun.tracking.sdk;

import org.json.JSONObject;

/* JADX INFO: loaded from: classes3.dex */
class j implements com.reyun.tracking.utils.n {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ com.reyun.tracking.utils.k f4739a;
    final /* synthetic */ i b;

    j(i iVar, com.reyun.tracking.utils.k kVar) {
        this.b = iVar;
        this.f4739a = kVar;
    }

    @Override // com.reyun.tracking.utils.n
    public void a(int i, Object obj) {
        try {
            com.reyun.tracking.a.a.c(Tracking.TAG, " sendFailureRecord SUCCESS");
            JSONObject jSONObject = (JSONObject) obj;
            if (jSONObject.isNull("status") || jSONObject.optInt("status") != 0) {
                com.reyun.tracking.a.a.c(Tracking.TAG, "Request Failed:" + jSONObject.toString());
            } else {
                com.reyun.tracking.utils.i iVarA = com.reyun.tracking.utils.i.a(Tracking.m_context, Tracking.TAG);
                int size = this.f4739a.f4750a.size();
                for (int i2 = 0; i2 < size; i2++) {
                    iVarA.a((String) this.f4739a.f4750a.get(i2));
                }
                com.reyun.tracking.a.a.a(Tracking.TAG, "==============sendFailureRecord  SUCCESS ==========" + jSONObject.toString());
            }
            if (Tracking.getOnDataUploadListener() != null) {
                Tracking.getOnDataUploadListener().b("batch", jSONObject.toString());
            }
        } catch (Throwable th) {
            th.printStackTrace();
        }
    }

    @Override // com.reyun.tracking.utils.n
    public void a(Throwable th, String str) {
        com.reyun.tracking.a.a.a(Tracking.TAG, "############sendFailureRecord  failure ############ " + str);
        if (Tracking.getOnDataUploadListener() != null) {
            Tracking.getOnDataUploadListener().b("batch", "{}");
        }
    }
}
