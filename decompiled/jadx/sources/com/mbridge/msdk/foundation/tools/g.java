package com.mbridge.msdk.foundation.tools;

import android.content.Context;
import android.net.Uri;
import android.os.Process;
import android.text.TextUtils;
import com.mbridge.msdk.MBridgeConstans;
import com.mbridge.msdk.foundation.entity.CampaignEx;
import com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlNode;
import com.qihoo360.i.IPluginManager;
import java.io.File;

/* JADX INFO: compiled from: DomainSameSDKTool.java */
/* JADX INFO: loaded from: classes2.dex */
public class g {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static boolean f3525a;

    /* JADX WARN: Removed duplicated region for block: B:7:0x0018  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public static void a(java.lang.String r17, final java.lang.String r18, final com.mbridge.msdk.foundation.entity.CampaignEx r19, final boolean r20) {
        /*
            Method dump skipped, instruction units count: 640
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.mbridge.msdk.foundation.tools.g.a(java.lang.String, java.lang.String, com.mbridge.msdk.foundation.entity.CampaignEx, boolean):void");
    }

    private static void a(final CampaignEx campaignEx, final String str, final boolean z) {
        String akdlui;
        if (campaignEx == null || TextUtils.isEmpty(campaignEx.getAkdlui())) {
            akdlui = str;
        } else {
            akdlui = campaignEx.getAkdlui();
            if (TextUtils.isEmpty(akdlui)) {
                akdlui = SameMD5.getMD5(str);
            }
        }
        try {
            a(str, 2, campaignEx);
            Context contextJ = com.mbridge.msdk.foundation.controller.a.f().j();
            if (!aj.b(contextJ)) {
                com.mbridge.msdk.click.c.a(contextJ, str, akdlui);
                return;
            }
            ag.a(com.mbridge.msdk.foundation.controller.a.f().j(), akdlui + "isDowning", Long.valueOf(System.currentTimeMillis()));
            ag.a(com.mbridge.msdk.foundation.controller.a.f().j(), akdlui + IPluginManager.KEY_PROCESS, Integer.valueOf(Process.myPid()));
            new Thread(new Runnable() { // from class: com.mbridge.msdk.foundation.tools.g.2
                @Override // java.lang.Runnable
                public final void run() {
                    g.a(com.mbridge.msdk.foundation.controller.a.f().j(), campaignEx, str, z);
                }
            }).start();
        } catch (Throwable th) {
            if (MBridgeConstans.DEBUG) {
                th.printStackTrace();
            }
        }
    }

    public static void a(final Context context, final CampaignEx campaignEx, final String str, final boolean z) {
        String md5;
        if (campaignEx != null && !TextUtils.isEmpty(campaignEx.getAkdlui())) {
            md5 = campaignEx.getAkdlui();
        } else {
            md5 = SameMD5.getMD5(str);
        }
        try {
            final String str2 = md5;
            com.mbridge.msdk.optimize.a.a(x.a("/apk", context, new boolean[1]), com.mbridge.msdk.click.c.a(str), str, new com.mbridge.msdk.optimize.b() { // from class: com.mbridge.msdk.foundation.tools.g.3
                @Override // com.mbridge.msdk.optimize.b
                public final void a(int i) {
                }

                @Override // com.mbridge.msdk.optimize.b
                public final void a() {
                    if (z) {
                        com.mbridge.msdk.click.b.a(campaignEx, context, "start");
                    } else {
                        com.mbridge.msdk.click.b.a(campaignEx, context, "shortcuts_start");
                    }
                }

                @Override // com.mbridge.msdk.optimize.b
                public final void a(File file) {
                    ag.a(com.mbridge.msdk.foundation.controller.a.f().j(), str2 + "isDowning", 0L);
                    ag.a(com.mbridge.msdk.foundation.controller.a.f().j(), str2 + IPluginManager.KEY_PROCESS, 0);
                    com.mbridge.msdk.click.b.a(campaignEx, context, TtmlNode.END);
                    com.mbridge.msdk.foundation.db.g.b(com.mbridge.msdk.foundation.db.i.a(com.mbridge.msdk.foundation.controller.a.f().j())).a(campaignEx);
                    if (file.exists() && z) {
                        com.mbridge.msdk.click.c.a(context, Uri.fromFile(file), str, str2);
                        ag.a(com.mbridge.msdk.foundation.controller.a.f().j(), str2, file.getAbsolutePath());
                    } else {
                        if (z) {
                            return;
                        }
                        ag.a(com.mbridge.msdk.foundation.controller.a.f().j(), str2, file.getAbsolutePath());
                    }
                }

                @Override // com.mbridge.msdk.optimize.b
                public final void b() {
                    com.mbridge.msdk.click.c.a(context, str, str2);
                }
            });
        } catch (Throwable unused) {
            com.mbridge.msdk.click.c.a(com.mbridge.msdk.foundation.controller.a.f().j(), str, md5);
        }
    }

    public static void a(String str, int i, CampaignEx campaignEx) {
        String md5;
        if (campaignEx != null && !TextUtils.isEmpty(campaignEx.getAkdlui())) {
            md5 = campaignEx.getAkdlui();
        } else {
            md5 = TextUtils.isEmpty("") ? SameMD5.getMD5(str) : "";
        }
        ag.a(com.mbridge.msdk.foundation.controller.a.f().j(), md5 + "downloadType", Integer.valueOf(i));
        if (campaignEx != null) {
            ag.a(com.mbridge.msdk.foundation.controller.a.f().j(), md5 + "linkType", Integer.valueOf(campaignEx.getLinkType()));
            String requestId = campaignEx.getRequestId();
            ag.a(com.mbridge.msdk.foundation.controller.a.f().j(), md5 + "rid", TextUtils.isEmpty(requestId) ? "" : requestId);
            ag.a(com.mbridge.msdk.foundation.controller.a.f().j(), md5 + "rid_n", campaignEx.getRequestIdNotice());
            ag.a(com.mbridge.msdk.foundation.controller.a.f().j(), md5 + "cid", campaignEx.getId());
            return;
        }
        ag.a(com.mbridge.msdk.foundation.controller.a.f().j(), md5 + "linkType", -1);
        ag.a(com.mbridge.msdk.foundation.controller.a.f().j(), md5 + "rid", "");
        ag.a(com.mbridge.msdk.foundation.controller.a.f().j(), md5 + "rid_n", "");
        ag.a(com.mbridge.msdk.foundation.controller.a.f().j(), md5 + "cid", "");
    }
}
