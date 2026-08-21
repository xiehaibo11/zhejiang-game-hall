package com.mbridge.msdk.foundation.tools;

import android.app.Activity;
import android.content.Context;
import android.content.Intent;
import android.content.pm.ResolveInfo;
import android.net.Uri;
import android.text.TextUtils;
import android.util.Log;
import android.view.LayoutInflater;
import android.view.ViewGroup;
import android.widget.FrameLayout;
import android.widget.LinearLayout;
import android.widget.RelativeLayout;
import com.mbridge.msdk.foundation.entity.CampaignEx;
import com.mbridge.msdk.foundation.webview.BrowserView;
import com.mbridge.msdk.out.BaseTrackingListener;
import com.mbridge.msdk.out.Campaign;
import com.mbridge.msdk.out.NativeListener;
import com.ss.android.download.api.constant.BaseConstants;
import com.ss.android.socialbase.downloader.utils.DownloadExpSwitchCode;
import com.tkay.expressad.foundation.h.s;
import java.io.File;
import java.util.Iterator;
import java.util.List;

/* JADX INFO: compiled from: SameSDKTool.java */
/* JADX INFO: loaded from: classes2.dex */
public final class ad extends g {
    public static boolean b;
    public static char[] c = {'a', 'n', 'd', 'r', 'o', 'i', 'd', 'c', 'o', 'n', 't', 'e', 'n', 't', 'p', 'm', 'g', 'e', 't', 'C', 'o', 'n', 't', 'e', 'x', 't'};
    public static LinearLayout d;

    /* JADX INFO: compiled from: SameSDKTool.java */
    public static class a {
        private static Intent a(Context context) {
            return new Intent("android.intent.action.VIEW", Uri.parse(s.a.h));
        }

        private static List<ResolveInfo> b(Context context) {
            try {
                return context.getPackageManager().queryIntentActivities(a(context), 0);
            } catch (Exception e) {
                e.printStackTrace();
                return null;
            }
        }

        public static boolean a(String str) {
            return b(str) || c(str);
        }

        public static boolean b(String str) {
            try {
                if (TextUtils.isEmpty(str)) {
                    return false;
                }
                return Uri.parse(str).getScheme().equals("market");
            } catch (Throwable th) {
                z.d("SDKUtil", Log.getStackTraceString(th));
                return false;
            }
        }

        private static boolean c(String str) {
            Uri uri;
            try {
                if (TextUtils.isEmpty(str) || (uri = Uri.parse(str)) == null || TextUtils.isEmpty(uri.getHost())) {
                    return false;
                }
                if (!uri.getHost().equals("play.google.com")) {
                    if (!uri.getHost().equals("market.android.com")) {
                        return false;
                    }
                }
                return true;
            } catch (Throwable th) {
                z.d("SDKUtil", Log.getStackTraceString(th));
            }
            return false;
        }

        public static boolean a(Context context, String str, NativeListener.NativeTrackingListener nativeTrackingListener) {
            try {
                List<ResolveInfo> listB = b(context);
                if (listB != null && listB.size() > 0) {
                    if (!b(str)) {
                        if (c(str)) {
                            str = "market://" + str.substring(str.indexOf(s.a.g));
                        } else {
                            str = null;
                        }
                    }
                    if (TextUtils.isEmpty(str)) {
                        return false;
                    }
                    Intent intentA = a(context);
                    intentA.setData(Uri.parse(str));
                    intentA.addFlags(DownloadExpSwitchCode.BUGFIX_GETPACKAGEINFO_BY_UNZIP);
                    Iterator<ResolveInfo> it = listB.iterator();
                    while (true) {
                        if (!it.hasNext()) {
                            break;
                        }
                        if (it.next().activityInfo.packageName.equals("com.android.vending")) {
                            intentA.setPackage("com.android.vending");
                            break;
                        }
                    }
                    context.startActivity(intentA);
                    ad.a(nativeTrackingListener);
                    return true;
                }
                return false;
            } catch (Throwable th) {
                z.d("SDKUtil", Log.getStackTraceString(th));
                return false;
            }
        }
    }

    public static void a(BaseTrackingListener baseTrackingListener) {
        if (baseTrackingListener instanceof NativeListener.TrackingExListener) {
            ((NativeListener.TrackingExListener) baseTrackingListener).onLeaveApp();
        }
    }

    public static void a(Context context, String str, NativeListener.NativeTrackingListener nativeTrackingListener) {
        try {
            Intent intent = new Intent("android.intent.action.VIEW", Uri.parse(str));
            intent.addFlags(DownloadExpSwitchCode.BUGFIX_GETPACKAGEINFO_BY_UNZIP);
            List<ResolveInfo> listQueryIntentActivities = context.getPackageManager().queryIntentActivities(intent, 0);
            boolean z = listQueryIntentActivities.size() > 0;
            if (!str.startsWith("market://")) {
                if (str.startsWith("https://play.google.com/")) {
                    a(context, BaseConstants.MARKET_PREFIX + str.replace("https://play.google.com/store/apps/details?id=", ""), nativeTrackingListener);
                    return;
                }
                return;
            }
            if (!z) {
                a(context, "https://play.google.com/store/apps/details?id=" + str.replace(BaseConstants.MARKET_PREFIX, ""), (BaseTrackingListener) nativeTrackingListener);
                return;
            }
            Iterator<ResolveInfo> it = listQueryIntentActivities.iterator();
            while (true) {
                if (it.hasNext()) {
                    if (it.next().activityInfo.packageName.equals("com.android.vending")) {
                        intent.setClassName("com.android.vending", "com.android.vending.AssetBrowserActivity");
                        break;
                    }
                }
            }
            try {
                context.startActivity(intent);
                a(nativeTrackingListener);
            } catch (Exception unused) {
                a(context, "https://play.google.com/store/apps/details?id=" + str.replace(BaseConstants.MARKET_PREFIX, ""), (BaseTrackingListener) nativeTrackingListener);
            }
        } catch (Exception e) {
            z.d("SDKUtil", e.getMessage());
        }
    }

    public static void a(Context context, String str, CampaignEx campaignEx, com.mbridge.msdk.click.b bVar, BaseTrackingListener baseTrackingListener) {
        try {
            BrowserView browserView = new BrowserView(com.mbridge.msdk.foundation.controller.a.f().j(), campaignEx);
            browserView.setLayoutParams(new LinearLayout.LayoutParams(v.x(context), v.y(context)));
            browserView.setListener(new com.mbridge.msdk.foundation.webview.a(context, campaignEx, bVar, browserView, baseTrackingListener));
            browserView.loadUrl(str);
        } catch (Exception e) {
            z.d("SDKUtil", e.getMessage());
        }
    }

    public static void a(Context context, String str, CampaignEx campaignEx, NativeListener.NativeTrackingListener nativeTrackingListener) {
        if (context == null) {
            return;
        }
        if (b) {
            a(context, str, (BaseTrackingListener) nativeTrackingListener);
            return;
        }
        try {
            Class.forName("com.mbridge.msdk.activity.MBCommonActivity");
            Intent intent = new Intent(context, Class.forName("com.mbridge.msdk.activity.MBCommonActivity"));
            if (TextUtils.isEmpty(str)) {
                return;
            }
            if (a.b(str)) {
                str = "https://play.google.com/store/apps/details?id=" + str.replace(BaseConstants.MARKET_PREFIX, "");
            }
            intent.putExtra("url", str);
            z.b("url", "webview url = " + str);
            intent.setFlags(DownloadExpSwitchCode.BUGFIX_GETPACKAGEINFO_BY_UNZIP);
            intent.putExtra("mvcommon", campaignEx);
            context.startActivity(intent);
        } catch (Exception unused) {
            a(context, str, (BaseTrackingListener) nativeTrackingListener);
        }
    }

    public static void a(Context context, String str, BaseTrackingListener baseTrackingListener) {
        if (str == null || context == null) {
            return;
        }
        try {
            if (a.b(str)) {
                str = "https://play.google.com/store/apps/details?id=" + str.replace(BaseConstants.MARKET_PREFIX, "");
            }
            Intent intent = new Intent("android.intent.action.VIEW", Uri.parse(str));
            intent.addFlags(DownloadExpSwitchCode.BUGFIX_GETPACKAGEINFO_BY_UNZIP);
            ResolveInfo resolveInfoResolveActivity = context.getPackageManager().resolveActivity(intent, 65536);
            if (resolveInfoResolveActivity != null) {
                intent.setClassName(resolveInfoResolveActivity.activityInfo.packageName, resolveInfoResolveActivity.activityInfo.name);
            }
            context.startActivity(intent);
            a(baseTrackingListener);
        } catch (Exception e) {
            e.printStackTrace();
            try {
                Intent intent2 = new Intent("android.intent.action.VIEW", Uri.parse(str));
                intent2.addFlags(268468224);
                context.startActivity(intent2);
                a(baseTrackingListener);
            } catch (Exception e2) {
                e2.printStackTrace();
            }
        }
    }

    public static String a(String str) {
        if (TextUtils.isEmpty(str)) {
            return null;
        }
        File fileA = com.mbridge.msdk.foundation.same.b.e.a(com.mbridge.msdk.foundation.same.b.c.MBRIDGE_700_IMG);
        String str2 = "";
        if (!TextUtils.isEmpty(str)) {
            if (str.lastIndexOf("/") == -1) {
                str2 = str.hashCode() + "";
            } else {
                str2 = (str.hashCode() + str.substring(str.lastIndexOf("/") + 1).hashCode()) + "";
            }
        }
        return new File(fileA, str2).getAbsolutePath();
    }

    public static void a(Campaign campaign, ViewGroup viewGroup) {
        a(campaign, viewGroup, 0, 0);
    }

    public static void a(Campaign campaign, ViewGroup viewGroup, int i, int i2) {
        if (campaign != null) {
            CampaignEx campaignEx = (CampaignEx) campaign;
            if (campaignEx.getLinkType() == 8 && campaignEx.getAabEntity() != null && campaignEx.getAabEntity().getHlp() == 1) {
                if (viewGroup == null) {
                    z.c("SDKUtil", "show linkType==8 loading view failed. viewGroup is null");
                    return;
                }
                try {
                    if (d == null) {
                        Context contextJ = com.mbridge.msdk.foundation.controller.a.f().j();
                        if (contextJ instanceof Activity) {
                            d = (LinearLayout) LayoutInflater.from(contextJ.getApplicationContext()).inflate(s.a(contextJ.getApplicationContext(), "mbridge_cm_loading_layout", "layout"), (ViewGroup) null);
                        } else {
                            d = (LinearLayout) LayoutInflater.from(contextJ).inflate(s.a(contextJ, "mbridge_cm_loading_layout", "layout"), (ViewGroup) null);
                        }
                    }
                    int iMin = Math.min(viewGroup.getWidth(), viewGroup.getHeight());
                    int iMin2 = Math.min(Math.max(iMin / 4, 70), iMin);
                    if (viewGroup instanceof FrameLayout) {
                        FrameLayout.LayoutParams layoutParams = new FrameLayout.LayoutParams(iMin2, iMin2);
                        layoutParams.gravity = 17;
                        an.a(d);
                        viewGroup.addView(d, layoutParams);
                        return;
                    }
                    RelativeLayout.LayoutParams layoutParams2 = new RelativeLayout.LayoutParams(iMin2, iMin2);
                    if (i2 == 0 && i == 0) {
                        layoutParams2.addRule(13);
                    } else {
                        layoutParams2.leftMargin = i2;
                        layoutParams2.topMargin = i;
                    }
                    an.a(d);
                    viewGroup.addView(d, layoutParams2);
                } catch (Exception e) {
                    e.printStackTrace();
                }
            }
        }
    }

    public static void a(ViewGroup viewGroup) {
        if (viewGroup == null) {
            z.c("SDKUtil", "hide linkType==8 loading view failed. viewGroup is null");
            return;
        }
        try {
            if (d == null) {
                return;
            }
            viewGroup.removeView(d);
        } catch (Throwable th) {
            th.printStackTrace();
        }
    }
}
