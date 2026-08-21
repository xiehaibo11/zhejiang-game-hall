package com.mbridge.msdk.out;

import android.content.Context;
import android.content.res.Resources;
import android.text.TextUtils;
import android.view.View;
import com.kuaishou.weapon.p0.t;
import com.mbridge.msdk.MBridgeConstans;
import com.mbridge.msdk.click.b;
import com.mbridge.msdk.foundation.db.f;
import com.mbridge.msdk.foundation.db.i;
import com.mbridge.msdk.foundation.tools.ad;
import com.mbridge.msdk.foundation.tools.ae;
import com.mbridge.msdk.foundation.tools.ai;
import com.mbridge.msdk.foundation.tools.z;
import com.mbridge.msdk.mbjscommon.confirmation.e;
import com.mbridge.msdk.mbnative.c.a;
import com.mbridge.msdk.out.NativeListener;
import com.xiaomi.mipush.sdk.Constants;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import org.json.JSONArray;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public class MBBidNativeHandler extends MBBidCommonHandler {
    private static final String TAG = MBBidNativeHandler.class.getName();
    public static final String TEMPLATE_ID = "id";
    public static final String TEMPLATE_NUM = "ad_num";
    private static String mUnitID;
    private a adListener;
    private b clickControler;
    private Context context;
    private Map<String, Object> map;
    private com.mbridge.msdk.mbnative.e.a nativeProvider;
    private List<NativeListener.Template> templateList;
    private NativeListener.NativeTrackingListener trackingListener;

    public void setMustBrowser(boolean z) {
        ad.b = z;
    }

    public MBBidNativeHandler(Context context) {
        this.adListener = new a();
        this.context = context;
        if (com.mbridge.msdk.foundation.controller.a.f().j() == null && context != null) {
            com.mbridge.msdk.foundation.controller.a.f().b(context);
        }
        Map<String, Object> map = this.map;
        if (map == null || !map.containsKey("unit_id")) {
            return;
        }
        String str = (String) this.map.get("unit_id");
        a aVar = this.adListener;
        if (aVar != null) {
            aVar.a(str);
        }
        if (TextUtils.isEmpty(str)) {
            return;
        }
        String strF = ae.f(str);
        if (TextUtils.isEmpty(strF)) {
            return;
        }
        ae.a(str, strF);
    }

    public MBBidNativeHandler(Map<String, Object> map, Context context) {
        super(map, context);
        this.adListener = new a();
        this.context = context;
        this.map = map;
        if (com.mbridge.msdk.foundation.controller.a.f().j() == null && context != null) {
            com.mbridge.msdk.foundation.controller.a.f().b(context);
        }
        if (map != null) {
            try {
                if (map.containsKey("unit_id") && map.get("unit_id") != null && (map.get("unit_id") instanceof String) && map.containsKey("native_video_width") && map.get("native_video_width") != null && (map.get("native_video_width") instanceof Integer) && map.containsKey("native_video_height") && map.get("native_video_height") != null) {
                    boolean z = map.get("native_video_height") instanceof Integer;
                }
            } catch (Throwable th) {
                th.printStackTrace();
            }
        }
        if (map == null || !map.containsKey("unit_id")) {
            return;
        }
        String str = (String) map.get("unit_id");
        a aVar = this.adListener;
        if (aVar != null) {
            aVar.a(str);
        }
        if (TextUtils.isEmpty(str)) {
            return;
        }
        String strF = ae.f(str);
        if (TextUtils.isEmpty(strF)) {
            return;
        }
        ae.a(str, strF);
    }

    @Override // com.mbridge.msdk.out.MBBidCommonHandler
    public void bidLoad(String str) {
        if (this.properties != null && this.properties.containsKey("unit_id")) {
            loadMB(str);
        } else {
            z.c("", "no unit id.");
        }
    }

    @Override // com.mbridge.msdk.out.MBBidCommonHandler
    public void bidRelease() {
        com.mbridge.msdk.mbnative.e.a aVar = this.nativeProvider;
        if (aVar != null) {
            aVar.d();
        }
    }

    public static Map<String, Object> getNativeProperties(String str, String str2) {
        HashMap map = new HashMap();
        mUnitID = str2;
        map.put("unit_id", str2);
        String str3 = MBridgeConstans.PLACEMENT_ID;
        if (TextUtils.isEmpty(str)) {
            str = "";
        }
        map.put(str3, str);
        map.put("plugin_name", new String[]{MBridgeConstans.PLUGIN_NATIVE});
        map.put(MBridgeConstans.PROPERTIES_LAYOUT_TYPE, 0);
        return map;
    }

    public void addTemplate(NativeListener.Template template) {
        if (template != null) {
            if (this.templateList == null) {
                this.templateList = new ArrayList();
            }
            this.templateList.add(template);
        }
    }

    public void handleResult(Campaign campaign, String str) {
        if (this.clickControler == null) {
            Map<String, Object> map = this.map;
            this.clickControler = new b(this.context, map != null ? (String) map.get("unit_id") : null);
        }
        this.clickControler.a(campaign, str);
    }

    public String buildTemplateString() {
        try {
            if (this.templateList == null || this.templateList.size() <= 0) {
                return null;
            }
            StringBuffer stringBuffer = new StringBuffer();
            for (NativeListener.Template template : this.templateList) {
                stringBuffer.append("{\"id\":");
                stringBuffer.append(template.getId() + Constants.ACCEPT_TIME_SEPARATOR_SP);
                stringBuffer.append("\"ad_num\":");
                stringBuffer.append(template.getAdNum() + "},");
            }
            return "[{$native_info}]".replace("{$native_info}", stringBuffer.subSequence(0, stringBuffer.lastIndexOf(Constants.ACCEPT_TIME_SEPARATOR_SP)));
        } catch (Exception unused) {
            return null;
        }
    }

    public static String getTemplateString(List<NativeListener.Template> list) {
        if (list == null) {
            return null;
        }
        try {
            if (list.size() <= 0) {
                return null;
            }
            StringBuffer stringBuffer = new StringBuffer();
            for (NativeListener.Template template : list) {
                stringBuffer.append("{\"id\":");
                stringBuffer.append(template.getId() + Constants.ACCEPT_TIME_SEPARATOR_SP);
                stringBuffer.append("\"ad_num\":");
                stringBuffer.append(template.getAdNum() + "},");
            }
            return "[{$native_info}]".replace("{$native_info}", stringBuffer.subSequence(0, stringBuffer.lastIndexOf(Constants.ACCEPT_TIME_SEPARATOR_SP)));
        } catch (Exception unused) {
            return null;
        }
    }

    public static String parseKeyWordInfoListStr(List<KeyWordInfo> list) {
        if (list == null || list.size() <= 0) {
            return null;
        }
        try {
            JSONArray jSONArray = new JSONArray();
            for (int i = 0; i < list.size(); i++) {
                JSONObject jSONObject = new JSONObject();
                KeyWordInfo keyWordInfo = list.get(i);
                if (!TextUtils.isEmpty(keyWordInfo.getKeyWordPN()) && !TextUtils.isEmpty(keyWordInfo.getKeyWorkVN())) {
                    jSONObject.put("p", keyWordInfo.getKeyWordPN());
                    jSONObject.put("v", keyWordInfo.getKeyWorkVN());
                    com.mbridge.msdk.foundation.controller.a aVarF = com.mbridge.msdk.foundation.controller.a.f();
                    if (aVarF != null) {
                        List<String> listA = aVarF.a(false);
                        if (listA != null) {
                            if (listA.contains(keyWordInfo.getKeyWordPN())) {
                                jSONObject.put(t.e, 1);
                            } else {
                                jSONObject.put(t.e, 0);
                            }
                        } else {
                            jSONObject.put(t.e, 2);
                        }
                    }
                    jSONArray.put(jSONObject);
                }
            }
            return jSONArray.toString();
        } catch (Exception e) {
            e.printStackTrace();
            z.d(TAG, e.getMessage());
            return null;
        }
    }

    private void loadMB(String str) {
        a aVar;
        if (TextUtils.isEmpty(str) && (aVar = this.adListener) != null) {
            aVar.onAdLoadError("bidToken can not be null, bid first");
            return;
        }
        if (this.properties != null && this.properties.containsKey("unit_id")) {
            List<NativeListener.Template> list = this.templateList;
            if (list != null && list.size() > 0) {
                try {
                    this.properties.put("native_info", buildTemplateString());
                } catch (Exception unused) {
                    z.c("com.mbridge.msdk", "MBSDK set template error");
                }
            }
            try {
                this.properties.put(MBridgeConstans.PROPERTIES_HANDLER_CONTROLLER, this);
                if (this.nativeProvider == null) {
                    com.mbridge.msdk.mbnative.e.a aVar2 = new com.mbridge.msdk.mbnative.e.a(this.adListener, this.trackingListener);
                    this.nativeProvider = aVar2;
                    aVar2.a(this.context, (Resources) null, this.properties);
                }
                this.nativeProvider.a(str);
                return;
            } catch (Exception e) {
                e.printStackTrace();
                return;
            }
        }
        z.c("", "no unit id.");
    }

    public void registerView(View view, Campaign campaign) {
        if (this.nativeProvider == null) {
            this.nativeProvider = new com.mbridge.msdk.mbnative.e.a(this.adListener, this.trackingListener);
            if (this.properties != null) {
                this.properties.put(MBridgeConstans.PROPERTIES_HANDLER_CONTROLLER, this);
            }
            this.nativeProvider.a(this.context, (Resources) null, this.properties);
        }
        this.nativeProvider.a(view, campaign);
    }

    public void registerView(View view, List<View> list, Campaign campaign) {
        if (this.nativeProvider == null) {
            this.nativeProvider = new com.mbridge.msdk.mbnative.e.a(this.adListener, this.trackingListener);
            if (this.properties != null) {
                this.properties.put(MBridgeConstans.PROPERTIES_HANDLER_CONTROLLER, this);
            }
            this.nativeProvider.a(this.context, (Resources) null, this.properties);
        }
        this.nativeProvider.a(view, list, campaign);
    }

    public void unregisterView(View view, Campaign campaign) {
        if (this.nativeProvider == null) {
            this.nativeProvider = new com.mbridge.msdk.mbnative.e.a(this.adListener, this.trackingListener);
            if (this.properties != null) {
                this.properties.put(MBridgeConstans.PROPERTIES_HANDLER_CONTROLLER, this);
            }
            this.nativeProvider.a(this.context, (Resources) null, this.properties);
        }
        this.nativeProvider.b(view, campaign);
    }

    public void unregisterView(View view, List<View> list, Campaign campaign) {
        if (this.nativeProvider == null) {
            this.nativeProvider = new com.mbridge.msdk.mbnative.e.a(this.adListener, this.trackingListener);
            if (this.properties != null) {
                this.properties.put(MBridgeConstans.PROPERTIES_HANDLER_CONTROLLER, this);
            }
            this.nativeProvider.a(this.context, (Resources) null, this.properties);
        }
        this.nativeProvider.b(view, list, campaign);
    }

    public a getAdListener() {
        return this.adListener;
    }

    public void setAdListener(NativeListener.NativeAdListener nativeAdListener) {
        a aVar = new a(nativeAdListener);
        this.adListener = aVar;
        if (aVar != null) {
            aVar.a(mUnitID);
        }
        com.mbridge.msdk.mbnative.e.a aVar2 = this.nativeProvider;
        if (aVar2 != null) {
            aVar2.a(this.adListener);
        }
    }

    public NativeListener.NativeTrackingListener getTrackingListener() {
        return this.trackingListener;
    }

    public void setTrackingListener(NativeListener.NativeTrackingListener nativeTrackingListener) {
        this.trackingListener = nativeTrackingListener;
        com.mbridge.msdk.mbnative.e.a aVar = this.nativeProvider;
        if (aVar != null) {
            aVar.a(nativeTrackingListener);
        }
    }

    public static class KeyWordInfo {
        String keyWordPN;
        String keyWorkVN;

        public String getKeyWordPN() {
            return this.keyWordPN;
        }

        public void setKeyWordPN(String str) {
            this.keyWordPN = str;
        }

        public String getKeyWorkVN() {
            return this.keyWorkVN;
        }

        public void setKeyWorkVN(String str) {
            this.keyWorkVN = str;
        }

        public KeyWordInfo(String str, String str2) {
            this.keyWordPN = str;
            this.keyWorkVN = str2;
        }
    }

    public void clearVideoCache() {
        try {
            if (this.nativeProvider != null) {
                this.nativeProvider.c();
            }
        } catch (Exception e) {
            z.a(TAG, e.getMessage());
        }
    }

    public void clearCacheByUnitid(String str) {
        try {
            if (ai.a(str)) {
                return;
            }
            f.a(i.a(com.mbridge.msdk.foundation.controller.a.f().j())).c(str);
            com.mbridge.msdk.mbnative.a.f.a(3).a(str);
            com.mbridge.msdk.mbnative.a.f.a(6).a(str);
            com.mbridge.msdk.mbnative.a.f.a(7).a(str);
        } catch (Exception e) {
            z.a(TAG, e.getMessage());
        }
    }

    public void dismissConfirmDialog() {
        e.a().c();
    }
}
