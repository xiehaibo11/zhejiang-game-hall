package com.mbridge.msdk.reward.b;

import android.content.Context;
import android.text.TextUtils;
import com.mbridge.msdk.MBridgeConstans;
import com.mbridge.msdk.foundation.db.i;
import com.mbridge.msdk.foundation.db.o;
import com.mbridge.msdk.foundation.db.t;
import com.mbridge.msdk.foundation.entity.CampaignEx;
import com.mbridge.msdk.foundation.entity.n;
import com.mbridge.msdk.foundation.entity.p;
import com.mbridge.msdk.foundation.same.net.g.d;
import com.mbridge.msdk.foundation.same.report.e;
import com.mbridge.msdk.foundation.tools.ae;
import com.mbridge.msdk.foundation.tools.v;
import com.mbridge.msdk.foundation.tools.z;
import com.mbridge.msdk.videocommon.d.b;
import com.tkay.expressad.foundation.d.r;
import com.xiaomi.mipush.sdk.Constants;
import java.util.List;

public class a {
    private static final String a = a.class.getName();
    private static String b = "";

    public static void a(Context context, String str) {
        if (context != null) {
            try {
                t tVarA = t.a(i.a(context));
                if (TextUtils.isEmpty(str) || tVarA == null || tVarA.a() <= 0) {
                    return;
                }
                List<p> listA = tVarA.a(r.d);
                List<p> listA2 = tVarA.a(r.b);
                List<p> listA3 = tVarA.a(r.j);
                List<p> listA4 = tVarA.a(r.k);
                List<p> listA5 = tVarA.a(r.m);
                List<p> listA6 = tVarA.a(r.l);
                String strA = p.a(listA2);
                String strB = p.b(listA);
                String strF = p.f(listA3);
                String strC = p.c(listA4);
                String strD = p.d(listA5);
                String strE = p.e(listA6);
                StringBuilder sb = new StringBuilder();
                if (!TextUtils.isEmpty(strA)) {
                    sb.append(strA);
                }
                if (!TextUtils.isEmpty(strB)) {
                    sb.append(strB);
                }
                if (!TextUtils.isEmpty(strF)) {
                    sb.append(strF);
                }
                if (!TextUtils.isEmpty(strC)) {
                    sb.append(strC);
                }
                if (!TextUtils.isEmpty(strD)) {
                    sb.append(strD);
                }
                if (!TextUtils.isEmpty(strE)) {
                    sb.append(strE);
                }
                z.b(a, "reward 批量上报：" + ((Object) sb));
                if (TextUtils.isEmpty(sb.toString())) {
                    return;
                }
                String string = sb.toString();
                if (context == null || TextUtils.isEmpty(string) || TextUtils.isEmpty(str)) {
                    return;
                }
                try {
                    com.mbridge.msdk.foundation.same.report.d.a aVar = new com.mbridge.msdk.foundation.same.report.d.a(context);
                    d dVarA = e.a(string, context, str);
                    dVarA.a(com.tkay.expressad.foundation.g.a.an, b.a().b().b());
                    aVar.post(0, com.mbridge.msdk.foundation.same.net.f.d.a().a, dVarA, new com.mbridge.msdk.foundation.same.report.d.b() {
                        @Override
                        public final void onSuccess(String str2) {
                            z.d(a.a, str2);
                        }

                        @Override
                        public final void onFailed(String str2) {
                            z.d(a.a, str2);
                        }
                    });
                } catch (Exception e) {
                    e.printStackTrace();
                    z.d(a, e.getMessage());
                }
            } catch (Exception e2) {
                e2.printStackTrace();
            }
        }
    }

    private static void a(final Context context, final String str, String str2) {
        if (context == null || TextUtils.isEmpty(str) || TextUtils.isEmpty(str2)) {
            return;
        }
        try {
            com.mbridge.msdk.foundation.same.report.d.a aVar = new com.mbridge.msdk.foundation.same.report.d.a(context);
            d dVarA = e.a(str, context, str2);
            dVarA.a(com.tkay.expressad.foundation.g.a.an, b.a().b().b());
            aVar.post(0, com.mbridge.msdk.foundation.same.net.f.d.a().a, dVarA, new com.mbridge.msdk.foundation.same.report.d.b() {
                @Override
                public final void onSuccess(String str3) {
                    z.d(a.a, str3);
                }

                @Override
                public final void onFailed(String str3) {
                    n nVar = new n();
                    nVar.d(str);
                    nVar.a(System.currentTimeMillis());
                    nVar.a(0);
                    nVar.c("POST");
                    nVar.b(com.mbridge.msdk.foundation.same.net.f.d.a().a);
                    o.a(i.a(context)).a(nVar);
                    z.d(a.a, str3);
                }
            });
        } catch (Exception e) {
            e.printStackTrace();
            z.d(a, e.getMessage());
        }
    }

    private static void b(final Context context, final String str) {
        if (context == null || TextUtils.isEmpty(str)) {
            return;
        }
        try {
            com.mbridge.msdk.foundation.same.report.d.a aVar = new com.mbridge.msdk.foundation.same.report.d.a(context);
            d dVarA = e.a(str, context);
            dVarA.a(com.tkay.expressad.foundation.g.a.an, b.a().b().b());
            aVar.post(0, com.mbridge.msdk.foundation.same.net.f.d.a().a, dVarA, new com.mbridge.msdk.foundation.same.report.d.b() {
                @Override
                public final void onSuccess(String str2) {
                    z.d(a.a, str2);
                }

                @Override
                public final void onFailed(String str2) {
                    n nVar = new n();
                    nVar.d(str);
                    nVar.a(System.currentTimeMillis());
                    nVar.a(0);
                    nVar.c("POST");
                    nVar.b(com.mbridge.msdk.foundation.same.net.f.d.a().a);
                    o.a(i.a(context)).a(nVar);
                    z.d(a.a, str2);
                }
            });
        } catch (Exception e) {
            e.printStackTrace();
            z.d(a, e.getMessage());
        }
    }

    public static void a(Context context, List<CampaignEx> list, String str, long j) {
        if (context == null || list == null) {
            return;
        }
        try {
            if (TextUtils.isEmpty(str)) {
                return;
            }
            if (list.size() > 0) {
                String requestId = list.get(0).getRequestId();
                if (!TextUtils.isEmpty(b) && requestId.equals(b)) {
                    return;
                } else {
                    b = requestId;
                }
            }
            StringBuffer stringBuffer = new StringBuffer();
            stringBuffer.append("key=");
            stringBuffer.append("2000048");
            stringBuffer.append("&");
            stringBuffer.append("network_type=");
            stringBuffer.append(v.D(context));
            stringBuffer.append("&");
            stringBuffer.append("unit_id=");
            stringBuffer.append(str);
            stringBuffer.append("&");
            stringBuffer.append("load_time=");
            stringBuffer.append(j);
            stringBuffer.append("&");
            if (list == null || list.size() <= 0) {
                return;
            }
            stringBuffer.append("cid=");
            StringBuilder sb = new StringBuilder("rtins_type=");
            for (int i = 0; i < list.size(); i++) {
                CampaignEx campaignEx = list.get(i);
                if (i < list.size() - 1) {
                    stringBuffer.append(campaignEx.getId());
                    stringBuffer.append(Constants.ACCEPT_TIME_SEPARATOR_SP);
                    sb.append(campaignEx.getRtinsType());
                    sb.append(Constants.ACCEPT_TIME_SEPARATOR_SP);
                } else {
                    stringBuffer.append(campaignEx.getId());
                    stringBuffer.append("&");
                    if (campaignEx.isBidCampaign()) {
                        stringBuffer.append("hb=1&");
                    } else {
                        stringBuffer.append("hb=0&");
                    }
                    sb.append(campaignEx.getRtinsType());
                    sb.append("&");
                }
            }
            stringBuffer.append((CharSequence) sb);
            CampaignEx campaignEx2 = list.get(0);
            if (campaignEx2 != null) {
                stringBuffer.append("rid=");
                stringBuffer.append(campaignEx2.getRequestId());
                stringBuffer.append("&");
            }
            String str2 = "";
            String str3 = "";
            for (int i2 = 0; i2 < list.size(); i2++) {
                str2 = str2 + list.get(i2).getRequestIdNotice();
                str3 = str3 + list.get(i2).getAdSpaceT();
                if (i2 < list.size() - 1) {
                    str2 = str2 + Constants.ACCEPT_TIME_SEPARATOR_SP;
                    str3 = str3 + Constants.ACCEPT_TIME_SEPARATOR_SP;
                }
            }
            stringBuffer.append("&rid_n=");
            stringBuffer.append(str2);
            stringBuffer.append("&adspace_t=");
            stringBuffer.append(str3);
            if (com.mbridge.msdk.foundation.same.report.b.a().c()) {
                com.mbridge.msdk.foundation.same.report.b.a().a(stringBuffer.toString());
            } else {
                a(context, stringBuffer.toString(), str);
            }
        } catch (Exception e) {
            if (MBridgeConstans.DEBUG) {
                e.printStackTrace();
            }
        }
    }

    public static void a(Context context, CampaignEx campaignEx, String str, String str2, boolean z, String str3, String str4) {
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
                    String str5 = com.mbridge.msdk.foundation.controller.a.b.get(str2);
                    StringBuilder sb = new StringBuilder();
                    sb.append("u_stid=");
                    if (str5 == null) {
                        str5 = "";
                    }
                    sb.append(str5);
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
                } else {
                    stringBuffer.append("hb=0&");
                }
                if (!TextUtils.isEmpty(str3)) {
                    stringBuffer.append("rid=");
                    stringBuffer.append(str3);
                    stringBuffer.append("&");
                }
                if (!TextUtils.isEmpty(str4)) {
                    stringBuffer.append("rid_n=");
                    stringBuffer.append(str4);
                    stringBuffer.append("&");
                }
                if (campaignEx != null) {
                    stringBuffer.append("adspace_t=");
                    stringBuffer.append(campaignEx.getAdSpaceT());
                    stringBuffer.append("&");
                }
                stringBuffer.append("reason=" + str);
                if (com.mbridge.msdk.foundation.same.report.b.a().c()) {
                    com.mbridge.msdk.foundation.same.report.b.a().a(stringBuffer.toString());
                } else {
                    b(context, stringBuffer.toString());
                }
            } catch (Throwable th) {
                th.printStackTrace();
            }
        }
    }

    public static void a(Context context, CampaignEx campaignEx, String str) {
        if (context == null || campaignEx == null) {
            return;
        }
        try {
            if (TextUtils.isEmpty(str)) {
                return;
            }
            StringBuffer stringBuffer = new StringBuffer();
            stringBuffer.append("key=2000048&");
            if (campaignEx != null) {
                stringBuffer.append("cid=" + campaignEx.getId() + "&");
            }
            stringBuffer.append("network_type=" + v.D(context) + "&");
            stringBuffer.append("unit_id=" + str + "&");
            if (campaignEx.isBidCampaign()) {
                stringBuffer.append("hb=1&");
            } else {
                stringBuffer.append("hb=0&");
            }
            if (ae.b(campaignEx)) {
                stringBuffer.append("rtins_type=");
                stringBuffer.append(campaignEx.getRtinsType());
                stringBuffer.append("&");
            }
            if (campaignEx != null) {
                stringBuffer.append("rid=" + campaignEx.getRequestId());
                stringBuffer.append("&");
                stringBuffer.append("rid_n=" + campaignEx.getRequestIdNotice());
            }
            if (com.mbridge.msdk.foundation.same.report.b.a().c()) {
                com.mbridge.msdk.foundation.same.report.b.a().a(stringBuffer.toString());
            } else {
                a(context, stringBuffer.toString(), str);
            }
        } catch (Throwable th) {
            th.printStackTrace();
        }
    }

    public static void b(Context context, CampaignEx campaignEx, String str, String str2, boolean z, String str3, String str4) {
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
                    String str5 = com.mbridge.msdk.foundation.controller.a.b.get(str2);
                    StringBuilder sb = new StringBuilder();
                    sb.append("u_stid=");
                    if (str5 == null) {
                        str5 = "";
                    }
                    sb.append(str5);
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
                } else {
                    stringBuffer.append("hb=0&");
                }
                if (!TextUtils.isEmpty(str3)) {
                    stringBuffer.append("rid=");
                    stringBuffer.append(str3);
                    stringBuffer.append("&");
                }
                if (!TextUtils.isEmpty(str3)) {
                    stringBuffer.append("rid_n=");
                    stringBuffer.append(str4);
                    stringBuffer.append("&");
                }
                stringBuffer.append("reason=" + str);
                if (campaignEx != null && campaignEx.getRewardTemplateMode() != null) {
                    try {
                        int iL = ae.l(campaignEx.getRewardTemplateMode().e());
                        if (iL != -1) {
                            stringBuffer.append("&view=");
                            stringBuffer.append(iL);
                        }
                    } catch (Exception unused) {
                    }
                }
                if (com.mbridge.msdk.foundation.same.report.b.a().c()) {
                    com.mbridge.msdk.foundation.same.report.b.a().a(stringBuffer.toString());
                } else {
                    b(context, stringBuffer.toString());
                }
            } catch (Throwable th) {
                th.printStackTrace();
            }
        }
    }

    public static void a(CampaignEx campaignEx, Context context, String str, String str2, boolean z, String str3, String str4, long j) {
        if (context != null) {
            try {
                if (TextUtils.isEmpty(str) || TextUtils.isEmpty(str2)) {
                    return;
                }
                StringBuffer stringBuffer = new StringBuffer();
                stringBuffer.append("key=2000078&");
                stringBuffer.append("network_type=" + v.D(context) + "&");
                stringBuffer.append("unit_id=" + str2 + "&");
                if (!TextUtils.isEmpty(str2)) {
                    String str5 = com.mbridge.msdk.foundation.controller.a.b.get(str2);
                    StringBuilder sb = new StringBuilder();
                    sb.append("u_stid=");
                    if (str5 == null) {
                        str5 = "";
                    }
                    sb.append(str5);
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
                } else {
                    stringBuffer.append("hb=0&");
                }
                if (!TextUtils.isEmpty(str3)) {
                    stringBuffer.append("rid=");
                    stringBuffer.append(str3);
                    stringBuffer.append("&");
                } else if (campaignEx != null && !TextUtils.isEmpty(campaignEx.getRequestId())) {
                    stringBuffer.append("rid=");
                    stringBuffer.append(campaignEx.getRequestId());
                    stringBuffer.append("&");
                }
                if (!TextUtils.isEmpty(str4)) {
                    stringBuffer.append("rid_n=");
                    stringBuffer.append(str4);
                    stringBuffer.append("&");
                } else if (campaignEx != null && !TextUtils.isEmpty(campaignEx.getRequestIdNotice())) {
                    stringBuffer.append("rid_n=");
                    stringBuffer.append(campaignEx.getRequestIdNotice());
                    stringBuffer.append("&");
                }
                stringBuffer.append("during=");
                stringBuffer.append(j);
                stringBuffer.append("&reason=" + str);
                if (com.mbridge.msdk.foundation.same.report.b.a().c()) {
                    com.mbridge.msdk.foundation.same.report.b.a().a(stringBuffer.toString());
                } else {
                    b(context, stringBuffer.toString());
                }
            } catch (Throwable th) {
                th.printStackTrace();
            }
        }
    }
}
