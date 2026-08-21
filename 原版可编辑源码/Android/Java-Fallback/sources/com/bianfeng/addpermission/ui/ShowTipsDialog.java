package com.bianfeng.addpermission.ui;

class ShowTipsDialog extends android.app.Dialog implements android.view.View.OnClickListener {
    private android.app.Activity context;
    private android.widget.Button ok_btn;
    private android.widget.TextView show_policy_content;
    private android.widget.TextView show_policy_title_tv;

    public ShowTipsDialog(android.app.Activity r2) {
            r1 = this;
            java.lang.String r0 = "R.style.DialogActivityTheme"
            int r0 = com.bianfeng.addpermission.common.ResourceManger.getId(r2, r0)
            r1.<init>(r2, r0)
            r1.context = r2
            java.lang.String r0 = "R.layout.dialog_show_policy_tips_v2"
            int r2 = com.bianfeng.addpermission.common.ResourceManger.getId(r2, r0)
            r1.setContentView(r2)
            return
    }

    private void initTheme() {
            r2 = this;
            android.app.Activity r0 = r2.context
            java.lang.String r1 = "ANDPERMISSION_TITLE_TEXT_COLOR"
            java.lang.String r0 = com.bianfeng.addpermission.common.AddPermissionToolUtils.getParamsInfo(r0, r1)
            if (r0 == 0) goto L19
            boolean r1 = r0.isEmpty()
            if (r1 != 0) goto L19
            android.widget.TextView r1 = r2.show_policy_title_tv
            int r0 = android.graphics.Color.parseColor(r0)
            r1.setTextColor(r0)
        L19:
            android.app.Activity r0 = r2.context
            java.lang.String r1 = "ANDPERMISSION_TITLE_BACKGROUND_COLOR"
            java.lang.String r0 = com.bianfeng.addpermission.common.AddPermissionToolUtils.getParamsInfo(r0, r1)
            if (r0 == 0) goto L32
            boolean r1 = r0.isEmpty()
            if (r1 != 0) goto L32
            android.widget.TextView r1 = r2.show_policy_title_tv
            int r0 = android.graphics.Color.parseColor(r0)
            r1.setBackgroundColor(r0)
        L32:
            android.app.Activity r0 = r2.context
            java.lang.String r1 = "ANDPERMISSION_CONTENT_TEXT_COLOR"
            java.lang.String r0 = com.bianfeng.addpermission.common.AddPermissionToolUtils.getParamsInfo(r0, r1)
            if (r0 == 0) goto L4b
            boolean r1 = r0.isEmpty()
            if (r1 != 0) goto L4b
            android.widget.TextView r1 = r2.show_policy_content
            int r0 = android.graphics.Color.parseColor(r0)
            r1.setTextColor(r0)
        L4b:
            android.app.Activity r0 = r2.context
            java.lang.String r1 = "ANDPERMISSION_REFUSE_TEXT_COLOR"
            java.lang.String r0 = com.bianfeng.addpermission.common.AddPermissionToolUtils.getParamsInfo(r0, r1)
            if (r0 == 0) goto L64
            boolean r1 = r0.isEmpty()
            if (r1 != 0) goto L64
            android.widget.Button r1 = r2.ok_btn
            int r0 = android.graphics.Color.parseColor(r0)
            r1.setTextColor(r0)
        L64:
            android.app.Activity r0 = r2.context
            java.lang.String r1 = "ANDPERMISSION_REFUSE_BACKGROUND_COLOR"
            java.lang.String r0 = com.bianfeng.addpermission.common.AddPermissionToolUtils.getParamsInfo(r0, r1)
            if (r0 == 0) goto L88
            boolean r1 = r0.isEmpty()
            if (r1 != 0) goto L88
            android.widget.Button r1 = r2.ok_btn
            android.graphics.drawable.Drawable r1 = r1.getBackground()
            android.graphics.drawable.GradientDrawable r1 = (android.graphics.drawable.GradientDrawable) r1
            int r0 = android.graphics.Color.parseColor(r0)
            r1.setColor(r0)
            android.widget.Button r0 = r2.ok_btn
            r0.setBackground(r1)
        L88:
            return
    }

    public static void start(android.app.Activity r1) {
            com.bianfeng.addpermission.ui.ShowTipsDialog r0 = new com.bianfeng.addpermission.ui.ShowTipsDialog
            r0.<init>(r1)
            r0.show()
            return
    }

    @Override
    public void onClick(android.view.View r3) {
            r2 = this;
            int r3 = r3.getId()
            android.app.Activity r0 = r2.context
            java.lang.String r1 = "R.id.show_tips_cancel"
            int r0 = com.bianfeng.addpermission.common.ResourceManger.getId(r0, r1)
            if (r3 != r0) goto L11
            r2.dismiss()
        L11:
            return
    }

    @Override
    protected void onCreate(android.os.Bundle r2) {
            r1 = this;
            super.onCreate(r2)
            android.app.Activity r2 = r1.context
            java.lang.String r0 = "R.id.show_tips_cancel"
            int r2 = com.bianfeng.addpermission.common.ResourceManger.getId(r2, r0)
            android.view.View r2 = r1.findViewById(r2)
            android.widget.Button r2 = (android.widget.Button) r2
            r1.ok_btn = r2
            android.app.Activity r2 = r1.context
            java.lang.String r0 = "R.id.show_policy_title_tv"
            int r2 = com.bianfeng.addpermission.common.ResourceManger.getId(r2, r0)
            android.view.View r2 = r1.findViewById(r2)
            android.widget.TextView r2 = (android.widget.TextView) r2
            r1.show_policy_title_tv = r2
            android.app.Activity r2 = r1.context
            java.lang.String r0 = "R.id.show_policy_content"
            int r2 = com.bianfeng.addpermission.common.ResourceManger.getId(r2, r0)
            android.view.View r2 = r1.findViewById(r2)
            android.widget.TextView r2 = (android.widget.TextView) r2
            r1.show_policy_content = r2
            android.widget.Button r2 = r1.ok_btn
            r2.setOnClickListener(r1)
            r1.initTheme()
            return
    }
}
