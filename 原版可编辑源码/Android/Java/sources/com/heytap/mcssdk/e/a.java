package com.heytap.mcssdk.e;

import android.content.Context;
import com.heytap.mcssdk.PushService;
import com.heytap.mcssdk.constant.MessageConstant;
import com.heytap.mcssdk.utils.Utils;
import com.heytap.mcssdk.utils.d;
import com.heytap.mcssdk.utils.f;
import com.heytap.msp.push.callback.ICallBackResultService;
import com.heytap.msp.push.callback.IDataMessageCallBackService;
import com.heytap.msp.push.callback.IGetAppNotificationCallBackService;
import com.heytap.msp.push.callback.ISetAppNotificationCallBackService;
import com.heytap.msp.push.mode.BaseMode;

public class a implements c {
    private void a(com.heytap.mcssdk.c.b bVar, PushService pushService) {
        String str;
        if (bVar == null) {
            str = "message is null , please check param of parseCommandMessage(2)";
        } else if (pushService == null) {
            str = "pushService is null , please check param of parseCommandMessage(2)";
        } else {
            if (pushService.getPushCallback() != null) {
                int iE = bVar.e();
                if (iE == 12287) {
                    ICallBackResultService pushCallback = pushService.getPushCallback();
                    if (pushCallback != null) {
                        pushCallback.onError(bVar.g(), bVar.f());
                        return;
                    }
                    return;
                }
                if (iE == 12298) {
                    pushService.getPushCallback().onSetPushTime(bVar.g(), bVar.f());
                    return;
                }
                if (iE == 12306) {
                    pushService.getPushCallback().onGetPushStatus(bVar.g(), Utils.parseInt(bVar.f()));
                    return;
                }
                if (iE == 12309) {
                    pushService.getPushCallback().onGetNotificationStatus(bVar.g(), Utils.parseInt(bVar.f()));
                    return;
                }
                if (iE == 12289) {
                    if (bVar.g() == 0) {
                        pushService.setRegisterID(bVar.f());
                    }
                    pushService.getPushCallback().onRegister(bVar.g(), bVar.f());
                    return;
                }
                if (iE == 12290) {
                    pushService.getPushCallback().onUnRegister(bVar.g());
                    return;
                }
                switch (iE) {
                    case MessageConstant.CommandId.COMMAND_APP_NOTIFICATION_OPEN:
                    case MessageConstant.CommandId.COMMAND_APP_NOTIFICATION_CLOSE:
                        ISetAppNotificationCallBackService pushSetAppNotificationCallBack = pushService.getPushSetAppNotificationCallBack();
                        if (pushSetAppNotificationCallBack != null) {
                            pushSetAppNotificationCallBack.onSetAppNotificationSwitch(bVar.g());
                        }
                        break;
                    case MessageConstant.CommandId.COMMAND_APP_NOTIFICATION_GET:
                        int i = 0;
                        try {
                            i = Integer.parseInt(bVar.f());
                            break;
                        } catch (Exception unused) {
                        }
                        IGetAppNotificationCallBackService pushGetAppNotificationCallBack = pushService.getPushGetAppNotificationCallBack();
                        if (pushGetAppNotificationCallBack != null) {
                            pushGetAppNotificationCallBack.onGetAppNotificationSwitch(bVar.g(), i);
                        }
                        break;
                }
            }
            str = "pushService.getPushCallback() is null , please check param of parseCommandMessage(2)";
        }
        d.e(str);
    }

    @Override
    public void a(Context context, BaseMode baseMode, IDataMessageCallBackService iDataMessageCallBackService) {
        if (baseMode != null && baseMode.getType() == 4105) {
            final com.heytap.mcssdk.c.b bVar = (com.heytap.mcssdk.c.b) baseMode;
            d.b("mcssdk-CallBackResultProcessor:" + bVar.toString());
            f.b(new Runnable() {
                @Override
                public void run() {
                    a.this.a(bVar, PushService.getInstance());
                }
            });
        }
    }
}
