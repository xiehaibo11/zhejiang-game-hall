package com.sigmob.sdk.base.views;

import android.app.Dialog;
import android.content.ClipData;
import android.content.ClipboardManager;
import android.content.Context;
import android.content.DialogInterface;
import android.graphics.drawable.GradientDrawable;
import android.os.Bundle;
import android.view.View;
import android.view.Window;
import android.view.WindowManager;
import android.widget.ImageView;
import android.widget.LinearLayout;
import android.widget.RelativeLayout;
import android.widget.TextView;
import android.widget.Toast;
import com.czhj.sdk.common.ClientMetadata;
import com.czhj.sdk.common.utils.Dips;
import com.czhj.sdk.common.utils.ViewUtil;
import com.czhj.sdk.logger.SigmobLog;
import com.sigmob.windad.WindAds;
import com.xiaomi.mipush.sdk.Constants;

/* JADX INFO: loaded from: classes3.dex */
public class a extends Dialog implements DialogInterface.OnDismissListener, DialogInterface.OnShowListener, View.OnClickListener {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private Context f4942a;
    private Window b;
    private int c;
    private int d;
    private int e;
    private int f;
    private String g;
    private String h;
    private ImageView i;

    public a(Context context, String str, String str2) {
        super(context, com.sigmob.sdk.base.d.e());
        this.b = null;
        this.f4942a = context.getApplicationContext();
        this.g = str;
        this.h = str2;
        this.i = b();
        this.d = this.f4942a.getResources().getDisplayMetrics().widthPixels;
        this.c = Dips.dipsToIntPixels(120.0f, context);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public boolean a(Context context, String str) {
        try {
            ((ClipboardManager) context.getSystemService("clipboard")).setPrimaryClip(ClipData.newPlainText("", str));
            return true;
        } catch (Throwable unused) {
            return false;
        }
    }

    private ImageView b() {
        ImageView imageView = new ImageView(this.f4942a);
        this.i = imageView;
        imageView.setImageBitmap(o.CLOSE.a());
        this.i.setScaleType(ImageView.ScaleType.CENTER_CROP);
        this.i.setImageAlpha(127);
        this.i.setClickable(true);
        this.i.setOnClickListener(this);
        return this.i;
    }

    private TextView c() {
        TextView textView = new TextView(getContext());
        textView.setText("复制广告信息");
        textView.setTextColor(-16776961);
        textView.setOnClickListener(new View.OnClickListener() { // from class: com.sigmob.sdk.base.views.a.1
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                String str = "appid:" + WindAds.sharedAds().getAppId();
                String str2 = "p_id:" + a.this.h;
                StringBuilder sb = new StringBuilder();
                sb.append("req_id:");
                sb.append(a.this.g);
                Toast.makeText(view.getContext(), a.this.a(view.getContext(), String.format("%s,%s,%s", str, str2, sb.toString())) ? "广告信息复制完成" : "广告信息复制失败，请检查权限", 0).show();
            }
        });
        return textView;
    }

    private View d() {
        LinearLayout linearLayout = new LinearLayout(getContext());
        int iDipsToIntPixels = Dips.dipsToIntPixels(20.0f, getContext());
        linearLayout.setOrientation(1);
        LinearLayout.LayoutParams layoutParams = new LinearLayout.LayoutParams(-1, iDipsToIntPixels);
        layoutParams.setMargins(0, iDipsToIntPixels / 4, 0, 0);
        TextView textView = new TextView(getContext());
        textView.setText("appid: " + WindAds.sharedAds().getAppId());
        textView.setTextColor(-16777216);
        textView.setTextSize(12.0f);
        linearLayout.addView(textView, layoutParams);
        TextView textView2 = new TextView(getContext());
        textView2.setText("p_id: " + this.h);
        textView2.setTextColor(-16777216);
        textView2.setTextSize(12.0f);
        linearLayout.addView(textView2, layoutParams);
        TextView textView3 = new TextView(getContext());
        String str = "req_id: " + this.g;
        textView3.setTextSize(12.0f);
        textView3.setText(str);
        textView3.setTextColor(-16777216);
        linearLayout.addView(textView3, layoutParams);
        return linearLayout;
    }

    private void e() {
        Window window = getWindow();
        this.b = window;
        if (window != null) {
            window.setGravity(80);
            int iF = com.sigmob.sdk.base.d.f();
            if (iF != 0) {
                this.b.setWindowAnimations(iF);
            }
            this.b.getDecorView().setPadding(0, 0, 0, 0);
            WindowManager.LayoutParams attributes = this.b.getAttributes();
            attributes.width = this.d;
            attributes.height = this.c;
            this.b.setAttributes(attributes);
        }
    }

    public void a() {
        ImageView imageView = this.i;
        if (imageView != null) {
            ViewUtil.removeFromParent(imageView);
            this.i = null;
        }
        if (this.f4942a != null) {
            this.f4942a = null;
        }
    }

    @Override // android.view.View.OnClickListener
    public void onClick(View view) {
        dismiss();
    }

    @Override // android.app.Dialog
    protected void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        RelativeLayout relativeLayout = new RelativeLayout(getContext());
        relativeLayout.setLayoutParams(new RelativeLayout.LayoutParams(-1, -1));
        GradientDrawable gradientDrawable = new GradientDrawable();
        gradientDrawable.setColor(-1);
        float fDipsToIntPixels = Dips.dipsToIntPixels(20.0f, this.f4942a);
        gradientDrawable.setCornerRadii(new float[]{fDipsToIntPixels, fDipsToIntPixels, fDipsToIntPixels, fDipsToIntPixels, 0.0f, 0.0f, 0.0f, 0.0f});
        int iDipsToIntPixels = Dips.dipsToIntPixels(10.0f, this.f4942a);
        relativeLayout.setPadding(iDipsToIntPixels, iDipsToIntPixels, iDipsToIntPixels, iDipsToIntPixels);
        relativeLayout.setBackground(gradientDrawable);
        setContentView(relativeLayout);
        setOnShowListener(this);
        setOnDismissListener(this);
        SigmobLog.i("AdInfoDialog onCreate:" + this.d + Constants.COLON_SEPARATOR + this.c);
        int iDipsToIntPixels2 = Dips.dipsToIntPixels(18.0f, this.f4942a);
        if (this.i != null) {
            RelativeLayout.LayoutParams layoutParams = new RelativeLayout.LayoutParams(iDipsToIntPixels2, iDipsToIntPixels2);
            layoutParams.addRule(10);
            layoutParams.addRule(11);
            layoutParams.setMargins(0, iDipsToIntPixels2 / 4, iDipsToIntPixels2 / 2, 0);
            relativeLayout.addView(this.i, layoutParams);
        }
        TextView textViewC = c();
        textViewC.setId(ClientMetadata.generateViewId());
        RelativeLayout.LayoutParams layoutParams2 = new RelativeLayout.LayoutParams(-1, iDipsToIntPixels2);
        layoutParams2.addRule(10);
        layoutParams2.addRule(9);
        layoutParams2.setMargins(0, iDipsToIntPixels2 / 4, iDipsToIntPixels2 / 2, 0);
        relativeLayout.addView(textViewC, layoutParams2);
        RelativeLayout.LayoutParams layoutParams3 = new RelativeLayout.LayoutParams(-1, -2);
        layoutParams3.addRule(3, textViewC.getId());
        layoutParams3.addRule(9);
        relativeLayout.addView(d(), layoutParams3);
        setCanceledOnTouchOutside(true);
        setCancelable(true);
        e();
    }

    @Override // android.content.DialogInterface.OnDismissListener
    public void onDismiss(DialogInterface dialogInterface) {
        SigmobLog.i("AdInfoDialog  onDismiss");
    }

    @Override // android.content.DialogInterface.OnShowListener
    public void onShow(DialogInterface dialogInterface) {
        SigmobLog.i("AdInfoDialog  onShow");
    }
}
