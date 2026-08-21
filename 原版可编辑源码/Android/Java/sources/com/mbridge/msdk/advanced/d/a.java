package com.mbridge.msdk.advanced.d;

import android.content.Context;
import android.text.TextUtils;
import com.huawei.hms.framework.common.ContainerUtils;
import com.mbridge.msdk.MBridgeConstans;
import com.mbridge.msdk.foundation.entity.CampaignEx;
import com.mbridge.msdk.foundation.entity.p;
import com.mbridge.msdk.foundation.same.report.b;
import com.mbridge.msdk.foundation.same.report.c;
import com.mbridge.msdk.foundation.same.report.d;
import com.mbridge.msdk.foundation.same.report.e;
import com.mbridge.msdk.foundation.tools.v;
import com.mbridge.msdk.foundation.tools.z;
import java.net.URLEncoder;

public final class a {
    public static void a(CampaignEx campaignEx, String str, String str2) {
        if (campaignEx != null) {
            try {
                if (TextUtils.isEmpty(str2) || !campaignEx.isMraid()) {
                    return;
                }
                new d(com.mbridge.msdk.foundation.controller.a.f().j()).b(campaignEx.getRequestId(), campaignEx.getRequestIdNotice(), campaignEx.getId(), str, str2, campaignEx.isBidCampaign());
            } catch (Exception e) {
                e.printStackTrace();
            }
        }
    }

    public static void a(Context context, CampaignEx campaignEx, String str, String str2, long j, int i) {
        if (campaignEx != null) {
            try {
                if (campaignEx.isMraid()) {
                    p pVar = new p();
                    pVar.k(campaignEx.getRequestId());
                    pVar.l(campaignEx.getRequestIdNotice());
                    pVar.n(campaignEx.getId());
                    pVar.d(i);
                    pVar.q(String.valueOf(System.currentTimeMillis() - j));
                    pVar.f("");
                    pVar.p(str2);
                    pVar.h("8");
                    pVar.a(p.a);
                    c.b(pVar, str);
                }
            } catch (Exception e) {
                e.printStackTrace();
            }
        }
    }

    public static void a(String str, CampaignEx campaignEx, String str2) {
        try {
            com.mbridge.msdk.foundation.same.report.d.a aVar = new com.mbridge.msdk.foundation.same.report.d.a(com.mbridge.msdk.foundation.controller.a.f().j());
            StringBuilder sb = new StringBuilder();
            if (campaignEx.isBidCampaign()) {
                sb.append("hb=");
                sb.append(1);
                sb.append("&");
            }
            sb.append("key");
            sb.append(ContainerUtils.KEY_VALUE_DELIMITER);
            sb.append(URLEncoder.encode("2000070", "utf-8"));
            sb.append("&");
            sb.append("rid");
            sb.append(ContainerUtils.KEY_VALUE_DELIMITER);
            sb.append(URLEncoder.encode(campaignEx.getRequestId(), "utf-8"));
            sb.append("&");
            sb.append("rid_n");
            sb.append(ContainerUtils.KEY_VALUE_DELIMITER);
            sb.append(URLEncoder.encode(campaignEx.getRequestIdNotice(), "utf-8"));
            sb.append("&");
            sb.append("cid");
            sb.append(ContainerUtils.KEY_VALUE_DELIMITER);
            sb.append(URLEncoder.encode(campaignEx.getId(), "utf-8"));
            sb.append("&");
            sb.append("unit_id");
            sb.append(ContainerUtils.KEY_VALUE_DELIMITER);
            sb.append(URLEncoder.encode(str, "utf-8"));
            sb.append("&");
            sb.append("click_url");
            sb.append(ContainerUtils.KEY_VALUE_DELIMITER);
            sb.append(URLEncoder.encode(str2, "utf-8"));
            sb.append("&");
            sb.append("network_type");
            sb.append(ContainerUtils.KEY_VALUE_DELIMITER);
            sb.append(URLEncoder.encode(String.valueOf(v.D(com.mbridge.msdk.foundation.controller.a.f().j())), "utf-8"));
            if (b.a().c()) {
                b.a().a(sb.toString());
            } else {
                aVar.post(0, com.mbridge.msdk.foundation.same.net.f.d.a().a, e.a(sb.toString(), com.mbridge.msdk.foundation.controller.a.f().j(), str), new com.mbridge.msdk.foundation.same.report.d.b() {
                    @Override
                    public final void onSuccess(String str3) {
                        z.a("", "Mraid Expand REPORT SUCCESS");
                    }

                    @Override
                    public final void onFailed(String str3) {
                        z.a("", "Mraid Expand REPORT FAILED");
                    }
                });
            }
        } catch (Exception e) {
            if (MBridgeConstans.DEBUG) {
                e.printStackTrace();
            }
        }
    }

    public static void a(com.mbridge.msdk.advanced.common.c cVar, String str) {
        if (cVar != null) {
            cVar.a(com.tkay.expressad.mbbanner.a.b.c.a);
            if (b.a().c()) {
                b.a().a(cVar.b());
            } else {
                c.a(cVar.b(), com.mbridge.msdk.foundation.controller.a.f().j(), str);
            }
        }
    }

    public static void b(com.mbridge.msdk.advanced.common.c cVar, String str) {
        if (cVar != null) {
            cVar.a(com.tkay.expressad.mbbanner.a.b.c.b);
            if (b.a().c()) {
                b.a().a(cVar.b());
            } else {
                c.a(cVar.b(), com.mbridge.msdk.foundation.controller.a.f().j(), str);
            }
        }
    }

    public static void a(Context context, CampaignEx campaignEx) {
        if (campaignEx == null || campaignEx.getNativeVideoTracking() == null || campaignEx.getNativeVideoTracking().h() == null) {
            return;
        }
        com.mbridge.msdk.click.b.a(context, campaignEx, campaignEx.getCampaignUnitId(), campaignEx.getNativeVideoTracking().h(), false, false);
    }
}
