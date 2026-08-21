package com.igexin.b.a.c.a;

import android.content.ComponentName;
import android.content.Context;
import android.content.Intent;
import android.content.ServiceConnection;
import android.os.Handler;
import android.os.IBinder;
import android.os.Looper;
import android.os.Message;
import android.os.Messenger;
import android.text.TextUtils;
import android.util.Log;
import com.igexin.push.core.x;
import com.igexin.sdk.IUserLoggerInterface;
import com.igexin.sdk.PushManager;

/* JADX INFO: loaded from: classes2.dex */
public class c extends Handler implements ServiceConnection {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final String f2444a;
    private Messenger b;
    private Messenger c;
    private b d;

    private c() {
        super(Looper.getMainLooper());
        this.f2444a = "LOG-LogController";
        this.d = new a();
    }

    public static c a() {
        return e.f2445a;
    }

    private void a(Context context) {
        com.igexin.b.a.c.b.a("try to bind log server", new Object[0]);
        try {
            Intent intent = new Intent(context, (Class<?>) x.a().c(context));
            intent.setType("SERVER_LOG");
            context.bindService(intent, this, 1);
        } catch (Exception e) {
            Log.e("LOG-LogController", "bind service error = " + e.toString());
        }
    }

    public void a(Context context, IUserLoggerInterface iUserLoggerInterface) {
        if (iUserLoggerInterface == null) {
            Log.i("LOG-LogController", "register parameter can not be null!");
            return;
        }
        Context applicationContext = context.getApplicationContext();
        a(applicationContext);
        this.d.a(iUserLoggerInterface);
        this.d.a();
        a("[LOG-LogController] Sdk version = " + PushManager.getInstance().getVersion(applicationContext));
    }

    public void a(String str) {
        b bVar = this.d;
        if (bVar != null) {
            bVar.a(str);
        }
    }

    @Override // android.os.Handler
    public void handleMessage(Message message) {
        if (message.what == 2) {
            String string = message.getData().getString("log_data");
            if (TextUtils.isEmpty(string)) {
                return;
            }
            if (!string.contains("\n")) {
                this.d.a(string);
                return;
            }
            for (String str : string.split("\n")) {
                this.d.a(str);
            }
        }
    }

    @Override // android.content.ServiceConnection
    public void onServiceConnected(ComponentName componentName, IBinder iBinder) {
        com.igexin.b.a.c.b.a("remote log service connected ", new Object[0]);
        try {
            this.c = new Messenger(iBinder);
            if (this.b == null) {
                this.b = new Messenger(this);
            }
            Message messageObtain = Message.obtain();
            messageObtain.replyTo = this.b;
            messageObtain.what = 1;
            this.c.send(messageObtain);
        } catch (Exception e) {
            a("Client sent Message to Service error = " + e);
        }
    }

    @Override // android.content.ServiceConnection
    public void onServiceDisconnected(ComponentName componentName) {
        this.c = null;
    }
}
