package a.a.a.a;

import android.app.Activity;
import android.content.Context;
import android.view.WindowManager;
import android.widget.ImageView;

/* JADX INFO: compiled from: SplashViewUtils.java */
/* JADX INFO: loaded from: classes.dex */
public class f {
    public static f b;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public ImageView f1041a;

    /* JADX INFO: compiled from: SplashViewUtils.java */
    public class a implements Runnable {
        public a() {
        }

        @Override // java.lang.Runnable
        public void run() {
            if (f.this.f1041a != null) {
                f.this.f1041a.setVisibility(8);
            }
        }
    }

    public static f a() {
        if (b == null) {
            synchronized (f.class) {
                if (b == null) {
                    b = new f();
                }
            }
        }
        return b;
    }

    public void a(Activity activity, String str) {
        try {
            this.f1041a = new ImageView(activity);
            this.f1041a.setImageResource(a((Context) activity, str));
            this.f1041a.setScaleType(ImageView.ScaleType.FIT_XY);
            activity.addContentView(this.f1041a, new WindowManager.LayoutParams(-1, -1));
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public void a(Activity activity) {
        try {
            activity.runOnUiThread(new a());
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public final int a(Context context, String str) {
        String[] strArrSplit = str.split("\\.");
        return a(context, strArrSplit[2], strArrSplit[1]);
    }

    public final int a(Context context, String str, String str2) {
        try {
            return context.getResources().getIdentifier(str, str2, context.getPackageName());
        } catch (Exception e) {
            e.printStackTrace();
            return 0;
        }
    }
}
