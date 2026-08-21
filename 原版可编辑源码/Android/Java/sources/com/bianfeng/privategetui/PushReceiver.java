package com.bianfeng.privategetui;

import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.os.Bundle;
import android.util.Log;
import com.igexin.sdk.PushConsts;
import com.igexin.sdk.PushManager;

public class PushReceiver extends BroadcastReceiver {
    public static final String ACTION_LOCAL = "com.bianfeng.push.action.local";
    private static final String TAG = "PushReceiver";
    public static String mMessageid;
    public static String mTaskid;

    @Override
    public void onReceive(Context context, Intent intent) {
        Log.d(TAG, "received message " + intent);
        processLocalAction(context, intent);
        processGetuiAction(context, intent);
    }

    public static final void processLocalAction(Context context, Intent intent) {
        if (ACTION_LOCAL.equals(intent.getAction())) {
            PushNotification.show(context, intent.getStringExtra("tickerText"), intent.getStringExtra("title"), intent.getStringExtra("message"));
        }
    }

    public static final Intent createLocalAction(Context context, String str, String str2, String str3) {
        Intent intent = new Intent(context, (Class<?>) PushReceiver.class);
        intent.setAction(ACTION_LOCAL);
        intent.putExtra("tickerText", str);
        intent.putExtra("title", str2);
        intent.putExtra("message", str3);
        return intent;
    }

    public static final void processGetuiAction(Context context, Intent intent) {
        Bundle extras = intent.getExtras();
        int i = extras.getInt("action");
        Log.d(TAG, "received action: " + i);
        if (i != 10001) {
            if (i != 10002) {
                return;
            }
            Log.d(TAG, "push cid:" + extras.getString(PushConsts.KEY_CLIENT_ID));
            setTag(context);
            return;
        }
        byte[] byteArray = extras.getByteArray("payload");
        if (byteArray != null) {
            Log.d(TAG, "Got Payload:" + new String(byteArray));
        }
        mTaskid = extras.getString("taskid");
        String string = extras.getString("messageid");
        mMessageid = string;
        Log.d(TAG, String.format("taskid = %s; messageid = %s;", mTaskid, string));
    }

    private static void setTag(Context context) {
        int tag = PushManager.getInstance().setTag(context, PushTag.createPushTags(), "" + System.currentTimeMillis());
        if (tag != 0) {
            if (tag == 20001) {
                Log.d(TAG, "set tag failed, error count");
            } else {
                Log.d(TAG, "set tag failed, catch exception");
            }
        }
    }
}
