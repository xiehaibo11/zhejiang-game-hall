package com.bianfeng.addpermission.ui;

import android.app.Activity;
import android.app.Dialog;
import android.os.Bundle;
import android.support.v7.widget.DefaultItemAnimator;
import android.support.v7.widget.LinearLayoutManager;
import android.support.v7.widget.RecyclerView;
import android.util.DisplayMetrics;
import android.view.View;
import android.view.Window;
import android.view.WindowManager;
import android.widget.Button;
import android.widget.CheckBox;
import android.widget.CompoundButton;
import android.widget.TextView;
import com.bianfeng.addpermission.common.AddPermissionToolUtils;
import com.bianfeng.addpermission.common.DensityUtils;
import com.bianfeng.addpermission.common.ResourceManger;
import com.bianfeng.addpermission.common.SharedPreferencesUtils;
import com.bianfeng.ymnsdk.util.Logger;
import com.bianfeng.ymnsdk.util.thridsdk.YmnGsonUtil;
import java.util.List;

/* JADX INFO: loaded from: classes.dex */
public class ShowPermissionDialog extends Dialog implements View.OnClickListener, CompoundButton.OnCheckedChangeListener {
    private ShowPermissionAdapter adapter;
    private String appName;
    private Button cancel_btn;
    private CheckBox checkBox;
    private Activity context;
    private List<PermissionBean> list;
    private Button ok_btn;
    private RecyclerView recyclerView;
    private TextView title;

    public ShowPermissionDialog(Activity activity) {
        super(activity, ResourceManger.getId(activity, "R.style.DialogActivityTheme"));
        this.context = activity;
        setContentView(ResourceManger.getId(activity, "R.layout.activity_show_permission"));
    }

    public static void start(Activity activity) {
        new ShowPermissionDialog(activity).show();
    }

    @Override // android.app.Dialog
    protected void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        Window window = getWindow();
        WindowManager.LayoutParams attributes = window.getAttributes();
        DisplayMetrics displayMetrics = this.context.getResources().getDisplayMetrics();
        setCancelable(false);
        if (DensityUtils.isPortrait(this.context)) {
            attributes.height = (int) (((double) displayMetrics.heightPixels) * 0.55d);
            attributes.width = (int) (((double) displayMetrics.widthPixels) * 0.85d);
        } else {
            attributes.height = (int) (((double) displayMetrics.heightPixels) * 0.8d);
            attributes.width = (int) (((double) displayMetrics.widthPixels) * 0.6d);
        }
        window.setAttributes(attributes);
        this.ok_btn = (Button) findViewById(ResourceManger.getId(this.context, "R.id.show_permission_ok"));
        this.cancel_btn = (Button) findViewById(ResourceManger.getId(this.context, "R.id.show_permission_cancel"));
        this.title = (TextView) findViewById(ResourceManger.getId(this.context, "R.id.show_permission_title"));
        this.ok_btn.setOnClickListener(this);
        this.cancel_btn.setOnClickListener(this);
        CheckBox checkBox = (CheckBox) findViewById(ResourceManger.getId(this.context, "R.id.show_permission_check_box"));
        this.checkBox = checkBox;
        checkBox.setOnCheckedChangeListener(this);
        initdata();
        this.appName = AddPermissionToolUtils.getAppName(this.context);
        this.title.setText(this.appName + "权限申请");
    }

    private void initdata() {
        Logger.i("initdata---------------");
        List<PermissionBean> permissions = SharedPreferencesUtils.getInstance(this.context).getPermissions();
        this.list = permissions;
        if (permissions == null || permissions.isEmpty()) {
            dismiss();
            Logger.i("initdata--------onRefuse-------");
            AddPermissionApi.getPermissionCallback().onRefuse();
            return;
        }
        initAdapter();
    }

    private void initAdapter() {
        this.recyclerView = (RecyclerView) findViewById(ResourceManger.getId(this.context, "R.id.show_permission_list"));
        LinearLayoutManager linearLayoutManager = new LinearLayoutManager(this.context);
        this.recyclerView.setLayoutManager(linearLayoutManager);
        linearLayoutManager.setOrientation(1);
        this.adapter = new ShowPermissionAdapter(this.list, this.context);
        this.recyclerView.addItemDecoration(new ShowPermissionDecoration(this.context));
        this.recyclerView.setItemAnimator(new DefaultItemAnimator());
        this.recyclerView.setAdapter(this.adapter);
    }

    @Override // android.view.View.OnClickListener
    public void onClick(View view) {
        int id = view.getId();
        if (id == ResourceManger.getId(this.context, "R.id.show_permission_ok")) {
            SharedPreferencesUtils.getInstance(this.context).putString(this.list);
            dismiss();
            AddPermissionApi.getPermissionCallback().onAgree();
        } else if (id == ResourceManger.getId(this.context, "R.id.show_permission_cancel")) {
            Logger.i("点击了不保存按钮" + YmnGsonUtil.toJson(this.list));
            dismiss();
            AddPermissionApi.getPermissionCallback().onRefuse();
        }
    }

    @Override // android.widget.CompoundButton.OnCheckedChangeListener
    public void onCheckedChanged(CompoundButton compoundButton, boolean z) {
        if (compoundButton.getId() == ResourceManger.getId(this.context, "R.id.show_permission_check_box")) {
            Logger.i("onCheckedChanged" + z);
            SharedPreferencesUtils.getInstance(this.context).setRefuse(z);
        }
    }
}
