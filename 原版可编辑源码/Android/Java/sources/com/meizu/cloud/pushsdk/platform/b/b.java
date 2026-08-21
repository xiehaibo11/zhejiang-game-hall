package com.meizu.cloud.pushsdk.platform.b;

import android.content.Context;
import android.content.Intent;
import android.os.Handler;
import android.os.Message;
import android.text.TextUtils;
import com.igexin.sdk.PushConsts;
import com.meizu.cloud.pushinternal.DebugLogger;
import com.meizu.cloud.pushsdk.platform.PlatformMessageSender;
import com.meizu.cloud.pushsdk.platform.message.BasicPushStatus;
import com.meizu.cloud.pushsdk.platform.message.RegisterStatus;
import com.meizu.cloud.pushsdk.util.MzSystemUtils;
import java.util.concurrent.ScheduledExecutorService;
import java.util.concurrent.TimeUnit;

public class b extends c<RegisterStatus> {
    private Handler h;
    private ScheduledExecutorService i;
    private int j;

    public b(Context context, com.meizu.cloud.pushsdk.platform.a.a aVar, ScheduledExecutorService scheduledExecutorService) {
        this(context, null, null, aVar, scheduledExecutorService);
        this.i = (ScheduledExecutorService) com.meizu.cloud.pushsdk.d.b.a.b.a();
        this.h = new Handler(context.getMainLooper()) {
            @Override
            public void handleMessage(Message message) {
                if (message.what == 0) {
                    b.this.m();
                }
            }
        };
    }

    public b(Context context, com.meizu.cloud.pushsdk.platform.a.a aVar, ScheduledExecutorService scheduledExecutorService, boolean z) {
        this(context, aVar, scheduledExecutorService);
        this.g = z;
    }

    public b(Context context, String str, String str2, com.meizu.cloud.pushsdk.platform.a.a aVar, ScheduledExecutorService scheduledExecutorService) {
        super(context, str, str2, aVar, scheduledExecutorService);
        this.j = 0;
    }

    private boolean a(String str, String str2, int i) {
        return TextUtils.isEmpty(str) || TextUtils.isEmpty(str2) || !str2.startsWith(str) || System.currentTimeMillis() / 1000 > ((long) i);
    }

    protected void a(long j) {
        this.i.schedule(new Runnable() {
            @Override
            public void run() {
                com.meizu.cloud.pushsdk.b.c.a(b.this.a);
                b.this.h.sendEmptyMessage(0);
            }
        }, j, TimeUnit.SECONDS);
    }

    @Override
    public void a(RegisterStatus registerStatus) {
        PlatformMessageSender.a(this.a, !TextUtils.isEmpty(this.d) ? this.d : this.a.getPackageName(), registerStatus);
    }

    @Override
    public boolean a() {
        DebugLogger.e("Strategy", "isBrandMeizu " + MzSystemUtils.isBrandMeizu(this.a));
        return (TextUtils.isEmpty(this.b) || TextUtils.isEmpty(this.c)) ? false : true;
    }

    protected boolean a(String str, int i) {
        String strA = com.meizu.cloud.pushsdk.b.c.a(this.a);
        boolean zA = a(strA, str, i);
        return zA ? a(strA, com.meizu.cloud.pushsdk.platform.a.a(str), i) : zA;
    }

    @Override
    public Intent c() {
        Intent intent = new Intent();
        intent.putExtra("app_id", this.b);
        intent.putExtra("app_key", this.c);
        intent.putExtra("strategy_package_name", this.a.getPackageName());
        intent.putExtra("strategy_type", g());
        return intent;
    }

    @Override
    protected int g() {
        return 2;
    }

    @Override
    protected RegisterStatus b() {
        String str;
        RegisterStatus registerStatus = new RegisterStatus();
        registerStatus.setCode("20001");
        if (!TextUtils.isEmpty(this.b)) {
            str = TextUtils.isEmpty(this.c) ? "appKey not empty" : "appId not empty";
            return registerStatus;
        }
        registerStatus.setMessage(str);
        return registerStatus;
    }

    @Override
    protected RegisterStatus f() {
        return null;
    }

    @Override
    public RegisterStatus e() {
        RegisterStatus registerStatus = new RegisterStatus();
        String strA = com.meizu.cloud.pushsdk.util.b.a(this.a, this.d);
        int iB = com.meizu.cloud.pushsdk.util.b.b(this.a, this.d);
        if (a(strA, iB)) {
            com.meizu.cloud.pushsdk.util.b.g(this.a, "", this.d);
            String strA2 = com.meizu.cloud.pushsdk.b.c.a(this.a);
            if (!TextUtils.isEmpty(strA2) || this.j >= 3) {
                this.j = 0;
                com.meizu.cloud.pushsdk.c.a.c cVarA = this.e.a(this.b, this.c, strA2);
                if (cVarA.b()) {
                    registerStatus = new RegisterStatus((String) cVarA.a());
                    DebugLogger.e("Strategy", "registerStatus " + registerStatus);
                    if (!TextUtils.isEmpty(registerStatus.getPushId())) {
                        com.meizu.cloud.pushsdk.util.b.g(this.a, registerStatus.getPushId(), this.d);
                        com.meizu.cloud.pushsdk.util.b.a(this.a, (int) ((System.currentTimeMillis() / 1000) + ((long) registerStatus.getExpireTime())), this.d);
                    }
                } else {
                    com.meizu.cloud.pushsdk.c.b.a aVarC = cVarA.c();
                    if (aVarC.a() != null) {
                        DebugLogger.e("Strategy", "status code=" + aVarC.b() + " data=" + aVarC.a());
                    }
                    registerStatus.setCode(String.valueOf(aVarC.b()));
                    registerStatus.setMessage(aVarC.c());
                    DebugLogger.e("Strategy", "registerStatus " + registerStatus);
                }
            } else {
                DebugLogger.i("Strategy", "after " + (this.j * 10) + " seconds start register");
                a((long) (this.j * 10));
                this.j = this.j + 1;
                registerStatus.setCode(PushConsts.SEND_MESSAGE_ERROR);
                registerStatus.setMessage("deviceId is empty");
            }
        } else {
            registerStatus.setCode(BasicPushStatus.SUCCESS_CODE);
            registerStatus.setMessage("already register PushId,don't register frequently");
            registerStatus.setPushId(strA);
            registerStatus.setExpireTime((int) (((long) iB) - (System.currentTimeMillis() / 1000)));
        }
        return registerStatus;
    }
}
