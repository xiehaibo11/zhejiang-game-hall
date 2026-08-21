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

public class MessageHandleService extends BaseService {
    private static ConcurrentLinkedQueue<a> a = new ConcurrentLinkedQueue<>();
    private static ExecutorService a = new ThreadPoolExecutor(1, 1, 15, TimeUnit.SECONDS, new LinkedBlockingQueue());

    public class a {
        private Intent a;
        private PushMessageReceiver a;

        public a(Intent intent, PushMessageReceiver pushMessageReceiver) {
            this.a = pushMessageReceiver;
            this.a = intent;
        }

        public Intent a() {
            return this.a;
        }

        public PushMessageReceiver a() {
            return this.a;
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
            PushMessageReceiver pushMessageReceiverA = aVar.a();
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
                        pushMessageReceiverA.onReceiveMessage(context, miPushMessage);
                    }
                    if (miPushMessage.getPassThrough() == 1) {
                        eo.a(context.getApplicationContext()).a(context.getPackageName(), intentA, 2004, (String) null);
                        com.xiaomi.channel.commonutils.logger.b.e("begin execute onReceivePassThroughMessage from " + miPushMessage.getMessageId());
                        pushMessageReceiverA.onReceivePassThroughMessage(context, miPushMessage);
                        return;
                    }
                    if (!miPushMessage.isNotified()) {
                        com.xiaomi.channel.commonutils.logger.b.e("begin execute onNotificationMessageArrived from " + miPushMessage.getMessageId());
                        pushMessageReceiverA.onNotificationMessageArrived(context, miPushMessage);
                        return;
                    }
                    if (intExtra2 == 1000) {
                        eo.a(context.getApplicationContext()).a(context.getPackageName(), intentA, 1007, (String) null);
                    } else {
                        eo.a(context.getApplicationContext()).a(context.getPackageName(), intentA, 3007, (String) null);
                    }
                    com.xiaomi.channel.commonutils.logger.b.e("begin execute onNotificationMessageClicked from\u3000" + miPushMessage.getMessageId());
                    pushMessageReceiverA.onNotificationMessageClicked(context, miPushMessage);
                    return;
                }
                if (!(aVarA instanceof MiPushCommandMessage)) {
                    return;
                }
                MiPushCommandMessage miPushCommandMessage = (MiPushCommandMessage) aVarA;
                com.xiaomi.channel.commonutils.logger.b.e("begin execute onCommandResult, command=" + miPushCommandMessage.getCommand() + ", resultCode=" + miPushCommandMessage.getResultCode() + ", reason=" + miPushCommandMessage.getReason());
                pushMessageReceiverA.onCommandResult(context, miPushCommandMessage);
                if (!TextUtils.equals(miPushCommandMessage.getCommand(), ey.a.a)) {
                    return;
                }
                pushMessageReceiverA.onReceiveRegisterResult(context, miPushCommandMessage);
                PushMessageHandler.a(context, miPushCommandMessage);
                if (miPushCommandMessage.getResultCode() != 0) {
                    return;
                }
            } else {
                if (intExtra != 3) {
                    if (intExtra == 5 && PushMessageHelper.ERROR_TYPE_NEED_PERMISSION.equals(intentA.getStringExtra(PushMessageHelper.ERROR_TYPE)) && (stringArrayExtra = intentA.getStringArrayExtra(PushMessageHelper.ERROR_MESSAGE)) != null) {
                        com.xiaomi.channel.commonutils.logger.b.e("begin execute onRequirePermissions, lack of necessary permissions");
                        pushMessageReceiverA.onRequirePermissions(context, stringArrayExtra);
                        return;
                    }
                    return;
                }
                MiPushCommandMessage miPushCommandMessage2 = (MiPushCommandMessage) intentA.getSerializableExtra(PushMessageHelper.KEY_COMMAND);
                com.xiaomi.channel.commonutils.logger.b.e("(Local) begin execute onCommandResult, command=" + miPushCommandMessage2.getCommand() + ", resultCode=" + miPushCommandMessage2.getResultCode() + ", reason=" + miPushCommandMessage2.getReason());
                pushMessageReceiverA.onCommandResult(context, miPushCommandMessage2);
                if (!TextUtils.equals(miPushCommandMessage2.getCommand(), ey.a.a)) {
                    return;
                }
                pushMessageReceiverA.onReceiveRegisterResult(context, miPushCommandMessage2);
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
            a.add(aVar);
            b(context);
            startService(context);
        }
    }

    private static void b(Context context) {
        if (a.isShutdown()) {
            return;
        }
        a.execute(new z(context));
    }

    private static void c(Context context) {
        try {
            a(context, a.poll());
        } catch (RuntimeException e) {
            com.xiaomi.channel.commonutils.logger.b.a(e);
        }
    }

    public static void startService(Context context) {
        Intent intent = new Intent();
        intent.setComponent(new ComponentName(context, (Class<?>) MessageHandleService.class));
        com.xiaomi.push.al.a(context).a(new y(context, intent));
    }

    @Override
    protected boolean a() {
        ConcurrentLinkedQueue<a> concurrentLinkedQueue = a;
        return concurrentLinkedQueue != null && concurrentLinkedQueue.size() > 0;
    }

    @Override
    public IBinder onBind(Intent intent) {
        return null;
    }

    @Override
    public void onStart(Intent intent, int i) {
        super.onStart(intent, i);
    }
}
