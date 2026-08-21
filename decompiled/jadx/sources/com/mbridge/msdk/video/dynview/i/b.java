package com.mbridge.msdk.video.dynview.i;

import android.content.Context;
import android.net.Uri;
import android.text.TextUtils;
import com.mbridge.msdk.foundation.entity.CampaignEx;
import com.mbridge.msdk.foundation.tools.v;

/* JADX INFO: compiled from: UIControlUtil.java */
/* JADX INFO: loaded from: classes3.dex */
public final class b {
    public static String a(Context context, int i) {
        String str = i == 1 ? com.tkay.expressad.video.dynview.a.a.O : com.tkay.expressad.video.dynview.a.a.P;
        String strS = v.s(context);
        if (strS.startsWith(com.tkay.expressad.video.dynview.a.a.Q)) {
            return (strS.contains(com.tkay.expressad.video.dynview.a.a.Y) || strS.contains(com.tkay.expressad.video.dynview.a.a.Z)) ? "mbridge_reward_two_title_zh_trad" : "mbridge_reward_two_title_zh";
        }
        if (strS.startsWith(com.tkay.expressad.video.dynview.a.a.R)) {
            return "mbridge_reward_two_title_japan" + str;
        }
        if (strS.startsWith("de")) {
            return "mbridge_reward_two_title_germany" + str;
        }
        if (strS.startsWith(com.tkay.expressad.video.dynview.a.a.T)) {
            return "mbridge_reward_two_title_korea" + str;
        }
        if (strS.startsWith(com.tkay.expressad.video.dynview.a.a.U)) {
            return "mbridge_reward_two_title_france" + str;
        }
        if (strS.startsWith("ar")) {
            return "mbridge_reward_two_title_arabia" + str;
        }
        if (strS.startsWith(com.tkay.expressad.video.dynview.a.a.W)) {
            return "mbridge_reward_two_title_russian" + str;
        }
        return "mbridge_reward_two_title_en" + str;
    }

    public static boolean a(String str) {
        if (TextUtils.isEmpty(str)) {
            return false;
        }
        try {
            Uri uri = Uri.parse(str);
            if (uri == null) {
                return false;
            }
            String queryParameter = uri.getQueryParameter(com.tkay.expressad.video.dynview.a.a.L);
            if (TextUtils.isEmpty(queryParameter)) {
                return false;
            }
            return queryParameter.equals("1");
        } catch (Throwable unused) {
            return false;
        }
    }

    public static int a(CampaignEx campaignEx) {
        if (campaignEx != null && campaignEx.getRewardTemplateMode() != null) {
            int iB = campaignEx.getRewardTemplateMode().b();
            if (iB == 302 || iB == 802) {
                return -3;
            }
            if (iB == 904) {
                return !a(campaignEx.getRewardTemplateMode().e()) ? -1 : -3;
            }
        }
        return 100;
    }
}
