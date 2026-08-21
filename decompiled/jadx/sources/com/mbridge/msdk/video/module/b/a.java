package com.mbridge.msdk.video.module.b;

import android.text.TextUtils;
import com.mbridge.msdk.foundation.entity.CampaignEx;
import com.mbridge.msdk.foundation.same.net.g.d;
import com.mbridge.msdk.foundation.same.report.e;
import com.mbridge.msdk.foundation.tools.ak;
import com.xiaomi.mipush.sdk.Constants;

/* JADX INFO: compiled from: RewardDynamicViewReporter.java */
/* JADX INFO: loaded from: classes3.dex */
public final class a {
    public static void a(String str, String str2, String str3, String str4, String[] strArr, String[] strArr2) {
        if (TextUtils.isEmpty(str) || TextUtils.isEmpty(str2) || strArr == null || strArr.length == 0 || strArr2 == null || strArr2.length == 0) {
            return;
        }
        try {
            StringBuilder sb = new StringBuilder("key=2000103&");
            sb.append("type=choseFromTwoShow&cltp=");
            sb.append(str3);
            sb.append("&");
            sb.append("rid=");
            sb.append(str2);
            sb.append("&");
            sb.append("unit_id=");
            sb.append(str);
            sb.append("&");
            sb.append("xt=");
            sb.append(str4);
            sb.append("&");
            String str5 = "";
            String str6 = "";
            for (int i = 0; i < strArr.length; i++) {
                String str7 = strArr[i];
                if (!TextUtils.isEmpty(str7)) {
                    str6 = str6 + str7;
                    if (i < strArr.length - 1) {
                        str6 = str6 + Constants.ACCEPT_TIME_SEPARATOR_SP;
                    }
                }
            }
            sb.append("cids=");
            sb.append(str6);
            sb.append("&");
            for (int i2 = 0; i2 < strArr2.length; i2++) {
                String str8 = strArr2[i2];
                if (!TextUtils.isEmpty(str8)) {
                    str5 = str5 + str8;
                    if (i2 < strArr2.length - 1) {
                        str5 = str5 + Constants.ACCEPT_TIME_SEPARATOR_SP;
                    }
                }
            }
            sb.append("rid_ns=");
            sb.append(str5);
            if (com.mbridge.msdk.foundation.same.report.b.a().c()) {
                com.mbridge.msdk.foundation.same.report.b.a().a(sb.toString());
                return;
            }
            d dVarA = e.a(sb.toString(), com.mbridge.msdk.foundation.controller.a.f().j(), str);
            if (dVarA != null) {
                a(dVarA);
            }
        } catch (Exception unused) {
        }
    }

    private static void a(String str, String str2, String str3, String str4, int i, String str5, String str6, String str7) {
        if (TextUtils.isEmpty(str) || TextUtils.isEmpty(str2) || TextUtils.isEmpty(str3) || TextUtils.isEmpty(str4)) {
            return;
        }
        try {
            StringBuilder sb = new StringBuilder("key=2000103&");
            sb.append("type=choseFromTwoSelect&rid=");
            sb.append(str2);
            sb.append("&");
            sb.append("choose_cid=");
            sb.append(str3);
            sb.append("&");
            sb.append("rid_n=");
            sb.append(str4);
            sb.append("&");
            sb.append("click=");
            sb.append(i);
            sb.append("&");
            sb.append("unit_id=");
            sb.append(str);
            sb.append("&");
            sb.append("time=");
            sb.append(str5);
            sb.append("&");
            sb.append("alecfc=");
            sb.append(str6);
            sb.append("&");
            sb.append("template_id=");
            sb.append(str7);
            if (com.mbridge.msdk.foundation.same.report.b.a().c()) {
                com.mbridge.msdk.foundation.same.report.b.a().a(sb.toString());
            } else {
                d dVarA = e.a(sb.toString(), com.mbridge.msdk.foundation.controller.a.f().j(), str);
                if (dVarA != null) {
                    a(dVarA);
                }
            }
        } catch (Exception unused) {
        }
    }

    public static void a(String str, CampaignEx campaignEx, int i, String str2) {
        String str3;
        String str4;
        String str5;
        String str6;
        String str7;
        String strE;
        String strValueOf;
        String strA;
        String str8;
        if (TextUtils.isEmpty(str) || campaignEx == null) {
            return;
        }
        try {
            try {
                String requestId = campaignEx.getRequestId();
                try {
                    String id = campaignEx.getId();
                    try {
                        String requestIdNotice = campaignEx.getRequestIdNotice();
                        try {
                            CampaignEx.c rewardTemplateMode = campaignEx.getRewardTemplateMode();
                            if (rewardTemplateMode != null) {
                                try {
                                    strE = rewardTemplateMode.e();
                                    strValueOf = String.valueOf(rewardTemplateMode.b());
                                } catch (Throwable th) {
                                    th = th;
                                    str6 = "";
                                    str7 = str6;
                                    str3 = requestId;
                                    str4 = id;
                                    str5 = requestIdNotice;
                                    a(str, str3, str4, str5, i, str2, str6, str7);
                                    throw th;
                                }
                                try {
                                    strA = TextUtils.isEmpty(strE) ? "" : ak.a(strE, com.tkay.expressad.video.dynview.a.a.L);
                                    str8 = strValueOf;
                                } catch (Throwable th2) {
                                    th = th2;
                                    str6 = "";
                                    str7 = strValueOf;
                                    str3 = requestId;
                                    str4 = id;
                                    str5 = requestIdNotice;
                                    a(str, str3, str4, str5, i, str2, str6, str7);
                                    throw th;
                                }
                            } else {
                                strA = "";
                                str8 = strA;
                            }
                            a(str, requestId, id, requestIdNotice, i, str2, strA, str8);
                        } catch (Throwable th3) {
                            th = th3;
                            str6 = null;
                        }
                    } catch (Throwable th4) {
                        th = th4;
                        str5 = null;
                        str6 = null;
                        str7 = null;
                        str3 = requestId;
                        str4 = id;
                    }
                } catch (Throwable th5) {
                    th = th5;
                    str4 = null;
                    str5 = null;
                    str6 = null;
                    str7 = null;
                    str3 = requestId;
                }
            } catch (Exception unused) {
                a(str, "", "", "", i, str2, "", "");
            }
        } catch (Throwable th6) {
            th = th6;
            str3 = null;
            str4 = null;
            str5 = null;
            str6 = null;
            str7 = null;
        }
    }

    public static void a(String str, String str2, String str3, String str4, String str5, String str6, String str7, String str8) {
        if (TextUtils.isEmpty(str) || TextUtils.isEmpty(str2) || TextUtils.isEmpty(str6) || TextUtils.isEmpty(str7)) {
            return;
        }
        try {
            StringBuilder sb = new StringBuilder("key=2000103&");
            sb.append("type=choseFromTwoClose&rid=");
            sb.append(str2);
            sb.append("&");
            sb.append("choose_cid=");
            sb.append(str6);
            sb.append("&");
            sb.append("rid_n=");
            sb.append(str7);
            sb.append("&");
            sb.append("mof=");
            sb.append(str4);
            sb.append("&");
            sb.append("unit_id=");
            sb.append(str);
            sb.append("&");
            sb.append("endcard_id=");
            sb.append(str5);
            sb.append("&");
            sb.append("alecfc=");
            sb.append(str3);
            sb.append("&");
            sb.append("template_id=");
            sb.append(str8);
            if (com.mbridge.msdk.foundation.same.report.b.a().c()) {
                com.mbridge.msdk.foundation.same.report.b.a().a(sb.toString());
            } else {
                d dVarA = e.a(sb.toString(), com.mbridge.msdk.foundation.controller.a.f().j(), str);
                if (dVarA != null) {
                    a(dVarA);
                }
            }
        } catch (Exception unused) {
        }
    }

    private static void a(d dVar) {
        if (dVar == null) {
            return;
        }
        try {
            com.mbridge.msdk.foundation.same.report.d.a aVar = new com.mbridge.msdk.foundation.same.report.d.a(com.mbridge.msdk.foundation.controller.a.f().j());
            dVar.a(com.tkay.expressad.foundation.g.a.an, com.mbridge.msdk.videocommon.d.b.a().b().b());
            aVar.post(0, com.mbridge.msdk.foundation.same.net.f.d.a().f3453a, dVar, new com.mbridge.msdk.foundation.same.report.d.b() { // from class: com.mbridge.msdk.video.module.b.a.1
                @Override // com.mbridge.msdk.foundation.same.report.d.b
                public final void onFailed(String str) {
                }

                @Override // com.mbridge.msdk.foundation.same.report.d.b
                public final void onSuccess(String str) {
                }
            });
        } catch (Exception unused) {
        }
    }
}
