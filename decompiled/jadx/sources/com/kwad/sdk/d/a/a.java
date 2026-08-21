package com.kwad.sdk.d.a;

import android.R;
import android.app.Activity;
import android.content.Context;
import android.graphics.Bitmap;
import android.graphics.Paint;
import android.graphics.drawable.BitmapDrawable;
import android.os.Build;
import android.os.SystemClock;
import android.text.SpannableString;
import android.text.TextPaint;
import android.util.DisplayMetrics;
import android.view.Display;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.view.Window;
import android.view.WindowManager;
import android.widget.FrameLayout;
import android.widget.TextView;
import com.kwad.sdk.utils.s;

/* JADX INFO: loaded from: classes2.dex */
public final class a {
    private static int ajG;
    private static long ajH;

    public static boolean B(View view) {
        return (view.getSystemUiVisibility() & 1024) == 1024;
    }

    public static void C(View view) {
        if (view == null || ((View) view.getParent()) == null) {
            return;
        }
        ViewGroup.LayoutParams layoutParams = view.getLayoutParams();
        layoutParams.width = -1;
        layoutParams.height = -1;
        view.setLayoutParams(layoutParams);
    }

    public static int[] D(View view) {
        if (view == null) {
            return null;
        }
        int[] iArr = new int[2];
        view.getLocationInWindow(iArr);
        int width = view.getWidth();
        int height = view.getHeight();
        iArr[0] = iArr[0] + (width / 2);
        iArr[1] = iArr[1] + (height / 2);
        return iArr;
    }

    public static int E(View view) {
        if (view == null) {
            return 0;
        }
        ViewGroup.LayoutParams layoutParams = view.getLayoutParams();
        if (layoutParams instanceof FrameLayout.LayoutParams) {
            return ((FrameLayout.LayoutParams) layoutParams).gravity;
        }
        return 0;
    }

    public static int a(Context context, float f) {
        return (int) (context == null ? f * 2.0f : (f * context.getResources().getDisplayMetrics().density) + 0.5f);
    }

    public static View a(ViewGroup viewGroup, int i, boolean z) {
        return LayoutInflater.from(viewGroup.getContext()).inflate(i, viewGroup, true);
    }

    public static void a(View.OnClickListener onClickListener, View... viewArr) {
        for (View view : viewArr) {
            view.setOnClickListener(onClickListener);
        }
    }

    public static void a(TextView textView, String str, Bitmap bitmap) {
        String str2 = str + " ";
        TextPaint paint = textView.getPaint();
        Paint.FontMetrics fontMetrics = paint.getFontMetrics();
        int iCeil = ((int) Math.ceil(fontMetrics.descent - fontMetrics.top)) + 2;
        BitmapDrawable bitmapDrawable = new BitmapDrawable(textView.getContext().getResources(), bitmap);
        int intrinsicWidth = (bitmapDrawable.getIntrinsicWidth() * iCeil) / bitmapDrawable.getIntrinsicHeight();
        bitmapDrawable.setBounds(0, a(textView.getContext(), 1.0f), intrinsicWidth, iCeil);
        float width = textView.getWidth();
        if (paint.measureText(str2) > width) {
            int i = 1;
            int i2 = 1;
            int i3 = 0;
            boolean z = false;
            while (true) {
                float fMeasureText = paint.measureText(str2.substring(i3, i));
                if (fMeasureText >= width) {
                    i3 = i - 1;
                    i2++;
                } else if (i2 == textView.getMaxLines()) {
                    float f = fMeasureText + intrinsicWidth;
                    if (paint.measureText(" ") + f >= width || f + paint.measureText("...") + paint.measureText(" ") >= width) {
                        i--;
                        z = true;
                    } else {
                        if (z) {
                            str2 = str2.substring(0, i) + "... ";
                            break;
                        }
                        i++;
                    }
                } else {
                    i++;
                }
                if (i > str2.length() || i2 > textView.getMaxLines()) {
                    break;
                }
            }
        }
        String str3 = str2 + "*";
        SpannableString spannableString = new SpannableString(str3);
        spannableString.setSpan(new com.kwad.sdk.core.view.a(textView.getContext(), bitmap), str3.length() - 1, str3.length(), 33);
        textView.setText(spannableString);
    }

    @Deprecated
    public static int aG(Context context) {
        if (context == null) {
            return 0;
        }
        WindowManager windowManager = (WindowManager) context.getSystemService("window");
        DisplayMetrics displayMetrics = new DisplayMetrics();
        int i = Build.VERSION.SDK_INT;
        Display defaultDisplay = windowManager.getDefaultDisplay();
        if (i >= 17) {
            defaultDisplay.getRealMetrics(displayMetrics);
        } else {
            defaultDisplay.getMetrics(displayMetrics);
        }
        return displayMetrics.heightPixels;
    }

    public static float aH(Context context) {
        return context.getResources().getDisplayMetrics().density;
    }

    public static int b(Context context, float f) {
        return (int) (context == null ? f / 2.0f : (f / context.getResources().getDisplayMetrics().density) + 0.5f);
    }

    public static void b(View view, int i, int i2, int i3, int i4) {
        if (view.getLayoutParams() instanceof ViewGroup.MarginLayoutParams) {
            ((ViewGroup.MarginLayoutParams) view.getLayoutParams()).setMargins(i, i2, i3, 0);
            view.requestLayout();
        }
    }

    public static boolean b(Activity activity) {
        return b(activity.getWindow());
    }

    private static boolean b(Window window) {
        return (window.getAttributes().flags & 1024) == 1024;
    }

    private static View c(Activity activity) {
        return c(activity.getWindow());
    }

    private static View c(Window window) {
        return window.getDecorView().findViewById(R.id.content);
    }

    public static int d(Activity activity) {
        return c(activity).getWidth();
    }

    /* JADX WARN: Removed duplicated region for block: B:20:0x0038  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public static void d(android.view.View r5, int r6, int r7) {
        /*
            if (r5 != 0) goto L3
            return
        L3:
            if (r6 == 0) goto L4b
            if (r7 != 0) goto L8
            goto L4b
        L8:
            android.view.ViewParent r0 = r5.getParent()
            android.view.View r0 = (android.view.View) r0
            if (r0 != 0) goto L11
            return
        L11:
            int r1 = r0.getWidth()
            int r0 = r0.getHeight()
            if (r1 == 0) goto L4b
            if (r0 != 0) goto L1e
            goto L4b
        L1e:
            android.view.ViewGroup$LayoutParams r2 = r5.getLayoutParams()
            r3 = 1065353216(0x3f800000, float:1.0)
            r4 = -1
            if (r1 <= r0) goto L36
            if (r6 <= r7) goto L2a
            goto L38
        L2a:
            float r6 = (float) r6
            float r7 = (float) r7
            float r7 = r7 * r3
            float r6 = r6 / r7
            float r7 = (float) r0
            float r6 = r6 * r7
            int r6 = (int) r6
            r2.width = r6
            r2.height = r0
            goto L48
        L36:
            if (r7 <= r6) goto L3d
        L38:
            r2.width = r4
            r2.height = r4
            goto L48
        L3d:
            r2.width = r1
            float r7 = (float) r7
            float r6 = (float) r6
            float r6 = r6 * r3
            float r7 = r7 / r6
            float r6 = (float) r1
            float r7 = r7 * r6
            int r6 = (int) r7
            r2.height = r6
        L48:
            r5.setLayoutParams(r2)
        L4b:
            return
        */
        throw new UnsupportedOperationException("Method not decompiled: com.kwad.sdk.d.a.a.d(android.view.View, int, int):void");
    }

    public static int e(Activity activity) {
        return c(activity).getHeight();
    }

    public static void e(View view, int i, int i2) {
        View view2;
        if (view == null || i == 0 || i2 == 0 || (view2 = (View) view.getParent()) == null) {
            return;
        }
        int width = view2.getWidth();
        int height = view2.getHeight();
        if (width == 0 || height == 0) {
            return;
        }
        ViewGroup.LayoutParams layoutParams = view.getLayoutParams();
        if (i > i2) {
            layoutParams.width = width;
            layoutParams.height = (int) ((i2 / (i * 1.0f)) * width);
        } else {
            layoutParams.width = (int) ((i / (i2 * 1.0f)) * height);
            layoutParams.height = height;
        }
        view.setLayoutParams(layoutParams);
    }

    public static void f(View view, int i, int i2) {
        View view2;
        if (view == null || i == 0 || i2 == 0 || (view2 = (View) view.getParent()) == null) {
            return;
        }
        int width = view2.getWidth();
        int height = view2.getHeight();
        if (width == 0 || height == 0) {
            return;
        }
        ViewGroup.LayoutParams layoutParams = view.getLayoutParams();
        if (width <= height || i > i2) {
            layoutParams.width = width;
            layoutParams.height = (int) ((i2 / (i * 1.0f)) * width);
        } else {
            layoutParams.width = (int) ((i / (i2 * 1.0f)) * height);
            layoutParams.height = height;
        }
        view.setLayoutParams(layoutParams);
    }

    public static int g(Context context, int i) {
        if (context == null || i == 0) {
            return 0;
        }
        return context.getResources().getDimensionPixelSize(i);
    }

    public static int getColor(Context context, int i) {
        return context.getResources().getColor(i);
    }

    @Deprecated
    public static int getScreenHeight(Context context) {
        if (context == null) {
            return 0;
        }
        WindowManager windowManager = (WindowManager) context.getSystemService("window");
        DisplayMetrics displayMetrics = new DisplayMetrics();
        windowManager.getDefaultDisplay().getMetrics(displayMetrics);
        return displayMetrics.heightPixels;
    }

    @Deprecated
    public static int getScreenWidth(Context context) {
        if (context == null) {
            return 0;
        }
        WindowManager windowManager = (WindowManager) context.getSystemService("window");
        DisplayMetrics displayMetrics = new DisplayMetrics();
        windowManager.getDefaultDisplay().getMetrics(displayMetrics);
        return displayMetrics.widthPixels;
    }

    public static int getStatusBarHeight(Context context) {
        int i = ajG;
        if (i > 0 || context == null) {
            return i;
        }
        int identifier = context.getResources().getIdentifier("status_bar_height", "dimen", "android");
        if (identifier > 0) {
            ajG = context.getResources().getDimensionPixelSize(identifier);
        } else {
            try {
                ajG = context.getResources().getDimensionPixelSize(((Integer) s.f("com.android.internal.R$dimen", "status_bar_height")).intValue());
            } catch (Throwable th) {
                th.printStackTrace();
            }
        }
        if (ajG <= 0) {
            ajG = a(context, 25.0f);
        }
        return ajG;
    }

    public static void m(View view, int i) {
        if (view == null || i == 0) {
            return;
        }
        ViewGroup.LayoutParams layoutParams = view.getLayoutParams();
        layoutParams.height = i;
        view.setLayoutParams(layoutParams);
    }

    public static void n(View view, int i) {
        if (view == null) {
            return;
        }
        ViewGroup.LayoutParams layoutParams = view.getLayoutParams();
        if (layoutParams instanceof FrameLayout.LayoutParams) {
            ((FrameLayout.LayoutParams) layoutParams).gravity = i;
        }
    }

    public static boolean yD() {
        long jUptimeMillis = SystemClock.uptimeMillis();
        long jAbs = Math.abs(jUptimeMillis - ajH);
        ajH = jUptimeMillis;
        return jAbs < 500;
    }
}
