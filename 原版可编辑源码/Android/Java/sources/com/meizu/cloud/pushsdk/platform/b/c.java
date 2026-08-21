package com.meizu.cloud.pushsdk.platform.b;

import android.content.Context;
import android.content.Intent;
import android.content.pm.ResolveInfo;
import android.text.TextUtils;
import com.igexin.sdk.PushConsts;
import com.meizu.cloud.pushinternal.DebugLogger;
import com.meizu.cloud.pushsdk.constants.PushConstants;
import com.meizu.cloud.pushsdk.platform.message.BasicPushStatus;
import java.util.Iterator;
import java.util.List;
import java.util.concurrent.ScheduledExecutorService;

public abstract class c<T extends BasicPushStatus> {
    protected final Context a;
    protected String b;
    protected String c;
    protected String d;
    protected final com.meizu.cloud.pushsdk.platform.a.a e;
    private ScheduledExecutorService h;
    protected boolean f = true;
    protected boolean g = true;
    private String i = null;

    public c(Context context, String str, String str2, com.meizu.cloud.pushsdk.platform.a.a aVar, ScheduledExecutorService scheduledExecutorService) {
        this.h = scheduledExecutorService;
        this.a = context;
        this.b = str;
        this.c = str2;
        this.e = aVar;
    }

    private boolean a(int i) {
        return i >= 110000 && i <= 200000;
    }

    private boolean b(T t) {
        int iIntValue = Integer.valueOf(t.getCode()).intValue();
        return (iIntValue > 200 && iIntValue < 600) || (iIntValue > 1000 && iIntValue < 2000) || iIntValue == 0;
    }

    private boolean h() {
        return this.g && !this.a.getPackageName().equals(this.i);
    }

    protected String a(Context context, String str) {
        String str2 = null;
        if (!TextUtils.isEmpty(str)) {
            List<ResolveInfo> listQueryIntentServices = context.getPackageManager().queryIntentServices(new Intent(str), 0);
            if (listQueryIntentServices != null) {
                Iterator<ResolveInfo> it = listQueryIntentServices.iterator();
                while (true) {
                    if (!it.hasNext()) {
                        break;
                    }
                    ResolveInfo next = it.next();
                    if ("com.meizu.cloud".equals(next.serviceInfo.packageName)) {
                        this.i = next.serviceInfo.packageName;
                        str2 = next.serviceInfo.name;
                        break;
                    }
                }
                if (TextUtils.isEmpty(str2) && listQueryIntentServices.size() > 0) {
                    this.i = listQueryIntentServices.get(0).serviceInfo.packageName;
                    str2 = listQueryIntentServices.get(0).serviceInfo.name;
                }
            }
        }
        DebugLogger.i("Strategy", "current process packageName " + this.i);
        return str2;
    }

    protected void a(Intent intent) {
        try {
            intent.setPackage(this.i);
            intent.setAction(PushConstants.MZ_PUSH_MANAGER_SERVICE_ACTION);
            this.a.startService(intent);
        } catch (Exception e) {
            DebugLogger.e("Strategy", "start RemoteService error " + e.getMessage());
        }
    }

    protected abstract void a(T t);

    public void a(boolean z) {
        this.f = z;
    }

    protected abstract boolean a();

    protected abstract T b();

    public void b(String str) {
        this.b = str;
    }

    protected abstract Intent c();

    public void c(String str) {
        this.c = str;
    }

    public void d(String str) {
        this.d = str;
    }

    protected Intent[] d() {
        return null;
    }

    protected abstract T e();

    protected abstract T f();

    protected abstract int g();

    protected boolean k() {
        return this.g && this.f && !TextUtils.isEmpty(a(this.a, PushConstants.MZ_PUSH_MANAGER_SERVICE_ACTION));
    }

    protected boolean l() {
        return 2 == g() || 32 == g();
    }

    public boolean m() {
        ScheduledExecutorService scheduledExecutorService = this.h;
        if (scheduledExecutorService == null) {
            return n();
        }
        scheduledExecutorService.execute(new Runnable() {
            @Override
            public void run() {
                c.this.n();
            }
        });
        return true;
    }

    /* JADX WARN: Removed duplicated region for block: B:44:0x00ff  */
    /* JADX WARN: Removed duplicated region for block: B:47:? A[RETURN, SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public boolean n() {
        BasicPushStatus basicPushStatusF;
        String str;
        if (a()) {
            if (k()) {
                DebugLogger.i("Strategy", "send message to remote service");
                if (l()) {
                    basicPushStatusF = null;
                } else {
                    basicPushStatusF = f();
                    if (basicPushStatusF != null) {
                        DebugLogger.e("Strategy", "local response " + basicPushStatusF);
                        a(basicPushStatusF);
                    }
                }
                Intent intentC = c();
                if (intentC != null) {
                    a(intentC);
                }
                Intent[] intentArrD = d();
                if (intentArrD != null) {
                    DebugLogger.e("Strategy", "send sendRpcRequests length " + intentArrD.length);
                    for (Intent intent : intentArrD) {
                        a(intent);
                    }
                }
                com.meizu.cloud.pushsdk.a.a(this.a);
            } else {
                basicPushStatusF = e();
                DebugLogger.i("Strategy", "real response status " + basicPushStatusF);
                if (basicPushStatusF != null) {
                    if (l() && PushConsts.SEND_MESSAGE_ERROR.equals(basicPushStatusF.getCode())) {
                        return true;
                    }
                    if (!h()) {
                        String code = basicPushStatusF.getCode();
                        if (TextUtils.isEmpty(code)) {
                            code = "0";
                        }
                        if (BasicPushStatus.SUCCESS_CODE.equals(basicPushStatusF.getCode())) {
                            a(basicPushStatusF);
                        }
                        int iIntValue = Integer.valueOf(code).intValue();
                        str = a(iIntValue) ? "service error so notify pushManager invoker code=" + iIntValue + " message " + basicPushStatusF.getMessage() : "response all request in local app";
                    }
                    DebugLogger.e("Strategy", str);
                }
            }
            if (basicPushStatusF != null) {
                return true;
            }
            DebugLogger.e("Strategy", "current status code " + basicPushStatusF.getCode());
            return true ^ b(basicPushStatusF);
        }
        DebugLogger.e("Strategy", "Missing required parameters");
        basicPushStatusF = b();
        a(basicPushStatusF);
        if (basicPushStatusF != null) {
        }
    }
}
