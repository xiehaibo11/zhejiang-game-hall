package com.bianfeng.privategetui;

import android.content.Context;
import android.content.pm.ApplicationInfo;
import android.content.pm.PackageManager;
import android.net.Uri;
import android.os.Bundle;
import android.os.Message;
import android.util.Log;
import com.bianfeng.privategetui.bean.YmnGetuiMessageBean;
import com.bianfeng.ymnsdk.util.Logger;
import com.igexin.sdk.GTIntentService;
import com.igexin.sdk.PushConsts;
import com.igexin.sdk.PushManager;
import com.igexin.sdk.message.BindAliasCmdMessage;
import com.igexin.sdk.message.FeedbackCmdMessage;
import com.igexin.sdk.message.GTCmdMessage;
import com.igexin.sdk.message.GTNotificationMessage;
import com.igexin.sdk.message.GTTransmitMessage;
import com.igexin.sdk.message.SetTagCmdMessage;
import com.igexin.sdk.message.UnBindAliasCmdMessage;
import org.json.JSONObject;

public class YmnGetuiIntentService extends GTIntentService {
    private static final String TAG = "GetuiSdkDemo";
    private String params = "";

    @Override
    public void onReceiveServicePid(Context context, int i) {
        Log.d(TAG, "onReceiveServicePid -> " + i);
        YmnGetuiSharedPreferencesUtils.putPid(i);
    }

    @Override
    public void onReceiveMessageData(Context context, GTTransmitMessage gTTransmitMessage) {
        String appid = gTTransmitMessage.getAppid();
        String taskId = gTTransmitMessage.getTaskId();
        String messageId = gTTransmitMessage.getMessageId();
        byte[] payload = gTTransmitMessage.getPayload();
        String pkgName = gTTransmitMessage.getPkgName();
        String clientId = gTTransmitMessage.getClientId();
        boolean zSendFeedbackMessage = PushManager.getInstance().sendFeedbackMessage(context, taskId, messageId, PushConsts.MIN_FEEDBACK_ACTION);
        StringBuilder sb = new StringBuilder();
        sb.append("call sendFeedbackMessage = ");
        sb.append(zSendFeedbackMessage ? "success" : "failed");
        Log.d(TAG, sb.toString());
        Log.d(TAG, "onReceiveMessageData -> appid = " + appid + "\ntaskid = " + taskId + "\nmessageid = " + messageId + "\npkg = " + pkgName + "\ncid = " + clientId);
        if (payload == null) {
            Log.e(TAG, "receiver payload = null");
        } else {
            String str = new String(payload);
            Log.d(TAG, "receiver payload = " + str);
            try {
                JSONObject jSONObject = new JSONObject(str);
                if (jSONObject.has("key")) {
                    YmnGetuiSharedPreferencesUtils.put("key", jSONObject.getString("key"));
                }
                boolean z = (jSONObject.has("online_display") && jSONObject.getInt("online_display") == 0) ? false : true;
                Log.e("ymnsdk", "online_display is " + z);
                String string = jSONObject.has("title") ? jSONObject.getString("title") : "标题";
                String string2 = jSONObject.has("content") ? jSONObject.getString("content") : "内容";
                if (jSONObject.has("params")) {
                    YmnGetuiSharedPreferencesUtils.put("params", jSONObject.getJSONArray("params").toString());
                    this.params = jSONObject.getJSONArray("params").toString();
                }
                Logger.e("offline is " + YmnGetuiSharedPreferencesUtils.read("offline"));
                Log.e("ymnsdk", "onReceiveMessageData pkgname is " + pkgName);
                Log.e("ymnsdk", "online_display2 is " + z);
                Log.e("ymnsdk", "YmnGetuiSharedPreferencesUtils.read(\"onResume\") is " + YmnGetuiSharedPreferencesUtils.read("onResume"));
                if (z || YmnGetuiSharedPreferencesUtils.read("onResume").equals("false")) {
                    PushNotification.showLoacl(context, pkgName, string, string2, this.params);
                    int iIntValue = (YmnGetuiSharedPreferencesUtils.read("badgenumber").isEmpty() ? 0 : Integer.valueOf(YmnGetuiSharedPreferencesUtils.read("badgenumber")).intValue()) + 1;
                    try {
                        Bundle bundle = new Bundle();
                        bundle.putString("package", getMetaData(context, "PUSH_APP_PACKAGENAME"));
                        bundle.putString("class", getMetaData(context, "PUSH_APP_MAIN_ACTIVITY"));
                        bundle.putInt("badgenumber", iIntValue);
                        context.getContentResolver().call(Uri.parse("content://com.huawei.android.launcher.settings/badge/"), "change_badge", (String) null, bundle);
                        YmnGetuiSharedPreferencesUtils.put("badgenumber", "" + iIntValue);
                    } catch (Exception e) {
                        e.printStackTrace();
                    }
                }
            } catch (Exception e2) {
                e2.printStackTrace();
            }
        }
        Log.d(TAG, "----------------------------------------------------------------------------------------------");
    }

    @Override
    public void onReceiveClientId(Context context, String str) {
        Log.e(TAG, "onReceiveClientId -> clientid = " + str);
        YmnGetuiSharedPreferencesUtils.put("getClientid", "true");
        YmnGetuiSharedPreferencesUtils.putCid(str);
    }

    @Override
    public void onReceiveOnlineState(Context context, boolean z) {
        StringBuilder sb = new StringBuilder();
        sb.append("onReceiveOnlineState -> ");
        sb.append(z ? "online" : "offline");
        Log.d(TAG, sb.toString());
        YmnGetuiSharedPreferencesUtils.putCidState(z);
    }

    @Override
    public void onReceiveCommandResult(Context context, GTCmdMessage gTCmdMessage) {
        Log.d(TAG, "onReceiveCommandResult -> " + gTCmdMessage);
        if (gTCmdMessage == null) {
            return;
        }
        int action = gTCmdMessage.getAction();
        if (action == 10009) {
            setTagResult((SetTagCmdMessage) gTCmdMessage);
            return;
        }
        if (action == 10010) {
            bindAliasResult((BindAliasCmdMessage) gTCmdMessage);
        } else if (action == 10011) {
            unbindAliasResult((UnBindAliasCmdMessage) gTCmdMessage);
        } else if (action == 10006) {
            feedbackResult((FeedbackCmdMessage) gTCmdMessage);
        }
    }

    @Override
    public void onNotificationMessageArrived(Context context, GTNotificationMessage gTNotificationMessage) {
        if (gTNotificationMessage == null) {
            return;
        }
        YmnGetuiMessageBean ymnGetuiMessageBean = new YmnGetuiMessageBean(gTNotificationMessage.getAppid(), gTNotificationMessage.getTaskId(), gTNotificationMessage.getMessageId(), gTNotificationMessage.getPkgName(), gTNotificationMessage.getClientId(), gTNotificationMessage.getTitle(), gTNotificationMessage.getContent());
        YmnGetuiSharedPreferencesUtils.putMsgArrived(ymnGetuiMessageBean.toString());
        sendMessage(ymnGetuiMessageBean.toString(), GetuiWrapper.GETUI_MESSAGE_ARRIVED);
    }

    @Override
    public void onNotificationMessageClicked(Context context, GTNotificationMessage gTNotificationMessage) {
        if (gTNotificationMessage == null) {
            return;
        }
        YmnGetuiMessageBean ymnGetuiMessageBean = new YmnGetuiMessageBean(gTNotificationMessage.getAppid(), gTNotificationMessage.getTaskId(), gTNotificationMessage.getMessageId(), gTNotificationMessage.getPkgName(), gTNotificationMessage.getClientId(), gTNotificationMessage.getTitle(), gTNotificationMessage.getContent());
        YmnGetuiSharedPreferencesUtils.putMsgClick(ymnGetuiMessageBean.toString());
        sendMessage(ymnGetuiMessageBean.toString(), GetuiWrapper.GETUI_MESSAGE_CLICK);
    }

    private void setTagResult(SetTagCmdMessage setTagCmdMessage) {
        String sn = setTagCmdMessage.getSn();
        int i = Integer.parseInt(setTagCmdMessage.getCode());
        if (i == 0) {
            sendMessage(sn, GetuiWrapper.GETUI_TAG_SUCCESS);
            return;
        }
        sendMessage(i + "|" + sn, GetuiWrapper.GETUI_TAG_FAIL);
    }

    private void bindAliasResult(BindAliasCmdMessage bindAliasCmdMessage) {
        String sn = bindAliasCmdMessage.getSn();
        int i = Integer.parseInt(bindAliasCmdMessage.getCode());
        if (i == 0) {
            sendMessage(sn, GetuiWrapper.GETUI_BIND_ALIAS_SUCCESS);
            return;
        }
        sendMessage(i + "|" + sn, GetuiWrapper.GETUI_BIND_ALIAS_FAIL);
    }

    private void unbindAliasResult(UnBindAliasCmdMessage unBindAliasCmdMessage) {
        String sn = unBindAliasCmdMessage.getSn();
        int i = Integer.parseInt(unBindAliasCmdMessage.getCode());
        if (i == 0) {
            sendMessage(sn, GetuiWrapper.GETUI_UNBIND_ALIAS_SUCCESS);
            return;
        }
        sendMessage(i + "|" + sn, GetuiWrapper.GETUI_UNBIND_ALIAS_FAIL);
    }

    private void feedbackResult(FeedbackCmdMessage feedbackCmdMessage) {
        feedbackCmdMessage.getAppid();
        feedbackCmdMessage.getTaskId();
        feedbackCmdMessage.getActionId();
        feedbackCmdMessage.getResult();
        feedbackCmdMessage.getTimeStamp();
        feedbackCmdMessage.getClientId();
    }

    private void sendMessage(String str, int i) {
        Message messageObtain = Message.obtain();
        messageObtain.what = i;
        messageObtain.obj = str;
        YmnGetuiHandler.setMsg(messageObtain);
    }

    @Override
    public void onReceiveDeviceToken(Context context, String str) {
        super.onReceiveDeviceToken(context, str);
        YmnGetuiSharedPreferencesUtils.putToken(str);
    }

    public static String getMetaData(Context context, String str) {
        try {
            ApplicationInfo applicationInfo = context.getPackageManager().getApplicationInfo(context.getPackageName(), 128);
            if (applicationInfo.metaData.get(str) != null) {
                return (String) applicationInfo.metaData.get(str);
            }
            return null;
        } catch (PackageManager.NameNotFoundException e) {
            e.printStackTrace();
            return null;
        }
    }
}
