package com.bianfeng.ymnsdk.util;

import android.R;
import android.app.Activity;
import android.os.Handler;
import android.os.Message;
import android.view.View;
import android.view.ViewGroup;
import java.util.Observer;

/* JADX INFO: loaded from: classes.dex */
public class ViewHelper {
    public static void setLogoView(Activity activity, final View logoView, long delayMillis, final Observer callback) {
        try {
            final ViewGroup parent = (ViewGroup) activity.findViewById(R.id.content);
            final View contentView = parent.getChildAt(0);
            parent.removeView(contentView);
            parent.addView(logoView, 0, new ViewGroup.LayoutParams(-1, -1));
            Handler handler = new Handler(new Handler.Callback() { // from class: com.bianfeng.ymnsdk.util.ViewHelper.1
                @Override // android.os.Handler.Callback
                public boolean handleMessage(Message msg) {
                    parent.removeView(logoView);
                    View view = contentView;
                    if (view != null) {
                        parent.addView(view, 0, new ViewGroup.LayoutParams(-1, -1));
                    }
                    callback.update(null, null);
                    return false;
                }
            });
            handler.sendEmptyMessageDelayed(0, delayMillis);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}
