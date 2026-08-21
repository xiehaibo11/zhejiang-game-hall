package com.tkay.expressad.widget.a;

import android.app.Dialog;
import android.content.Context;
import android.content.DialogInterface;
import android.graphics.drawable.ColorDrawable;
import android.os.Build;
import android.util.DisplayMetrics;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.view.Window;
import android.view.WindowManager;
import android.widget.Button;
import android.widget.LinearLayout;
import android.widget.TextView;
import com.ss.android.socialbase.downloader.utils.DownloadExpSwitchCode;
import com.tkay.core.common.b.m;
import com.tkay.expressad.foundation.h.i;
import com.tkay.expressad.foundation.h.t;

public final class a extends Dialog {
    private static final String a = "ATFeedBackDialog";
    private c b;
    private TextView c;
    private LinearLayout d;
    private Button e;
    private Button f;
    private int g;
    private int h;

    public a(Context context, c cVar) {
        super(context);
        getWindow().setBackgroundDrawable(new ColorDrawable(0));
        requestWindowFeature(1);
        View viewInflate = LayoutInflater.from(context).inflate(i.a(context, "tkay_cm_feedbackview", "layout"), (ViewGroup) null);
        DisplayMetrics displayMetrics = getContext().getResources().getDisplayMetrics();
        if (getContext().getResources().getConfiguration().orientation == 1) {
            this.h = displayMetrics.widthPixels;
            this.g = displayMetrics.heightPixels;
            WindowManager.LayoutParams attributes = getWindow().getAttributes();
            attributes.width = -1;
            attributes.height = (int) (this.g * 0.8f);
            attributes.gravity = 80;
            getWindow().setAttributes(attributes);
        } else {
            this.h = displayMetrics.heightPixels;
            this.g = displayMetrics.widthPixels;
            WindowManager.LayoutParams attributes2 = getWindow().getAttributes();
            attributes2.width = (int) (this.g * 0.5f);
            attributes2.height = -1;
            attributes2.gravity = 17;
            getWindow().setAttributes(attributes2);
        }
        this.b = cVar;
        if (viewInflate != null) {
            setContentView(viewInflate);
            try {
                this.c = (TextView) viewInflate.findViewById(i.a(context, "tkay_video_common_alertview_titleview", "id"));
            } catch (Exception e) {
                e.getMessage();
            }
            try {
                this.d = (LinearLayout) viewInflate.findViewById(i.a(context, "tkay_video_common_alertview_contentview", "id"));
                this.e = (Button) viewInflate.findViewById(i.a(context, "tkay_video_common_alertview_confirm_button", "id"));
                this.f = (Button) viewInflate.findViewById(i.a(context, "tkay_video_common_alertview_cancel_button", "id"));
            } catch (Exception e2) {
                e2.getMessage();
            }
        }
        setCanceledOnTouchOutside(false);
        setCancelable(false);
        Button button = this.f;
        if (button != null) {
            button.setOnClickListener(new 1());
        }
        Button button2 = this.e;
        if (button2 != null) {
            button2.setOnClickListener(new 2());
        }
        setOnCancelListener(new 3());
    }

    final class 1 implements View.OnClickListener {
        1() {
        }

        @Override
        public final void onClick(View view) {
            if (a.this.b != null) {
                a.this.b.a();
            }
            a.this.dismiss();
        }
    }

    private void a() {
        Button button = this.f;
        if (button != null) {
            button.setOnClickListener(new 1());
        }
        Button button2 = this.e;
        if (button2 != null) {
            button2.setOnClickListener(new 2());
        }
        setOnCancelListener(new 3());
    }

    final class 2 implements View.OnClickListener {
        2() {
        }

        @Override
        public final void onClick(View view) {
            if (a.this.b != null) {
                a.this.b.b();
            }
            a.this.dismiss();
        }
    }

    final class 3 implements DialogInterface.OnCancelListener {
        3() {
        }

        @Override
        public final void onCancel(DialogInterface dialogInterface) {
            if (a.this.b != null) {
                a.this.b.b();
            }
        }
    }

    public final void a(boolean z) {
        Button button = this.f;
        if (button != null) {
            button.setClickable(z);
        }
    }

    private void b() {
        if (this.b != null) {
            this.b = null;
        }
    }

    private c c() {
        return this.b;
    }

    public final void a(c cVar) {
        this.b = cVar;
    }

    public final void a(String str) {
        TextView textView = this.c;
        if (textView != null) {
            textView.setText(str);
        }
    }

    public final void a(ViewGroup viewGroup) {
        LinearLayout linearLayout = this.d;
        if (linearLayout != null) {
            linearLayout.removeAllViews();
            ViewGroup viewGroup2 = (ViewGroup) viewGroup.getParent();
            if (viewGroup2 != null) {
                viewGroup2.removeView(viewGroup);
            }
            LinearLayout.LayoutParams layoutParams = new LinearLayout.LayoutParams(-1, -1);
            layoutParams.leftMargin = t.b(m.a().f(), 38.0f);
            layoutParams.rightMargin = t.b(m.a().f(), 38.0f);
            layoutParams.topMargin = t.b(m.a().f(), 20.0f);
            layoutParams.bottomMargin = t.b(m.a().f(), 24.0f);
            this.d.addView(viewGroup, layoutParams);
        }
    }

    public final void b(String str) {
        Button button = this.e;
        if (button != null) {
            button.setText(str);
        }
    }

    public final void c(String str) {
        Button button = this.f;
        if (button != null) {
            button.setText(str);
        }
    }

    private void a(String str, ViewGroup viewGroup, String str2, String str3) {
        a(str);
        a(viewGroup);
        b(str2);
        c(str3);
    }

    @Override
    public final void show() {
        super.show();
        try {
            getWindow().setFlags(8, 8);
            super.show();
            Window window = getWindow();
            if (window != null) {
                window.setFlags(1024, 1024);
                if (Build.VERSION.SDK_INT >= 19) {
                    window.addFlags(DownloadExpSwitchCode.BACK_BUGFIX_SIGBUS);
                    window.getDecorView().setSystemUiVisibility(4098);
                } else {
                    window.getDecorView().setSystemUiVisibility(2);
                }
                if (Build.VERSION.SDK_INT >= 28) {
                    WindowManager.LayoutParams attributes = window.getAttributes();
                    attributes.layoutInDisplayCutoutMode = 1;
                    window.setAttributes(attributes);
                }
                window.setBackgroundDrawable(new ColorDrawable(0));
                window.setLayout(-1, -1);
                window.setGravity(17);
            }
            getWindow().clearFlags(8);
        } catch (Exception e) {
            e.getMessage();
            super.show();
        }
    }

    private static void a(Window window) {
        if (window != null) {
            window.setFlags(1024, 1024);
            if (Build.VERSION.SDK_INT >= 19) {
                window.addFlags(DownloadExpSwitchCode.BACK_BUGFIX_SIGBUS);
                window.getDecorView().setSystemUiVisibility(4098);
            } else {
                window.getDecorView().setSystemUiVisibility(2);
            }
            if (Build.VERSION.SDK_INT >= 28) {
                WindowManager.LayoutParams attributes = window.getAttributes();
                attributes.layoutInDisplayCutoutMode = 1;
                window.setAttributes(attributes);
            }
            window.setBackgroundDrawable(new ColorDrawable(0));
            window.setLayout(-1, -1);
            window.setGravity(17);
        }
    }

    private void d() {
        DisplayMetrics displayMetrics = getContext().getResources().getDisplayMetrics();
        if (getContext().getResources().getConfiguration().orientation == 1) {
            this.h = displayMetrics.widthPixels;
            this.g = displayMetrics.heightPixels;
            WindowManager.LayoutParams attributes = getWindow().getAttributes();
            attributes.width = -1;
            attributes.height = (int) (this.g * 0.8f);
            attributes.gravity = 80;
            getWindow().setAttributes(attributes);
            return;
        }
        this.h = displayMetrics.heightPixels;
        this.g = displayMetrics.widthPixels;
        WindowManager.LayoutParams attributes2 = getWindow().getAttributes();
        attributes2.width = (int) (this.g * 0.5f);
        attributes2.height = -1;
        attributes2.gravity = 17;
        getWindow().setAttributes(attributes2);
    }

    private static boolean a(Context context) {
        return context.getResources().getConfiguration().orientation == 1;
    }
}
