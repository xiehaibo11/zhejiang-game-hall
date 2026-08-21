package com.bianfeng.utilslib;

import android.app.Activity;
import android.widget.ImageView;
import android.widget.LinearLayout;
import android.widget.Toast;

/* JADX INFO: loaded from: classes.dex */
public class ToastUtils {
    private static ToastUtils utils;
    private Toast mToast;

    private ToastUtils() {
    }

    public static ToastUtils getInstance() {
        if (utils == null) {
            synchronized (ToastUtils.class) {
                if (utils == null) {
                    utils = new ToastUtils();
                }
            }
        }
        return utils;
    }

    public void show(Activity activity, String str) {
        Toast toast = this.mToast;
        if (toast == null) {
            this.mToast = Toast.makeText(activity, str, 0);
        } else {
            toast.setText(str);
        }
        this.mToast.setGravity(17, 0, 0);
        show(activity);
    }

    public void show(Activity activity, String str, int i) {
        Toast toast = this.mToast;
        if (toast == null) {
            this.mToast = Toast.makeText(activity, str, 1);
        } else {
            toast.setText(str);
        }
        this.mToast.setGravity(i, 0, 0);
        show(activity);
    }

    private void show(Activity activity) {
        activity.runOnUiThread(new Runnable() { // from class: com.bianfeng.utilslib.ToastUtils.1
            @Override // java.lang.Runnable
            public void run() {
                ToastUtils.this.mToast.show();
            }
        });
    }

    public void show(Activity activity, int i) {
        Toast toast = this.mToast;
        if (toast == null) {
            this.mToast = Toast.makeText(activity, i, 0);
        } else {
            toast.setText(i);
        }
        this.mToast.setGravity(17, 0, 0);
        show(activity);
    }

    public void showImg(Activity activity, String str, int i) {
        Toast toast = this.mToast;
        if (toast == null) {
            this.mToast = Toast.makeText(activity, str, 0);
        } else {
            toast.setText(str);
        }
        LinearLayout linearLayout = (LinearLayout) this.mToast.getView();
        ImageView imageView = new ImageView(activity);
        imageView.setImageResource(i);
        linearLayout.addView(imageView);
        show(activity);
    }
}
