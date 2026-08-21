package com.mbridge.msdk.mbnative.d;

import android.content.Context;
import android.text.TextUtils;
import android.util.Log;
import com.mbridge.msdk.foundation.db.i;
import com.mbridge.msdk.foundation.db.l;
import com.mbridge.msdk.foundation.entity.CampaignEx;
import com.mbridge.msdk.foundation.tools.z;
import com.mbridge.msdk.mbnative.controller.NativeController;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import org.json.JSONArray;
import org.json.JSONException;

/* JADX INFO: compiled from: NativeReportUtils.java */
/* JADX INFO: loaded from: classes2.dex */
public final class b {
    public static synchronized void a(CampaignEx campaignEx, Context context, String str, com.mbridge.msdk.mbnative.c.a aVar) {
        boolean z;
        int i;
        if (campaignEx == null) {
            return;
        }
        com.mbridge.msdk.c.a aVarG = com.mbridge.msdk.c.b.a().g(com.mbridge.msdk.foundation.controller.a.f().k());
        if (aVarG != null) {
            z = aVarG.aK() == 1;
        } else {
            z = true;
        }
        if (!campaignEx.isReport()) {
            campaignEx.setReport(true);
            a(campaignEx, context, str);
            a(campaignEx, context, str, aVar, z);
            List<String> listA = a(campaignEx);
            if (listA != null && listA.size() != 0) {
                int i2 = 0;
                while (i2 < listA.size()) {
                    String str2 = listA.get(i2);
                    if (TextUtils.isEmpty(str2)) {
                        i = i2;
                    } else {
                        i = i2;
                        com.mbridge.msdk.click.b.a(context, campaignEx, str, str2, false, false);
                    }
                    i2 = i + 1;
                }
            }
            b(campaignEx, context, str);
        }
        if (aVar != null && !campaignEx.isCallBackImpression()) {
            if (!z) {
                try {
                    aVar.onLoggingImpression(campaignEx.getType());
                } catch (Exception e) {
                    Log.e("NativeReportUtils", e.getMessage());
                }
            }
            campaignEx.setCallBackImpression(true);
        }
    }

    private static synchronized void a(final CampaignEx campaignEx, final Context context, String str) {
        com.mbridge.msdk.foundation.controller.a.f().a(context);
        if (!TextUtils.isEmpty(campaignEx.getImpressionURL())) {
            com.mbridge.msdk.foundation.same.f.b.a().execute(new Runnable() { // from class: com.mbridge.msdk.mbnative.d.b.1
                @Override // java.lang.Runnable
                public final void run() {
                    try {
                        l.a(i.a(context)).b(campaignEx.getId());
                    } catch (Exception unused) {
                        z.d("NativeReportUtils", "campain can't insert db");
                    }
                }
            });
            com.mbridge.msdk.click.b.a(context, campaignEx, str, campaignEx.getImpressionURL(), false, true, com.mbridge.msdk.click.a.a.g);
        }
        if (!TextUtils.isEmpty(str) && campaignEx.getNativeVideoTracking() != null && campaignEx.getNativeVideoTracking().l() != null) {
            com.mbridge.msdk.click.b.a(context, campaignEx, str, campaignEx.getNativeVideoTracking().l(), false, false);
        }
    }

    private static synchronized void b(CampaignEx campaignEx, Context context, String str) {
        if (campaignEx != null) {
            try {
                List<String> pv_urls = campaignEx.getPv_urls();
                if (pv_urls != null && pv_urls.size() > 0) {
                    Iterator<String> it = pv_urls.iterator();
                    while (it.hasNext()) {
                        com.mbridge.msdk.click.b.a(context, campaignEx, str, it.next(), false, true);
                    }
                }
            } finally {
            }
        }
    }

    private static synchronized void a(CampaignEx campaignEx, Context context, String str, com.mbridge.msdk.mbnative.c.a aVar, boolean z) {
        if (!TextUtils.isEmpty(campaignEx.getOnlyImpressionURL()) && NativeController.c != null && !NativeController.c.containsKey(campaignEx.getOnlyImpressionURL())) {
            if (z && aVar != null && campaignEx != null) {
                try {
                    aVar.onLoggingImpression(campaignEx.getAdType());
                } catch (Exception e) {
                    Log.e("NativeReportUtils", e.getMessage());
                }
            }
            NativeController.c.put(campaignEx.getOnlyImpressionURL(), Long.valueOf(System.currentTimeMillis()));
            com.mbridge.msdk.click.b.a(context, campaignEx, str, campaignEx.getOnlyImpressionURL(), false, true, com.mbridge.msdk.click.a.a.h);
        }
    }

    private static List<String> a(CampaignEx campaignEx) {
        ArrayList arrayList = new ArrayList();
        if (campaignEx == null) {
            return arrayList;
        }
        String ad_url_list = campaignEx.getAd_url_list();
        if (TextUtils.isEmpty(ad_url_list)) {
            return arrayList;
        }
        try {
            JSONArray jSONArray = new JSONArray(ad_url_list);
            for (int i = 0; i < jSONArray.length(); i++) {
                arrayList.add((String) jSONArray.get(i));
            }
        } catch (JSONException e) {
            e.printStackTrace();
        }
        return arrayList;
    }
}
