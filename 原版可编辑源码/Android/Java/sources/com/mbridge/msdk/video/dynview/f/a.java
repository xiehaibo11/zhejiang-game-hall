package com.mbridge.msdk.video.dynview.f;

import android.content.Context;
import android.text.TextUtils;
import android.view.View;
import android.view.ViewGroup;
import com.mbridge.msdk.click.h;
import com.mbridge.msdk.foundation.entity.CampaignEx;
import com.mbridge.msdk.foundation.entity.CampaignUnit;
import com.mbridge.msdk.foundation.same.net.f.d;
import com.mbridge.msdk.foundation.same.report.e;
import com.mbridge.msdk.foundation.tools.ad;
import com.mbridge.msdk.foundation.tools.ae;
import com.mbridge.msdk.foundation.tools.ak;
import com.mbridge.msdk.foundation.tools.v;
import com.mbridge.msdk.foundation.tools.z;
import com.mbridge.msdk.out.Campaign;

public class a {
    private static final String a = a.class.getName();

    public static void a(CampaignEx campaignEx, Context context, String str, String str2, String str3) {
        if (context != null) {
            try {
                if (TextUtils.isEmpty(str) || TextUtils.isEmpty(str2)) {
                    return;
                }
                StringBuffer stringBuffer = new StringBuffer();
                stringBuffer.append("key=2000091&");
                stringBuffer.append("network_type=" + v.D(context) + "&");
                stringBuffer.append("unit_id=" + str2 + "&");
                if (!TextUtils.isEmpty(com.mbridge.msdk.foundation.same.a.t)) {
                    stringBuffer.append("b=" + com.mbridge.msdk.foundation.same.a.t + "&");
                }
                if (!TextUtils.isEmpty(com.mbridge.msdk.foundation.same.a.u)) {
                    stringBuffer.append("c=" + com.mbridge.msdk.foundation.same.a.u + "&");
                }
                stringBuffer.append("hb=0&");
                if (!TextUtils.isEmpty(str3)) {
                    stringBuffer.append("rid_n=");
                    stringBuffer.append(str3);
                    stringBuffer.append("&");
                }
                stringBuffer.append("reason=" + str);
                if (campaignEx != null && campaignEx.getRewardTemplateMode() != null) {
                    stringBuffer.append("&dyview=");
                    stringBuffer.append(ae.l(campaignEx.getRewardTemplateMode().e()));
                }
                if (com.mbridge.msdk.foundation.same.report.b.a().c()) {
                    com.mbridge.msdk.foundation.same.report.b.a().a(stringBuffer.toString());
                    return;
                }
                String string = stringBuffer.toString();
                if (context == null || TextUtils.isEmpty(string)) {
                    return;
                }
                try {
                    new com.mbridge.msdk.foundation.same.report.d.a(context).post(0, d.a().a, e.a(string, context), new com.mbridge.msdk.foundation.same.report.d.b() {
                        @Override
                        public final void onSuccess(String str4) {
                            z.d(a.a, str4);
                        }

                        @Override
                        public final void onFailed(String str4) {
                            z.d(a.a, str4);
                        }
                    });
                } catch (Exception e) {
                    e.printStackTrace();
                    z.d(a, e.getMessage());
                }
            } catch (Throwable th) {
                th.printStackTrace();
            }
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:30:0x009a  */
    /* JADX WARN: Removed duplicated region for block: B:36:? A[RETURN, SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static void a(CampaignUnit campaignUnit, int i, int i2, String str) {
        int i3;
        String impressionURL;
        int i4;
        String str2;
        if (campaignUnit == null || campaignUnit.getAds() == null || campaignUnit.getAds().size() <= 0 || campaignUnit.getAds().get(i) == null) {
            return;
        }
        if (i2 == 0 && campaignUnit.getAds().get(i).mMoreOfferImpShow) {
            return;
        }
        String strA = ak.a(campaignUnit.getAds().get(i).getendcard_url(), "mof_testuid");
        if (TextUtils.isEmpty(strA)) {
            strA = ak.a(campaignUnit.getAds().get(i).getendcard_url(), "mof_uid");
        }
        String str3 = TextUtils.isEmpty(strA) ? str : strA;
        if (i2 == 0) {
            i3 = com.mbridge.msdk.click.a.a.g;
            impressionURL = campaignUnit.getAds().get(i).getImpressionURL();
        } else if (i2 == 1) {
            i3 = com.mbridge.msdk.click.a.a.h;
            impressionURL = campaignUnit.getAds().get(i).getOnlyImpressionURL();
        } else {
            str2 = "";
            i4 = 0;
            if (TextUtils.isEmpty(str2)) {
                com.mbridge.msdk.click.b.a(com.mbridge.msdk.foundation.controller.a.f().j(), campaignUnit.getAds().get(i), str3, str2, false, true, i4);
                return;
            }
            return;
        }
        i4 = i3;
        str2 = impressionURL;
        if (TextUtils.isEmpty(str2)) {
        }
    }

    public static void a(Context context, CampaignEx campaignEx, String str, View view) {
        if (context == null || campaignEx == null) {
            return;
        }
        if (campaignEx != null && campaignEx.getNativeVideoTracking() != null && campaignEx.getNativeVideoTracking().h() != null) {
            com.mbridge.msdk.click.b.a(context, campaignEx, campaignEx.getCampaignUnitId(), campaignEx.getNativeVideoTracking().h(), false, false);
        }
        com.mbridge.msdk.click.b bVar = new com.mbridge.msdk.click.b(context, str);
        if (view instanceof ViewGroup) {
            final ViewGroup viewGroup = (ViewGroup) view;
            bVar.a(new h() {
                @Override
                public final void onStartRedirection(Campaign campaign, String str2) {
                    if (campaign == null) {
                        return;
                    }
                    CampaignEx campaignEx2 = (CampaignEx) campaign;
                    if (campaignEx2.getLinkType() == 8 && campaignEx2.getAabEntity().getHlp() == 1) {
                        ad.a(campaign, viewGroup);
                    }
                }

                @Override
                public final void onFinishRedirection(Campaign campaign, String str2) {
                    if (campaign == null) {
                        return;
                    }
                    CampaignEx campaignEx2 = (CampaignEx) campaign;
                    if (campaignEx2.getLinkType() == 8 && campaignEx2.getAabEntity().getHlp() == 1) {
                        ad.a(viewGroup);
                    }
                }

                @Override
                public final void onRedirectionFailed(Campaign campaign, String str2) {
                    if (campaign == null) {
                        return;
                    }
                    CampaignEx campaignEx2 = (CampaignEx) campaign;
                    if (campaignEx2.getLinkType() == 8 && campaignEx2.getAabEntity().getHlp() == 1) {
                        ad.a(viewGroup);
                    }
                }
            });
        }
        bVar.c(campaignEx);
    }
}
