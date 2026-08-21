package com.mbridge.msdk.foundation.same.report;

import android.content.Context;
import android.os.Build;
import android.text.TextUtils;
import com.huawei.hms.framework.common.ContainerUtils;
import com.mbridge.msdk.MBridgeConstans;
import com.mbridge.msdk.foundation.db.i;
import com.mbridge.msdk.foundation.db.o;
import com.mbridge.msdk.foundation.db.q;
import com.mbridge.msdk.foundation.entity.CampaignEx;
import com.mbridge.msdk.foundation.entity.n;
import com.mbridge.msdk.foundation.tools.SameMD5;
import com.mbridge.msdk.foundation.tools.aj;
import com.mbridge.msdk.foundation.tools.t;
import com.mbridge.msdk.foundation.tools.v;
import com.mbridge.msdk.foundation.tools.z;
import com.mbridge.msdk.out.Campaign;
import com.mbridge.msdk.out.Frame;
import com.mbridge.msdk.out.MBConfiguration;
import com.tkay.expressad.foundation.d.r;
import java.io.File;
import java.net.URLEncoder;
import java.util.List;
import org.json.JSONObject;

/* JADX INFO: compiled from: ReportController.java */
/* JADX INFO: loaded from: classes2.dex */
public class d {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static final String f3485a = d.class.getSimpleName();
    private Context b;
    private int c;

    public d(Context context, int i) {
        this.c = 0;
        this.b = context;
        this.c = i;
    }

    public d(Context context) {
        this.c = 0;
        this.b = context.getApplicationContext();
    }

    public final void a(int i, String str) {
        new com.mbridge.msdk.foundation.same.report.d.a(this.b).post(0, com.mbridge.msdk.foundation.same.net.f.d.a().f3453a, e.a("event", e.a((Campaign) null, i, "request"), this.b, str), new com.mbridge.msdk.foundation.same.report.d.b() { // from class: com.mbridge.msdk.foundation.same.report.d.1
            @Override // com.mbridge.msdk.foundation.same.report.d.b
            public final void onFailed(String str2) {
            }

            @Override // com.mbridge.msdk.foundation.same.report.d.b
            public final void onSuccess(String str2) {
                z.b(d.f3485a, "report success");
            }
        });
    }

    public final void a(final n nVar, final Boolean bool) {
        if (nVar != null) {
            if (nVar.c().equals("GET")) {
                new com.mbridge.msdk.foundation.same.report.d.a(this.b).get(0, nVar.b(), null, new com.mbridge.msdk.foundation.same.report.d.b() { // from class: com.mbridge.msdk.foundation.same.report.d.12
                    @Override // com.mbridge.msdk.foundation.same.report.d.b
                    public final void onFailed(String str) {
                    }

                    @Override // com.mbridge.msdk.foundation.same.report.d.b
                    public final void onSuccess(String str) {
                        z.b(d.f3485a, "report success");
                        o.a(i.a(d.this.b)).a(nVar.b());
                        if (!bool.booleanValue() || o.a(i.a(d.this.b)).b() <= 20) {
                            return;
                        }
                        com.mbridge.msdk.foundation.controller.b.a().c();
                    }
                });
                return;
            }
            if (nVar.c().equals("POST")) {
                com.mbridge.msdk.foundation.same.report.d.a aVar = new com.mbridge.msdk.foundation.same.report.d.a(this.b);
                if (TextUtils.isEmpty(nVar.d())) {
                    return;
                }
                com.mbridge.msdk.foundation.same.net.g.d dVarA = e.a(nVar.d(), this.b, nVar.a());
                if (nVar.f() > 0) {
                    dVarA.a("retry", nVar.f() + "");
                }
                aVar.post(0, nVar.b(), dVarA, new com.mbridge.msdk.foundation.same.report.d.b() { // from class: com.mbridge.msdk.foundation.same.report.d.13
                    @Override // com.mbridge.msdk.foundation.same.report.d.b
                    public final void onSuccess(String str) {
                        z.b(d.f3485a, "report success");
                        o.a(i.a(d.this.b)).a(nVar.d(), nVar.b(), nVar.g());
                        if (!bool.booleanValue() || o.a(i.a(d.this.b)).a() <= 0) {
                            return;
                        }
                        com.mbridge.msdk.foundation.controller.b.a().c();
                    }

                    @Override // com.mbridge.msdk.foundation.same.report.d.b
                    public final void onFailed(String str) {
                        o.a(i.a(d.this.b)).a(nVar);
                    }
                });
            }
        }
    }

    public final void a(final n nVar) {
        new com.mbridge.msdk.foundation.same.report.d.a(this.b).post(0, com.mbridge.msdk.foundation.same.net.f.d.a().f3453a, e.a(this.b, nVar), new com.mbridge.msdk.foundation.same.report.d.b() { // from class: com.mbridge.msdk.foundation.same.report.d.14
            @Override // com.mbridge.msdk.foundation.same.report.d.b
            public final void onFailed(String str) {
            }

            @Override // com.mbridge.msdk.foundation.same.report.d.b
            public final void onSuccess(String str) {
                z.b(d.f3485a, "report success");
                try {
                    if (nVar != null) {
                        int iE = nVar.e();
                        q.a(i.a(d.this.b)).a(iE + "");
                    }
                } catch (Exception unused) {
                }
            }
        });
    }

    public final void a(String str) {
        c(str);
    }

    private void c(String str) {
        try {
            new com.mbridge.msdk.foundation.same.report.d.a(this.b).post(0, com.mbridge.msdk.foundation.same.net.f.d.a().f3453a, e.a(str, this.b, ""), new com.mbridge.msdk.foundation.same.report.d.b() { // from class: com.mbridge.msdk.foundation.same.report.d.15
                @Override // com.mbridge.msdk.foundation.same.report.d.b
                public final void onSuccess(String str2) {
                    z.b(d.f3485a, "reportPB success data:" + str2);
                }

                @Override // com.mbridge.msdk.foundation.same.report.d.b
                public final void onFailed(String str2) {
                    z.b(d.f3485a, "reportPB onFailed msg:" + str2);
                }
            });
        } catch (Throwable th) {
            th.printStackTrace();
        }
    }

    public final void b(String str) {
        c(str);
    }

    public final void a(String str, String str2, String str3, String str4) {
        try {
            com.mbridge.msdk.foundation.same.report.d.a aVar = new com.mbridge.msdk.foundation.same.report.d.a(this.b);
            String str5 = "click_type=" + URLEncoder.encode(str, "utf-8") + "&cid" + ContainerUtils.KEY_VALUE_DELIMITER + URLEncoder.encode(str2, "utf-8") + "&unit_id" + ContainerUtils.KEY_VALUE_DELIMITER + URLEncoder.encode(str3, "utf-8") + "&key" + ContainerUtils.KEY_VALUE_DELIMITER + URLEncoder.encode("2000027", "utf-8") + "&http_url" + ContainerUtils.KEY_VALUE_DELIMITER + URLEncoder.encode(str4, "utf-8");
            if (b.a().c()) {
                b.a().a(str5);
            } else {
                aVar.post(0, com.mbridge.msdk.foundation.same.net.f.d.a().f3453a, e.a(str5, this.b, str3), new com.mbridge.msdk.foundation.same.report.d.b() { // from class: com.mbridge.msdk.foundation.same.report.d.2
                    @Override // com.mbridge.msdk.foundation.same.report.d.b
                    public final void onSuccess(String str6) {
                        z.a("", "SSL REPORT SUCCESS");
                    }

                    @Override // com.mbridge.msdk.foundation.same.report.d.b
                    public final void onFailed(String str6) {
                        z.a("", "SSL REPORT FAILED");
                    }
                });
            }
        } catch (Exception unused) {
            z.d(f3485a, "ssl  error report failed");
        }
    }

    public final void a(String str, final File file) {
        new com.mbridge.msdk.foundation.same.report.d.a(this.b).post(0, com.mbridge.msdk.foundation.same.net.f.d.a().f3453a, e.a(this.b, str), new com.mbridge.msdk.foundation.same.report.d.b() { // from class: com.mbridge.msdk.foundation.same.report.d.3
            @Override // com.mbridge.msdk.foundation.same.report.d.b
            public final void onSuccess(String str2) {
                z.b(d.f3485a, "report success exception");
                File file2 = file;
                if (file2 != null) {
                    file2.delete();
                }
            }

            @Override // com.mbridge.msdk.foundation.same.report.d.b
            public final void onFailed(String str2) {
                z.b(d.f3485a, "report failed exception");
            }
        });
    }

    public final void a(final String str, String str2, String str3, Frame frame) {
        com.mbridge.msdk.foundation.same.report.d.a aVar = new com.mbridge.msdk.foundation.same.report.d.a(this.b);
        com.mbridge.msdk.foundation.same.net.g.d dVarA = e.a(str2, this.b, str3);
        if (frame != null) {
            dVarA.a("session_id", frame.getSessionId());
            dVarA.a("parent_session_id", frame.getParentSessionId());
        }
        aVar.post(0, com.mbridge.msdk.foundation.same.net.f.d.a().f3453a, dVarA, new com.mbridge.msdk.foundation.same.report.d.b() { // from class: com.mbridge.msdk.foundation.same.report.d.4
            @Override // com.mbridge.msdk.foundation.same.report.d.b
            public final void onSuccess(String str4) {
                z.b(d.f3485a, "report success");
                if (com.tkay.expressad.foundation.g.a.ax.equals(str)) {
                    return;
                }
                if ("click_duration".equals(str)) {
                    com.mbridge.msdk.foundation.controller.b.a().c();
                } else if (com.tkay.expressad.foundation.g.a.az.equals(str)) {
                    com.mbridge.msdk.foundation.controller.b.a().c();
                    com.mbridge.msdk.foundation.controller.b.a().c();
                }
            }

            @Override // com.mbridge.msdk.foundation.same.report.d.b
            public final void onFailed(String str4) {
                z.b(d.f3485a, "report failed");
            }
        });
    }

    public final void a(String str, com.mbridge.msdk.foundation.entity.e eVar, String str2) {
        com.mbridge.msdk.foundation.same.report.d.a aVar = new com.mbridge.msdk.foundation.same.report.d.a(this.b);
        String strA = com.mbridge.msdk.foundation.entity.e.a(eVar);
        if (TextUtils.isEmpty(strA)) {
            return;
        }
        if (b.a().c()) {
            b.a().a(strA);
        } else {
            aVar.post(0, com.mbridge.msdk.foundation.same.net.f.d.a().f3453a, e.a(strA, this.b, str2), new com.mbridge.msdk.foundation.same.report.d.b() { // from class: com.mbridge.msdk.foundation.same.report.d.5
                @Override // com.mbridge.msdk.foundation.same.report.d.b
                public final void onFailed(String str3) {
                }

                @Override // com.mbridge.msdk.foundation.same.report.d.b
                public final void onSuccess(String str3) {
                    z.b(d.f3485a, "report success");
                }
            });
        }
    }

    public final void a(CampaignEx campaignEx, List<com.mbridge.msdk.rover.e> list, com.mbridge.msdk.rover.f fVar) {
        com.mbridge.msdk.foundation.same.report.d.a aVar = new com.mbridge.msdk.foundation.same.report.d.a(this.b);
        String strB = b();
        aVar.post(1, com.mbridge.msdk.foundation.same.net.f.d.a().B + strB, e.a(campaignEx, list), fVar);
    }

    private String b() {
        StringBuffer stringBuffer = new StringBuffer("?");
        stringBuffer.append("platform=");
        stringBuffer.append(URLEncoder.encode("1"));
        stringBuffer.append("&");
        stringBuffer.append("os_version=");
        stringBuffer.append(URLEncoder.encode(Build.VERSION.RELEASE));
        stringBuffer.append("&");
        stringBuffer.append("package_name=");
        stringBuffer.append(URLEncoder.encode(v.A(this.b)));
        stringBuffer.append("&");
        stringBuffer.append("app_version_name=");
        stringBuffer.append(URLEncoder.encode(v.v(this.b)));
        stringBuffer.append("&");
        stringBuffer.append("app_version_code=");
        stringBuffer.append(URLEncoder.encode(v.u(this.b) + ""));
        stringBuffer.append("&");
        stringBuffer.append("screen_size=");
        stringBuffer.append(URLEncoder.encode(v.x(this.b) + "x" + v.y(this.b)));
        stringBuffer.append("&");
        stringBuffer.append("orientation=");
        stringBuffer.append(URLEncoder.encode(v.t(this.b) + ""));
        stringBuffer.append("&");
        stringBuffer.append("gaid=");
        stringBuffer.append(URLEncoder.encode(v.E()));
        stringBuffer.append("&");
        String strEncode = URLEncoder.encode(v.z());
        stringBuffer.append("brand=");
        stringBuffer.append(strEncode);
        stringBuffer.append("&");
        stringBuffer.append("mnc=");
        stringBuffer.append(URLEncoder.encode(v.e(this.b)));
        stringBuffer.append("&");
        stringBuffer.append("mcc=");
        stringBuffer.append(URLEncoder.encode(v.d(this.b)));
        stringBuffer.append("&");
        int iD = v.D(this.b);
        stringBuffer.append("network_type=");
        stringBuffer.append(URLEncoder.encode(iD + ""));
        stringBuffer.append("&");
        stringBuffer.append("network_str");
        stringBuffer.append(URLEncoder.encode(v.a(this.b, iD)));
        stringBuffer.append("&");
        stringBuffer.append("language=");
        stringBuffer.append(URLEncoder.encode(v.s(this.b)));
        stringBuffer.append("&");
        stringBuffer.append("timezone=");
        stringBuffer.append(URLEncoder.encode(v.B()));
        stringBuffer.append("&");
        String strEncode2 = URLEncoder.encode(v.A());
        stringBuffer.append("useragent=");
        stringBuffer.append(strEncode2);
        stringBuffer.append("&");
        stringBuffer.append("sdk_version=");
        stringBuffer.append(URLEncoder.encode(MBConfiguration.SDK_VERSION));
        stringBuffer.append("&");
        String strEncode3 = URLEncoder.encode(v.j(this.b));
        stringBuffer.append("gp_version=");
        stringBuffer.append(strEncode3);
        stringBuffer.append("&");
        stringBuffer.append("sign=");
        stringBuffer.append(URLEncoder.encode(SameMD5.getMD5(com.mbridge.msdk.foundation.controller.a.f().k() + com.mbridge.msdk.foundation.controller.a.f().l())));
        stringBuffer.append("&");
        stringBuffer.append("app_id=");
        stringBuffer.append(URLEncoder.encode(com.mbridge.msdk.foundation.controller.a.f().k()));
        stringBuffer.append("&");
        com.mbridge.msdk.c.a aVarB = com.mbridge.msdk.c.b.a().b(com.mbridge.msdk.foundation.controller.a.f().k());
        if (aVarB != null) {
            JSONObject jSONObject = new JSONObject();
            try {
                if (aVarB.Z() == 1) {
                    if (v.b(this.b) != null) {
                        jSONObject.put("imei", v.b(this.b));
                    }
                    if (v.i(this.b) != null) {
                        jSONObject.put("mac", v.i(this.b));
                    }
                }
                if (aVarB.aa() == 1 && v.g(this.b) != null) {
                    jSONObject.put("android_id", v.g(this.b));
                }
                if (!TextUtils.isEmpty(jSONObject.toString())) {
                    String strA = t.a(jSONObject.toString());
                    if (!TextUtils.isEmpty(strA)) {
                        stringBuffer.append("dvi=");
                        stringBuffer.append(strA);
                        stringBuffer.append("&");
                    } else {
                        stringBuffer.append("dvi=");
                        stringBuffer.append("");
                        stringBuffer.append("&");
                    }
                } else {
                    stringBuffer.append("dvi=");
                    stringBuffer.append("");
                    stringBuffer.append("&");
                }
            } catch (Exception e) {
                e.printStackTrace();
            }
        } else {
            stringBuffer.append("dvi=");
            stringBuffer.append("");
            stringBuffer.append("&");
        }
        stringBuffer.append("unit_id=");
        stringBuffer.append(0);
        return stringBuffer.toString();
    }

    public final void a(int i, int i2, String str, String str2) {
        try {
            com.mbridge.msdk.foundation.same.report.d.a aVar = new com.mbridge.msdk.foundation.same.report.d.a(this.b);
            StringBuilder sb = new StringBuilder();
            sb.append("key");
            sb.append(ContainerUtils.KEY_VALUE_DELIMITER);
            sb.append("2000112");
            sb.append("&");
            sb.append(com.tkay.expressad.d.a.b.ei);
            sb.append(ContainerUtils.KEY_VALUE_DELIMITER);
            sb.append(i2);
            sb.append("&");
            sb.append("result");
            sb.append(ContainerUtils.KEY_VALUE_DELIMITER);
            sb.append(i);
            sb.append("&");
            sb.append("url");
            sb.append(ContainerUtils.KEY_VALUE_DELIMITER);
            sb.append(str2);
            sb.append("&");
            sb.append(r.ac);
            sb.append(ContainerUtils.KEY_VALUE_DELIMITER);
            if (TextUtils.isEmpty(str)) {
                str = "";
            }
            sb.append(str);
            if (b.a().c()) {
                b.a().a(sb.toString());
            } else {
                aVar.post(0, com.mbridge.msdk.foundation.same.net.f.d.a().f3453a, e.a(sb.toString(), this.b, ""), new com.mbridge.msdk.foundation.same.report.d.b() { // from class: com.mbridge.msdk.foundation.same.report.d.6
                    @Override // com.mbridge.msdk.foundation.same.report.d.b
                    public final void onSuccess(String str3) {
                        z.a("", "reportSettingLoadFailed onSuccess");
                    }

                    @Override // com.mbridge.msdk.foundation.same.report.d.b
                    public final void onFailed(String str3) {
                        z.a("", "reportSettingLoadFailed onFailed:" + str3);
                    }
                });
            }
        } catch (Throwable unused) {
            z.d(f3485a, "reportSettingLoadFailed onFailed");
        }
    }

    public final void a() {
        try {
            if (e.a()) {
                com.mbridge.msdk.foundation.same.report.d.a aVar = new com.mbridge.msdk.foundation.same.report.d.a(this.b);
                String strK = com.mbridge.msdk.foundation.controller.a.f().k();
                com.mbridge.msdk.c.a aVarB = com.mbridge.msdk.c.b.a().b(strK);
                if (aVarB == null) {
                    aVarB = com.mbridge.msdk.c.b.a().b();
                }
                int iJ = aVarB.J();
                String str = "key=2000053&Appid=" + strK + "&uptips2" + ContainerUtils.KEY_VALUE_DELIMITER + aVarB.I() + "&info_status" + ContainerUtils.KEY_VALUE_DELIMITER + com.mbridge.msdk.foundation.controller.authoritycontroller.a.a().d() + "&" + com.tkay.expressad.d.a.b.bK + ContainerUtils.KEY_VALUE_DELIMITER + iJ;
                String strE = v.E();
                if (!TextUtils.isEmpty(strE)) {
                    str = str + "&gaid" + ContainerUtils.KEY_VALUE_DELIMITER + strE;
                }
                String str2 = str + "&" + com.tkay.expressad.d.a.b.dw + ContainerUtils.KEY_VALUE_DELIMITER + aVarB.aT() + "&GDPR_consent" + ContainerUtils.KEY_VALUE_DELIMITER + com.mbridge.msdk.foundation.controller.authoritycontroller.a.a().g();
                z.a(f3485a, "reportPrivateAuthorityStatus  data:" + str2);
                if (b.a().c()) {
                    b.a().a(str2);
                    return;
                }
                aVar.post(0, com.mbridge.msdk.foundation.same.net.f.d.a().f3453a, e.a(str2, this.b, ""), new com.mbridge.msdk.foundation.same.report.d.b() { // from class: com.mbridge.msdk.foundation.same.report.d.7
                    @Override // com.mbridge.msdk.foundation.same.report.d.b
                    public final void onSuccess(String str3) {
                        z.a("", "PrivateAuthorityStatus onSuccess ");
                    }

                    @Override // com.mbridge.msdk.foundation.same.report.d.b
                    public final void onFailed(String str3) {
                        z.a("", "PrivateAuthorityStatus onFailed:" + str3);
                    }
                });
                e.b();
            }
        } catch (Throwable unused) {
            z.d(f3485a, "PrivateAuthorityStatus onFailed");
        }
    }

    public final void a(int i, int i2, String str, String str2, String str3) {
        try {
            com.mbridge.msdk.foundation.same.report.d.a aVar = new com.mbridge.msdk.foundation.same.report.d.a(this.b);
            StringBuilder sb = new StringBuilder();
            sb.append("key");
            sb.append(ContainerUtils.KEY_VALUE_DELIMITER);
            sb.append(URLEncoder.encode("2000058", "utf-8"));
            sb.append("&");
            sb.append("appid");
            sb.append(ContainerUtils.KEY_VALUE_DELIMITER);
            sb.append(URLEncoder.encode(com.mbridge.msdk.foundation.controller.a.f().k(), "utf-8"));
            sb.append("&");
            sb.append("dl_service");
            sb.append(ContainerUtils.KEY_VALUE_DELIMITER);
            sb.append(URLEncoder.encode(aj.c + "", "utf-8"));
            sb.append("&");
            sb.append("dl_service_rs");
            sb.append(ContainerUtils.KEY_VALUE_DELIMITER);
            sb.append(URLEncoder.encode(aj.d + "", "utf-8"));
            sb.append("&");
            sb.append("dl_type");
            sb.append(ContainerUtils.KEY_VALUE_DELIMITER);
            sb.append(URLEncoder.encode(i + "", "utf-8"));
            sb.append("&");
            sb.append("dl_link_type");
            sb.append(ContainerUtils.KEY_VALUE_DELIMITER);
            sb.append(URLEncoder.encode(i2 + "", "utf-8"));
            sb.append("&");
            sb.append("rid");
            sb.append(ContainerUtils.KEY_VALUE_DELIMITER);
            sb.append(URLEncoder.encode(str, "utf-8"));
            sb.append("&");
            sb.append("rid_n");
            sb.append(ContainerUtils.KEY_VALUE_DELIMITER);
            sb.append(URLEncoder.encode(str2, "utf-8"));
            sb.append("&");
            sb.append("cid");
            sb.append(ContainerUtils.KEY_VALUE_DELIMITER);
            sb.append(URLEncoder.encode(str3, "utf-8"));
            sb.append("&");
            sb.append("dl_v4");
            sb.append(ContainerUtils.KEY_VALUE_DELIMITER);
            sb.append(URLEncoder.encode(aj.i + "", "utf-8"));
            sb.append("&");
            sb.append("dl_v4_rs");
            sb.append(ContainerUtils.KEY_VALUE_DELIMITER);
            sb.append(URLEncoder.encode(aj.j + "", "utf-8"));
            sb.append("&");
            sb.append("dl_pkg");
            sb.append(ContainerUtils.KEY_VALUE_DELIMITER);
            sb.append(URLEncoder.encode(aj.f3518a + "", "utf-8"));
            sb.append("&");
            sb.append("dl_pkg_rs");
            sb.append(ContainerUtils.KEY_VALUE_DELIMITER);
            sb.append(URLEncoder.encode(aj.b + "", "utf-8"));
            sb.append("&");
            sb.append("dl_i_p");
            sb.append(ContainerUtils.KEY_VALUE_DELIMITER);
            sb.append(URLEncoder.encode(aj.e + "", "utf-8"));
            sb.append("&");
            sb.append("dl_i_p_rs");
            sb.append(ContainerUtils.KEY_VALUE_DELIMITER);
            sb.append(URLEncoder.encode(aj.g + "", "utf-8"));
            sb.append("&");
            sb.append("dl_fp");
            sb.append(ContainerUtils.KEY_VALUE_DELIMITER);
            sb.append(URLEncoder.encode(aj.f + "", "utf-8"));
            sb.append("&");
            sb.append("dl_fp_rs");
            sb.append(ContainerUtils.KEY_VALUE_DELIMITER);
            sb.append(URLEncoder.encode(aj.h + "", "utf-8"));
            sb.append("&");
            sb.append("tgt_v");
            sb.append(ContainerUtils.KEY_VALUE_DELIMITER);
            sb.append(URLEncoder.encode(v.w(this.b) + "", "utf-8"));
            sb.append("&");
            sb.append("app_v_n");
            sb.append(ContainerUtils.KEY_VALUE_DELIMITER);
            sb.append(URLEncoder.encode(v.v(this.b) + "", "utf-8"));
            sb.append("&");
            sb.append("app_v_c");
            sb.append(ContainerUtils.KEY_VALUE_DELIMITER);
            sb.append(URLEncoder.encode(v.u(this.b) + "", "utf-8"));
            if (b.a().c()) {
                b.a().a(sb.toString());
            } else {
                aVar.post(0, com.mbridge.msdk.foundation.same.net.f.d.a().f3453a, e.a(sb.toString(), this.b, ""), new com.mbridge.msdk.foundation.same.report.d.b() { // from class: com.mbridge.msdk.foundation.same.report.d.8
                    @Override // com.mbridge.msdk.foundation.same.report.d.b
                    public final void onSuccess(String str4) {
                        z.a("", "reportDownloadMethod REPORT SUCCESS");
                    }

                    @Override // com.mbridge.msdk.foundation.same.report.d.b
                    public final void onFailed(String str4) {
                        z.a("", "reportDownloadMethod REPORT FAILED");
                    }
                });
            }
        } catch (Exception e) {
            if (MBridgeConstans.DEBUG) {
                e.printStackTrace();
            }
        }
    }

    public final void a(String str, String str2, String str3, String str4, String str5, boolean z) {
        try {
            if (TextUtils.isEmpty(str5)) {
                return;
            }
            com.mbridge.msdk.foundation.same.report.d.a aVar = new com.mbridge.msdk.foundation.same.report.d.a(this.b);
            StringBuilder sb = new StringBuilder();
            if (z) {
                sb.append("hb=");
                sb.append(1);
                sb.append("&");
            }
            sb.append("key");
            sb.append(ContainerUtils.KEY_VALUE_DELIMITER);
            sb.append(URLEncoder.encode("2000066", "utf-8"));
            sb.append("&");
            sb.append("rid");
            sb.append(ContainerUtils.KEY_VALUE_DELIMITER);
            sb.append(URLEncoder.encode(str, "utf-8"));
            sb.append("&");
            sb.append("rid_n");
            sb.append(ContainerUtils.KEY_VALUE_DELIMITER);
            sb.append(URLEncoder.encode(str2, "utf-8"));
            sb.append("&");
            sb.append("cid");
            sb.append(ContainerUtils.KEY_VALUE_DELIMITER);
            sb.append(URLEncoder.encode(str3, "utf-8"));
            sb.append("&");
            sb.append("unit_id");
            sb.append(ContainerUtils.KEY_VALUE_DELIMITER);
            sb.append(URLEncoder.encode(str4, "utf-8"));
            sb.append("&");
            sb.append("err_method");
            sb.append(ContainerUtils.KEY_VALUE_DELIMITER);
            sb.append(str5);
            if (b.a().c()) {
                b.a().a(sb.toString());
            } else {
                aVar.post(0, com.mbridge.msdk.foundation.same.net.f.d.a().f3453a, e.a(sb.toString(), this.b, str4), new com.mbridge.msdk.foundation.same.report.d.b() { // from class: com.mbridge.msdk.foundation.same.report.d.9
                    @Override // com.mbridge.msdk.foundation.same.report.d.b
                    public final void onSuccess(String str6) {
                        z.a("", "MraidUnSupportMethod REPORT SUCCESS");
                    }

                    @Override // com.mbridge.msdk.foundation.same.report.d.b
                    public final void onFailed(String str6) {
                        z.a("", "MraidUnSupportMethod REPORT FAILED");
                    }
                });
            }
        } catch (Exception e) {
            if (MBridgeConstans.DEBUG) {
                e.printStackTrace();
            }
        }
    }

    public final void b(String str, String str2, String str3, String str4, String str5, boolean z) {
        try {
            com.mbridge.msdk.foundation.same.report.d.a aVar = new com.mbridge.msdk.foundation.same.report.d.a(this.b);
            StringBuilder sb = new StringBuilder();
            if (z) {
                sb.append("hb=");
                sb.append(1);
                sb.append("&");
            }
            sb.append("key");
            sb.append(ContainerUtils.KEY_VALUE_DELIMITER);
            sb.append(URLEncoder.encode("2000065", "utf-8"));
            sb.append("&");
            sb.append("rid");
            sb.append(ContainerUtils.KEY_VALUE_DELIMITER);
            sb.append(URLEncoder.encode(str, "utf-8"));
            sb.append("&");
            sb.append("rid_n");
            sb.append(ContainerUtils.KEY_VALUE_DELIMITER);
            sb.append(URLEncoder.encode(str2, "utf-8"));
            sb.append("&");
            sb.append("cid");
            sb.append(ContainerUtils.KEY_VALUE_DELIMITER);
            sb.append(URLEncoder.encode(str3, "utf-8"));
            sb.append("&");
            sb.append("unit_id");
            sb.append(ContainerUtils.KEY_VALUE_DELIMITER);
            sb.append(URLEncoder.encode(str4, "utf-8"));
            sb.append("&");
            sb.append("click_url");
            sb.append(ContainerUtils.KEY_VALUE_DELIMITER);
            sb.append(URLEncoder.encode(str5, "utf-8"));
            if (b.a().c()) {
                b.a().a(sb.toString());
            } else {
                aVar.post(0, com.mbridge.msdk.foundation.same.net.f.d.a().f3453a, e.a(sb.toString(), this.b, str4), new com.mbridge.msdk.foundation.same.report.d.b() { // from class: com.mbridge.msdk.foundation.same.report.d.10
                    @Override // com.mbridge.msdk.foundation.same.report.d.b
                    public final void onSuccess(String str6) {
                        z.a("", "MraidClic REPORT SUCCESS");
                    }

                    @Override // com.mbridge.msdk.foundation.same.report.d.b
                    public final void onFailed(String str6) {
                        z.a("", "MraidClic REPORT FAILED");
                    }
                });
            }
        } catch (Exception e) {
            if (MBridgeConstans.DEBUG) {
                e.printStackTrace();
            }
        }
    }

    public final void a(String str, String str2, String str3, String str4, String str5) {
        try {
            com.mbridge.msdk.foundation.same.report.d.a aVar = new com.mbridge.msdk.foundation.same.report.d.a(this.b);
            StringBuilder sb = new StringBuilder();
            int iD = v.D(this.b);
            sb.append("key");
            sb.append(ContainerUtils.KEY_VALUE_DELIMITER);
            sb.append(URLEncoder.encode("2000071", "utf-8"));
            sb.append("&");
            sb.append("rid");
            sb.append(ContainerUtils.KEY_VALUE_DELIMITER);
            sb.append(URLEncoder.encode(str, "utf-8"));
            sb.append("&");
            sb.append("rid_n");
            sb.append(ContainerUtils.KEY_VALUE_DELIMITER);
            sb.append(URLEncoder.encode(str2, "utf-8"));
            sb.append("&");
            sb.append("cid");
            sb.append(ContainerUtils.KEY_VALUE_DELIMITER);
            sb.append(URLEncoder.encode(str3, "utf-8"));
            sb.append("&");
            sb.append("unit_id");
            sb.append(ContainerUtils.KEY_VALUE_DELIMITER);
            sb.append(URLEncoder.encode(str4, "utf-8"));
            sb.append("&");
            sb.append(r.ac);
            sb.append(ContainerUtils.KEY_VALUE_DELIMITER);
            sb.append(URLEncoder.encode(str5, "utf-8"));
            sb.append("&");
            sb.append("network_type");
            sb.append(ContainerUtils.KEY_VALUE_DELIMITER);
            sb.append(URLEncoder.encode(iD + "", "utf-8"));
            sb.append("&");
            sb.append("result");
            sb.append(ContainerUtils.KEY_VALUE_DELIMITER);
            sb.append(URLEncoder.encode("0", "utf-8"));
            if (b.a().c()) {
                b.a().a(sb.toString());
            } else {
                aVar.post(0, com.mbridge.msdk.foundation.same.net.f.d.a().f3453a, e.a(sb.toString(), this.b, str4), new com.mbridge.msdk.foundation.same.report.d.b() { // from class: com.mbridge.msdk.foundation.same.report.d.11
                    @Override // com.mbridge.msdk.foundation.same.report.d.b
                    public final void onSuccess(String str6) {
                        z.a("", "OMSDK REPORT SUCCESS");
                    }

                    @Override // com.mbridge.msdk.foundation.same.report.d.b
                    public final void onFailed(String str6) {
                        z.a("", "OMSDK REPORT FAILED");
                    }
                });
            }
        } catch (Exception e) {
            if (MBridgeConstans.DEBUG) {
                e.printStackTrace();
            }
        }
    }
}
