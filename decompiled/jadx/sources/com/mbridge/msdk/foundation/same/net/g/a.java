package com.mbridge.msdk.foundation.same.net.g;

import android.content.Context;
import android.text.TextUtils;
import com.mbridge.msdk.foundation.tools.ae;
import com.mbridge.msdk.foundation.tools.z;

/* JADX INFO: compiled from: CampaignRequest.java */
/* JADX INFO: loaded from: classes2.dex */
public class a extends b {
    public a(Context context) {
        super(context);
    }

    @Override // com.mbridge.msdk.foundation.same.net.g.b
    public void addExtraParams(String str, d dVar) {
        try {
            try {
                int iE = ae.e();
                String strF = ae.f();
                if (dVar != null) {
                    dVar.a("misk_spt", String.valueOf(iE));
                    if (!TextUtils.isEmpty(strF)) {
                        dVar.a("misk_spt_det", strF);
                    }
                }
            } catch (Exception e) {
                z.a("CampaignRequest", e.getMessage());
            }
        } finally {
            super.addExtraParams(str, dVar);
        }
    }
}
