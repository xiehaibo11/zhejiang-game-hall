package com.kuaishou.weapon.p0;

import android.content.Context;
import android.text.TextUtils;
import com.kuaishou.weapon.p0.y;
import com.mbridge.msdk.foundation.download.core.DownloadCommon;
import com.meizu.cloud.pushsdk.notification.model.AppIconSetting;
import com.meizu.cloud.pushsdk.notification.model.NotificationStyle;
import com.qihoo360.replugin.packages.PluginFastInstallProvider;
import com.tencent.open.SocialConstants;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public class cv implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private Context f2747a;

    public cv(Context context) {
        this.f2747a = context;
    }

    /* JADX WARN: Unreachable blocks removed: 1, instructions: 1 */
    private y b(String str) {
        String str2;
        String str3;
        JSONObject jSONObject;
        String str4;
        String str5;
        String str6;
        JSONObject jSONObject2;
        try {
            y yVar = new y();
            JSONObject jSONObject3 = new JSONObject(str);
            yVar.e(jSONObject3.optInt("status", 1));
            if (yVar.z() != 1) {
                return null;
            }
            yVar.f(jSONObject3.optInt("bwc", 0));
            yVar.g(jSONObject3.optInt("blpc", 1));
            yVar.h(jSONObject3.optInt("scc", 0));
            yVar.j(jSONObject3.optString("dpver"));
            yVar.k(jSONObject3.optString("bver"));
            yVar.d(jSONObject3.optInt("dpd", 12));
            yVar.b(jSONObject3.optInt("aar", 30));
            yVar.e(jSONObject3.optString("dir"));
            yVar.f(jSONObject3.optString("is"));
            yVar.a(jSONObject3.optInt("ii"));
            yVar.c(jSONObject3.optInt(SocialConstants.PARAM_ACT, 0));
            try {
                yVar.h(jSONObject3.optString("aver"));
                jSONObject2 = jSONObject3.getJSONObject("a");
            } catch (Exception unused) {
            }
            if (jSONObject2 != null) {
                y.a aVar = new y.a();
                str2 = "btm";
                str3 = "ic";
                try {
                    aVar.c(jSONObject2.optInt("as", 0));
                    aVar.d(jSONObject2.optInt(com.tkay.expressad.d.a.b.da, 3));
                    aVar.e(jSONObject2.optInt(com.tkay.expressad.d.a.b.cZ, 8));
                    aVar.b(jSONObject2.optInt("ab", 0));
                    aVar.a(jSONObject2.optInt("am", 0));
                    yVar.a(aVar);
                } catch (Exception unused2) {
                }
            } else {
                str2 = "btm";
                str3 = "ic";
            }
            try {
                yVar.b(jSONObject3.optString("acver"));
                JSONObject jSONObject4 = jSONObject3.getJSONObject(com.tkay.expressad.d.a.b.da);
                if (jSONObject4 != null) {
                    y.b bVar = new y.b();
                    bVar.a(jSONObject4.optInt("acs", 1));
                    bVar.b(jSONObject4.optInt("acc", 3));
                    bVar.c(jSONObject4.optInt("aci", 8));
                    yVar.a(bVar);
                }
            } catch (Exception unused3) {
            }
            try {
                yVar.a(jSONObject3.optString("rver"));
                y.g gVar = new y.g();
                JSONObject jSONObject5 = jSONObject3.getJSONObject("r");
                if (jSONObject5 != null) {
                    gVar.b(jSONObject5.optInt("rs", 1));
                    gVar.c(jSONObject5.optInt("rc", 6));
                    gVar.d(jSONObject5.optInt("ri", 4));
                    gVar.e(jSONObject5.optInt("ro", 5));
                    gVar.a(jSONObject5.optInt("rb", 0));
                    JSONObject jSONObject6 = jSONObject5.getJSONObject("rcl");
                    y.g.a aVar2 = new y.g.a();
                    aVar2.l(jSONObject6.optInt("da", 1));
                    aVar2.b(jSONObject6.optInt("em", 1));
                    aVar2.m(jSONObject6.optInt(AppIconSetting.LARGE_ICON_URL, 1));
                    aVar2.f(jSONObject6.optInt("rcd", 1));
                    aVar2.g(jSONObject6.optInt("dv", 1));
                    aVar2.h(jSONObject6.optInt(DownloadCommon.DOWNLOAD_REPORT_REASON, 1));
                    aVar2.c(jSONObject6.optInt(com.tkay.expressad.video.dynview.a.a.U, 1));
                    aVar2.a(jSONObject6.optInt("hk", 0));
                    aVar2.k(jSONObject6.optInt("vp", 0));
                    aVar2.i(jSONObject6.optInt("mc", 0));
                    aVar2.e(jSONObject6.optInt(com.tkay.expressad.d.a.b.bH, 1));
                    aVar2.d(jSONObject6.optInt("ud", 1));
                    aVar2.j(jSONObject6.optInt("xp", 1));
                    aVar2.n(jSONObject6.optInt("vl", 0));
                    gVar.a(aVar2);
                    yVar.a(gVar);
                }
            } catch (Exception unused4) {
            }
            try {
                y.c cVar = new y.c();
                JSONObject jSONObject7 = jSONObject3.getJSONObject("b");
                cVar.b(jSONObject7.optInt("bc", 2));
                cVar.c(jSONObject7.optInt(NotificationStyle.BANNER_IMAGE_URL, 12));
                cVar.a(jSONObject7.optInt("bs", 1));
                try {
                    JSONObject jSONObject8 = jSONObject7.getJSONObject("pry");
                    y.c.b bVar2 = new y.c.b();
                    jSONObject = jSONObject3;
                    try {
                        bVar2.e(jSONObject8.optInt("gifa", 1));
                        bVar2.d(jSONObject8.optInt("gnci", 1));
                        bVar2.f(jSONObject8.optInt("gsl", 1));
                        bVar2.c(jSONObject8.optInt("gso", 1));
                        bVar2.a(jSONObject8.optInt("gno", 1));
                        bVar2.b(jSONObject8.optInt("gnon", 1));
                        bVar2.g(jSONObject8.optInt("rl", 1));
                        bVar2.i(jSONObject8.optInt("grs", 1));
                        bVar2.h(jSONObject8.optInt("grt", 1));
                        cVar.a(bVar2);
                    } catch (Exception unused5) {
                    }
                } catch (Exception unused6) {
                    jSONObject = jSONObject3;
                }
                try {
                    JSONObject jSONObject9 = jSONObject7.getJSONObject("bcl");
                    y.c.a aVar3 = new y.c.a();
                    aVar3.a(jSONObject9.optInt("a", 1));
                    aVar3.i(jSONObject9.optInt("r", 1));
                    aVar3.b(jSONObject9.optInt("c", 1));
                    aVar3.j(jSONObject9.optInt("s", 1));
                    aVar3.d(jSONObject9.optInt("d", 1));
                    aVar3.k(jSONObject9.optInt(t.i, 1));
                    aVar3.m(jSONObject9.optInt("w", 0));
                    aVar3.f(jSONObject9.optInt(t.h, 0));
                    aVar3.p(jSONObject9.optInt("ie", 1));
                    aVar3.e(jSONObject9.optInt("is", 0));
                    str6 = str3;
                    try {
                        aVar3.n(jSONObject9.optInt(str6, 1));
                        str5 = str2;
                        try {
                            aVar3.o(jSONObject9.optInt(str5, 1));
                            aVar3.l(jSONObject9.optInt("mc", 1));
                            aVar3.q(jSONObject9.optInt("rp", 1));
                            aVar3.g(jSONObject9.optInt("tc", 1));
                            aVar3.c(jSONObject9.optInt("il", 1));
                            str4 = "p";
                            try {
                                aVar3.h(jSONObject9.optInt(str4, 1));
                                aVar3.r(jSONObject9.optInt("l", 1));
                                cVar.a(aVar3);
                                yVar.a(cVar);
                            } catch (Exception unused7) {
                            }
                        } catch (Exception unused8) {
                            str4 = "p";
                        }
                    } catch (Exception unused9) {
                        str4 = "p";
                        str5 = str2;
                    }
                } catch (Exception unused10) {
                    str4 = "p";
                    str5 = str2;
                    str6 = str3;
                }
            } catch (Exception unused11) {
                jSONObject = jSONObject3;
            }
            JSONObject jSONObject10 = jSONObject;
            try {
                yVar.g(jSONObject10.optString("cver"));
                y.d dVar = new y.d();
                JSONObject jSONObject11 = jSONObject10.getJSONObject("c");
                dVar.b(jSONObject11.optInt(com.tkay.expressad.d.a.b.h, 2));
                dVar.c(jSONObject11.optInt("ci", 12));
                dVar.a(jSONObject11.optInt("cs", 1));
                dVar.d(jSONObject11.optInt("cb", 0));
                JSONObject jSONObject12 = jSONObject11.getJSONObject("ccl");
                y.d.a aVar4 = new y.d.a();
                aVar4.a(jSONObject12.optInt("d", 1));
                aVar4.b(jSONObject12.optInt("mc", 1));
                aVar4.c(jSONObject12.optInt("w", 0));
                aVar4.d(jSONObject12.optInt("is", 1));
                aVar4.e(jSONObject12.optInt(str6, 1));
                aVar4.f(jSONObject12.optInt(str5, 1));
                aVar4.g(jSONObject12.optInt("ie", 1));
                aVar4.h(jSONObject12.optInt(t.h, 0));
                dVar.a(aVar4);
                yVar.a(dVar);
            } catch (Exception unused12) {
            }
            try {
                yVar.i(jSONObject10.optString("pgver"));
                JSONObject jSONObjectOptJSONObject = jSONObject10.optJSONObject(str4);
                if (jSONObjectOptJSONObject != null) {
                    y.f fVar = new y.f();
                    fVar.a(jSONObjectOptJSONObject.optInt("ps", 1));
                    fVar.b(jSONObjectOptJSONObject.optInt(t.x, 2));
                    fVar.c(jSONObjectOptJSONObject.optInt(PluginFastInstallProvider.KEY_PLUGIN_INFO, 12));
                    JSONObject jSONObjectOptJSONObject2 = jSONObjectOptJSONObject.optJSONObject("pcl");
                    if (jSONObjectOptJSONObject2 != null) {
                        y.f.a aVar5 = new y.f.a();
                        aVar5.d(jSONObjectOptJSONObject2.optInt("cp", 1));
                        aVar5.c(jSONObjectOptJSONObject2.optInt("gc", 1));
                        aVar5.b(jSONObjectOptJSONObject2.optInt("pke", 1));
                        aVar5.e(jSONObjectOptJSONObject2.optInt("pds", 1));
                        aVar5.a(jSONObjectOptJSONObject2.optInt("pam", 1));
                        fVar.a(aVar5);
                    }
                    yVar.a(fVar);
                }
            } catch (Exception unused13) {
            }
            try {
                yVar.m(jSONObject10.optString("socver"));
                JSONObject jSONObjectOptJSONObject3 = jSONObject10.optJSONObject("soc");
                if (jSONObjectOptJSONObject3 != null) {
                    y.h hVar = new y.h();
                    hVar.c(jSONObjectOptJSONObject3.optInt("socs", 0));
                    hVar.d(jSONObjectOptJSONObject3.optInt("socc", 2));
                    hVar.b(jSONObjectOptJSONObject3.optInt("soci", 12));
                    hVar.a(jSONObjectOptJSONObject3.optInt("snack", 0));
                    yVar.a(hVar);
                }
            } catch (Exception unused14) {
            }
            try {
                yVar.d(jSONObject10.optString("hver"));
                JSONObject jSONObjectOptJSONObject4 = jSONObject10.optJSONObject(com.loc.at.g);
                if (jSONObjectOptJSONObject4 != null) {
                    y.e eVar = new y.e();
                    eVar.b(jSONObjectOptJSONObject4.optInt("hs", 1));
                    eVar.c(jSONObjectOptJSONObject4.optInt("hc", 2));
                    eVar.a(jSONObjectOptJSONObject4.optInt("hi", 12));
                    eVar.d(jSONObjectOptJSONObject4.optInt("hsdc", 1));
                    eVar.e(jSONObjectOptJSONObject4.optInt("hlbr", 1));
                    eVar.a(jSONObjectOptJSONObject4.optString("pr"));
                    yVar.a(eVar);
                }
            } catch (Exception unused15) {
            }
            return yVar;
        } catch (Exception unused16) {
            return null;
        }
    }

    public void a(String str) {
        try {
            JSONObject jSONObject = new JSONObject(str);
            if (jSONObject.optInt("result", 0) == 1) {
                String strA = new bm(this.f2747a).a(jSONObject.getString("antispamPluginRsp"));
                if (TextUtils.isEmpty(strA)) {
                    return;
                }
                y yVarB = b(strA);
                if (yVarB != null) {
                    df.a(this.f2747a).a(str, yVarB);
                } else {
                    df.a(this.f2747a).b(System.currentTimeMillis());
                }
            }
        } catch (Exception unused) {
        }
    }

    @Override // java.lang.Runnable
    public void run() throws Throwable {
        try {
            String str = ct.f2745a + ct.d;
            String strA = cu.a(this.f2747a);
            if (!TextUtils.isEmpty(strA)) {
                str = str + "?" + strA;
            }
            JSONObject jSONObject = new JSONObject();
            JSONObject jSONObjectB = cu.b(this.f2747a);
            if (jSONObjectB != null) {
                jSONObject.put("data", new bm(this.f2747a).c(jSONObjectB.toString()));
            }
            l lVarA = l.a(this.f2747a);
            m mVar = new m(str, jSONObject);
            mVar.a(WeaponHI.cookieData);
            mVar.b(WeaponHI.encryENV);
            lVarA.b(mVar, new j() { // from class: com.kuaishou.weapon.p0.cv.1
                @Override // com.kuaishou.weapon.p0.j
                public void a(String str2) {
                    try {
                        cv.this.a(str2);
                    } catch (Exception unused) {
                    }
                }

                @Override // com.kuaishou.weapon.p0.j
                public void b(String str2) {
                }
            });
        } catch (Exception unused) {
        }
    }
}
