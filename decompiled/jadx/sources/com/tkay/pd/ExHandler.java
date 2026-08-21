package com.tkay.pd;

import android.content.Context;
import android.text.TextUtils;
import com.kuaishou.weapon.p0.t;
import com.tkay.china.activity.ApkConfirmDialogActivity;
import com.tkay.china.b.a;
import com.tkay.china.common.c;
import com.tkay.core.api.BaseAd;
import com.tkay.core.api.IExHandler;
import com.tkay.core.api.TYBaseAdAdapter;
import com.tkay.core.api.TYEventInterface;
import com.tkay.core.common.b.f;
import com.tkay.core.common.b.m;
import com.tkay.core.common.f.h;
import com.tkay.core.common.f.i;
import com.tkay.core.common.g.b;
import com.tkay.core.common.l.p;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes4.dex */
public class ExHandler implements IExHandler {
    public static final String JSON_REQUEST_BOOT_MARK = "boot_mark";
    public static final String JSON_REQUEST_CPU = "cpu";
    public static final String JSON_REQUEST_IMEI = "imei";
    public static final String JSON_REQUEST_INSTALL_TS = "install_ts";
    public static final String JSON_REQUEST_ISAGENT = "isagent";
    public static final String JSON_REQUEST_ISROOT = "isroot";
    public static final String JSON_REQUEST_MAC = "mac";
    public static final String JSON_REQUEST_OAID = "oaid";
    public static final String JSON_REQUEST_SSID = "wifi_name";
    public static final String JSON_REQUEST_UPDATE_MARK = "update_mark";
    public static final String JSON_REQUEST_UPDATE_TS = "update_ts";
    int macOpen = 1;
    int imeiOpen = 1;

    @Override // com.tkay.core.api.IExHandler
    public void initDeviceInfo(Context context) {
        a.a(context);
    }

    @Override // com.tkay.core.api.IExHandler
    public String getUniqueId(Context context) {
        return a.b(context);
    }

    @Override // com.tkay.core.api.IExHandler
    public void fillRequestData(JSONObject jSONObject, com.tkay.core.c.a aVar) {
        String strF = aVar != null ? aVar.F() : "";
        if (TextUtils.isEmpty(strF)) {
            try {
                jSONObject.put("mac", a.a());
                jSONObject.put("imei", a.d(m.a().f()));
                jSONObject.put("oaid", a.b());
                return;
            } catch (Exception unused) {
                return;
            }
        }
        try {
            JSONObject jSONObject2 = new JSONObject(strF);
            this.macOpen = jSONObject2.optInt("m");
            this.imeiOpen = jSONObject2.optInt(t.e);
        } catch (Exception unused2) {
        }
        try {
            jSONObject.put("mac", this.macOpen == 1 ? a.a() : "");
            jSONObject.put("imei", this.imeiOpen == 1 ? a.d(m.a().f()) : "");
            jSONObject.put("oaid", a.b());
        } catch (Exception unused3) {
        }
    }

    @Override // com.tkay.core.api.IExHandler
    public void fillRequestDeviceData(JSONObject jSONObject, int i) {
        if ((i & 1) == 1) {
            try {
                if (!TextUtils.isEmpty(a.d())) {
                    jSONObject.put(JSON_REQUEST_ISROOT, Integer.parseInt(a.d()));
                }
            } catch (Throwable unused) {
            }
            try {
                if (!TextUtils.isEmpty(a.e())) {
                    jSONObject.put(JSON_REQUEST_ISAGENT, Integer.parseInt(a.e()));
                }
            } catch (Throwable unused2) {
            }
            try {
                jSONObject.put("wifi_name", a.c());
            } catch (Throwable unused3) {
            }
            try {
                if (!TextUtils.isEmpty(a.f())) {
                    jSONObject.put(JSON_REQUEST_INSTALL_TS, Long.parseLong(a.f()));
                }
            } catch (Throwable unused4) {
            }
            try {
                if (!TextUtils.isEmpty(a.g())) {
                    jSONObject.put(JSON_REQUEST_UPDATE_TS, Long.parseLong(a.g()));
                }
            } catch (Throwable unused5) {
            }
            try {
                jSONObject.put(JSON_REQUEST_CPU, a.h());
            } catch (Throwable unused6) {
            }
        }
        if ((i & 2) == 2) {
            try {
                jSONObject.put(JSON_REQUEST_BOOT_MARK, a.i());
                jSONObject.put(JSON_REQUEST_UPDATE_MARK, a.j());
            } catch (Throwable unused7) {
            }
        }
    }

    @Override // com.tkay.core.api.IExHandler
    public void fillTestDeviceData(JSONObject jSONObject, com.tkay.core.c.a aVar) {
        Object obj = "";
        String strF = aVar != null ? aVar.F() : "";
        if (TextUtils.isEmpty(strF)) {
            try {
                String strD = a.d(m.a().f());
                if (!TextUtils.isEmpty(strD)) {
                    obj = strD;
                }
                jSONObject.put("IMEI", obj);
                jSONObject.put("OAID", a.c(m.a().f()));
                return;
            } catch (Exception unused) {
                return;
            }
        }
        try {
            JSONObject jSONObject2 = new JSONObject(strF);
            this.macOpen = jSONObject2.optInt("m");
            this.imeiOpen = jSONObject2.optInt(t.e);
        } catch (Exception unused2) {
        }
        try {
            String strD2 = a.d(m.a().f());
            if (this.imeiOpen == 1 && !TextUtils.isEmpty(strD2)) {
                obj = strD2;
            }
            jSONObject.put("IMEI", obj);
            jSONObject.put("OAID", a.c(m.a().f()));
        } catch (Exception unused3) {
        }
    }

    @Override // com.tkay.core.api.IExHandler
    public String fillCDataParam(String str) {
        if (str == null) {
            return "";
        }
        String strD = this.imeiOpen == 1 ? a.d(m.a().f()) : "";
        String strA = this.macOpen == 1 ? a.a() : "";
        String strB = a.b();
        if (strD == null) {
            strD = "";
        }
        String strReplaceAll = str.replaceAll("at_device1", strD);
        if (strA == null) {
            strA = "";
        }
        return strReplaceAll.replaceAll("at_device2", strA).replaceAll("at_device3", strB != null ? strB : "");
    }

    @Override // com.tkay.core.api.IExHandler
    public void handleOfferClick(Context context, i iVar, h hVar, String str, String str2, Runnable runnable, b bVar) {
        com.tkay.china.common.a.a(context).a(context, iVar, hVar, str, str2, runnable, bVar);
    }

    @Override // com.tkay.core.api.IExHandler
    public TYEventInterface createDownloadListener(TYBaseAdAdapter tYBaseAdAdapter, BaseAd baseAd, TYEventInterface tYEventInterface) {
        return new c(tYBaseAdAdapter, baseAd, tYEventInterface);
    }

    @Override // com.tkay.core.api.IExHandler
    public void openApkConfirmDialog(Context context, h hVar, i iVar, com.tkay.core.common.g.a aVar) {
        ApkConfirmDialogActivity.a(context, hVar, aVar);
    }

    @Override // com.tkay.core.api.IExHandler
    public int checkDownloadType(h hVar, i iVar) {
        return com.tkay.china.common.a.a(m.a().f()).b(hVar);
    }

    @Override // com.tkay.core.api.IExHandler
    public boolean checkDebuggerDevice(Context context, String str) {
        String strB = a.b();
        if (TextUtils.isEmpty(strB)) {
            strB = p.b(context, f.o, "oaid", "");
        }
        return TextUtils.equals(str, strB);
    }
}
