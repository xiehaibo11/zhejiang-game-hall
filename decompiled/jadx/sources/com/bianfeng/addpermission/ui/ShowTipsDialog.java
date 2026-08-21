package com.bianfeng.addpermission.ui;

import android.app.Activity;
import android.app.Dialog;
import android.graphics.Color;
import android.graphics.drawable.GradientDrawable;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.TextView;
import com.bianfeng.addpermission.common.AddPermissionToolUtils;
import com.bianfeng.addpermission.common.ResourceManger;

/* JADX INFO: loaded from: classes.dex */
class ShowTipsDialog extends Dialog implements View.OnClickListener {
    private Activity context;
    private Button ok_btn;
    private TextView show_policy_content;
    private TextView show_policy_title_tv;

    public ShowTipsDialog(Activity activity) {
        super(activity, ResourceManger.getId(activity, "R.style.DialogActivityTheme"));
        this.context = activity;
        setContentView(ResourceManger.getId(activity, "R.layout.dialog_show_policy_tips_v2"));
    }

    public static void start(Activity activity) {
        new ShowTipsDialog(activity).show();
    }

    @Override // android.app.Dialog
    protected void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        this.ok_btn = (Button) findViewById(ResourceManger.getId(this.context, "R.id.show_tips_cancel"));
        this.show_policy_title_tv = (TextView) findViewById(ResourceManger.getId(this.context, "R.id.show_policy_title_tv"));
        this.show_policy_content = (TextView) findViewById(ResourceManger.getId(this.context, "R.id.show_policy_content"));
        this.ok_btn.setOnClickListener(this);
        initTheme();
    }

    private void initTheme() {
        String paramsInfo = AddPermissionToolUtils.getParamsInfo(this.context, "ANDPERMISSION_TITLE_TEXT_COLOR");
        if (paramsInfo != null && !paramsInfo.isEmpty()) {
            this.show_policy_title_tv.setTextColor(Color.parseColor(paramsInfo));
        }
        String paramsInfo2 = AddPermissionToolUtils.getParamsInfo(this.context, "ANDPERMISSION_TITLE_BACKGROUND_COLOR");
        if (paramsInfo2 != null && !paramsInfo2.isEmpty()) {
            this.show_policy_title_tv.setBackgroundColor(Color.parseColor(paramsInfo2));
        }
        String paramsInfo3 = AddPermissionToolUtils.getParamsInfo(this.context, "ANDPERMISSION_CONTENT_TEXT_COLOR");
        if (paramsInfo3 != null && !paramsInfo3.isEmpty()) {
            this.show_policy_content.setTextColor(Color.parseColor(paramsInfo3));
        }
        String paramsInfo4 = AddPermissionToolUtils.getParamsInfo(this.context, "ANDPERMISSION_REFUSE_TEXT_COLOR");
        if (paramsInfo4 != null && !paramsInfo4.isEmpty()) {
            this.ok_btn.setTextColor(Color.parseColor(paramsInfo4));
        }
        String paramsInfo5 = AddPermissionToolUtils.getParamsInfo(this.context, "ANDPERMISSION_REFUSE_BACKGROUND_COLOR");
        if (paramsInfo5 == null || paramsInfo5.isEmpty()) {
            return;
        }
        GradientDrawable gradientDrawable = (GradientDrawable) this.ok_btn.getBackground();
        gradientDrawable.setColor(Color.parseColor(paramsInfo5));
        this.ok_btn.setBackground(gradientDrawable);
    }

    @Override // android.view.View.OnClickListener
    public void onClick(View view) {
        if (view.getId() == ResourceManger.getId(this.context, "R.id.show_tips_cancel")) {
            dismiss();
        }
    }
}
