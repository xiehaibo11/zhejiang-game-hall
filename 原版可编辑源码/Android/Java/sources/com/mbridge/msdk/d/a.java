package com.mbridge.msdk.d;

import android.content.Context;
import com.mbridge.msdk.foundation.entity.CampaignEx;
import com.mbridge.msdk.foundation.tools.ae;
import com.mbridge.msdk.foundation.tools.v;
import java.util.ArrayList;
import java.util.List;

public final class a {
    public static int a = 3;
    public static int b = 1;
    public static int c = 4;
    public static int d = 5;
    private static String e = "ShortCutsDataManager";
    private com.mbridge.msdk.click.b f;

    private static class a {
        private static a a = new a();
    }

    private a() {
    }

    public static a a() {
        return a.a;
    }

    private void a(Context context, CampaignEx campaignEx, int i) {
        com.mbridge.msdk.c.a aVarB = com.mbridge.msdk.c.b.a().b(com.mbridge.msdk.foundation.controller.a.f().k());
        if (aVarB == null) {
            aVarB = com.mbridge.msdk.c.b.a().b();
        }
        if (this.f == null) {
            this.f = new com.mbridge.msdk.click.b(context, aVarB.D());
        }
        if (i == 1) {
            this.f.c(campaignEx);
        } else if (i == 2) {
            this.f.a(campaignEx);
        }
    }

    static List a(a aVar, Context context, List list) {
        int jmPd;
        ArrayList arrayList = new ArrayList();
        for (int i = 0; i < list.size(); i++) {
            CampaignEx campaignEx = (CampaignEx) list.get(i);
            if (campaignEx != null) {
                boolean zC = ae.c(context, campaignEx.getPackageName());
                if (campaignEx.getWtick() == 1 || !zC) {
                    arrayList.add(campaignEx);
                    if (campaignEx != null && campaignEx.getLinkType() == 3 && (jmPd = campaignEx.getJmPd()) != 0) {
                        if (jmPd == 1) {
                            aVar.a(context, campaignEx, 2);
                        } else if (v.D(context) == 9) {
                            aVar.a(context, campaignEx, 2);
                        }
                    }
                }
            }
        }
        return arrayList;
    }
}
