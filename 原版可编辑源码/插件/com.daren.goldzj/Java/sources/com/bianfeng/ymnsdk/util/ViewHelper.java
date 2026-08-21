package com.bianfeng.ymnsdk.util;

import android.R;
import android.app.Activity;
import android.os.Handler;
import android.os.Message;
import android.view.View;
import android.view.ViewGroup;
import java.util.Observer;

public class ViewHelper {
    public static void setLogoView(Activity activity, final View view, long j, final Observer observer) {
        try {
            final ViewGroup viewGroup = (ViewGroup) activity.findViewById(R.id.content);
            final View childAt = viewGroup.getChildAt(0);
            viewGroup.removeView(childAt);
            viewGroup.addView(view, 0, new ViewGroup.LayoutParams(-1, -1));
            new Handler(new Handler.Callback() {
                @Override
                public boolean handleMessage(Message message) {
                    viewGroup.removeView(view);
                    View view2 = childAt;
                    if (view2 != null) {
                        viewGroup.addView(view2, 0, new ViewGroup.LayoutParams(-1, -1));
                    }
                    observer.update(null, null);
                    return false;
                }
            }).sendEmptyMessageDelayed(0, j);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}
