package com.mbridge.msdk.video.bt.module.b;

import android.content.Context;
import android.text.TextUtils;
import com.mbridge.msdk.foundation.db.i;
import com.mbridge.msdk.foundation.db.o;
import com.mbridge.msdk.foundation.entity.CampaignEx;
import com.mbridge.msdk.foundation.entity.n;
import com.mbridge.msdk.foundation.tools.v;
import com.mbridge.msdk.foundation.tools.z;
import java.net.URLEncoder;
import java.util.ArrayList;
import java.util.List;

/* JADX INFO: compiled from: RewardReport.java */
/* JADX INFO: loaded from: classes3.dex */
public class f {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final String f4128a = f.class.getName();

    private static void a(final Context context, final String str, String str2) {
        if (com.mbridge.msdk.foundation.controller.a.f().j() != null) {
            context = com.mbridge.msdk.foundation.controller.a.f().j();
        }
        if (context == null || TextUtils.isEmpty(str) || TextUtils.isEmpty(str2)) {
            return;
        }
        try {
            com.mbridge.msdk.foundation.same.report.d.a aVar = new com.mbridge.msdk.foundation.same.report.d.a(context);
            com.mbridge.msdk.foundation.same.net.g.d dVarA = com.mbridge.msdk.foundation.same.report.e.a(str, context, str2);
            dVarA.a(com.tkay.expressad.foundation.g.a.an, com.mbridge.msdk.videocommon.d.b.a().b().b());
            aVar.post(0, com.mbridge.msdk.foundation.same.net.f.d.a().f3453a, dVarA, new com.mbridge.msdk.foundation.same.report.d.b() { // from class: com.mbridge.msdk.video.bt.module.b.f.1
                @Override // com.mbridge.msdk.foundation.same.report.d.b
                public final void onSuccess(String str3) {
                    z.d(f.f4128a, str3);
                }

                @Override // com.mbridge.msdk.foundation.same.report.d.b
                public final void onFailed(String str3) {
                    n nVar = new n();
                    nVar.d(str);
                    nVar.a(System.currentTimeMillis());
                    nVar.a(0);
                    nVar.c("POST");
                    nVar.b(com.mbridge.msdk.foundation.same.net.f.d.a().f3453a);
                    o.a(i.a(context)).a(nVar);
                    z.d(f.f4128a, str3);
                }
            });
        } catch (Exception e) {
            e.printStackTrace();
            z.d(f4128a, e.getMessage());
        }
    }

    public static void a(Context context, CampaignEx campaignEx, String str, int i) {
        if (context == null || campaignEx == null) {
            return;
        }
        try {
            if (TextUtils.isEmpty(str)) {
                return;
            }
            StringBuffer stringBuffer = new StringBuffer();
            stringBuffer.append("key=2000054&");
            stringBuffer.append("network_type=" + v.D(context) + "&");
            stringBuffer.append("unit_id=" + str + "&");
            stringBuffer.append("cid=" + campaignEx.getId() + "&");
            stringBuffer.append("reason=&");
            stringBuffer.append("templateshowtype=" + i + " offer show success&");
            stringBuffer.append("result=2&");
            if (campaignEx != null && campaignEx.getAdType() == 287) {
                stringBuffer.append("ad_type=3&");
            } else if (campaignEx == null || campaignEx.getAdType() == 94) {
                stringBuffer.append("ad_type=1&");
            } else {
                stringBuffer.append("ad_type=1&");
            }
            String str2 = campaignEx.getendcard_url();
            if (!TextUtils.isEmpty(str2)) {
                stringBuffer.append("creative=" + URLEncoder.encode(str2) + "&");
            }
            stringBuffer.append("devid=" + v.E() + "&");
            if (campaignEx != null) {
                stringBuffer.append("rid=");
                stringBuffer.append(campaignEx.getRequestId());
                stringBuffer.append("&");
                stringBuffer.append("rid_n=" + campaignEx.getRequestIdNotice());
                stringBuffer.append("&");
                stringBuffer.append("adspace_t=");
                stringBuffer.append(campaignEx.getAdSpaceT());
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

    public static void a(Context context, CampaignEx campaignEx, String str, String str2, int i) {
        if (context == null || campaignEx == null) {
            return;
        }
        try {
            if ((!TextUtils.isEmpty(str)) && (true ^ TextUtils.isEmpty(str2))) {
                StringBuffer stringBuffer = new StringBuffer();
                stringBuffer.append("key=2000054&");
                stringBuffer.append("network_type=" + v.D(context) + "&");
                stringBuffer.append("unit_id=" + str + "&");
                stringBuffer.append("cid=" + campaignEx.getId() + "&");
                stringBuffer.append("reason=" + str2 + "&");
                stringBuffer.append("templateshowtype=" + i + "&");
                stringBuffer.append("result=1&");
                if (!TextUtils.isEmpty(campaignEx.getendcard_url())) {
                    stringBuffer.append("creative=" + URLEncoder.encode(campaignEx.getendcard_url()) + "&");
                }
                stringBuffer.append("devid=" + v.E() + "&");
                if (campaignEx != null && campaignEx.getAdType() == 287) {
                    stringBuffer.append("ad_type=3&");
                } else if (campaignEx == null || campaignEx.getAdType() == 94) {
                    stringBuffer.append("ad_type=1&");
                } else {
                    stringBuffer.append("ad_type=1&");
                }
                if (campaignEx != null) {
                    stringBuffer.append("rid=");
                    stringBuffer.append(campaignEx.getRequestId());
                    stringBuffer.append("&");
                    stringBuffer.append("rid_n=" + campaignEx.getRequestIdNotice());
                    stringBuffer.append("&");
                    stringBuffer.append("adspace_t=" + campaignEx.getAdSpaceT());
                }
                if (com.mbridge.msdk.foundation.same.report.b.a().c()) {
                    com.mbridge.msdk.foundation.same.report.b.a().a(stringBuffer.toString());
                } else {
                    a(context, stringBuffer.toString(), str);
                }
            }
        } catch (Throwable th) {
            th.printStackTrace();
        }
    }

    public static void a(Context context, List<CampaignEx> list, String str) {
        if (context == null || list == null) {
            return;
        }
        try {
            if (list.size() <= 0 || TextUtils.isEmpty(str)) {
                return;
            }
            StringBuffer stringBuffer = new StringBuffer();
            stringBuffer.append("key=2000054&");
            stringBuffer.append("network_type=" + v.D(context) + "&");
            stringBuffer.append("unit_id=" + str + "&");
            ArrayList arrayList = new ArrayList();
            for (int i = 0; i < list.size(); i++) {
                arrayList.add(list.get(i).getId());
            }
            stringBuffer.append("cid=" + arrayList.toString() + "&");
            stringBuffer.append("result=2&");
            if (list.get(0) != null) {
                CampaignEx campaignEx = list.get(0);
                stringBuffer.append("reason=&");
                stringBuffer.append("templateshowtype=two offer ec show success&");
                stringBuffer.append("ad_type=" + campaignEx.getAdType() + "&");
                stringBuffer.append("devid=" + v.E() + "&");
                stringBuffer.append("rid=");
                stringBuffer.append(campaignEx.getRequestId());
                stringBuffer.append("&");
                stringBuffer.append("rid_n=" + campaignEx.getRequestIdNotice());
                stringBuffer.append("&");
                stringBuffer.append("&adspace_t=");
                stringBuffer.append(campaignEx.getAdSpaceT());
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

    public static void a(Context context, List<CampaignEx> list, String str, String str2) {
        if (context == null || list == null) {
            return;
        }
        try {
            if ((!TextUtils.isEmpty(str)) && (true ^ TextUtils.isEmpty(str2))) {
                StringBuffer stringBuffer = new StringBuffer();
                stringBuffer.append("key=2000054&");
                stringBuffer.append("network_type=" + v.D(context) + "&");
                stringBuffer.append("unit_id=" + str + "&");
                String[] strArr = new String[list.size()];
                for (int i = 0; i < list.size(); i++) {
                    strArr[i] = list.get(i).getId();
                }
                stringBuffer.append("cid=" + strArr + "&");
                stringBuffer.append("reason=" + str2 + "&");
                stringBuffer.append("result=1&");
                stringBuffer.append("devid=" + v.E() + "&");
                if (list.get(0) != null) {
                    CampaignEx campaignEx = list.get(0);
                    stringBuffer.append("ad_type=" + campaignEx.getAdType() + "&");
                    stringBuffer.append("rid=");
                    stringBuffer.append(campaignEx.getRequestId());
                    stringBuffer.append("&");
                    stringBuffer.append("rid_n=" + campaignEx.getRequestIdNotice());
                    stringBuffer.append("&");
                    stringBuffer.append("templateshowtype=" + campaignEx.getMof_tplid());
                    stringBuffer.append("&");
                    stringBuffer.append("adspace_t=" + campaignEx.getAdSpaceT());
                }
                if (com.mbridge.msdk.foundation.same.report.b.a().c()) {
                    com.mbridge.msdk.foundation.same.report.b.a().a(stringBuffer.toString());
                } else {
                    a(context, stringBuffer.toString(), str);
                }
            }
        } catch (Throwable th) {
            th.printStackTrace();
        }
    }

    public static void a(CampaignEx campaignEx, String str, int i) {
        try {
            Context contextJ = com.mbridge.msdk.foundation.controller.a.f().j();
            if (contextJ != null && campaignEx != null && !TextUtils.isEmpty(str)) {
                StringBuffer stringBuffer = new StringBuffer();
                stringBuffer.append("key=2000115&");
                stringBuffer.append("network_type=" + v.D(contextJ) + "&");
                stringBuffer.append("unit_id=" + str + "&");
                stringBuffer.append("cid=" + campaignEx.getId() + "&");
                stringBuffer.append("play_cur_time=" + i + "&");
                stringBuffer.append("reason=close ad in advance " + campaignEx.getMof_tplid() + "&");
                stringBuffer.append("result=1&");
                stringBuffer.append("devid=" + v.E() + "&");
                stringBuffer.append("ad_type=" + campaignEx.getAdType() + "&");
                stringBuffer.append("rid=");
                stringBuffer.append(campaignEx.getRequestId());
                stringBuffer.append("&");
                stringBuffer.append("rid_n=" + campaignEx.getRequestIdNotice());
                stringBuffer.append("&");
                stringBuffer.append("adspace_t=" + campaignEx.getAdSpaceT());
                if (com.mbridge.msdk.foundation.same.report.b.a().c()) {
                    com.mbridge.msdk.foundation.same.report.b.a().a(stringBuffer.toString());
                } else {
                    a(contextJ, stringBuffer.toString(), str);
                }
            }
        } catch (Throwable th) {
            th.printStackTrace();
        }
    }
}
