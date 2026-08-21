package com.reyun.tracking.sdk;

import org.json.JSONObject;

class j implements com.reyun.tracking.utils.n {
    final com.reyun.tracking.utils.k a;
    final i b;

    j(i iVar, com.reyun.tracking.utils.k kVar) {
        this.b = iVar;
        this.a = kVar;
    }

    @Override
    public void a(int i, Object obj) {
        try {
            com.reyun.tracking.a.a.c(Tracking.TAG, " sendFailureRecord SUCCESS");
            JSONObject jSONObject = (JSONObject) obj;
            if (jSONObject.isNull("status") || jSONObject.optInt("status") != 0) {
                com.reyun.tracking.a.a.c(Tracking.TAG, "Request Failed:" + jSONObject.toString());
            } else {
                com.reyun.tracking.utils.i iVarA = com.reyun.tracking.utils.i.a(Tracking.m_context, Tracking.TAG);
                int size = this.a.a.size();
                for (int i2 = 0; i2 < size; i2++) {
                    iVarA.a((String) this.a.a.get(i2));
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

    @Override
    public void a(Throwable th, String str) {
        com.reyun.tracking.a.a.a(Tracking.TAG, "############sendFailureRecord  failure ############ " + str);
        if (Tracking.getOnDataUploadListener() != null) {
            Tracking.getOnDataUploadListener().b("batch", "{}");
        }
    }
}
