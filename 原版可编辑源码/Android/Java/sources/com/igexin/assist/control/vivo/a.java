package com.igexin.assist.control.vivo;

import android.content.Context;
import android.text.TextUtils;
import android.util.Log;
import com.igexin.assist.MessageBean;
import com.igexin.assist.action.MessageManger;
import com.igexin.assist.sdk.AssistPushConsts;
import com.vivo.push.IPushActionListener;
import com.vivo.push.PushClient;

class a implements IPushActionListener {
    final Context a;
    final VivoPushManager b;

    a(VivoPushManager vivoPushManager, Context context) {
        this.b = vivoPushManager;
        this.a = context;
    }

    @Override
    public void onStateChanged(int i) {
        Log.d("Assist_VV", "turnOnPush finish, state = " + i);
        if (i != 0) {
            if (i == 101) {
                Log.d("Assist_VV", "the vivo rom not support system push");
                return;
            }
            return;
        }
        String regId = PushClient.getInstance(this.a).getRegId();
        Log.d("Assist_VV", "turnOnPush token = " + regId);
        if (this.a == null || TextUtils.isEmpty(regId)) {
            return;
        }
        MessageBean messageBean = new MessageBean(this.a, "token", AssistPushConsts.VIVO_PREFIX + regId);
        this.b.a(messageBean);
        MessageManger.getInstance().addMessage(messageBean);
    }
}
