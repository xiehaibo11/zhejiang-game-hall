package com.mbridge.msdk.click;

import android.app.Activity;
import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.text.TextUtils;
import com.mbridge.msdk.foundation.entity.CampaignEx;
import com.mbridge.msdk.foundation.tools.ag;
import com.mbridge.msdk.foundation.tools.z;
import com.mbridge.msdk.widget.dialog.MBAlertDialog;
import com.qihoo360.i.IPluginManager;
import java.lang.reflect.InvocationTargetException;

public class AppReceiver extends BroadcastReceiver {
    private static final String a = AppReceiver.class.getSimpleName();

    @Override
    public void onReceive(Context context, Intent intent) throws Throwable {
        if (!TextUtils.equals(intent.getAction(), "android.intent.action.PACKAGE_ADDED") || intent.getData() == null) {
            return;
        }
        try {
            String schemeSpecificPart = intent.getData().getSchemeSpecificPart();
            CampaignEx campaignExH = com.mbridge.msdk.foundation.db.g.b(com.mbridge.msdk.foundation.db.i.a(context)).h(schemeSpecificPart);
            com.mbridge.msdk.foundation.db.e eVarA = com.mbridge.msdk.foundation.db.e.a(com.mbridge.msdk.foundation.db.i.a(com.mbridge.msdk.foundation.controller.a.f().j()));
            int iJ = eVarA.j(schemeSpecificPart);
            String strL = eVarA.l(schemeSpecificPart);
            String strD = eVarA.d(strL);
            String strE = eVarA.e(strL);
            String strG = eVarA.g(strL);
            String strF = eVarA.f(strL);
            String strK = eVarA.k(schemeSpecificPart);
            try {
                try {
                    Class<?> cls = Class.forName("com.mbridge.msdk.mbdownload.manager.ADownloadManager");
                    cls.getMethod("installed", String.class).invoke(cls.getMethod("getInstance", new Class[0]).invoke(null, new Object[0]), strL);
                } catch (IllegalAccessException e) {
                    e.printStackTrace();
                } catch (NoSuchMethodException e2) {
                    e2.printStackTrace();
                }
            } catch (ClassNotFoundException e3) {
                e3.printStackTrace();
            } catch (InvocationTargetException e4) {
                e4.printStackTrace();
            }
            if (iJ == 0) {
                c.f(com.mbridge.msdk.foundation.controller.a.f().j(), schemeSpecificPart);
            } else if (iJ == 1) {
                Context contextC = com.mbridge.msdk.foundation.controller.a.f().c();
                if (contextC instanceof Activity) {
                    MBAlertDialog mBAlertDialog = new MBAlertDialog(contextC, new com.mbridge.msdk.widget.dialog.a() {
                        final String a;
                        final Context b;
                        final String c;
                        final String d;
                        final String e;
                        final String f;
                        final String g;

                        1(String schemeSpecificPart2, Context contextC2, String strL2, String strD2, String strE2, String strG2, String strF2) {
                            str = schemeSpecificPart2;
                            context = contextC2;
                            str = strL2;
                            str = strD2;
                            str = strE2;
                            str = strG2;
                            str = strF2;
                        }

                        @Override
                        public final void a() {
                            c.f(com.mbridge.msdk.foundation.controller.a.f().j(), str);
                            com.mbridge.msdk.foundation.same.report.e.a(context, str, str, str, 1, str, str, str);
                        }

                        @Override
                        public final void b() {
                            com.mbridge.msdk.foundation.same.report.e.a(context, str, str, str, 0, str, str, str);
                        }

                        @Override
                        public final void c() {
                            a();
                        }
                    });
                    mBAlertDialog.makeInstallAlert(strK);
                    mBAlertDialog.show();
                }
            }
            if (campaignExH != null) {
                b.b(campaignExH, context, "install");
            }
            ag.a(context, schemeSpecificPart2, schemeSpecificPart2 + "downloadType", schemeSpecificPart2 + "linkType", schemeSpecificPart2 + "rid", schemeSpecificPart2 + "cid", schemeSpecificPart2 + "isDowning", schemeSpecificPart2 + IPluginManager.KEY_PROCESS);
        } catch (Exception e5) {
            z.a(a, e5.getMessage());
        }
    }
}
