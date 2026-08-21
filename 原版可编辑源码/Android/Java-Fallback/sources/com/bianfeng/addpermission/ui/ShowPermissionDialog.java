package com.bianfeng.addpermission.ui;

public class ShowPermissionDialog extends android.app.Dialog implements android.view.View.OnClickListener, android.widget.CompoundButton.OnCheckedChangeListener {
    private com.bianfeng.addpermission.ui.ShowPermissionAdapter adapter;
    private java.lang.String appName;
    private android.widget.Button cancel_btn;
    private android.widget.CheckBox checkBox;
    private android.app.Activity context;
    private java.util.List<com.bianfeng.addpermission.ui.PermissionBean> list;
    private android.widget.Button ok_btn;
    private android.support.v7.widget.RecyclerView recyclerView;
    private android.widget.TextView title;

    public ShowPermissionDialog(android.app.Activity r2) {
            r1 = this;
            java.lang.String r0 = "R.style.DialogActivityTheme"
            int r0 = com.bianfeng.addpermission.common.ResourceManger.getId(r2, r0)
            r1.<init>(r2, r0)
            r1.context = r2
            java.lang.String r0 = "R.layout.activity_show_permission"
            int r2 = com.bianfeng.addpermission.common.ResourceManger.getId(r2, r0)
            r1.setContentView(r2)
            return
    }

    private void initAdapter() {
            r3 = this;
            android.app.Activity r0 = r3.context
            java.lang.String r1 = "R.id.show_permission_list"
            int r0 = com.bianfeng.addpermission.common.ResourceManger.getId(r0, r1)
            android.view.View r0 = r3.findViewById(r0)
            android.support.v7.widget.RecyclerView r0 = (android.support.v7.widget.RecyclerView) r0
            r3.recyclerView = r0
            android.support.v7.widget.LinearLayoutManager r0 = new android.support.v7.widget.LinearLayoutManager
            android.app.Activity r1 = r3.context
            r0.<init>(r1)
            android.support.v7.widget.RecyclerView r1 = r3.recyclerView
            r1.setLayoutManager(r0)
            r1 = 1
            r0.setOrientation(r1)
            com.bianfeng.addpermission.ui.ShowPermissionAdapter r0 = new com.bianfeng.addpermission.ui.ShowPermissionAdapter
            java.util.List<com.bianfeng.addpermission.ui.PermissionBean> r1 = r3.list
            android.app.Activity r2 = r3.context
            r0.<init>(r1, r2)
            r3.adapter = r0
            com.bianfeng.addpermission.ui.ShowPermissionDecoration r0 = new com.bianfeng.addpermission.ui.ShowPermissionDecoration
            android.app.Activity r1 = r3.context
            r0.<init>(r1)
            android.support.v7.widget.RecyclerView r1 = r3.recyclerView
            r1.addItemDecoration(r0)
            android.support.v7.widget.RecyclerView r0 = r3.recyclerView
            android.support.v7.widget.DefaultItemAnimator r1 = new android.support.v7.widget.DefaultItemAnimator
            r1.<init>()
            r0.setItemAnimator(r1)
            android.support.v7.widget.RecyclerView r0 = r3.recyclerView
            com.bianfeng.addpermission.ui.ShowPermissionAdapter r1 = r3.adapter
            r0.setAdapter(r1)
            return
    }

    private void initdata() {
            r1 = this;
            java.lang.String r0 = "initdata---------------"
            com.bianfeng.ymnsdk.util.Logger.i(r0)
            android.app.Activity r0 = r1.context
            com.bianfeng.addpermission.common.SharedPreferencesUtils r0 = com.bianfeng.addpermission.common.SharedPreferencesUtils.getInstance(r0)
            java.util.List r0 = r0.getPermissions()
            r1.list = r0
            if (r0 == 0) goto L1e
            boolean r0 = r0.isEmpty()
            if (r0 == 0) goto L1a
            goto L1e
        L1a:
            r1.initAdapter()
            goto L2d
        L1e:
            r1.dismiss()
            java.lang.String r0 = "initdata--------onRefuse-------"
            com.bianfeng.ymnsdk.util.Logger.i(r0)
            com.bianfeng.addpermission.ui.PermissionCallback r0 = com.bianfeng.addpermission.ui.AddPermissionApi.getPermissionCallback()
            r0.onRefuse()
        L2d:
            return
    }

    public static void start(android.app.Activity r1) {
            com.bianfeng.addpermission.ui.ShowPermissionDialog r0 = new com.bianfeng.addpermission.ui.ShowPermissionDialog
            r0.<init>(r1)
            r0.show()
            return
    }

    @Override
    public void onCheckedChanged(android.widget.CompoundButton r3, boolean r4) {
            r2 = this;
            int r3 = r3.getId()
            android.app.Activity r0 = r2.context
            java.lang.String r1 = "R.id.show_permission_check_box"
            int r0 = com.bianfeng.addpermission.common.ResourceManger.getId(r0, r1)
            if (r3 != r0) goto L2b
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r0 = "onCheckedChanged"
            r3.append(r0)
            r3.append(r4)
            java.lang.String r3 = r3.toString()
            com.bianfeng.ymnsdk.util.Logger.i(r3)
            android.app.Activity r3 = r2.context
            com.bianfeng.addpermission.common.SharedPreferencesUtils r3 = com.bianfeng.addpermission.common.SharedPreferencesUtils.getInstance(r3)
            r3.setRefuse(r4)
        L2b:
            return
    }

    @Override
    public void onClick(android.view.View r3) {
            r2 = this;
            int r3 = r3.getId()
            android.app.Activity r0 = r2.context
            java.lang.String r1 = "R.id.show_permission_ok"
            int r0 = com.bianfeng.addpermission.common.ResourceManger.getId(r0, r1)
            if (r3 != r0) goto L24
            android.app.Activity r3 = r2.context
            com.bianfeng.addpermission.common.SharedPreferencesUtils r3 = com.bianfeng.addpermission.common.SharedPreferencesUtils.getInstance(r3)
            java.util.List<com.bianfeng.addpermission.ui.PermissionBean> r0 = r2.list
            r3.putString(r0)
            r2.dismiss()
            com.bianfeng.addpermission.ui.PermissionCallback r3 = com.bianfeng.addpermission.ui.AddPermissionApi.getPermissionCallback()
            r3.onAgree()
            goto L52
        L24:
            android.app.Activity r0 = r2.context
            java.lang.String r1 = "R.id.show_permission_cancel"
            int r0 = com.bianfeng.addpermission.common.ResourceManger.getId(r0, r1)
            if (r3 != r0) goto L52
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r0 = "点击了不保存按钮"
            r3.append(r0)
            java.util.List<com.bianfeng.addpermission.ui.PermissionBean> r0 = r2.list
            java.lang.String r0 = com.bianfeng.ymnsdk.util.thridsdk.YmnGsonUtil.toJson(r0)
            r3.append(r0)
            java.lang.String r3 = r3.toString()
            com.bianfeng.ymnsdk.util.Logger.i(r3)
            r2.dismiss()
            com.bianfeng.addpermission.ui.PermissionCallback r3 = com.bianfeng.addpermission.ui.AddPermissionApi.getPermissionCallback()
            r3.onRefuse()
        L52:
            return
    }

    @Override
    protected void onCreate(android.os.Bundle r7) {
            r6 = this;
            super.onCreate(r7)
            android.view.Window r7 = r6.getWindow()
            android.view.WindowManager$LayoutParams r0 = r7.getAttributes()
            android.app.Activity r1 = r6.context
            android.content.res.Resources r1 = r1.getResources()
            android.util.DisplayMetrics r1 = r1.getDisplayMetrics()
            r2 = 0
            r6.setCancelable(r2)
            android.app.Activity r2 = r6.context
            boolean r2 = com.bianfeng.addpermission.common.DensityUtils.isPortrait(r2)
            if (r2 == 0) goto L3c
            int r2 = r1.heightPixels
            double r2 = (double) r2
            r4 = 4603129179135383962(0x3fe199999999999a, double:0.55)
            double r2 = r2 * r4
            int r2 = (int) r2
            r0.height = r2
            int r1 = r1.widthPixels
            double r1 = (double) r1
            r3 = 4605831338911806259(0x3feb333333333333, double:0.85)
            double r1 = r1 * r3
            int r1 = (int) r1
            r0.width = r1
            goto L56
        L3c:
            int r2 = r1.heightPixels
            double r2 = (double) r2
            r4 = 4605380978949069210(0x3fe999999999999a, double:0.8)
            double r2 = r2 * r4
            int r2 = (int) r2
            r0.height = r2
            int r1 = r1.widthPixels
            double r1 = (double) r1
            r3 = 4603579539098121011(0x3fe3333333333333, double:0.6)
            double r1 = r1 * r3
            int r1 = (int) r1
            r0.width = r1
        L56:
            r7.setAttributes(r0)
            android.app.Activity r7 = r6.context
            java.lang.String r0 = "R.id.show_permission_ok"
            int r7 = com.bianfeng.addpermission.common.ResourceManger.getId(r7, r0)
            android.view.View r7 = r6.findViewById(r7)
            android.widget.Button r7 = (android.widget.Button) r7
            r6.ok_btn = r7
            android.app.Activity r7 = r6.context
            java.lang.String r0 = "R.id.show_permission_cancel"
            int r7 = com.bianfeng.addpermission.common.ResourceManger.getId(r7, r0)
            android.view.View r7 = r6.findViewById(r7)
            android.widget.Button r7 = (android.widget.Button) r7
            r6.cancel_btn = r7
            android.app.Activity r7 = r6.context
            java.lang.String r0 = "R.id.show_permission_title"
            int r7 = com.bianfeng.addpermission.common.ResourceManger.getId(r7, r0)
            android.view.View r7 = r6.findViewById(r7)
            android.widget.TextView r7 = (android.widget.TextView) r7
            r6.title = r7
            android.widget.Button r7 = r6.ok_btn
            r7.setOnClickListener(r6)
            android.widget.Button r7 = r6.cancel_btn
            r7.setOnClickListener(r6)
            android.app.Activity r7 = r6.context
            java.lang.String r0 = "R.id.show_permission_check_box"
            int r7 = com.bianfeng.addpermission.common.ResourceManger.getId(r7, r0)
            android.view.View r7 = r6.findViewById(r7)
            android.widget.CheckBox r7 = (android.widget.CheckBox) r7
            r6.checkBox = r7
            r7.setOnCheckedChangeListener(r6)
            r6.initdata()
            android.app.Activity r7 = r6.context
            java.lang.String r7 = com.bianfeng.addpermission.common.AddPermissionToolUtils.getAppName(r7)
            r6.appName = r7
            android.widget.TextView r7 = r6.title
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = r6.appName
            r0.append(r1)
            java.lang.String r1 = "权限申请"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r7.setText(r0)
            return
    }
}
