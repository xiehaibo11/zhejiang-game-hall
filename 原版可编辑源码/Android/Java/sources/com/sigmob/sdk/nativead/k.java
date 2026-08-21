package com.sigmob.sdk.nativead;

import android.content.Context;
import android.view.View;
import android.view.ViewGroup;
import android.widget.ImageView;
import android.widget.RelativeLayout;
import android.widget.TextView;
import com.czhj.sdk.common.utils.ImageManager;
import com.czhj.sdk.common.utils.ResourceUtil;

public class k extends RelativeLayout {
    private TextView a;
    private TextView b;
    private ViewGroup c;
    private com.sigmob.sdk.base.views.h d;

    public k(Context context) {
        super(context);
        View.inflate(context, getLayoutId(), this);
        this.a = (TextView) findViewById(ResourceUtil.getId(getContext(), "sig_app_name"));
        this.b = (TextView) findViewById(ResourceUtil.getId(getContext(), "sig_app_cta"));
        this.c = (ViewGroup) findViewById(ResourceUtil.getId(getContext(), "sig_app_icon"));
        com.sigmob.sdk.base.views.h hVar = new com.sigmob.sdk.base.views.h(context);
        this.d = hVar;
        hVar.setCircle(false);
        this.d.setScaleType(ImageView.ScaleType.CENTER_CROP);
        this.c.addView(this.d, new ViewGroup.LayoutParams(-1, -1));
    }

    private int getLayoutId() {
        return ResourceUtil.getLayoutId(getContext(), "sig_app_layout");
    }

    public void a(String str, String str2, String str3) {
        this.a.setText(str2);
        this.b.setText(str3);
        ImageManager.with(getContext()).load(str).into(this.d);
    }

    public View getCtaView() {
        return this.b;
    }

    @Override
    public void setOnClickListener(View.OnClickListener onClickListener) {
        this.b.setOnClickListener(onClickListener);
    }
}
