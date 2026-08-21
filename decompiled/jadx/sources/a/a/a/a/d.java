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

/* JADX INFO: compiled from: NotchScreenUtils.java */
/* JADX INFO: loaded from: classes.dex */
public class d {
    public static d b;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public int f1039a = 0;

    /* JADX INFO: compiled from: NotchScreenUtils.java */
    public class a implements View.OnApplyWindowInsetsListener {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public final /* synthetic */ Activity f1040a;

        public a(Activity activity) {
            this.f1040a = activity;
        }

        @Override // android.view.View.OnApplyWindowInsetsListener
        public WindowInsets onApplyWindowInsets(View view, WindowInsets windowInsets) {
            if (windowInsets == null) {
                Log.e("ymnsdk ", "setOnApplyWindowInsetsListener  windowInsets is null");
                d.this.f1039a = 0;
                return windowInsets;
            }
            DisplayCutout displayCutout = windowInsets.getDisplayCutout();
            if (displayCutout == null) {
                d.this.f1039a = 0;
                Log.e("ymnsdk ", "cutout==null, is not notch screen");
            } else {
                List<Rect> boundingRects = displayCutout.getBoundingRects();
                if (boundingRects == null || boundingRects.size() == 0) {
                    d.this.f1039a = 0;
                    Log.e("ymnsdk ", "rects==null || rects.size()==0, is not notch screen");
                } else {
                    if (d.this.c(this.f1040a)) {
                        d.this.f1039a = displayCutout.getSafeInsetLeft();
                    } else {
                        d.this.f1039a = displayCutout.getSafeInsetTop();
                    }
                    Log.i("ymnsdk ", "当前异形屏：" + d.this.f1039a);
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
            this.f1039a = 0;
            return;
        }
        int i = Build.VERSION.SDK_INT;
        if (i < 26) {
            this.f1039a = 0;
        } else if (i < 28) {
            this.f1039a = b(activity);
        } else {
            activity.getWindow().getDecorView().setOnApplyWindowInsetsListener(new a(activity));
        }
    }

    public int a() {
        return this.f1039a;
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
