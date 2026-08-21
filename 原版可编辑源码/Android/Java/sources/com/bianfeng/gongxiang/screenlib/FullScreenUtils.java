package com.bianfeng.gongxiang.screenlib;

import android.app.Activity;
import android.os.Build;
import android.view.Window;
import android.view.WindowManager;
import com.heytap.mcssdk.constant.MessageConstant;

class FullScreenUtils {
    private static FullScreenUtils utils;

    private int getOtherBarSize(Activity activity) {
        return 0;
    }

    FullScreenUtils() {
    }

    public static FullScreenUtils getInstance() {
        if (utils == null) {
            utils = new FullScreenUtils();
        }
        return utils;
    }

    public void setFullScreen(Activity activity) {
        if (Build.VERSION.SDK_INT >= 28) {
            if (RomUtils.isMimu() && XiaoMiUtils.hasNotch(activity)) {
                setFullScreenV28(activity);
                return;
            } else if (RomUtils.isMimu()) {
                setFullScreenV12(activity);
                return;
            } else {
                setFullScreenV28(activity);
                return;
            }
        }
        if (RomUtils.isHuaWei() && HuaWeiUtils.hasNotch(activity)) {
            HuaWeiUtils.setFullScreenWindowLayoutInDisplayCutout(activity.getWindow());
        } else if (RomUtils.isMimu() && XiaoMiUtils.hasNotch(activity)) {
            XiaoMiUtils.setFullScreenWindowLayoutInDisplayCutout(activity.getWindow());
        }
        if (RomUtils.isMeizu() && FlymeUtils.hasNotch(activity)) {
            FlymeUtils.setFullScreenWindowLayoutInDisplayCutout(activity.getWindow());
            return;
        }
        if (RomUtils.isVivo() && VivoAndOppoUtils.hasVivoNotch(activity)) {
            VivoAndOppoUtils.hasOppoNotch(activity);
        } else if (RomUtils.isOppo() && VivoAndOppoUtils.hasOppoNotch(activity)) {
            VivoAndOppoUtils.hasVivoNotch(activity);
        } else {
            setFullScreenV12(activity);
        }
    }

    private void setFullScreenV12(Activity activity) {
        Window window = activity.getWindow();
        activity.requestWindowFeature(1);
        window.setFlags(1024, 1024);
    }

    private void setFullScreenV28(Activity activity) {
        Window window = activity.getWindow();
        window.getDecorView().setSystemUiVisibility(5894);
        window.setStatusBarColor(0);
        WindowManager.LayoutParams attributes = window.getAttributes();
        attributes.layoutInDisplayCutoutMode = 1;
        window.setAttributes(attributes);
    }

    public void hideBar(Activity activity) {
        activity.getWindow().getDecorView().setSystemUiVisibility(activity.getWindow().getDecorView().getSystemUiVisibility() | MessageConstant.MessageType.MESSAGE_LAUNCH_ALARM);
        NotchScreenUtils.getInstance().setOnApplyWindowInsetsListener(activity);
    }

    public int getBarSize() {
        return NotchScreenUtils.getInstance().getNotSize();
    }
}
