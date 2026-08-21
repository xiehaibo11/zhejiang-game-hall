package com.sigmob.sdk.nativead;

import android.content.Context;
import android.view.View;
import android.widget.RelativeLayout;
import android.widget.TextView;
import com.czhj.sdk.common.utils.ResourceUtil;

/* JADX INFO: loaded from: classes3.dex */
public class j extends RelativeLayout {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private TextView f5106a;
    private TextView b;
    private TextView c;
    private TextView d;

    public j(Context context) {
        super(context);
        View.inflate(context, getLayoutId(), this);
        this.f5106a = (TextView) findViewById(ResourceUtil.getId(getContext(), "sig_app_info_ver"));
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
        this.f5106a.setText(str);
        this.b.setText(str2);
    }
}
