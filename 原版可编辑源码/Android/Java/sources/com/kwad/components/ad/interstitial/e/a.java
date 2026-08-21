package com.kwad.components.ad.interstitial.e;

import android.app.Activity;
import android.content.DialogInterface;
import com.kwad.components.ad.interstitial.d.c;
import com.kwad.components.core.page.widget.a;
import com.kwad.sdk.core.report.j;
import com.kwad.sdk.core.response.b.d;
import com.kwad.sdk.core.response.model.AdInfo;
import org.json.JSONObject;

public final class a {
    public static boolean c(final c cVar) {
        Activity ownerActivity;
        if (cVar.hG != null && (ownerActivity = cVar.hG.getOwnerActivity()) != null && !ownerActivity.isFinishing()) {
            AdInfo adInfoCg = d.cg(cVar.mAdTemplate);
            int iCI = com.kwad.components.ad.interstitial.b.b.cI();
            int iCJ = com.kwad.components.ad.interstitial.b.b.cJ();
            if (iCI > com.kwad.sdk.core.response.b.a.bW(adInfoCg) && iCJ < com.kwad.sdk.core.response.b.a.bX(adInfoCg)) {
                if (com.kwad.sdk.core.response.b.a.bY(adInfoCg) == 2) {
                    com.kwad.components.ad.interstitial.f.b.d(cVar);
                    return true;
                }
                if (com.kwad.sdk.core.response.b.a.bY(adInfoCg) == 1) {
                    new com.kwad.components.core.page.widget.a(ownerActivity, com.kwad.sdk.core.response.b.a.cb(adInfoCg), new a.a() {
                        @Override
                        public final void a(DialogInterface dialogInterface) {
                            dialogInterface.dismiss();
                            com.kwad.sdk.core.report.a.c(cVar.mAdTemplate, (JSONObject) null, new j().ck(8));
                        }

                        @Override
                        public final void b(DialogInterface dialogInterface) {
                            c cVar2 = cVar;
                            cVar2.a(false, -1, cVar2.ex);
                            dialogInterface.dismiss();
                            com.kwad.sdk.core.report.a.a(cVar.mAdTemplate, new j().ci(151).ck(8));
                            cVar.hG.dismiss();
                        }

                        @Override
                        public final void c(DialogInterface dialogInterface) {
                        }
                    }).show();
                    com.kwad.sdk.core.report.a.d(cVar.mAdTemplate, new JSONObject(), new j().ci(149).ck(8));
                    return true;
                }
            }
        }
        return false;
    }
}
