package com.bianfeng.utilslib.screen;

import android.app.Activity;
import android.content.res.Resources;
import android.graphics.Rect;
import android.os.Build;
import android.view.DisplayCutout;
import android.view.View;
import android.view.WindowInsets;
import com.bianfeng.utilslib.UtilsSdk;
import java.util.List;

/* JADX INFO: loaded from: classes.dex */
public class NotchScreenUtils {
    private static NotchScreenUtils notchScreenUtils;
    private int size = 0;

    private NotchScreenUtils() {
    }

    public static NotchScreenUtils getInstance() {
        if (notchScreenUtils == null) {
            notchScreenUtils = new NotchScreenUtils();
        }
        return notchScreenUtils;
    }

    public int getNotSize() {
        return this.size;
    }

    public void setOnApplyWindowInsetsListener(Activity activity) {
        if (RomUtils.isVivo()) {
            this.size = 0;
            return;
        }
        if (Build.VERSION.SDK_INT < 26) {
            this.size = 0;
        } else if (Build.VERSION.SDK_INT < 28) {
            this.size = getStatusBarHeight(activity);
        } else {
            activity.getWindow().getDecorView().setOnApplyWindowInsetsListener(new View.OnApplyWindowInsetsListener() { // from class: com.bianfeng.utilslib.screen.NotchScreenUtils.1
                @Override // android.view.View.OnApplyWindowInsetsListener
                public WindowInsets onApplyWindowInsets(View view, WindowInsets windowInsets) {
                    if (windowInsets == null) {
                        UtilsSdk.getLogger().i("setOnApplyWindowInsetsListener  windowInsets is null");
                        NotchScreenUtils.this.size = 0;
                        return windowInsets;
                    }
                    DisplayCutout displayCutout = windowInsets.getDisplayCutout();
                    if (displayCutout == null) {
                        NotchScreenUtils.this.size = 0;
                        UtilsSdk.getLogger().i("cutout==null, is not notch screen");
                    } else {
                        List<Rect> boundingRects = displayCutout.getBoundingRects();
                        if (boundingRects == null || boundingRects.size() == 0) {
                            NotchScreenUtils.this.size = 0;
                            UtilsSdk.getLogger().i("rects==null || rects.size()==0, is not notch screen");
                        } else {
                            NotchScreenUtils.this.size = displayCutout.getSafeInsetLeft();
                            if (NotchScreenUtils.this.size == 0) {
                                NotchScreenUtils.this.size = displayCutout.getSafeInsetTop();
                            }
                            UtilsSdk.getLogger().i("当前高度：" + NotchScreenUtils.this.size);
                        }
                    }
                    return windowInsets;
                }
            });
        }
    }

    private int getStatusBarHeight(Activity activity) {
        if (RomUtils.isMeizu() && FlymeUtils.hasNotch(activity)) {
            return FlymeUtils.getNotHeight(activity);
        }
        if (!XiaoMiUtils.hasNotch(activity) && !HuaWeiUtils.hasNotch(activity) && !VivoAndOppoUtils.hasOppoNotch(activity) && !VivoAndOppoUtils.hasVivoNotch(activity)) {
            return 0;
        }
        Resources resources = activity.getResources();
        return resources.getDimensionPixelSize(resources.getIdentifier("status_bar_height", "dimen", "android"));
    }
}
