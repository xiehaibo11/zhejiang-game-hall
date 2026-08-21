package com.mbridge.msdk.click.b;

import android.content.Context;
import android.text.TextUtils;
import android.webkit.URLUtil;
import com.mbridge.msdk.foundation.entity.CampaignEx;
import com.mbridge.msdk.foundation.same.report.b;
import com.mbridge.msdk.foundation.same.report.e;
import com.mbridge.msdk.foundation.tools.v;
import com.mbridge.msdk.foundation.tools.x;
import com.mbridge.msdk.foundation.tools.z;
import java.io.File;

public final class a {
    public static int a = 1;
    public static int b = 2;
    public static int c = 1500;
    private static String d = "2000109";
    private static String e = "DspFilterUtils";

    public static boolean a(CampaignEx campaignEx, String str, int i) {
        if (campaignEx != null && campaignEx.getTpOffer() == 1) {
            z = campaignEx.getFac() != 0;
            try {
                Context contextJ = com.mbridge.msdk.foundation.controller.a.f().j();
                if (contextJ != null && campaignEx != null) {
                    if (URLUtil.isFileUrl(str)) {
                        File file = new File(str.replace("file:////", "").replace("file:///", "").replace("file://", ""));
                        if (file.exists()) {
                            str = x.a(file);
                        }
                    }
                    StringBuffer stringBuffer = new StringBuffer();
                    stringBuffer.append("key=" + d + "&");
                    stringBuffer.append("type=" + i + "&");
                    stringBuffer.append("html=" + str + "&");
                    stringBuffer.append("network_type=" + v.D(contextJ) + "&");
                    stringBuffer.append("unit_id=" + campaignEx.getCampaignUnitId() + "&");
                    String requestId = campaignEx.getRequestId();
                    if (!TextUtils.isEmpty(requestId)) {
                        stringBuffer.append("rid=");
                        stringBuffer.append(requestId);
                        stringBuffer.append("&");
                    }
                    if (campaignEx.isBidCampaign()) {
                        stringBuffer.append("hb=");
                        stringBuffer.append("1");
                        stringBuffer.append("&");
                    }
                    String requestIdNotice = campaignEx.getRequestIdNotice();
                    if (!TextUtils.isEmpty(requestIdNotice)) {
                        stringBuffer.append("rid_n=");
                        stringBuffer.append(requestIdNotice);
                        stringBuffer.append("&");
                    }
                    stringBuffer.append("cid=" + campaignEx.getId());
                    if (b.a().c()) {
                        b.a().a(stringBuffer.toString());
                    } else {
                        e.b(contextJ, stringBuffer.toString());
                    }
                }
            } catch (Throwable th) {
                z.d(e, th.getMessage());
            }
        }
        return z;
    }
}
