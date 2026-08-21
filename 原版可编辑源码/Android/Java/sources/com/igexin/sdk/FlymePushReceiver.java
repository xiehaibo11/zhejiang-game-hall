package com.igexin.sdk;

import android.content.Context;
import android.content.Intent;
import android.text.TextUtils;
import android.util.Log;
import com.igexin.assist.MessageBean;
import com.igexin.assist.action.MessageManger;
import com.igexin.assist.sdk.AssistPushConsts;
import com.igexin.assist.util.AssistUtils;
import com.meizu.cloud.pushsdk.MzPushMessageReceiver;
import com.meizu.cloud.pushsdk.handler.MzPushMessage;
import com.meizu.cloud.pushsdk.notification.PushNotificationBuilder;
import com.meizu.cloud.pushsdk.platform.message.PushSwitchStatus;
import com.meizu.cloud.pushsdk.platform.message.RegisterStatus;
import com.meizu.cloud.pushsdk.platform.message.SubAliasStatus;
import com.meizu.cloud.pushsdk.platform.message.SubTagsStatus;
import com.meizu.cloud.pushsdk.platform.message.UnRegisterStatus;
import com.tkay.expressad.foundation.h.i;
import org.json.JSONObject;

public class FlymePushReceiver extends MzPushMessageReceiver {
    public static final String CONTENT = "content";
    public static final String MSG_KEY_PAYLOAD = "gt_payload";
    public static final String MZ_STATUS_BAR_SMALL_ICON = "mz_push_notification_small_icon";
    public static final String TAG = "Assist_MZ";
    private Context a;
    private int b;

    @Override
    public void onMessage(Context context, Intent intent) {
        if (context == null || intent == null) {
            return;
        }
        try {
            Log.d("Assist_MZ", "onMessage intent msg...");
            String stringExtra = intent.getStringExtra("content");
            if (TextUtils.isEmpty(stringExtra)) {
                return;
            }
            MessageBean messageBean = new MessageBean(context, "payload", stringExtra);
            messageBean.setMessageSource(AssistPushConsts.MZ_PREFIX);
            MessageManger.getInstance().addMessage(messageBean);
        } catch (Throwable unused) {
        }
    }

    @Override
    public void onMessage(Context context, String str) {
        try {
            Log.d("Assist_MZ", "onMessage receive msg ...");
            if (context == null || TextUtils.isEmpty(str)) {
                return;
            }
            MessageBean messageBean = new MessageBean(context, "payload", str);
            messageBean.setMessageSource(AssistPushConsts.MZ_PREFIX);
            MessageManger.getInstance().addMessage(messageBean);
        } catch (Throwable unused) {
        }
    }

    @Override
    public void onNotificationArrived(Context context, MzPushMessage mzPushMessage) {
        Log.d("Assist_MZ", "onNotificationArrived receive msg ...");
    }

    @Override
    public void onNotificationClicked(Context context, MzPushMessage mzPushMessage) {
        try {
            Log.d("Assist_MZ", "onNotificationClicked receive msg ...");
            String selfDefineContentString = mzPushMessage.getSelfDefineContentString();
            if (context != null && !TextUtils.isEmpty(selfDefineContentString)) {
                try {
                    JSONObject jSONObject = new JSONObject(selfDefineContentString);
                    if (jSONObject.has(MSG_KEY_PAYLOAD)) {
                        selfDefineContentString = jSONObject.getString(MSG_KEY_PAYLOAD);
                    }
                } catch (Throwable unused) {
                }
                if (!TextUtils.isEmpty(selfDefineContentString)) {
                    MessageBean messageBean = new MessageBean(context, "payload", selfDefineContentString);
                    messageBean.setMessageSource(AssistPushConsts.MZ_PREFIX);
                    MessageManger.getInstance().addMessage(messageBean);
                }
            }
            AssistUtils.startGetuiService(context);
        } catch (Throwable unused2) {
        }
    }

    @Override
    public void onPushStatus(Context context, PushSwitchStatus pushSwitchStatus) {
    }

    @Override
    public void onReceive(Context context, Intent intent) {
        this.a = context;
        super.onReceive(context, intent);
    }

    @Override
    public void onRegister(Context context, String str) {
        try {
            Log.d("Assist_MZ", "onRegister :" + str);
            if (context == null || TextUtils.isEmpty(str)) {
                return;
            }
            MessageManger.getInstance().addMessage(new MessageBean(context, "token", AssistPushConsts.MZ_PREFIX + str));
        } catch (Throwable unused) {
        }
    }

    @Override
    public void onRegisterStatus(Context context, RegisterStatus registerStatus) {
        try {
            Log.d("Assist_MZ", "onRegisterStatus :" + registerStatus);
            String pushId = registerStatus.getPushId();
            if (context == null || TextUtils.isEmpty(pushId)) {
                return;
            }
            MessageManger.getInstance().addMessage(new MessageBean(context, "token", AssistPushConsts.MZ_PREFIX + pushId));
        } catch (Throwable unused) {
        }
    }

    @Override
    public void onSubAliasStatus(Context context, SubAliasStatus subAliasStatus) {
    }

    @Override
    public void onSubTagsStatus(Context context, SubTagsStatus subTagsStatus) {
    }

    @Override
    public void onUnRegister(Context context, boolean z) {
    }

    @Override
    public void onUnRegisterStatus(Context context, UnRegisterStatus unRegisterStatus) {
    }

    @Override
    public void onUpdateNotificationBuilder(PushNotificationBuilder pushNotificationBuilder) {
        int identifier;
        try {
            if (this.b != 0) {
                identifier = this.b;
            } else {
                if (this.a == null) {
                    return;
                }
                identifier = this.a.getResources().getIdentifier("mz_push_notification_small_icon", i.c, this.a.getPackageName());
                this.b = identifier;
                if (identifier == 0) {
                    return;
                }
            }
            pushNotificationBuilder.setStatusBarIcon(identifier);
        } catch (Throwable unused) {
        }
    }
}
