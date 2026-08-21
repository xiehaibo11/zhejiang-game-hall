package com.kwad.components.core.e.d;

import android.content.Context;
import android.content.Intent;
import android.database.Cursor;
import android.net.Uri;
import android.text.TextUtils;
import com.kwad.sdk.core.report.z;
import com.kwad.sdk.core.response.model.AdInfo;
import com.kwad.sdk.core.response.model.AdTemplate;
import com.kwad.sdk.utils.bj;
import com.ss.android.socialbase.downloader.utils.DownloadExpSwitchCode;

/* JADX INFO: loaded from: classes2.dex */
public final class e {
    private static boolean Ki;

    private static void Q(final AdTemplate adTemplate) {
        if (nO()) {
            return;
        }
        ax(true);
        int iAbs = Math.abs(com.kwad.sdk.core.config.d.zq());
        if (iAbs > 0) {
            bj.a(new Runnable() { // from class: com.kwad.components.core.e.d.e.1
                @Override // java.lang.Runnable
                public final void run() {
                    e.ax(false);
                    com.kwad.sdk.core.c.b.AU();
                    if (com.kwad.sdk.core.c.b.isAppOnForeground()) {
                        return;
                    }
                    com.kwad.sdk.core.report.a.a(adTemplate, "wxsmallapp", 1);
                }
            }, null, ((long) iAbs) * 1000);
        } else {
            ax(false);
        }
    }

    public static int a(Context context, String str, String str2, String str3, AdTemplate adTemplate) throws Throwable {
        if (TextUtils.isEmpty(str) || TextUtils.isEmpty(str2) || TextUtils.isEmpty(str3)) {
            com.kwad.sdk.core.report.a.k(adTemplate, 1);
            return -1;
        }
        Cursor cursor = null;
        try {
            try {
                Intent launchIntentForPackage = context.getPackageManager().getLaunchIntentForPackage("com.tencent.mm");
                Intent intent = new Intent("android.intent.action.MAIN");
                intent.addCategory("android.intent.category.LAUNCHER");
                intent.addFlags(DownloadExpSwitchCode.BUGFIX_GETPACKAGEINFO_BY_UNZIP);
                intent.setComponent(launchIntentForPackage.getComponent());
                context.startActivity(intent);
                Cursor cursorQuery = context.getContentResolver().query(Uri.parse("content://com.tencent.mm.sdk.comm.provider/launchWXMiniprogram"), null, null, new String[]{str, str2, str3, "0", ""}, null);
                if (cursorQuery != null) {
                    try {
                        com.kwad.sdk.crash.utils.b.closeQuietly(cursorQuery);
                    } catch (Exception unused) {
                        cursor = cursorQuery;
                        com.kwad.sdk.core.report.a.k(adTemplate, 2);
                        com.kwad.sdk.crash.utils.b.closeQuietly(cursor);
                        return -1;
                    } catch (Throwable th) {
                        th = th;
                        cursor = cursorQuery;
                        com.kwad.sdk.crash.utils.b.closeQuietly(cursor);
                        throw th;
                    }
                }
                com.kwad.sdk.crash.utils.b.closeQuietly(cursorQuery);
                com.kwad.sdk.core.report.a.a(adTemplate, "wxsmallapp", 1, (z.b) null);
                Q(adTemplate);
                return 1;
            } catch (Exception unused2) {
            }
        } catch (Throwable th2) {
            th = th2;
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static void ax(boolean z) {
        Ki = z;
    }

    public static int e(Context context, AdTemplate adTemplate) {
        AdInfo adInfoCg = com.kwad.sdk.core.response.b.d.cg(adTemplate);
        if (com.kwad.sdk.core.response.b.a.M(adInfoCg) || com.kwad.sdk.core.response.b.a.N(adInfoCg)) {
            return 0;
        }
        return a(context, adInfoCg.adConversionInfo.smallAppJumpInfo.mediaSmallAppId, adInfoCg.adConversionInfo.smallAppJumpInfo.originId, adInfoCg.adConversionInfo.smallAppJumpInfo.smallAppJumpUrl, adTemplate);
    }

    private static boolean nO() {
        return Ki;
    }
}
