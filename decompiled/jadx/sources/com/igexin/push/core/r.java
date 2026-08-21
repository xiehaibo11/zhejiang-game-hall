package com.igexin.push.core;

import android.content.ComponentName;
import android.content.Intent;
import android.content.ServiceConnection;
import android.os.Bundle;
import android.os.DeadObjectException;
import android.os.Handler;
import android.os.IBinder;
import android.os.Looper;
import android.os.Message;
import android.os.Messenger;
import android.util.Log;
import com.igexin.assist.sdk.AssistPushConsts;
import com.igexin.push.core.bean.PushTaskBean;
import com.igexin.sdk.PushConsts;
import com.igexin.sdk.message.BindAliasCmdMessage;
import com.igexin.sdk.message.FeedbackCmdMessage;
import com.igexin.sdk.message.GTNotificationMessage;
import com.igexin.sdk.message.GTTransmitMessage;
import com.igexin.sdk.message.SetTagCmdMessage;
import com.igexin.sdk.message.UnBindAliasCmdMessage;
import com.xiaomi.mipush.sdk.Constants;
import java.util.concurrent.ConcurrentLinkedQueue;

/* JADX INFO: loaded from: classes2.dex */
public final class r extends Handler implements ServiceConnection {
    private static volatile r b;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final ConcurrentLinkedQueue<Intent> f2583a;
    private final t c;
    private boolean d;
    private volatile Messenger e;
    private final IBinder.DeathRecipient f;

    private r() {
        super(Looper.getMainLooper());
        this.f = new s(this);
        this.c = new t(this);
        this.f2583a = new ConcurrentLinkedQueue<>();
        Message.obtain(this.c.a(), 3, 1, 0).sendToTarget();
    }

    public static r a() {
        if (b == null) {
            synchronized (r.class) {
                if (b == null) {
                    b = new r();
                }
            }
        }
        return b;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void a(boolean z) {
        if (z && this.e != null) {
            try {
                this.e.getBinder().unlinkToDeath(this.f, 0);
            } catch (Throwable unused) {
            }
            this.d = false;
            this.e = null;
        }
        if (this.d) {
            return;
        }
        d();
        this.d = true;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public boolean a(IBinder iBinder) {
        if (iBinder == null) {
            return false;
        }
        this.e = new Messenger(iBinder);
        try {
            iBinder.linkToDeath(this.f, 0);
            return true;
        } catch (Exception e) {
            com.igexin.b.a.c.b.a("MsgServerSender|linkToDeath to iservice ex = " + e.toString(), new Object[0]);
            return true;
        }
    }

    private void b(Intent intent) {
        if (intent == null) {
            return;
        }
        if (this.e == null) {
            com.igexin.b.a.c.b.a("MsgServerSender|realSend, remoteMessenger is null", new Object[0]);
        }
        Bundle extras = intent.getExtras();
        if (extras == null || extras.get("action") == null || !(extras.get("action") instanceof Integer)) {
            return;
        }
        com.igexin.b.a.c.b.a("MsgServerSender|realSend action = " + extras.getInt("action"), new Object[0]);
        Message messageObtain = Message.obtain();
        messageObtain.what = 1;
        messageObtain.obj = intent;
        try {
            this.e.send(messageObtain);
        } catch (Exception e) {
            com.igexin.b.a.c.b.a("MsgServerSender|realSend iservice error = " + e.toString(), new Object[0]);
            if (e instanceof DeadObjectException) {
                Message.obtain(this.c.a(), 2, 0, 0).sendToTarget();
            }
        }
    }

    private void d() {
        com.igexin.b.a.c.b.a("MsgServerSender|try to bind iservice", new Object[0]);
        try {
            Intent intent = new Intent(d.g, (Class<?>) x.a().d(d.g));
            intent.setType(d.g.getPackageName());
            d.g.bindService(intent, this, 1);
        } catch (Exception e) {
            Log.e("MsgServerSender", "bind iservice error = " + e.toString());
            com.igexin.b.a.c.b.a("MsgServerSender|bind iservice error = " + e.toString(), new Object[0]);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void e() {
        while (!this.f2583a.isEmpty()) {
            Intent intentPoll = this.f2583a.poll();
            if (intentPoll != null) {
                b(intentPoll);
            }
        }
    }

    public void a(int i) {
        Bundle bundle = new Bundle();
        bundle.putInt("action", PushConsts.GET_SDKSERVICEPID);
        bundle.putInt("pid", i);
        a(bundle);
    }

    public void a(Intent intent) {
        if (this.e != null) {
            b(intent);
        } else {
            this.f2583a.add(intent);
        }
    }

    public void a(Bundle bundle) {
        Intent intent = new Intent();
        intent.putExtras(bundle);
        a(intent);
    }

    public void a(String str) {
        Bundle bundle = new Bundle();
        bundle.putInt("action", PushConsts.GET_DEVICETOKEN);
        bundle.putString(PushConsts.KEY_DEVICE_TOKEN, str);
        a(bundle);
    }

    public void a(String str, String str2) {
        Bundle bundle = new Bundle();
        bundle.putInt("action", 10010);
        bundle.putSerializable(PushConsts.KEY_CMD_MSG, new SetTagCmdMessage(str, str2, PushConsts.SET_TAG_RESULT));
        a(bundle);
    }

    public void a(String str, String str2, String str3, String str4) {
        Bundle bundle = new Bundle();
        bundle.putInt("action", 10011);
        bundle.putSerializable("notification_arrived", new GTNotificationMessage(str, str2, str3, str4));
        a(bundle);
    }

    public void a(String str, String str2, String str3, String str4, long j) {
        if (d.f2565a == null || !d.f2565a.equals(str)) {
            return;
        }
        Bundle bundle = new Bundle();
        bundle.putInt("action", 10010);
        bundle.putSerializable(PushConsts.KEY_CMD_MSG, new FeedbackCmdMessage(str2, str3, str4, j, PushConsts.THIRDPART_FEEDBACK));
        a(bundle);
    }

    public void a(String str, String str2, String str3, String str4, PushTaskBean pushTaskBean) {
        boolean zA;
        if (d.g == null) {
            return;
        }
        com.igexin.b.a.c.b.a("MsgServerSender", "broadcastPayload");
        byte[] msgExtra = null;
        if (str4 != null) {
            msgExtra = str4.getBytes();
        } else {
            PushTaskBean pushTaskBean2 = d.Z.get(com.igexin.push.core.a.e.a().a(str, str2));
            if (pushTaskBean2 != null) {
                msgExtra = pushTaskBean2.getMsgExtra();
            }
        }
        byte[] bArr = msgExtra;
        if (bArr == null) {
            com.igexin.b.a.c.b.a("startapp|broadcast|payload is empty!", new Object[0]);
            return;
        }
        com.igexin.b.a.c.b.a("startapp|broadcast|payload = " + new String(bArr), new Object[0]);
        if (com.igexin.assist.sdk.a.i(d.g)) {
            com.igexin.push.core.b.d dVar = new com.igexin.push.core.b.d(d.g);
            zA = dVar.a(str);
            if (!zA) {
                dVar.b(str);
            }
        } else {
            zA = false;
        }
        com.igexin.b.a.c.b.a("MsgServerSender | broadcastPayload().isMsgRepeated = " + zA, new Object[0]);
        boolean z = pushTaskBean != null && pushTaskBean.isOfflineMessage();
        if (d.f2565a == null || !d.f2565a.equals(str3)) {
            return;
        }
        Bundle bundle = new Bundle();
        bundle.putInt("action", 10001);
        bundle.putSerializable(PushConsts.KEY_MESSAGE_DATA, new GTTransmitMessage(str, AssistPushConsts.GT_PREFIX + str2, str2 + Constants.COLON_SEPARATOR + str, bArr, z).setRepeatMessage(zA));
        a(bundle);
    }

    public void b() {
        Bundle bundle = new Bundle();
        bundle.putInt("action", PushConsts.GET_SDKONLINESTATE);
        bundle.putBoolean(PushConsts.KEY_ONLINE_STATE, d.n);
        a(bundle);
    }

    public void b(String str) {
        Bundle bundle = new Bundle();
        bundle.putInt("action", PushConsts.REVOCATION_TRANSMIT_MSG);
        bundle.putSerializable(PushConsts.REVOCATION_TRANSMIT_TASKID, str);
        a().a(bundle);
    }

    public void b(String str, String str2) {
        Bundle bundle = new Bundle();
        bundle.putInt("action", 10010);
        bundle.putSerializable(PushConsts.KEY_CMD_MSG, new BindAliasCmdMessage(str, str2, 10010));
        a(bundle);
    }

    public void b(String str, String str2, String str3, String str4) {
        Bundle bundle = new Bundle();
        bundle.putInt("action", PushConsts.ACTION_NOTIFICATION_CLICKED);
        bundle.putSerializable(PushConsts.KEY_NOTIFICATION_CLICKED, new GTNotificationMessage(str, str2, str3, str4));
        a(bundle);
    }

    public void c() {
        Log.d("PushService", "clientid is " + d.u);
        com.igexin.b.a.c.b.a("broadcastClientId|" + d.u, new Object[0]);
        Bundle bundle = new Bundle();
        bundle.putInt("action", 10002);
        bundle.putString(PushConsts.KEY_CLIENT_ID, d.u);
        a(bundle);
    }

    public void c(String str, String str2) {
        Bundle bundle = new Bundle();
        bundle.putInt("action", 10010);
        bundle.putSerializable(PushConsts.KEY_CMD_MSG, new UnBindAliasCmdMessage(str, str2, 10011));
        a(bundle);
    }

    @Override // android.os.Handler
    public void handleMessage(Message message) {
        int i = message.what;
        super.handleMessage(message);
    }

    @Override // android.content.ServiceConnection
    public void onServiceConnected(ComponentName componentName, IBinder iBinder) {
        com.igexin.b.a.c.b.a("MsgServerSender|remote iservice connected ", new Object[0]);
        Message.obtain(this.c.a(), 1, iBinder).sendToTarget();
    }

    @Override // android.content.ServiceConnection
    public void onServiceDisconnected(ComponentName componentName) {
        com.igexin.b.a.c.b.a("MsgServerSender|remote iservice disConnected ~~~", new Object[0]);
        Message.obtain(this.c.a(), 2, 0, 0).sendToTarget();
    }
}
