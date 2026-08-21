package a.a.a.a;

import android.app.Activity;
import android.content.res.Resources;
import android.graphics.Rect;
import android.os.Build;
import android.util.Log;
import android.view.DisplayCutout;
import android.view.View;
import android.view.WindowInsets;
import java.util.List;

public class d {
    public static d b;
    public int a = 0;

    public class a implements View.OnApplyWindowInsetsListener {
        public final Activity a;

        public a(Activity activity) {
            this.a = activity;
        }

        @Override
        public WindowInsets onApplyWindowInsets(View view, WindowInsets windowInsets) {
            if (windowInsets == null) {
                Log.e("ymnsdk ", "setOnApplyWindowInsetsListener  windowInsets is null");
                d.this.a = 0;
                return windowInsets;
            }
            DisplayCutout displayCutout = windowInsets.getDisplayCutout();
            if (displayCutout == null) {
                d.this.a = 0;
                Log.e("ymnsdk ", "cutout==null, is not notch screen");
            } else {
                List<Rect> boundingRects = displayCutout.getBoundingRects();
                if (boundingRects == null || boundingRects.size() == 0) {
                    d.this.a = 0;
                    Log.e("ymnsdk ", "rects==null || rects.size()==0, is not notch screen");
                } else {
                    if (d.this.c(this.a)) {
                        d.this.a = displayCutout.getSafeInsetLeft();
                    } else {
                        d.this.a = displayCutout.getSafeInsetTop();
                    }
                    Log.i("ymnsdk ", "当前异形屏：" + d.this.a);
                }
            }
            return windowInsets;
        }
    }

    public static d b() {
        if (b == null) {
            b = new d();
        }
        return b;
    }

    public final boolean c(Activity activity) {
        int iA = a(activity);
        activity.getResources().getConfiguration();
        return iA == 2;
    }

    public void d(Activity activity) {
        if (e.f()) {
            this.a = 0;
            return;
        }
        int i = Build.VERSION.SDK_INT;
        if (i < 26) {
            this.a = 0;
        } else if (i < 28) {
            this.a = b(activity);
        } else {
            activity.getWindow().getDecorView().setOnApplyWindowInsetsListener(new a(activity));
        }
    }

    public int a() {
        return this.a;
    }

    public final int a(Activity activity) {
        try {
            return activity.getPackageManager().getActivityInfo(activity.getComponentName(), 128).screenOrientation;
        } catch (Exception e) {
            e.printStackTrace();
            return 0;
        }
    }

    public final int b(Activity activity) {
        if (e.c() && a.a.a.a.a.b(activity)) {
            return a.a.a.a.a.a(activity);
        }
        Resources resources = activity.getResources();
        return resources.getDimensionPixelSize(resources.getIdentifier("status_bar_height", "dimen", "android"));
    }
}
