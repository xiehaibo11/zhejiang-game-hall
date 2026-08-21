package com.ss.android.downloadlib.df;

import android.net.Uri;
import android.text.TextUtils;
import com.ss.android.download.api.constant.BaseConstants;
import com.ss.android.download.api.model.DeepLink;
import com.ss.android.downloadad.api.download.AdDownloadModel;
import com.ss.android.downloadlib.addownload.model.OpenAppResult;
import com.ss.android.downloadlib.constants.EventConstants;
import com.ss.android.downloadlib.event.AdEventHandler;
import com.ss.android.downloadlib.utils.b;
import com.ss.android.socialbase.downloader.notification.DownloadNotificationManager;
import com.ss.android.socialbase.downloader.setting.DownloadSetting;
import org.json.JSONObject;

public class rg {
    public static boolean rg(com.ss.android.downloadlib.addownload.model.pp ppVar) {
        boolean z;
        DeepLink deepLink = ppVar.df.getDeepLink();
        String openUrl = deepLink == null ? null : deepLink.getOpenUrl();
        JSONObject jSONObjectRg = com.ss.android.downloadlib.utils.pp.rg(new JSONObject(), ppVar);
        b.rg(jSONObjectRg, EventConstants.ExtraJson.APPLINK_SOURCE, EventConstants.AppLinkSource.CLICK_BY_SDK);
        AdEventHandler.rg().df(EventConstants.Label.APPLINK_CLICK, jSONObjectRg, ppVar);
        OpenAppResult openAppResultRg = com.ss.android.downloadlib.utils.ux.rg(openUrl, ppVar);
        if (openAppResultRg.getType() == 2) {
            if (!TextUtils.isEmpty(openUrl)) {
                df(EventConstants.AppLinkSource.BY_URL, openAppResultRg, jSONObjectRg, ppVar);
            }
            openAppResultRg = com.ss.android.downloadlib.utils.ux.rg(com.ss.android.downloadlib.addownload.bm.getContext(), ppVar.df.getPackageName(), ppVar);
        }
        boolean z2 = false;
        if (rg(ppVar.rg) && com.ss.android.downloadlib.addownload.bm.rz().optInt("link_ad_click_event") == 1) {
            if (ppVar.df instanceof AdDownloadModel) {
                ((AdDownloadModel) ppVar.df).setFunnelType(4);
            }
            AdEventHandler.rg().rg(ppVar.rg, 0);
            z = true;
        } else {
            z = false;
        }
        int type = openAppResultRg.getType();
        if (type == 1) {
            df(EventConstants.AppLinkSource.BY_URL, jSONObjectRg, ppVar);
        } else if (type == 3) {
            rg(EventConstants.AppLinkSource.BY_PACKAGE, jSONObjectRg, ppVar);
        } else {
            if (type == 4) {
                rg(EventConstants.AppLinkSource.BY_PACKAGE, openAppResultRg, jSONObjectRg, ppVar);
            } else {
                com.ss.android.downloadlib.exception.q.rg().df("AppLinkClick default");
            }
            if (z2 && !z && ((com.ss.android.downloadlib.event.df.rg().df() && !com.ss.android.downloadlib.event.df.rg().df(ppVar.rg, ppVar.df.getLogExtra())) || com.ss.android.downloadlib.event.df.rg().q())) {
                AdEventHandler.rg().rg(ppVar.rg, 2);
            }
            return z2;
        }
        z2 = true;
        if (z2) {
            AdEventHandler.rg().rg(ppVar.rg, 2);
        }
        return z2;
    }

    public static void rg(com.ss.android.downloadad.api.rg.df dfVar) {
        String strC = dfVar.c();
        JSONObject jSONObjectRg = com.ss.android.downloadlib.utils.pp.rg(new JSONObject(), dfVar);
        b.rg(jSONObjectRg, EventConstants.ExtraJson.APPLINK_SOURCE, EventConstants.AppLinkSource.NOTIFY_CLICK);
        AdEventHandler.rg().df(EventConstants.Label.APPLINK_CLICK, jSONObjectRg, dfVar);
        OpenAppResult openAppResultRg = com.ss.android.downloadlib.utils.ux.rg(strC, dfVar);
        if (openAppResultRg.getType() == 2) {
            if (!TextUtils.isEmpty(strC)) {
                df(EventConstants.AppLinkSource.NOTIFY_BY_URL, openAppResultRg, jSONObjectRg, dfVar);
            }
            openAppResultRg = com.ss.android.downloadlib.utils.ux.rg(com.ss.android.downloadlib.addownload.bm.getContext(), dfVar.pp(), dfVar);
        }
        int type = openAppResultRg.getType();
        if (type == 1) {
            df(EventConstants.AppLinkSource.NOTIFY_BY_URL, jSONObjectRg, dfVar);
            return;
        }
        if (type == 3) {
            rg(EventConstants.AppLinkSource.NOTIFY_BY_PACKAGE, jSONObjectRg, dfVar);
        } else if (type == 4) {
            rg(EventConstants.AppLinkSource.NOTIFY_BY_PACKAGE, openAppResultRg, jSONObjectRg, dfVar);
        } else {
            com.ss.android.downloadlib.exception.q.rg().df("AppLinkClickNotification default");
        }
    }

    public static void df(com.ss.android.downloadad.api.rg.df dfVar) {
        if (dfVar == null) {
            return;
        }
        String strC = DownloadSetting.obtainGlobal().optInt("app_link_opt") == 1 ? dfVar.c() : null;
        JSONObject jSONObjectRg = com.ss.android.downloadlib.utils.pp.rg(new JSONObject(), dfVar);
        b.rg(jSONObjectRg, EventConstants.ExtraJson.APPLINK_SOURCE, EventConstants.AppLinkSource.DIALOG_CLICK);
        AdEventHandler.rg().df(EventConstants.Label.APPLINK_CLICK, jSONObjectRg, dfVar);
        OpenAppResult openAppResultRg = com.ss.android.downloadlib.utils.ux.rg(strC, dfVar);
        if (openAppResultRg.getType() == 2) {
            if (!TextUtils.isEmpty(strC)) {
                df(EventConstants.AppLinkSource.DIALOG_BY_URL, openAppResultRg, jSONObjectRg, dfVar);
            }
            openAppResultRg = com.ss.android.downloadlib.utils.ux.rg(com.ss.android.downloadlib.addownload.bm.getContext(), dfVar.pp(), dfVar);
        }
        int type = openAppResultRg.getType();
        if (type == 1) {
            df(EventConstants.AppLinkSource.DIALOG_BY_URL, jSONObjectRg, dfVar);
            return;
        }
        if (type == 3) {
            rg(EventConstants.AppLinkSource.DIALOG_BY_PACKAGE, jSONObjectRg, dfVar);
        } else if (type == 4) {
            rg(EventConstants.AppLinkSource.DIALOG_BY_PACKAGE, openAppResultRg, jSONObjectRg, dfVar);
        } else {
            com.ss.android.downloadlib.exception.q.rg().df("AppLinkClickDialog default");
        }
    }

    public static boolean rg(String str, com.ss.android.downloadad.api.rg.df dfVar) {
        if (!com.ss.android.downloadlib.addownload.ux.df(dfVar.om())) {
            return false;
        }
        if (TextUtils.isEmpty(dfVar.c()) && TextUtils.isEmpty(str)) {
            return false;
        }
        DownloadNotificationManager.getInstance().cancelNotification(dfVar.qx());
        JSONObject jSONObject = new JSONObject();
        com.ss.android.downloadlib.utils.pp.rg(jSONObject, dfVar);
        b.rg(jSONObject, EventConstants.ExtraJson.APPLINK_SOURCE, EventConstants.AppLinkSource.AUTO_CLICK);
        AdEventHandler.rg().df(EventConstants.Label.APPLINK_CLICK, dfVar);
        OpenAppResult openAppResultRg = com.ss.android.downloadlib.utils.ux.rg(dfVar, dfVar.c(), dfVar.pp());
        int type = openAppResultRg.getType();
        if (type == 1) {
            df(EventConstants.AppLinkSource.AUTO_BY_URL, jSONObject, dfVar);
            return true;
        }
        if (type == 2) {
            df(EventConstants.AppLinkSource.AUTO_BY_URL, openAppResultRg, jSONObject, dfVar);
            return false;
        }
        if (type == 3) {
            rg(EventConstants.AppLinkSource.AUTO_BY_PACKAGE, jSONObject, dfVar);
            return true;
        }
        if (type != 4) {
            return false;
        }
        rg(EventConstants.AppLinkSource.AUTO_BY_PACKAGE, openAppResultRg, jSONObject, dfVar);
        return false;
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    /* JADX WARN: Failed to restore switch over string. Please report as a decompilation issue */
    /* JADX WARN: Removed duplicated region for block: B:17:0x004e  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static void rg(String str, final JSONObject jSONObject, final com.ss.android.downloadad.api.rg.rg rgVar) {
        byte b;
        b.rg(jSONObject, EventConstants.ExtraJson.APPLINK_SOURCE, str);
        b.rg(jSONObject, EventConstants.ExtraJson.DOWNLOAD_SCENE, Integer.valueOf(rgVar.n()));
        AdEventHandler.rg().df(EventConstants.Label.DEEPLINK_APP_OPEN, jSONObject, rgVar);
        switch (str.hashCode()) {
            case -1282070764:
                b = !str.equals(EventConstants.AppLinkSource.NOTIFY_BY_PACKAGE) ? (byte) -1 : (byte) 0;
                break;
            case -441514770:
                if (str.equals(EventConstants.AppLinkSource.AUTO_BY_PACKAGE)) {
                    b = 1;
                    break;
                }
                break;
            case -185950114:
                if (str.equals(EventConstants.AppLinkSource.BY_PACKAGE)) {
                    b = 2;
                    break;
                }
                break;
            case 368401333:
                if (str.equals(EventConstants.AppLinkSource.DIALOG_BY_PACKAGE)) {
                    b = 3;
                    break;
                }
                break;
        }
        if (b == 0 || b == 1 || b == 2 || b == 3) {
            if ((com.ss.android.downloadlib.addownload.bm.rz().optInt("check_applink_mode") & 1) != 0) {
                b.rg(jSONObject, EventConstants.ExtraJson.CHECK_APPLINK_RESULT_BY_SDK, (Object) 1);
                pp.rg().rg(new pt() {
                    @Override
                    public void rg(boolean z) {
                        AdEventHandler.rg().df(z ? EventConstants.Label.DEEPLINK_SUCCESS : EventConstants.Label.DEEPLINK_FAILED, jSONObject, rgVar);
                        if (z) {
                            com.ss.android.downloadlib.addownload.bm.n().rg(com.ss.android.downloadlib.addownload.bm.getContext(), rgVar.ou(), rgVar.fo(), rgVar.y(), rgVar.pp(), 0);
                        }
                    }
                });
            } else {
                com.ss.android.downloadlib.addownload.bm.df().rg(com.ss.android.downloadlib.addownload.bm.getContext(), rgVar.ou(), rgVar.fo(), rgVar.y(), rgVar.pp(), str);
            }
        }
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    /* JADX WARN: Failed to restore switch over string. Please report as a decompilation issue */
    /* JADX WARN: Removed duplicated region for block: B:17:0x004e  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static void df(String str, final JSONObject jSONObject, final com.ss.android.downloadad.api.rg.rg rgVar) {
        byte b;
        b.rg(jSONObject, EventConstants.ExtraJson.APPLINK_SOURCE, str);
        b.rg(jSONObject, EventConstants.ExtraJson.DOWNLOAD_SCENE, Integer.valueOf(rgVar.n()));
        AdEventHandler.rg().df(EventConstants.Label.DEEPLINK_URL_OPEN, jSONObject, rgVar);
        switch (str.hashCode()) {
            case -1721882089:
                b = !str.equals(EventConstants.AppLinkSource.AUTO_BY_URL) ? (byte) -1 : (byte) 1;
                break;
            case -1374618233:
                if (str.equals(EventConstants.AppLinkSource.BY_URL)) {
                    b = 2;
                    break;
                }
                break;
            case -129544387:
                if (str.equals(EventConstants.AppLinkSource.NOTIFY_BY_URL)) {
                    b = 0;
                    break;
                }
                break;
            case 829750366:
                if (str.equals(EventConstants.AppLinkSource.DIALOG_BY_URL)) {
                    b = 3;
                    break;
                }
                break;
        }
        if (b == 0 || b == 1 || b == 2 || b == 3) {
            if ((com.ss.android.downloadlib.addownload.bm.rz().optInt("check_applink_mode") & 1) != 0) {
                b.rg(jSONObject, EventConstants.ExtraJson.CHECK_APPLINK_RESULT_BY_SDK, (Object) 1);
                pp.rg().rg(new pt() {
                    @Override
                    public void rg(boolean z) {
                        AdEventHandler.rg().df(z ? EventConstants.Label.DEEPLINK_SUCCESS : EventConstants.Label.DEEPLINK_FAILED, jSONObject, rgVar);
                        if (z) {
                            com.ss.android.downloadlib.addownload.bm.n().rg(com.ss.android.downloadlib.addownload.bm.getContext(), rgVar.ou(), rgVar.fo(), rgVar.y(), rgVar.pp(), 0);
                        }
                    }
                });
            } else {
                com.ss.android.downloadlib.addownload.bm.df().rg(com.ss.android.downloadlib.addownload.bm.getContext(), rgVar.ou(), rgVar.fo(), rgVar.y(), rgVar.pp(), str);
            }
        }
    }

    public static void rg(String str, OpenAppResult openAppResult, JSONObject jSONObject, com.ss.android.downloadad.api.rg.rg rgVar) {
        b.rg(jSONObject, EventConstants.ExtraJson.APPLINK_SOURCE, str);
        b.rg(jSONObject, "error_code", Integer.valueOf(openAppResult.rg()));
        b.rg(jSONObject, EventConstants.ExtraJson.DOWNLOAD_SCENE, Integer.valueOf(rgVar.n()));
        AdEventHandler.rg().df(EventConstants.Label.DEEPLINK_APP_OPEN_FAIL, jSONObject, rgVar);
    }

    public static void df(String str, OpenAppResult openAppResult, JSONObject jSONObject, com.ss.android.downloadad.api.rg.rg rgVar) {
        b.rg(jSONObject, EventConstants.ExtraJson.APPLINK_SOURCE, str);
        b.rg(jSONObject, "error_code", Integer.valueOf(openAppResult.rg()));
        b.rg(jSONObject, EventConstants.ExtraJson.DOWNLOAD_SCENE, Integer.valueOf(rgVar.n()));
        AdEventHandler.rg().df(EventConstants.Label.DEEPLINK_URL_OPEN_FAIL, jSONObject, rgVar);
    }

    public static boolean rg(com.ss.android.downloadlib.addownload.model.pp ppVar, int i) {
        JSONObject jSONObject = new JSONObject();
        b.rg(jSONObject, EventConstants.ExtraJson.DOWNLOAD_SCENE, Integer.valueOf(ppVar.n()));
        AdEventHandler.rg().df(EventConstants.Label.MARKET_CLICK_OPEN, jSONObject, ppVar);
        OpenAppResult openAppResultRg = com.ss.android.downloadlib.utils.ux.rg(com.ss.android.downloadlib.addownload.bm.getContext(), ppVar, ppVar.df.getPackageName());
        String strRg = b.rg(openAppResultRg.df(), "open_market");
        int type = openAppResultRg.getType();
        if (type == 5) {
            rg(strRg, jSONObject, ppVar, true);
        } else {
            if (type == 6) {
                b.rg(jSONObject, "error_code", Integer.valueOf(openAppResultRg.rg()));
                b.rg(jSONObject, EventConstants.ExtraJson.DOWNLOAD_SCENE, Integer.valueOf(ppVar.n()));
                AdEventHandler.rg().df(EventConstants.Label.MARKET_OPEN_FAILED, jSONObject, ppVar);
                return false;
            }
            if (type != 7) {
                return false;
            }
        }
        AdEventHandler.rg().rg(ppVar.rg, i);
        return true;
    }

    public static void rg(final String str, final JSONObject jSONObject, final com.ss.android.downloadlib.addownload.model.pp ppVar, boolean z) {
        if (jSONObject == null) {
            try {
                jSONObject = new JSONObject();
            } catch (Exception e) {
                com.ss.android.downloadlib.exception.q.rg().rg(e, "onMarketSuccess");
                return;
            }
        }
        b.rg(jSONObject, EventConstants.ExtraJson.APPLINK_SOURCE, str);
        b.rg(jSONObject, EventConstants.ExtraJson.DOWNLOAD_SCENE, Integer.valueOf(ppVar.n()));
        if (z) {
            AdEventHandler.rg().df(EventConstants.Label.MARKET_OPEN_SUCCESS, jSONObject, ppVar);
        }
        if ((com.ss.android.downloadlib.addownload.bm.rz().optInt("check_applink_mode") & 4) != 0) {
            pp.rg().df(new pt() {
                @Override
                public void rg(boolean z2) {
                    if (!z2 && !"open_market".equals(str)) {
                        rg.rg(com.ss.android.downloadlib.utils.ux.rg(com.ss.android.downloadlib.addownload.bm.getContext(), Uri.parse(BaseConstants.MARKET_PREFIX + ppVar.pp())), ppVar, false);
                    }
                    AdEventHandler.rg().rg(z2 ? EventConstants.UnityLabel.MARKET_DELAY_SUCCESS : EventConstants.UnityLabel.MARKET_DELAY_FAILED, jSONObject, ppVar);
                    if (z2) {
                        com.ss.android.downloadlib.addownload.bm.n().rg(com.ss.android.downloadlib.addownload.bm.getContext(), ppVar.df, ppVar.pt, ppVar.q, ppVar.df.getPackageName(), 2);
                    }
                }
            });
        } else {
            com.ss.android.downloadlib.addownload.bm.df().rg(com.ss.android.downloadlib.addownload.bm.getContext(), ppVar.df, ppVar.pt, ppVar.q, ppVar.df.getPackageName(), str);
        }
        com.ss.android.downloadad.api.rg.df dfVar = new com.ss.android.downloadad.api.rg.df(ppVar.df, ppVar.q, ppVar.pt);
        dfVar.pp(2);
        dfVar.c(System.currentTimeMillis());
        dfVar.ux(4);
        dfVar.rz(2);
        com.ss.android.downloadlib.addownload.model.c.rg().rg(dfVar);
    }

    public static void rg(OpenAppResult openAppResult, com.ss.android.downloadlib.addownload.model.pp ppVar, boolean z) {
        String strRg = b.rg(openAppResult.df(), "open_market");
        JSONObject jSONObject = new JSONObject();
        b.rg(jSONObject, EventConstants.ExtraJson.KEY_TYPE, "backup");
        int type = openAppResult.getType();
        if (type == 5) {
            rg(strRg, jSONObject, ppVar, z);
        } else {
            if (type != 6) {
                return;
            }
            b.rg(jSONObject, "error_code", Integer.valueOf(openAppResult.rg()));
            b.rg(jSONObject, EventConstants.ExtraJson.DOWNLOAD_SCENE, Integer.valueOf(ppVar.n()));
            AdEventHandler.rg().df(EventConstants.Label.MARKET_OPEN_FAILED, jSONObject, ppVar);
        }
    }

    public static boolean rg(long j) {
        return com.ss.android.downloadlib.addownload.model.c.rg().pt(j) == null;
    }
}
