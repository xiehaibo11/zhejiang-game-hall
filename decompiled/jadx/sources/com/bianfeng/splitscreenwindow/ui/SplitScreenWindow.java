package com.bianfeng.splitscreenwindow.ui;

import android.app.Activity;
import android.view.WindowManager;
import com.bianfeng.thridlibrary.ThridSdk;
import com.bianfeng.thridlibrary.datafun.YmnDatafunUtils;
import com.bianfeng.utilslib.UtilsSdk;

/* JADX INFO: loaded from: classes.dex */
public class SplitScreenWindow {
    private Activity mActivity;
    private WindowManager mWindowManager;
    private ViewWebGroup webGroup;
    private WindowManager.LayoutParams wmParams = new WindowManager.LayoutParams();

    public SplitScreenWindow(Activity activity) {
        this.mActivity = activity;
        this.mWindowManager = (WindowManager) activity.getSystemService("window");
        UtilsSdk.getFullScreen().hideBar(activity);
    }

    protected void updateView(int i, int i2) {
        UtilsSdk.getFullScreen().hideBar(this.mActivity);
        this.wmParams.width = i;
        this.wmParams.height = i2;
        this.wmParams.flags = 17385;
        this.wmParams.type = 1000;
        this.wmParams.gravity = 51;
        try {
            this.mWindowManager.addView(this.webGroup.getFloatLayout(), this.wmParams);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    protected void updateViewY(int i) {
        WindowManager.LayoutParams layoutParams = this.wmParams;
        if (layoutParams == null) {
            UtilsSdk.getLogger().e("updateViewY wmParams is null");
            return;
        }
        layoutParams.x = UtilsSdk.getNotchScreen().getNotSize();
        this.wmParams.y = i;
        this.wmParams.gravity = 83;
        try {
            this.mWindowManager.updateViewLayout(this.webGroup.getFloatLayout(), this.wmParams);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    protected void remove() {
        if (this.mActivity.isFinishing() || this.mWindowManager == null || this.webGroup == null) {
            return;
        }
        this.wmParams.flags = 8;
        try {
            this.mWindowManager.updateViewLayout(this.webGroup.getFloatLayout(), this.wmParams);
        } catch (Exception e) {
            e.printStackTrace();
        }
        try {
            this.mWindowManager.removeView(this.webGroup.getFloatLayout());
        } catch (Exception e2) {
            e2.printStackTrace();
        }
    }

    protected void showQuanping(ViewWebGroup viewWebGroup) {
        if (this.webGroup != null) {
            try {
                this.mWindowManager.removeView(viewWebGroup.getFloatLayout());
            } catch (Exception e) {
                e.printStackTrace();
            }
        }
        this.webGroup = viewWebGroup;
        this.wmParams.x = 0;
        ThridSdk.getYmnDatafun().onClickWithH5Fenping(YmnDatafunUtils.event_h5_quanping);
        UtilsSdk.getReflexCall().onCallWithHashmap(UtilsSdk.getClassNameSet().getLoginCallback(), "FullScreen");
        updateView(UtilsSdk.getConfiguration().getWidth(), UtilsSdk.getConfiguration().getHeight());
    }

    public void showFenping(ViewWebGroup viewWebGroup) {
        if (this.webGroup != null) {
            try {
                this.mWindowManager.removeView(viewWebGroup.getFloatLayout());
            } catch (Exception e) {
                e.printStackTrace();
            }
        }
        this.webGroup = viewWebGroup;
        this.wmParams.x = UtilsSdk.getNotchScreen().getNotSize();
        ThridSdk.getYmnDatafun().onClickWithH5Fenping(YmnDatafunUtils.event_h5_finping);
        UtilsSdk.getReflexCall().onCallWithHashmap(UtilsSdk.getClassNameSet().getLoginCallback(), "SplitScreen");
        if (UtilsSdk.getConfiguration().isLand(this.mActivity)) {
            updateView((UtilsSdk.getConfiguration().getWidth() / 4) - UtilsSdk.getNotchScreen().getNotSize(), UtilsSdk.getConfiguration().getHeight());
        } else {
            updateView(UtilsSdk.getConfiguration().getWidth(), (UtilsSdk.getConfiguration().getWidth() / 4) - UtilsSdk.getNotchScreen().getNotSize());
        }
    }
}
