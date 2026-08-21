package com.xiaomi.mipush.sdk;

import android.content.ComponentName;
import android.content.Context;
import android.content.Intent;
import android.os.IBinder;
import android.text.TextUtils;
import com.xiaomi.mipush.sdk.PushMessageHandler;
import com.xiaomi.push.eo;
import com.xiaomi.push.ey;
import java.util.concurrent.ConcurrentLinkedQueue;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.LinkedBlockingQueue;
import java.util.concurrent.ThreadPoolExecutor;
import java.util.concurrent.TimeUnit;

/* JADX INFO: loaded from: classes4.dex */
public class MessageHandleService extends BaseService {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static ConcurrentLinkedQueue<a> f7978a = new ConcurrentLinkedQueue<>();

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private static ExecutorService f48a = new ThreadPoolExecutor(1, 1, 15, TimeUnit.SECONDS, new LinkedBlockingQueue());

    public class a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private Intent f7979a;

        /* JADX INFO: renamed from: a, reason: collision with other field name */
        private PushMessageReceiver f49a;

        public a(Intent intent, PushMessageReceiver pushMessageReceiver) {
            this.f49a = pushMessageReceiver;
            this.f7979a = intent;
        }

        public Intent a() {
            return this.f7979a;
        }

        /* JADX INFO: renamed from: a, reason: collision with other method in class */
        public PushMessageReceiver m57a() {
            return this.f49a;
        }
    }

    protected static void a(Context context, Intent intent) {
        if (intent == null) {
            return;
        }
        b(context);
    }

    static void a(Context context, a aVar) {
        String[] stringArrayExtra;
        if (aVar == null) {
            return;
        }
        try {
            PushMessageReceiver pushMessageReceiverM57a = aVar.m57a();
            Intent intentA = aVar.a();
            int intExtra = intentA.getIntExtra("message_type", 1);
            if (intExtra == 1) {
                PushMessageHandler.a aVarA = am.a(context).a(intentA);
                int intExtra2 = intentA.getIntExtra("eventMessageType", -1);
                if (aVarA == null) {
                    return;
                }
                if (aVarA instanceof MiPushMessage) {
                    MiPushMessage miPushMessage = (MiPushMessage) aVarA;
                    if (!miPushMessage.isArrivedMessage()) {
                        pushMessageReceiverM57a.onReceiveMessage(context, miPushMessage);
                    }
                    if (miPushMessage.getPassThrough() == 1) {
                        eo.a(context.getApplicationContext()).a(context.getPackageName(), intentA, 2004, (String) null);
                        com.xiaomi.channel.commonutils.logger.b.e("begin execute onReceivePassThroughMessage from " + miPushMessage.getMessageId());
                        pushMessageReceiverM57a.onReceivePassThroughMessage(context, miPushMessage);
                        return;
                    }
                    if (!miPushMessage.isNotified()) {
                        com.xiaomi.channel.commonutils.logger.b.e("begin execute onNotificationMessageArrived from " + miPushMessage.getMessageId());
                        pushMessageReceiverM57a.onNotificationMessageArrived(context, miPushMessage);
                        return;
                    }
                    if (intExtra2 == 1000) {
                        eo.a(context.getApplicationContext()).a(context.getPackageName(), intentA, 1007, (String) null);
                    } else {
                        eo.a(context.getApplicationContext()).a(context.getPackageName(), intentA, 3007, (String) null);
                    }
                    com.xiaomi.channel.commonutils.logger.b.e("begin execute onNotificationMessageClicked from\u3000" + miPushMessage.getMessageId());
                    pushMessageReceiverM57a.onNotificationMessageClicked(context, miPushMessage);
                    return;
                }
                if (!(aVarA instanceof MiPushCommandMessage)) {
                    return;
                }
                MiPushCommandMessage miPushCommandMessage = (MiPushCommandMessage) aVarA;
                com.xiaomi.channel.commonutils.logger.b.e("begin execute onCommandResult, command=" + miPushCommandMessage.getCommand() + ", resultCode=" + miPushCommandMessage.getResultCode() + ", reason=" + miPushCommandMessage.getReason());
                pushMessageReceiverM57a.onCommandResult(context, miPushCommandMessage);
                if (!TextUtils.equals(miPushCommandMessage.getCommand(), ey.COMMAND_REGISTER.f347a)) {
                    return;
                }
                pushMessageReceiverM57a.onReceiveRegisterResult(context, miPushCommandMessage);
                PushMessageHandler.a(context, miPushCommandMessage);
                if (miPushCommandMessage.getResultCode() != 0) {
                    return;
                }
            } else {
                if (intExtra != 3) {
                    if (intExtra == 5 && PushMessageHelper.ERROR_TYPE_NEED_PERMISSION.equals(intentA.getStringExtra(PushMessageHelper.ERROR_TYPE)) && (stringArrayExtra = intentA.getStringArrayExtra(PushMessageHelper.ERROR_MESSAGE)) != null) {
                        com.xiaomi.channel.commonutils.logger.b.e("begin execute onRequirePermissions, lack of necessary permissions");
                        pushMessageReceiverM57a.onRequirePermissions(context, stringArrayExtra);
                        return;
                    }
                    return;
                }
                MiPushCommandMessage miPushCommandMessage2 = (MiPushCommandMessage) intentA.getSerializableExtra(PushMessageHelper.KEY_COMMAND);
                com.xiaomi.channel.commonutils.logger.b.e("(Local) begin execute onCommandResult, command=" + miPushCommandMessage2.getCommand() + ", resultCode=" + miPushCommandMessage2.getResultCode() + ", reason=" + miPushCommandMessage2.getReason());
                pushMessageReceiverM57a.onCommandResult(context, miPushCommandMessage2);
                if (!TextUtils.equals(miPushCommandMessage2.getCommand(), ey.COMMAND_REGISTER.f347a)) {
                    return;
                }
                pushMessageReceiverM57a.onReceiveRegisterResult(context, miPushCommandMessage2);
                PushMessageHandler.a(context, miPushCommandMessage2);
                if (miPushCommandMessage2.getResultCode() != 0) {
                    return;
                }
            }
            i.b(context);
        } catch (RuntimeException e) {
            com.xiaomi.channel.commonutils.logger.b.a(e);
        }
    }

    public static void addJob(Context context, a aVar) {
        if (aVar != null) {
            f7978a.add(aVar);
            b(context);
            startService(context);
        }
    }

    private static void b(Context context) {
        if (f48a.isShutdown()) {
            return;
        }
        f48a.execute(new z(context));
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static void c(Context context) {
        try {
            a(context, f7978a.poll());
        } catch (RuntimeException e) {
            com.xiaomi.channel.commonutils.logger.b.a(e);
        }
    }

    public static void startService(Context context) {
        Intent intent = new Intent();
        intent.setComponent(new ComponentName(context, (Class<?>) MessageHandleService.class));
        com.xiaomi.push.al.a(context).a(new y(context, intent));
    }

    @Override // com.xiaomi.mipush.sdk.BaseService
    /* JADX INFO: renamed from: a */
    protected boolean mo63a() {
        ConcurrentLinkedQueue<a> concurrentLinkedQueue = f7978a;
        return concurrentLinkedQueue != null && concurrentLinkedQueue.size() > 0;
    }

    @Override // com.xiaomi.mipush.sdk.BaseService, android.app.Service
    public IBinder onBind(Intent intent) {
        return null;
    }

    @Override // com.xiaomi.mipush.sdk.BaseService, android.app.Service
    public void onStart(Intent intent, int i) {
        super.onStart(intent, i);
    }
}
