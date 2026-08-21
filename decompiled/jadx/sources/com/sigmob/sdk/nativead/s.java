package com.sigmob.sdk.nativead;

import android.app.Activity;
import android.content.res.Configuration;
import android.graphics.Color;
import android.os.Bundle;
import android.view.View;
import android.widget.ImageView;
import android.widget.LinearLayout;
import android.widget.RelativeLayout;
import android.widget.TextView;
import com.czhj.sdk.common.utils.Dips;
import com.czhj.sdk.common.utils.ResourceUtil;
import com.sigmob.sdk.base.models.BaseAdUnit;

/* JADX INFO: loaded from: classes3.dex */
public class s extends com.sigmob.sdk.base.common.i {
    private RelativeLayout f;
    private LinearLayout g;
    private TextView h;
    private BaseAdUnit i;
    private String j;

    public s(Activity activity, BaseAdUnit baseAdUnit, Bundle bundle, Bundle bundle2, String str, com.sigmob.sdk.base.common.j jVar) {
        super(activity, str, jVar);
        this.j = "此广告由SigMob提供，为了在应用程序上向您推荐展示出更加个性和实用的广告，对您可能会接收到的一部分广告进行更具相关性的定制，从而使您在应用程序上有更好的用户体验。SigMob非常重视数据安全，将努力采取合理的安全措施（包括技术方面和管理方面）来保护数据安全，防止数据信息被不正当使用或未经授权的情况下被访问。";
        this.i = baseAdUnit;
    }

    @Override // com.sigmob.sdk.base.common.i
    public void a(Configuration configuration) {
    }

    @Override // com.sigmob.sdk.base.common.i
    public void a(Bundle bundle) {
    }

    @Override // com.sigmob.sdk.base.common.i
    public void b() {
        this.c.removeAllViews();
        this.c.setBackgroundColor(-1);
        this.d.onSetContentView(this.c);
        LinearLayout linearLayout = new LinearLayout(i());
        linearLayout.setOrientation(1);
        this.c.addView(linearLayout, new RelativeLayout.LayoutParams(-1, -1));
        RelativeLayout relativeLayout = new RelativeLayout(i());
        this.f = relativeLayout;
        linearLayout.addView(relativeLayout, new RelativeLayout.LayoutParams(-1, Dips.dipsToIntPixels(50.0f, i())));
        View view = new View(i());
        view.setBackgroundColor(Color.parseColor("#E0E6EC"));
        linearLayout.addView(view, new RelativeLayout.LayoutParams(-1, Dips.dipsToIntPixels(1.0f, i())));
        int iDipsToIntPixels = Dips.dipsToIntPixels(10.0f, i());
        ImageView imageView = new ImageView(i());
        imageView.setOnClickListener(new View.OnClickListener() { // from class: com.sigmob.sdk.nativead.s.1
            @Override // android.view.View.OnClickListener
            public void onClick(View view2) {
                if (s.this.d != null) {
                    s.this.d.a();
                }
            }
        });
        imageView.setImageResource(ResourceUtil.getDrawableId(i(), "sig_image_video_back_left_black"));
        int i = iDipsToIntPixels * 2;
        RelativeLayout.LayoutParams layoutParams = new RelativeLayout.LayoutParams(i, i);
        layoutParams.setMargins(iDipsToIntPixels, 0, iDipsToIntPixels, 0);
        layoutParams.addRule(9);
        layoutParams.addRule(15);
        this.f.addView(imageView, layoutParams);
        TextView textView = new TextView(i());
        textView.setText("为什么看到此广告");
        textView.setTextColor(-16777216);
        textView.setTextSize(1, 20.0f);
        textView.setGravity(17);
        RelativeLayout.LayoutParams layoutParams2 = new RelativeLayout.LayoutParams(-2, -2);
        layoutParams2.addRule(13);
        this.f.addView(textView, layoutParams2);
        LinearLayout linearLayout2 = new LinearLayout(i());
        this.g = linearLayout2;
        linearLayout.addView(linearLayout2, new RelativeLayout.LayoutParams(-1, -1));
        TextView textView2 = new TextView(i());
        this.h = textView2;
        textView2.setText(this.j);
        this.h.setTextColor(-16777216);
        this.h.setTextSize(1, 15.0f);
        this.h.setLineSpacing(2.0f, 1.2f);
        RelativeLayout.LayoutParams layoutParams3 = new RelativeLayout.LayoutParams(-1, -2);
        layoutParams3.addRule(13);
        int i2 = iDipsToIntPixels / 2;
        layoutParams3.setMargins(i2, i2, i2, i2);
        this.g.addView(this.h, layoutParams3);
    }

    @Override // com.sigmob.sdk.base.common.i
    public void c() {
    }

    @Override // com.sigmob.sdk.base.common.i
    public void d() {
    }

    @Override // com.sigmob.sdk.base.common.i
    public void e() {
        super.e();
    }

    @Override // com.sigmob.sdk.base.common.i
    public void f() {
    }

    @Override // com.sigmob.sdk.base.common.i
    public boolean g() {
        if (this.d == null) {
            return false;
        }
        this.d.a();
        return false;
    }
}
