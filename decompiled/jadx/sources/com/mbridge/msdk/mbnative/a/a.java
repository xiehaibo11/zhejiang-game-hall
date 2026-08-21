package com.mbridge.msdk.mbnative.a;

import android.text.TextUtils;
import com.mbridge.msdk.foundation.db.i;
import com.mbridge.msdk.foundation.entity.CampaignEx;
import com.mbridge.msdk.out.Campaign;
import java.util.ArrayList;
import java.util.List;

/* JADX INFO: compiled from: APICache.java */
/* JADX INFO: loaded from: classes2.dex */
public final class a extends b<String, List<Campaign>> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private com.mbridge.msdk.foundation.db.f f3742a = com.mbridge.msdk.foundation.db.f.a(i.a(com.mbridge.msdk.foundation.controller.a.f().j()));
    private int b;

    @Override // com.mbridge.msdk.mbnative.a.b
    public final void a(String str) {
    }

    @Override // com.mbridge.msdk.mbnative.a.b
    public final /* synthetic */ List<Campaign> a(String str, int i) {
        String str2 = str;
        List<CampaignEx> listA = this.f3742a.a(str2, i, 2, this.b);
        if (listA == null) {
            return null;
        }
        if (a(listA, 2)) {
            this.f3742a.a(str2, 2, this.b);
            return null;
        }
        ArrayList arrayList = new ArrayList();
        arrayList.addAll(listA);
        return arrayList;
    }

    @Override // com.mbridge.msdk.mbnative.a.b
    public final /* synthetic */ void a(String str, List<Campaign> list) {
        String str2 = str;
        List<Campaign> list2 = list;
        if (TextUtils.isEmpty(str2) || list2 == null || list2.size() <= 0) {
            return;
        }
        this.f3742a.a(str2, 1, this.b, false);
        this.f3742a.a(str2, 2, this.b, false);
        for (int i = 0; i < list2.size(); i++) {
            CampaignEx campaignEx = (CampaignEx) list2.get(i);
            campaignEx.setCacheLevel(1);
            this.f3742a.a(campaignEx, str2, 1);
        }
    }

    @Override // com.mbridge.msdk.mbnative.a.b
    public final /* synthetic */ void a(String str, List<Campaign> list, String str2) {
        final String str3 = str;
        final List<Campaign> list2 = list;
        boolean z = !TextUtils.isEmpty(str2);
        if (TextUtils.isEmpty(str3) || list2 == null || list2.size() <= 0) {
            return;
        }
        this.f3742a.a(str3, 1, this.b, z);
        this.f3742a.a(str3, 2, this.b, z);
        com.mbridge.msdk.foundation.same.f.b.a().execute(new Runnable() { // from class: com.mbridge.msdk.mbnative.a.a.1
            @Override // java.lang.Runnable
            public final void run() {
                for (int i = 0; i < list2.size(); i++) {
                    CampaignEx campaignEx = (CampaignEx) list2.get(i);
                    campaignEx.setCacheLevel(1);
                    a.this.f3742a.a(campaignEx, str3, 1);
                }
            }
        });
    }

    @Override // com.mbridge.msdk.mbnative.a.b
    public final /* synthetic */ List<Campaign> b(String str, int i) {
        String str2 = str;
        List<CampaignEx> listA = this.f3742a.a(str2, i, 1, this.b);
        if (listA == null) {
            return null;
        }
        if (!a(listA, 1)) {
            ArrayList arrayList = new ArrayList();
            arrayList.addAll(listA);
            return arrayList;
        }
        for (int i2 = 0; i2 < listA.size(); i2++) {
            CampaignEx campaignEx = listA.get(i2);
            campaignEx.setCacheLevel(2);
            this.f3742a.a(campaignEx, str2, 1);
        }
        return null;
    }

    public a(int i) {
        this.b = i;
    }

    private boolean a(List<CampaignEx> list, int i) {
        if (list != null && list.size() > 0) {
            long jCurrentTimeMillis = System.currentTimeMillis();
            long timestamp = list.get(0).getTimestamp();
            long jA = 0;
            if (i == 1) {
                jA = a();
            } else if (i == 2) {
                com.mbridge.msdk.c.a aVarB = com.mbridge.msdk.c.b.a().b(com.mbridge.msdk.foundation.controller.a.f().k());
                if (aVarB == null) {
                    aVarB = com.mbridge.msdk.c.b.a().b();
                }
                jA = aVarB.W() * 1000;
            }
            if (jCurrentTimeMillis - timestamp > jA) {
                return true;
            }
        }
        return false;
    }

    @Override // com.mbridge.msdk.mbnative.a.b
    public final void a(String str, Campaign campaign, String str2) {
        boolean z = !TextUtils.isEmpty(str2);
        if (campaign == null || TextUtils.isEmpty(str)) {
            return;
        }
        try {
            CampaignEx campaignEx = (CampaignEx) campaign;
            if (this.f3742a.a(campaignEx.getId(), campaignEx.getTab(), str, campaignEx.getCacheLevel(), campaignEx.getType(), z)) {
                this.f3742a.a(campaignEx.getId(), str, campaignEx.getCacheLevel(), this.b, z);
            }
        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}
