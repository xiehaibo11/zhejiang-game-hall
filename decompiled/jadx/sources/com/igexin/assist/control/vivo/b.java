package com.igexin.assist.control.vivo;

import android.content.Context;
import android.util.Log;
import com.igexin.assist.MessageBean;
import com.igexin.assist.action.MessageManger;
import com.vivo.push.IPushActionListener;

/* JADX INFO: loaded from: classes2.dex */
class b implements IPushActionListener {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ Context f2424a;
    final /* synthetic */ VivoPushManager b;

    b(VivoPushManager vivoPushManager, Context context) {
        this.b = vivoPushManager;
        this.f2424a = context;
    }

    @Override // com.vivo.push.IPushActionListener
    public void onStateChanged(int i) {
        Log.d("Assist_VV", "turnOffPush finish, state = " + i);
        if (i != 0 || this.f2424a == null) {
            return;
        }
        Log.d("Assist_VV", "turnOnPush token = \"false\"");
        MessageManger.getInstance().addMessage(new MessageBean(this.f2424a, "token", "false"));
    }
}
