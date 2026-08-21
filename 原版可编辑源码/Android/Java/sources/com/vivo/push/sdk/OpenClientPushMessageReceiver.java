package com.vivo.push.sdk;

import android.content.Context;
import com.vivo.push.model.UPSNotificationMessage;
import com.vivo.push.model.UnvarnishedMessage;
import java.util.List;

public abstract class OpenClientPushMessageReceiver extends BasePushMessageReceiver {
    @Override
    public final boolean isAllowNet(Context context) {
        return super.isAllowNet(context);
    }

    @Override
    public final void onBind(Context context, int i, String str) {
        super.onBind(context, i, str);
    }

    @Override
    public final void onDelAlias(Context context, int i, List<String> list, List<String> list2, String str) {
    }

    @Override
    public final void onDelTags(Context context, int i, List<String> list, List<String> list2, String str) {
    }

    @Override
    public final void onListTags(Context context, int i, List<String> list, String str) {
        super.onListTags(context, i, list, str);
    }

    @Override
    public final void onLog(Context context, String str, int i, boolean z) {
        super.onLog(context, str, i, z);
    }

    @Override
    public final boolean onNotificationMessageArrived(Context context, UPSNotificationMessage uPSNotificationMessage) {
        return false;
    }

    @Override
    public void onNotificationMessageClicked(Context context, UPSNotificationMessage uPSNotificationMessage) {
    }

    @Override
    public final void onPublish(Context context, int i, String str) {
        super.onPublish(context, i, str);
    }

    public void onReceiveRegId(Context context, String str) {
    }

    @Override
    public final void onSetAlias(Context context, int i, List<String> list, List<String> list2, String str) {
    }

    @Override
    public final void onSetTags(Context context, int i, List<String> list, List<String> list2, String str) {
    }

    @Override
    public void onTransmissionMessage(Context context, UnvarnishedMessage unvarnishedMessage) {
    }

    @Override
    public final void onUnBind(Context context, int i, String str) {
        super.onUnBind(context, i, str);
    }
}
