package com.bianfeng.splitscreenwindow;

import android.app.Activity;
import com.bianfeng.splitscreenwindow.ui.SplitScreenWindowManager;
import com.bianfeng.splitscreenwindow.ui.YmnH5WebviewActivity;
import com.bianfeng.splitscreenwindow.ui.YmnH5WebviewLandActivity;
import com.bianfeng.thridlibrary.ThridSdk;
import com.bianfeng.utilslib.UtilsSdk;
import com.bianfeng.ymnsdk.feature.protocol.IPaymentFeature;
import java.util.HashMap;
import java.util.Map;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes.dex */
public class SplitScreenSdk {
    private static volatile SplitScreenSdk screenSdk;
    private Activity activity;
    private String shopid;
    private ShowType showtype;
    private SplitScreenWindowManager windowManager;

    private SplitScreenSdk() {
    }

    public static SplitScreenSdk getInstance() {
        if (screenSdk == null) {
            synchronized (SplitScreenSdk.class) {
                if (screenSdk == null) {
                    screenSdk = new SplitScreenSdk();
                }
            }
        }
        return screenSdk;
    }

    public void init(Activity activity, String str, ShowType showType) {
        this.activity = activity;
        this.shopid = str;
        this.showtype = showType;
        UtilsSdk.getLogger().i("data_map init: shopid" + str);
        show(showType);
    }

    /* JADX INFO: renamed from: com.bianfeng.splitscreenwindow.SplitScreenSdk$1, reason: invalid class name */
    static /* synthetic */ class AnonymousClass1 {
        static final /* synthetic */ int[] $SwitchMap$com$bianfeng$splitscreenwindow$ShowType;

        static {
            int[] iArr = new int[ShowType.values().length];
            $SwitchMap$com$bianfeng$splitscreenwindow$ShowType = iArr;
            try {
                iArr[ShowType.FENPING_LAND.ordinal()] = 1;
            } catch (NoSuchFieldError unused) {
            }
            try {
                $SwitchMap$com$bianfeng$splitscreenwindow$ShowType[ShowType.FENPING_PORTRAIT.ordinal()] = 2;
            } catch (NoSuchFieldError unused2) {
            }
            try {
                $SwitchMap$com$bianfeng$splitscreenwindow$ShowType[ShowType.QUANPING_PORTRAIT.ordinal()] = 3;
            } catch (NoSuchFieldError unused3) {
            }
            try {
                $SwitchMap$com$bianfeng$splitscreenwindow$ShowType[ShowType.QUANPING_LAND.ordinal()] = 4;
            } catch (NoSuchFieldError unused4) {
            }
            try {
                $SwitchMap$com$bianfeng$splitscreenwindow$ShowType[ShowType.ACTIVITY_LAND.ordinal()] = 5;
            } catch (NoSuchFieldError unused5) {
            }
            try {
                $SwitchMap$com$bianfeng$splitscreenwindow$ShowType[ShowType.ACTIVITY_PORTRAIT.ordinal()] = 6;
            } catch (NoSuchFieldError unused6) {
            }
        }
    }

    private void show(ShowType showType) {
        int i = AnonymousClass1.$SwitchMap$com$bianfeng$splitscreenwindow$ShowType[showType.ordinal()];
        if ((i == 1 || i == 2 || i == 3 || i == 4) && this.windowManager == null) {
            this.windowManager = new SplitScreenWindowManager(this.activity);
        }
    }

    public void show(String str) {
        switch (AnonymousClass1.$SwitchMap$com$bianfeng$splitscreenwindow$ShowType[this.showtype.ordinal()]) {
            case 1:
            case 2:
            case 3:
            case 4:
                SplitScreenWindowManager splitScreenWindowManager = this.windowManager;
                if (splitScreenWindowManager != null) {
                    splitScreenWindowManager.setShowType(this.showtype);
                    this.windowManager.show(str);
                }
                break;
            case 5:
                closeWindow();
                YmnH5WebviewLandActivity.start(this.activity, str);
                break;
            case 6:
                closeWindow();
                YmnH5WebviewActivity.start(this.activity, str);
                break;
        }
    }

    public void pay(String str) {
        Map<String, String> mapFromJson = ThridSdk.getGson().fromJson(str);
        HashMap map = new HashMap();
        for (Map.Entry<String, String> entry : mapFromJson.entrySet()) {
            map.put(entry.getKey(), entry.getValue());
        }
        map.put(IPaymentFeature.ARG_SHOP_ID_V2, this.shopid);
        UtilsSdk.getLogger().i("data_map:" + map);
        UtilsSdk.getReflexCall().onCallWithObject(UtilsSdk.getClassNameSet().getH5PayCallback(), map);
    }

    public void payWeb(String str) {
        String string;
        Map<String, String> mapFromJson = ThridSdk.getGson().fromJson(str);
        HashMap map = new HashMap();
        for (Map.Entry<String, String> entry : mapFromJson.entrySet()) {
            map.put(entry.getKey(), entry.getValue());
        }
        try {
            string = new JSONObject((String) map.get("ext")).getString("app_cp");
        } catch (JSONException e) {
            e.printStackTrace();
            string = "";
        }
        map.put("cp", string);
        map.put(IPaymentFeature.ARG_SHOP_ID_V2, this.shopid);
        map.put("game_id", (String) map.get("gameid"));
        map.put(com.bianfeng.paylib.action.IPaymentFeature.ARG_THIRD_GAME_EXT, (String) map.get("ext"));
        map.put("ext", UtilsSdk.getAppConfig().getExt());
        map.put("sdk_version", UtilsSdk.getAppConfig().getSdkVersion());
        UtilsSdk.getReflexCall().onCallWithObject(UtilsSdk.getClassNameSet().getH5PayWebCallback(), map);
    }

    public void endPay() {
        SplitScreenWindowManager splitScreenWindowManager = this.windowManager;
        if (splitScreenWindowManager != null) {
            splitScreenWindowManager.setPaying();
        }
    }

    private void closeWindow() {
        SplitScreenWindowManager splitScreenWindowManager = this.windowManager;
        if (splitScreenWindowManager != null) {
            splitScreenWindowManager.closeWindow();
            this.windowManager = null;
        }
    }

    public void onDestory() {
        SplitScreenWindowManager splitScreenWindowManager = this.windowManager;
        if (splitScreenWindowManager != null) {
            splitScreenWindowManager.onDestory();
        }
    }

    public void onWindowFocusChanged(boolean z, Activity activity) {
        SplitScreenWindowManager splitScreenWindowManager = this.windowManager;
        if (splitScreenWindowManager == null) {
            return;
        }
        if (z) {
            splitScreenWindowManager.onResume(activity);
        } else {
            splitScreenWindowManager.onPause();
        }
    }
}
