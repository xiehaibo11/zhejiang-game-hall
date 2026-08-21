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

/* JADX INFO: loaded from: classes3.dex */
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
        To view partially-correct add '--show-bad-code' argument
    */
    public static void rg(java.lang.String r8, final org.json.JSONObject r9, final com.ss.android.downloadad.api.rg.rg r10) {
        /*
            java.lang.String r0 = "applink_source"
            com.ss.android.downloadlib.utils.b.rg(r9, r0, r8)
            int r0 = r10.n()
            java.lang.Integer r0 = java.lang.Integer.valueOf(r0)
            java.lang.String r1 = "download_scene"
            com.ss.android.downloadlib.utils.b.rg(r9, r1, r0)
            com.ss.android.downloadlib.event.AdEventHandler r0 = com.ss.android.downloadlib.event.AdEventHandler.rg()
            java.lang.String r1 = "deeplink_app_open"
            r0.df(r1, r9, r10)
            int r0 = r8.hashCode()
            r1 = 3
            r2 = 2
            r3 = 1
            switch(r0) {
                case -1282070764: goto L44;
                case -441514770: goto L3a;
                case -185950114: goto L30;
                case 368401333: goto L26;
                default: goto L25;
            }
        L25:
            goto L4e
        L26:
            java.lang.String r0 = "dialog_by_package"
            boolean r0 = r8.equals(r0)
            if (r0 == 0) goto L4e
            r0 = r1
            goto L4f
        L30:
            java.lang.String r0 = "by_package"
            boolean r0 = r8.equals(r0)
            if (r0 == 0) goto L4e
            r0 = r2
            goto L4f
        L3a:
            java.lang.String r0 = "auto_by_package"
            boolean r0 = r8.equals(r0)
            if (r0 == 0) goto L4e
            r0 = r3
            goto L4f
        L44:
            java.lang.String r0 = "notify_by_package"
            boolean r0 = r8.equals(r0)
            if (r0 == 0) goto L4e
            r0 = 0
            goto L4f
        L4e:
            r0 = -1
        L4f:
            if (r0 == 0) goto L58
            if (r0 == r3) goto L58
            if (r0 == r2) goto L58
            if (r0 == r1) goto L58
            goto L97
        L58:
            org.json.JSONObject r0 = com.ss.android.downloadlib.addownload.bm.rz()
            java.lang.String r1 = "check_applink_mode"
            int r0 = r0.optInt(r1)
            r0 = r0 & r3
            if (r0 == 0) goto L7b
            java.lang.Integer r8 = java.lang.Integer.valueOf(r3)
            java.lang.String r0 = "check_applink_result_by_sdk"
            com.ss.android.downloadlib.utils.b.rg(r9, r0, r8)
            com.ss.android.downloadlib.df.pp r8 = com.ss.android.downloadlib.df.pp.rg()
            com.ss.android.downloadlib.df.rg$1 r0 = new com.ss.android.downloadlib.df.rg$1
            r0.<init>()
            r8.rg(r0)
            goto L97
        L7b:
            com.ss.android.download.api.config.q r1 = com.ss.android.downloadlib.addownload.bm.df()
            android.content.Context r2 = com.ss.android.downloadlib.addownload.bm.getContext()
            com.ss.android.download.api.download.DownloadModel r3 = r10.ou()
            com.ss.android.download.api.download.DownloadController r4 = r10.fo()
            com.ss.android.download.api.download.DownloadEventConfig r5 = r10.y()
            java.lang.String r6 = r10.pp()
            r7 = r8
            r1.rg(r2, r3, r4, r5, r6, r7)
        L97:
            return
        */
        throw new UnsupportedOperationException("Method not decompiled: com.ss.android.downloadlib.df.rg.rg(java.lang.String, org.json.JSONObject, com.ss.android.downloadad.api.rg.rg):void");
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    /* JADX WARN: Failed to restore switch over string. Please report as a decompilation issue */
    /* JADX WARN: Removed duplicated region for block: B:17:0x004e  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public static void df(java.lang.String r8, final org.json.JSONObject r9, final com.ss.android.downloadad.api.rg.rg r10) {
        /*
            java.lang.String r0 = "applink_source"
            com.ss.android.downloadlib.utils.b.rg(r9, r0, r8)
            int r0 = r10.n()
            java.lang.Integer r0 = java.lang.Integer.valueOf(r0)
            java.lang.String r1 = "download_scene"
            com.ss.android.downloadlib.utils.b.rg(r9, r1, r0)
            com.ss.android.downloadlib.event.AdEventHandler r0 = com.ss.android.downloadlib.event.AdEventHandler.rg()
            java.lang.String r1 = "deeplink_url_open"
            r0.df(r1, r9, r10)
            int r0 = r8.hashCode()
            r1 = 3
            r2 = 2
            r3 = 1
            switch(r0) {
                case -1721882089: goto L44;
                case -1374618233: goto L3a;
                case -129544387: goto L30;
                case 829750366: goto L26;
                default: goto L25;
            }
        L25:
            goto L4e
        L26:
            java.lang.String r0 = "dialog_by_url"
            boolean r0 = r8.equals(r0)
            if (r0 == 0) goto L4e
            r0 = r1
            goto L4f
        L30:
            java.lang.String r0 = "notify_by_url"
            boolean r0 = r8.equals(r0)
            if (r0 == 0) goto L4e
            r0 = 0
            goto L4f
        L3a:
            java.lang.String r0 = "by_url"
            boolean r0 = r8.equals(r0)
            if (r0 == 0) goto L4e
            r0 = r2
            goto L4f
        L44:
            java.lang.String r0 = "auto_by_url"
            boolean r0 = r8.equals(r0)
            if (r0 == 0) goto L4e
            r0 = r3
            goto L4f
        L4e:
            r0 = -1
        L4f:
            if (r0 == 0) goto L58
            if (r0 == r3) goto L58
            if (r0 == r2) goto L58
            if (r0 == r1) goto L58
            goto L97
        L58:
            org.json.JSONObject r0 = com.ss.android.downloadlib.addownload.bm.rz()
            java.lang.String r1 = "check_applink_mode"
            int r0 = r0.optInt(r1)
            r0 = r0 & r3
            if (r0 == 0) goto L7b
            java.lang.Integer r8 = java.lang.Integer.valueOf(r3)
            java.lang.String r0 = "check_applink_result_by_sdk"
            com.ss.android.downloadlib.utils.b.rg(r9, r0, r8)
            com.ss.android.downloadlib.df.pp r8 = com.ss.android.downloadlib.df.pp.rg()
            com.ss.android.downloadlib.df.rg$2 r0 = new com.ss.android.downloadlib.df.rg$2
            r0.<init>()
            r8.rg(r0)
            goto L97
        L7b:
            com.ss.android.download.api.config.q r1 = com.ss.android.downloadlib.addownload.bm.df()
            android.content.Context r2 = com.ss.android.downloadlib.addownload.bm.getContext()
            com.ss.android.download.api.download.DownloadModel r3 = r10.ou()
            com.ss.android.download.api.download.DownloadController r4 = r10.fo()
            com.ss.android.download.api.download.DownloadEventConfig r5 = r10.y()
            java.lang.String r6 = r10.pp()
            r7 = r8
            r1.rg(r2, r3, r4, r5, r6, r7)
        L97:
            return
        */
        throw new UnsupportedOperationException("Method not decompiled: com.ss.android.downloadlib.df.rg.df(java.lang.String, org.json.JSONObject, com.ss.android.downloadad.api.rg.rg):void");
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
            pp.rg().df(new pt() { // from class: com.ss.android.downloadlib.df.rg.3
                @Override // com.ss.android.downloadlib.df.pt
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
