package com.vivo.push.sdk;

import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.content.pm.ResolveInfo;
import android.text.TextUtils;
import com.vivo.push.e;
import com.vivo.push.model.UnvarnishedMessage;
import com.vivo.push.util.ContextDelegate;
import com.vivo.push.util.p;
import com.vivo.push.util.t;
import java.util.List;

public abstract class BasePushMessageReceiver extends BroadcastReceiver implements PushMessageCallback {
    public static final String TAG = "PushMessageReceiver";

    @Override
    public boolean isAllowNet(Context context) {
        String str;
        if (context == null) {
            str = "isAllowNet sContext is null";
        } else {
            String packageName = context.getPackageName();
            if (!TextUtils.isEmpty(packageName)) {
                Intent intent = new Intent("com.vivo.pushservice.action.PUSH_SERVICE");
                intent.setPackage(packageName);
                List<ResolveInfo> listQueryIntentServices = context.getPackageManager().queryIntentServices(intent, 576);
                if (listQueryIntentServices != null && listQueryIntentServices.size() > 0) {
                    return t.a(context, packageName);
                }
                p.a(TAG, "this is client sdk");
                return true;
            }
            str = "isAllowNet pkgName is null";
        }
        p.a(TAG, str);
        return false;
    }

    @Override
    public void onBind(Context context, int i, String str) {
    }

    @Override
    public void onDelAlias(Context context, int i, List<String> list, List<String> list2, String str) {
    }

    @Override
    public void onDelTags(Context context, int i, List<String> list, List<String> list2, String str) {
    }

    @Override
    public void onListTags(Context context, int i, List<String> list, String str) {
    }

    @Override
    public void onLog(Context context, String str, int i, boolean z) {
    }

    @Override
    public void onPublish(Context context, int i, String str) {
    }

    @Override
    public final void onReceive(Context context, Intent intent) {
        Context applicationContext = ContextDelegate.getContext(context).getApplicationContext();
        e.a().a(applicationContext);
        p.d(TAG, "PushMessageReceiver " + applicationContext.getPackageName() + " ; requestId = " + intent.getStringExtra("req_id"));
        try {
            e.a().a(intent, this);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    @Override
    public void onSetAlias(Context context, int i, List<String> list, List<String> list2, String str) {
    }

    @Override
    public void onSetTags(Context context, int i, List<String> list, List<String> list2, String str) {
    }

    @Override
    public void onTransmissionMessage(Context context, UnvarnishedMessage unvarnishedMessage) {
    }

    @Override
    public void onUnBind(Context context, int i, String str) {
    }
}
