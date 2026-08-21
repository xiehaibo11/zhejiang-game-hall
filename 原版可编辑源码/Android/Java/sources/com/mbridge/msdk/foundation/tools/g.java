package com.mbridge.msdk.foundation.tools;

import android.content.Context;
import android.net.Uri;
import android.os.Process;
import android.text.TextUtils;
import com.mbridge.msdk.MBridgeConstans;
import com.mbridge.msdk.foundation.entity.CampaignEx;
import com.mbridge.msdk.out.BaseTrackingListener;
import com.mbridge.msdk.out.IDownloadListener;
import com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlNode;
import com.qihoo360.i.IPluginManager;
import java.io.File;

public class g {
    public static boolean a;

    /* JADX WARN: Removed duplicated region for block: B:7:0x0018  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static void a(String str, final String str2, final CampaignEx campaignEx, final boolean z) {
        String akdlui;
        String md5;
        if (campaignEx != null) {
            try {
                akdlui = !TextUtils.isEmpty(campaignEx.getAkdlui()) ? campaignEx.getAkdlui() : str2;
            } catch (Throwable th) {
                aj.a = -1;
                aj.b = th.getMessage();
                z.b("downloadapk", "can't find download jar, use simple method");
                a(campaignEx, str2, z);
                return;
            }
        }
        if (TextUtils.isEmpty(akdlui)) {
            akdlui = SameMD5.getMD5(str2);
        }
        String string = ag.b(com.mbridge.msdk.foundation.controller.a.f().j(), akdlui, "").toString();
        if (!TextUtils.isEmpty(string)) {
            File file = new File(string);
            if (file.exists()) {
                if (z) {
                    com.mbridge.msdk.click.c.a(com.mbridge.msdk.foundation.controller.a.f().j(), Uri.fromFile(file), str2, akdlui);
                    return;
                }
                return;
            }
        } else {
            int iIntValue = ((Integer) ag.b(com.mbridge.msdk.foundation.controller.a.f().j(), akdlui + IPluginManager.KEY_PROCESS, 0)).intValue();
            int iMyPid = Process.myPid();
            if (iIntValue != 0 && iIntValue == iMyPid) {
                long jLongValue = ((Long) ag.b(com.mbridge.msdk.foundation.controller.a.f().j(), akdlui + "isDowning", 0L)).longValue();
                long jCurrentTimeMillis = System.currentTimeMillis() - jLongValue;
                if (jLongValue != 0 && jCurrentTimeMillis < 36000000) {
                    if (z) {
                        int iIntValue2 = ((Integer) ag.b(com.mbridge.msdk.foundation.controller.a.f().j(), akdlui + "downloadType", -1)).intValue();
                        if (iIntValue2 == 1) {
                            com.mbridge.msdk.click.b.b(campaignEx, com.mbridge.msdk.foundation.controller.a.f().j(), "downloading");
                            return;
                        } else if (iIntValue2 == 2) {
                            com.mbridge.msdk.click.b.a(campaignEx, com.mbridge.msdk.foundation.controller.a.f().j(), "downloading");
                            return;
                        } else {
                            ad.a(com.mbridge.msdk.foundation.controller.a.f().j(), campaignEx.getClickURL(), (BaseTrackingListener) null);
                            return;
                        }
                    }
                    return;
                }
            }
        }
        if (aj.a == -1) {
            try {
                Class.forName("com.mbridge.msdk.mbdownload.b");
                Class.forName("com.mbridge.msdk.mbdownload.f");
                aj.a = 1;
                aj.b = "ok";
            } catch (ClassNotFoundException e) {
                aj.a = 0;
                aj.b = e.getMessage();
            }
        }
        if (aj.a != 1 || !z) {
            a(campaignEx, str2, z);
            return;
        }
        if (campaignEx != null && !TextUtils.isEmpty(campaignEx.getAkdlui())) {
            md5 = campaignEx.getAkdlui();
        } else {
            md5 = SameMD5.getMD5(str2);
        }
        final String str3 = md5;
        try {
            a(str2, 1, campaignEx);
            Context contextJ = com.mbridge.msdk.foundation.controller.a.f().j();
            boolean zA = aj.a(contextJ);
            boolean zC = aj.c(contextJ);
            if (!aj.b(contextJ)) {
                com.mbridge.msdk.click.c.a(contextJ, str2, str3);
                return;
            }
            if (!zC) {
                a(campaignEx, str2, z);
                return;
            }
            if (!zA) {
                a(campaignEx, str2, z);
                return;
            }
            ag.a(com.mbridge.msdk.foundation.controller.a.f().j(), str3 + "isDowning", Long.valueOf(System.currentTimeMillis()));
            ag.a(com.mbridge.msdk.foundation.controller.a.f().j(), str3 + IPluginManager.KEY_PROCESS, Integer.valueOf(Process.myPid()));
            Class<?> cls = Class.forName("com.mbridge.msdk.mbdownload.f");
            Object objNewInstance = cls.getConstructor(String.class, String.class).newInstance(str3, str2);
            if (!TextUtils.isEmpty(str)) {
                cls.getMethod("setTitle", String.class).invoke(objNewInstance, str);
            }
            cls.getMethod("setDownloadListener", IDownloadListener.class).invoke(objNewInstance, new IDownloadListener() {
                @Override
                public final void onProgressUpdate(int i) {
                }

                @Override
                public final void onStatus(int i) {
                }

                @Override
                public final void onStart() {
                    com.mbridge.msdk.click.b.b(campaignEx, com.mbridge.msdk.foundation.controller.a.f().j(), "start");
                }

                @Override
                public final void onEnd(int i, int i2, String str4) {
                    ag.a(com.mbridge.msdk.foundation.controller.a.f().j(), str3 + "isDowning", 0L);
                    ag.a(com.mbridge.msdk.foundation.controller.a.f().j(), str3 + IPluginManager.KEY_PROCESS, 0);
                    z.b("SDKUtil", "download listener onEnd result = " + i + " nid = " + i2 + " file = " + str4 + "-sdkutil:" + z);
                    if (!TextUtils.isEmpty(str4)) {
                        File file2 = new File(str4);
                        if (file2.exists() && z) {
                            com.mbridge.msdk.click.c.a(com.mbridge.msdk.foundation.controller.a.f().j(), Uri.fromFile(file2), str2, str3);
                        } else if (!z) {
                            ag.a(com.mbridge.msdk.foundation.controller.a.f().j(), str3, str4);
                        }
                    }
                    com.mbridge.msdk.click.b.b(campaignEx, com.mbridge.msdk.foundation.controller.a.f().j(), TtmlNode.END);
                    com.mbridge.msdk.foundation.db.g.b(com.mbridge.msdk.foundation.db.i.a(com.mbridge.msdk.foundation.controller.a.f().j())).a(campaignEx);
                }
            });
            cls.getMethod("start", new Class[0]).invoke(objNewInstance, new Object[0]);
        } catch (Throwable th2) {
            ag.a(com.mbridge.msdk.foundation.controller.a.f().j(), str3 + "isDowning", 0L);
            ag.a(com.mbridge.msdk.foundation.controller.a.f().j(), str3 + IPluginManager.KEY_PROCESS, 0);
            if (MBridgeConstans.DEBUG) {
                th2.printStackTrace();
            }
            a(campaignEx, str2, z);
        }
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
            new Thread(new Runnable() {
                @Override
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
            com.mbridge.msdk.optimize.a.a(x.a("/apk", context, new boolean[1]), com.mbridge.msdk.click.c.a(str), str, new com.mbridge.msdk.optimize.b() {
                @Override
                public final void a(int i) {
                }

                @Override
                public final void a() {
                    if (z) {
                        com.mbridge.msdk.click.b.a(campaignEx, context, "start");
                    } else {
                        com.mbridge.msdk.click.b.a(campaignEx, context, "shortcuts_start");
                    }
                }

                @Override
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

                @Override
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
