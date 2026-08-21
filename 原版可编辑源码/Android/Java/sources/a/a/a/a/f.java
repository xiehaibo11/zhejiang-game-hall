package a.a.a.a;

import android.app.Activity;
import android.content.Context;
import android.view.WindowManager;
import android.widget.ImageView;

public class f {
    public static f b;
    public ImageView a;

    public class a implements Runnable {
        public a() {
        }

        @Override
        public void run() {
            if (f.this.a != null) {
                f.this.a.setVisibility(8);
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
            this.a = new ImageView(activity);
            this.a.setImageResource(a((Context) activity, str));
            this.a.setScaleType(ImageView.ScaleType.FIT_XY);
            activity.addContentView(this.a, new WindowManager.LayoutParams(-1, -1));
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
