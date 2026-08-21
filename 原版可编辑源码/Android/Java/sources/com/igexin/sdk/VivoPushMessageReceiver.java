package com.igexin.sdk;

import android.content.Context;
import android.text.TextUtils;
import android.util.Log;
import com.igexin.assist.MessageBean;
import com.igexin.assist.action.MessageManger;
import com.igexin.assist.sdk.AssistPushConsts;
import com.vivo.push.sdk.OpenClientPushMessageReceiver;

public class VivoPushMessageReceiver extends OpenClientPushMessageReceiver {
    public static final String TAG = "Assist_VV";

    @Override
    public void onReceiveRegId(Context context, String str) {
        try {
            Log.d("Assist_VV", "onReceiveRegId :" + str);
            if (context == null || TextUtils.isEmpty(str)) {
                return;
            }
            MessageManger.getInstance().addMessage(new MessageBean(context, "token", AssistPushConsts.VIVO_PREFIX + str));
        } catch (Throwable unused) {
        }
    }
}
