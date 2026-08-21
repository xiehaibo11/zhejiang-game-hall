package com.mbridge.msdk.c.b;

import android.content.ComponentName;
import android.content.Intent;
import android.os.Build;
import android.os.Handler;
import android.os.Message;
import android.text.TextUtils;
import com.mbridge.msdk.foundation.tools.ag;
import com.mbridge.msdk.foundation.tools.z;
import com.sigmob.sdk.base.mta.PointCategory;
import java.util.List;

public final class a {
    private final String a;
    private List<com.mbridge.msdk.foundation.entity.a> b;
    private boolean c;
    private Handler d;

    private a() {
        this.a = "ActiveAppUtil";
        this.c = false;
        this.d = new Handler() {
            @Override
            public final void handleMessage(Message message) {
                synchronized (a.this) {
                    Message messageObtain = Message.obtain();
                    int i = message.what;
                    if (i == 1) {
                        a.a(a.this);
                        messageObtain.what = 1;
                        messageObtain.arg1 = message.arg1;
                        sendMessageDelayed(messageObtain, message.arg1);
                    } else if (i == 2) {
                        messageObtain.what = 1;
                        messageObtain.arg1 = message.arg2;
                        sendMessageDelayed(messageObtain, message.arg1);
                    }
                }
            }
        };
    }

    public static a a() {
        return a.a;
    }

    private static class a {
        private static final a a = new a();
    }

    public final void b() {
        Handler handler = this.d;
        if (handler != null) {
            handler.removeCallbacksAndMessages(null);
        }
    }

    public final boolean c() {
        return this.c;
    }

    public final synchronized void d() {
        List<com.mbridge.msdk.foundation.entity.a> listAP;
        com.mbridge.msdk.c.a aVarB = com.mbridge.msdk.c.b.a().b(com.mbridge.msdk.foundation.controller.a.f().k());
        if (aVarB != null) {
            if (aVarB.aN() == 2 || (listAP = aVarB.aP()) == null || listAP.size() == 0) {
                b();
            } else {
                this.b = listAP;
            }
        }
    }

    public final synchronized void e() {
        com.mbridge.msdk.c.a aVarB;
        if (com.mbridge.msdk.foundation.controller.a.f().j() == null) {
            return;
        }
        try {
            aVarB = com.mbridge.msdk.c.b.a().b(com.mbridge.msdk.foundation.controller.a.f().k());
        } catch (Throwable th) {
            z.d("ActiveAppUtil", th.getMessage());
        }
        if (aVarB != null && aVarB.aN() != 2) {
            List<com.mbridge.msdk.foundation.entity.a> listAP = aVarB.aP();
            this.b = listAP;
            if (listAP != null && listAP.size() != 0) {
                long jLongValue = ((Long) ag.b(com.mbridge.msdk.foundation.controller.a.f().j(), "active_last_time", 0L)).longValue();
                Message messageObtain = Message.obtain();
                if (jLongValue == 0) {
                    messageObtain.what = 1;
                    messageObtain.arg1 = aVarB.aO() * 1000;
                } else {
                    long jCurrentTimeMillis = System.currentTimeMillis() - jLongValue;
                    int iAO = aVarB.aO() * 1000;
                    long j = iAO;
                    if (jCurrentTimeMillis > j) {
                        messageObtain.what = 1;
                        messageObtain.arg1 = iAO;
                    } else {
                        messageObtain.what = 2;
                        messageObtain.arg1 = (int) (j - jCurrentTimeMillis);
                        messageObtain.arg2 = iAO;
                    }
                }
                this.d.sendMessage(messageObtain);
                this.c = true;
                z.d("ActiveAppUtil", PointCategory.INIT);
            }
        }
    }

    static void a(a aVar) {
        if (com.mbridge.msdk.foundation.controller.a.f().j() == null) {
            return;
        }
        List<com.mbridge.msdk.foundation.entity.a> list = aVar.b;
        if (list == null || list.size() == 0) {
            aVar.b();
        }
        ag.a(com.mbridge.msdk.foundation.controller.a.f().j(), "active_last_time", Long.valueOf(System.currentTimeMillis()));
        try {
            for (com.mbridge.msdk.foundation.entity.a aVar2 : aVar.b) {
                Intent intent = new Intent();
                if (aVar2.b().contains("service")) {
                    if (!TextUtils.isEmpty(aVar2.a()) && !TextUtils.isEmpty(aVar2.c())) {
                        intent.setComponent(new ComponentName(aVar2.a(), aVar2.c()));
                        if (!TextUtils.isEmpty(aVar2.d())) {
                            intent.setAction(aVar2.d());
                        }
                        if (Build.VERSION.SDK_INT >= 26) {
                            com.mbridge.msdk.foundation.controller.a.f().j().startForegroundService(intent);
                        } else {
                            com.mbridge.msdk.foundation.controller.a.f().j().startService(intent);
                        }
                    }
                    return;
                }
                if (aVar2.b().contains("broadcast")) {
                    if (!TextUtils.isEmpty(aVar2.a()) && !TextUtils.isEmpty(aVar2.c()) && !TextUtils.isEmpty(aVar2.d())) {
                        intent.setComponent(new ComponentName(aVar2.a(), aVar2.c()));
                        intent.setAction(aVar2.d());
                        com.mbridge.msdk.foundation.controller.a.f().j().sendBroadcast(intent);
                    }
                    return;
                }
            }
        } catch (Throwable th) {
            z.d("ActiveAppUtil", th.getMessage());
        }
    }
}
