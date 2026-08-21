package com.sigmob.sdk.nativead;

import android.content.Context;
import android.view.View;
import android.widget.RelativeLayout;
import android.widget.TextView;
import com.czhj.sdk.common.utils.ResourceUtil;

public class j extends RelativeLayout {
    private TextView a;
    private TextView b;
    private TextView c;
    private TextView d;

    public j(Context context) {
        super(context);
        View.inflate(context, getLayoutId(), this);
        this.a = (TextView) findViewById(ResourceUtil.getId(getContext(), "sig_app_info_ver"));
        this.b = (TextView) findViewById(ResourceUtil.getId(getContext(), "sig_app_info_dev"));
        this.c = (TextView) findViewById(ResourceUtil.getId(getContext(), "sig_app_info_privacy"));
        this.d = (TextView) findViewById(ResourceUtil.getId(getContext(), "sig_app_info_permissions"));
        this.c.getPaint().setFlags(8);
        this.c.getPaint().setAntiAlias(true);
        this.d.getPaint().setFlags(8);
        this.d.getPaint().setAntiAlias(true);
    }

    private int getLayoutId() {
        return ResourceUtil.getLayoutId(getContext(), "sig_app_info_layout");
    }

    public void a(String str, String str2) {
        this.a.setText(str);
        this.b.setText(str2);
    }
}
