package com.igexin.assist.control.vivo;

import android.content.Context;
import android.util.Log;
import com.igexin.assist.MessageBean;
import com.igexin.assist.action.MessageManger;
import com.vivo.push.IPushActionListener;

class b implements IPushActionListener {
    final Context a;
    final VivoPushManager b;

    b(VivoPushManager vivoPushManager, Context context) {
        this.b = vivoPushManager;
        this.a = context;
    }

    @Override
    public void onStateChanged(int i) {
        Log.d("Assist_VV", "turnOffPush finish, state = " + i);
        if (i != 0 || this.a == null) {
            return;
        }
        Log.d("Assist_VV", "turnOnPush token = \"false\"");
        MessageManger.getInstance().addMessage(new MessageBean(this.a, "token", "false"));
    }
}
