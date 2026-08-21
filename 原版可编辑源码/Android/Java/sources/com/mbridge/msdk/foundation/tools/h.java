package com.mbridge.msdk.foundation.tools;

import android.content.Context;
import android.content.res.Resources;
import com.mbridge.msdk.foundation.entity.CampaignEx;
import com.ss.android.socialbase.downloader.constants.MonitorConstants;
import java.util.ArrayList;
import java.util.List;
import org.json.JSONArray;

public class h {
    public static void a(Context context, CampaignEx campaignEx) {
        z.b("DomainSameTool", "updateInstallList 开始 更新本机已安装广告列表");
        if (context == null) {
            z.b("DomainSameTool", "updateInstallList 列表为空 不做更新本机已安装广告列表");
            return;
        }
        com.mbridge.msdk.foundation.db.l lVarA = com.mbridge.msdk.foundation.db.l.a(com.mbridge.msdk.foundation.db.i.a(context));
        boolean z = false;
        if (campaignEx != null) {
            if (ae.c(context, campaignEx.getPackageName())) {
                if (com.mbridge.msdk.foundation.controller.a.e() != null) {
                    com.mbridge.msdk.foundation.controller.a.e().add(new com.mbridge.msdk.foundation.entity.i(campaignEx.getId(), campaignEx.getPackageName()));
                }
                z = true;
            } else if (lVarA != null && !lVarA.a(campaignEx.getId())) {
                com.mbridge.msdk.foundation.entity.h hVar = new com.mbridge.msdk.foundation.entity.h();
                hVar.a(campaignEx.getId());
                hVar.a(campaignEx.getFca());
                hVar.b(campaignEx.getFcb());
                hVar.d(0);
                hVar.c(0);
                hVar.a(System.currentTimeMillis());
                lVarA.a(hVar);
            }
        }
        if (z) {
            z.b("DomainSameTool", "更新安装列表");
            com.mbridge.msdk.foundation.controller.a.f().h();
        }
    }

    public static String a(int i) {
        try {
            JSONArray jSONArray = new JSONArray();
            List<Long> listI = com.mbridge.msdk.foundation.controller.a.f().i();
            if (listI != null && listI.size() > 0) {
                int size = listI.size();
                for (int i2 = (size <= i || i == 0) ? 0 : size - i; i2 < size; i2++) {
                    jSONArray.put(listI.get(i2));
                }
            }
            return jSONArray.length() > 0 ? ae.a(jSONArray) : "";
        } catch (Exception e) {
            e.printStackTrace();
            return "";
        }
    }

    public static void a(List<CampaignEx> list) {
        if (list == null || list.size() == 0) {
            return;
        }
        ArrayList arrayList = new ArrayList();
        int size = list.size();
        for (int i = 0; i < size; i++) {
            CampaignEx campaignEx = list.get(i);
            if (!ae.c(com.mbridge.msdk.foundation.controller.a.f().j(), campaignEx.getPackageName()) && campaignEx.getOfferType() == 99) {
                arrayList.add(campaignEx);
            }
        }
        com.mbridge.msdk.foundation.db.p.a(com.mbridge.msdk.foundation.db.i.a(com.mbridge.msdk.foundation.controller.a.f().j())).a(arrayList);
    }

    public static boolean a(Context context) {
        boolean z;
        boolean z2 = false;
        if (context == null) {
            return false;
        }
        try {
            Resources resources = context.getResources();
            int identifier = resources.getIdentifier("config_showNavigationBar", "bool", "android");
            z = identifier > 0 ? resources.getBoolean(identifier) : false;
        } catch (Throwable th) {
            th = th;
        }
        try {
            Class<?> cls = Class.forName("android.os.SystemProperties");
            String str = (String) cls.getMethod(MonitorConstants.CONNECT_TYPE_GET, String.class).invoke(cls, "qemu.hw.mainkeys");
            if ("1".equals(str)) {
                return false;
            }
            if ("0".equals(str)) {
                return true;
            }
            return z;
        } catch (Throwable th2) {
            z2 = z;
            th = th2;
            z.c("DomainSameTool", th.getMessage(), th);
            return z2;
        }
    }
}
