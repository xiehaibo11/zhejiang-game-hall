package com.mbridge.msdk.mbnative.d;

import android.content.Context;
import android.text.TextUtils;
import com.mbridge.msdk.foundation.db.i;
import com.mbridge.msdk.foundation.db.o;
import com.mbridge.msdk.foundation.entity.CampaignEx;
import com.mbridge.msdk.foundation.entity.n;
import com.mbridge.msdk.foundation.same.net.f.d;
import com.mbridge.msdk.foundation.same.report.e;
import com.mbridge.msdk.foundation.tools.ae;
import com.mbridge.msdk.foundation.tools.v;
import com.mbridge.msdk.foundation.tools.z;
import com.mbridge.msdk.out.Campaign;
import java.util.List;

public final class a {
    public static void a(final Context context, List<Campaign> list, String str) {
        if (context == null || list == null) {
            return;
        }
        try {
            if (list.size() <= 0 || TextUtils.isEmpty(str)) {
                return;
            }
            StringBuffer stringBuffer = new StringBuffer();
            stringBuffer.append("key=2000048&");
            if (list != null && list.size() > 0) {
                stringBuffer.append("cid=" + list.get(0).getId() + "&");
            }
            stringBuffer.append("network_type=" + v.D(context) + "&");
            stringBuffer.append("unit_id=" + str + "&");
            if (list != null && list.size() > 1) {
                CampaignEx campaignEx = (CampaignEx) list.get(0);
                if (campaignEx.isBidCampaign()) {
                    stringBuffer.append("hb=");
                    stringBuffer.append(1);
                    stringBuffer.append("&");
                }
                if (ae.b(campaignEx)) {
                    stringBuffer.append("rtins_type=");
                    stringBuffer.append(campaignEx.getRtinsType());
                    stringBuffer.append("&");
                }
                stringBuffer.append("rid=" + campaignEx.getRequestId());
                stringBuffer.append("&");
                stringBuffer.append("rid_n=" + campaignEx.getRequestIdNotice());
            } else if (list.size() == 1) {
                CampaignEx campaignEx2 = (CampaignEx) list.get(0);
                if (campaignEx2.isBidCampaign()) {
                    stringBuffer.append("hb=");
                    stringBuffer.append(1);
                    stringBuffer.append("&");
                }
                if (ae.b(campaignEx2)) {
                    stringBuffer.append("rtins_type=");
                    stringBuffer.append(campaignEx2.getRtinsType());
                    stringBuffer.append("&");
                }
                stringBuffer.append("rid=" + campaignEx2.getRequestId());
                stringBuffer.append("&");
                stringBuffer.append("rid_n=" + campaignEx2.getRequestIdNotice());
            }
            if (com.mbridge.msdk.foundation.same.report.b.a().c()) {
                com.mbridge.msdk.foundation.same.report.b.a().a(stringBuffer.toString());
                return;
            }
            final String string = stringBuffer.toString();
            if (context == null || TextUtils.isEmpty(string) || TextUtils.isEmpty(str)) {
                return;
            }
            try {
                new com.mbridge.msdk.foundation.same.report.d.a(context).post(0, d.a().a, e.a(string, context, str), new com.mbridge.msdk.foundation.same.report.d.b() {
                    @Override
                    public final void onSuccess(String str2) {
                        z.d("NativeReport", str2);
                    }

                    @Override
                    public final void onFailed(String str2) {
                        n nVar = new n();
                        nVar.d(string);
                        nVar.a(System.currentTimeMillis());
                        nVar.a(0);
                        nVar.c("POST");
                        nVar.b(d.a().a);
                        o.a(i.a(context)).a(nVar);
                        z.d("NativeReport", str2);
                    }
                });
            } catch (Exception e) {
                e.printStackTrace();
                z.d("NativeReport", e.getMessage());
            }
        } catch (Throwable th) {
            th.printStackTrace();
        }
    }

    public static void a(final Context context, String str, String str2, boolean z) {
        if (context != null) {
            try {
                if (TextUtils.isEmpty(str) || TextUtils.isEmpty(str2)) {
                    return;
                }
                StringBuffer stringBuffer = new StringBuffer();
                stringBuffer.append("key=2000047&");
                stringBuffer.append("network_type=" + v.D(context) + "&");
                stringBuffer.append("unit_id=" + str2 + "&");
                if (!TextUtils.isEmpty(str2)) {
                    String str3 = com.mbridge.msdk.foundation.controller.a.b.get(str2);
                    StringBuilder sb = new StringBuilder();
                    sb.append("u_stid=");
                    if (str3 == null) {
                        str3 = "";
                    }
                    sb.append(str3);
                    sb.append("&");
                    stringBuffer.append(sb.toString());
                }
                if (!TextUtils.isEmpty(com.mbridge.msdk.foundation.same.a.t)) {
                    stringBuffer.append("b=" + com.mbridge.msdk.foundation.same.a.t + "&");
                }
                if (!TextUtils.isEmpty(com.mbridge.msdk.foundation.same.a.u)) {
                    stringBuffer.append("c=" + com.mbridge.msdk.foundation.same.a.u + "&");
                }
                if (z) {
                    stringBuffer.append("hb=1&");
                }
                stringBuffer.append("reason=" + str);
                if (com.mbridge.msdk.foundation.same.report.b.a().c()) {
                    com.mbridge.msdk.foundation.same.report.b.a().a(stringBuffer.toString());
                    return;
                }
                final String string = stringBuffer.toString();
                if (context == null || TextUtils.isEmpty(string)) {
                    return;
                }
                try {
                    new com.mbridge.msdk.foundation.same.report.d.a(context).post(0, d.a().a, e.a(string, context), new com.mbridge.msdk.foundation.same.report.d.b() {
                        @Override
                        public final void onSuccess(String str4) {
                            z.d("NativeReport", str4);
                        }

                        @Override
                        public final void onFailed(String str4) {
                            n nVar = new n();
                            nVar.d(string);
                            nVar.a(System.currentTimeMillis());
                            nVar.a(0);
                            nVar.c("POST");
                            nVar.b(d.a().a);
                            o.a(i.a(context)).a(nVar);
                            z.d("NativeReport", str4);
                        }
                    });
                } catch (Exception e) {
                    e.printStackTrace();
                    z.d("NativeReport", e.getMessage());
                }
            } catch (Throwable th) {
                th.printStackTrace();
            }
        }
    }
}
