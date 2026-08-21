package com.mbridge.msdk.foundation.same.report;

import android.text.TextUtils;
import com.huawei.hms.framework.common.ContainerUtils;
import com.mbridge.msdk.MBridgeConstans;
import com.mbridge.msdk.foundation.tools.z;
import java.net.URLEncoder;
import java.util.HashMap;
import java.util.Map;

/* JADX INFO: compiled from: SameCommonReporter.java */
/* JADX INFO: loaded from: classes2.dex */
public final class g {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final String f3506a;
    private final Map<String, String> b;

    private g(a aVar) {
        this.f3506a = aVar.f3507a;
        this.b = aVar.b;
    }

    public final void a(String str) {
        String strA;
        if (TextUtils.isEmpty(this.f3506a)) {
            return;
        }
        StringBuilder sb = new StringBuilder();
        sb.append("key=");
        sb.append(this.f3506a);
        com.mbridge.msdk.foundation.same.net.g.d dVarA = null;
        try {
            strA = a(this.b);
        } catch (Exception e) {
            if (MBridgeConstans.DEBUG) {
                z.d("SameCommonReporter", e.getMessage());
            }
            strA = null;
        }
        if (!TextUtils.isEmpty(strA)) {
            sb.append(strA);
        }
        if (com.mbridge.msdk.foundation.same.report.b.a().c()) {
            com.mbridge.msdk.foundation.same.report.b.a().a(sb.toString());
            return;
        }
        try {
            dVarA = e.a(sb.toString(), com.mbridge.msdk.foundation.controller.a.f().j(), str);
        } catch (Exception e2) {
            if (MBridgeConstans.DEBUG) {
                z.d("SameCommonReporter", e2.getMessage());
            }
        }
        if (dVarA == null || dVarA == null) {
            return;
        }
        try {
            new com.mbridge.msdk.foundation.same.report.d.a(com.mbridge.msdk.foundation.controller.a.f().j()).post(0, com.mbridge.msdk.foundation.same.net.f.d.a().f3453a, dVarA, new b());
        } catch (Exception e3) {
            if (MBridgeConstans.DEBUG) {
                z.d("SameCommonReporter", e3.getMessage());
            }
        }
    }

    private String a(Map<String, String> map) {
        if (map != null && map.size() != 0) {
            StringBuilder sb = new StringBuilder();
            try {
                for (String str : map.keySet()) {
                    if (!TextUtils.isEmpty(str)) {
                        String strEncode = map.get(str);
                        if (!TextUtils.isEmpty(strEncode)) {
                            try {
                                strEncode = URLEncoder.encode(strEncode, "utf-8");
                            } catch (Exception e) {
                                if (MBridgeConstans.DEBUG) {
                                    z.d("SameCommonReporter", e.getMessage());
                                }
                            }
                            sb.append("&");
                            sb.append(str);
                            sb.append(ContainerUtils.KEY_VALUE_DELIMITER);
                            sb.append(strEncode);
                        }
                    }
                }
            } catch (Exception e2) {
                if (MBridgeConstans.DEBUG) {
                    z.d("SameCommonReporter", e2.getMessage());
                }
                sb = null;
            }
            if (sb != null && sb.length() > 0) {
                return sb.toString();
            }
        }
        return null;
    }

    /* JADX INFO: compiled from: SameCommonReporter.java */
    public static class a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private final String f3507a;
        private final Map<String, String> b = new HashMap();

        public a(String str) {
            this.f3507a = str;
        }

        public final a a(String str, String str2) {
            if (!TextUtils.isEmpty(str)) {
                try {
                    this.b.put(str, str2);
                } catch (Exception e) {
                    if (MBridgeConstans.DEBUG) {
                        z.d("SameCommonReporter", e.getMessage());
                    }
                }
            }
            return this;
        }

        public final g a() {
            return new g(this);
        }
    }

    /* JADX INFO: compiled from: SameCommonReporter.java */
    private static final class b extends com.mbridge.msdk.foundation.same.report.d.b {
        @Override // com.mbridge.msdk.foundation.same.report.d.b
        public final void onSuccess(String str) {
            if (MBridgeConstans.DEBUG) {
                z.a("SameCommonReporter", "report success for： " + str);
            }
        }

        @Override // com.mbridge.msdk.foundation.same.report.d.b
        public final void onFailed(String str) {
            if (MBridgeConstans.DEBUG) {
                z.a("SameCommonReporter", "report failed for： " + str);
            }
        }
    }
}
