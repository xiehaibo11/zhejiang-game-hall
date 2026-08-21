package com.bianfeng.addpermission.ui;

import android.app.Activity;
import android.app.Dialog;
import android.content.Context;
import android.content.Intent;
import android.graphics.Color;
import android.graphics.drawable.GradientDrawable;
import android.net.Uri;
import android.os.Bundle;
import android.text.SpannableStringBuilder;
import android.text.method.LinkMovementMethod;
import android.text.style.ClickableSpan;
import android.text.style.ForegroundColorSpan;
import android.util.DisplayMetrics;
import android.view.View;
import android.view.Window;
import android.view.WindowManager;
import android.widget.Button;
import android.widget.RelativeLayout;
import android.widget.TextView;
import android.widget.Toast;
import com.bianfeng.addpermission.common.AddPermissionToolUtils;
import com.bianfeng.addpermission.common.DensityUtils;
import com.bianfeng.addpermission.common.PolicyConstantsUtils;
import com.bianfeng.addpermission.common.ResourceManger;
import com.bianfeng.addpermission.common.SharedPreferencesUtils;
import com.bianfeng.ymnsdk.util.Logger;
import com.igexin.sdk.PushBuildConfig;

public class ShowPrivacyPolicyDialog extends Dialog implements View.OnClickListener {
    private final int CLICK_TIME;
    private Button cancel_btn;
    private TextView check_policy_tv;
    private TextView content_tv;
    private Activity context;
    private long lastClickTime;
    private Button ok_btn;
    private RelativeLayout show_policy_bg_rl;
    private TextView title_tv;

    public ShowPrivacyPolicyDialog(Activity activity) {
        super(activity, ResourceManger.getId(activity, "R.style.DialogActivityTheme"));
        this.lastClickTime = 0L;
        this.CLICK_TIME = 500;
        this.context = activity;
        setContentView(ResourceManger.getId(activity, "R.layout.dialog_show_privacypolicy_v2"));
    }

    public static void start(Activity activity) {
        new ShowPrivacyPolicyDialog(activity).show();
    }

    @Override
    protected void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        Window window = getWindow();
        WindowManager.LayoutParams attributes = window.getAttributes();
        DisplayMetrics displayMetrics = this.context.getResources().getDisplayMetrics();
        setCancelable(false);
        int i = displayMetrics.heightPixels;
        int i2 = displayMetrics.widthPixels;
        Logger.i("ShowPrivacyPolicyDialog onCreate:heightPixels--- " + i);
        Logger.i("ShowPrivacyPolicyDialog onCreate:widthPixels--- " + i2);
        if (DensityUtils.isPortrait(this.context)) {
            Logger.i("ShowPrivacyPolicyDialog onCreate:isPortrait ");
            Logger.i("ShowPrivacyPolicyDialog onCreate:heightPixels--- " + i);
            Logger.i("ShowPrivacyPolicyDialog onCreate:widthPixels--- " + i2);
            int iMax = Math.max(i, i2);
            int iMin = Math.min(i, i2);
            attributes.screenOrientation = 1;
            attributes.height = (int) (((double) iMax) * 0.35d);
            attributes.width = (int) (((double) iMin) * 0.85d);
        } else {
            int iMin2 = Math.min(i, i2);
            int iMax2 = Math.max(i, i2);
            Logger.i("ShowPrivacyPolicyDialog onCreate:islan ");
            Logger.i("ShowPrivacyPolicyDialog onCreate:heightPixels--- " + iMin2);
            Logger.i("ShowPrivacyPolicyDialog onCreate:widthPixels--- " + iMax2);
            attributes.height = (int) (((double) iMin2) * 0.87d);
            attributes.width = (int) (((double) iMax2) * 0.66d);
            attributes.screenOrientation = 0;
        }
        window.setAttributes(attributes);
        this.show_policy_bg_rl = (RelativeLayout) findViewById(ResourceManger.getId(this.context, "R.id.show_policy_bg_rl"));
        this.title_tv = (TextView) findViewById(ResourceManger.getId(this.context, "R.id.show_policy_title_tv"));
        this.ok_btn = (Button) findViewById(ResourceManger.getId(this.context, "R.id.privacypolicy_ok"));
        this.cancel_btn = (Button) findViewById(ResourceManger.getId(this.context, "R.id.privacypolicy_refuse"));
        this.content_tv = (TextView) findViewById(ResourceManger.getId(this.context, "R.id.show_policy_content"));
        this.check_policy_tv = (TextView) findViewById(ResourceManger.getId(this.context, "R.id.show_policy_tv"));
        this.ok_btn.setOnClickListener(this);
        this.cancel_btn.setOnClickListener(this);
        this.lastClickTime = 0L;
        initdata();
        initTheme();
    }

    private void initcheckPolicy() {
        SpannableStringBuilder spannableStringBuilder = new SpannableStringBuilder();
        spannableStringBuilder.append((CharSequence) "您可通过阅读完整的《服务协议》和《隐私政策》来了解详细信息");
        spannableStringBuilder.setSpan(new ClickableSpan() {
            @Override
            public void onClick(View view) {
                long jCurrentTimeMillis = System.currentTimeMillis();
                if (jCurrentTimeMillis - ShowPrivacyPolicyDialog.this.lastClickTime < 500) {
                    ShowPrivacyPolicyDialog.this.lastClickTime = jCurrentTimeMillis;
                    return;
                }
                ShowPrivacyPolicyDialog.this.lastClickTime = jCurrentTimeMillis;
                if (AddPermissionToolUtils.getMetaData(ShowPrivacyPolicyDialog.this.context, "OPEN_PRIVACY_POLICY_WITH_BROWER").equals(PushBuildConfig.sdk_conf_channelid)) {
                    String url = PolicyConstantsUtils.getUrl(ShowPrivacyPolicyDialog.this.context, PolicyConstantsUtils.userFlag);
                    if (SharedPreferencesUtils.getInstance(ShowPrivacyPolicyDialog.this.context).getPolicyDialogShow()) {
                        return;
                    }
                    ShowPrivacyPolicyDialog.openBrowser(ShowPrivacyPolicyDialog.this.context, url);
                    return;
                }
                if (SharedPreferencesUtils.getInstance(ShowPrivacyPolicyDialog.this.context).getPolicyDialogShow()) {
                    return;
                }
                ShowPolicyActivity.start(ShowPrivacyPolicyDialog.this.context, PolicyConstantsUtils.userFlag);
            }
        }, 9, 15, 33);
        spannableStringBuilder.setSpan(new ClickableSpan() {
            @Override
            public void onClick(View view) {
                if (AddPermissionToolUtils.getMetaData(ShowPrivacyPolicyDialog.this.context, "OPEN_PRIVACY_POLICY_WITH_BROWER").equals(PushBuildConfig.sdk_conf_channelid)) {
                    String url = PolicyConstantsUtils.getUrl(ShowPrivacyPolicyDialog.this.context, PolicyConstantsUtils.gameFlag);
                    if (SharedPreferencesUtils.getInstance(ShowPrivacyPolicyDialog.this.context).getPolicyDialogShow()) {
                        return;
                    }
                    ShowPrivacyPolicyDialog.openBrowser(ShowPrivacyPolicyDialog.this.context, url);
                    return;
                }
                if (SharedPreferencesUtils.getInstance(ShowPrivacyPolicyDialog.this.context).getPolicyDialogShow()) {
                    return;
                }
                ShowPolicyActivity.start(ShowPrivacyPolicyDialog.this.context, PolicyConstantsUtils.gameFlag);
            }
        }, 16, 22, 33);
        String metaData = AddPermissionToolUtils.getMetaData(this.context, "ANDPERMISSION_POLICY_NAME_TEXT_COLOR");
        String strSubstring = (metaData == null || metaData.isEmpty()) ? "fd6f4e" : metaData.substring(1);
        spannableStringBuilder.setSpan(new ForegroundColorSpan(Color.parseColor("#" + strSubstring)), 16, 22, 33);
        spannableStringBuilder.setSpan(new ForegroundColorSpan(Color.parseColor("#" + strSubstring)), 9, 15, 33);
        this.check_policy_tv.setMovementMethod(LinkMovementMethod.getInstance());
        this.check_policy_tv.setText(spannableStringBuilder);
    }

    private void initdata() {
        this.content_tv.setText(PolicyConstantsUtils.getContentTv(this.context));
        this.show_policy_bg_rl.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                ShowPrivacyPolicyDialog.this.initcheckPolicy();
            }
        });
        String paramsInfo = AddPermissionToolUtils.getParamsInfo(this.context, "ANDPERMISSION_POLICY_TITLE_TEXT");
        if (paramsInfo != null && !paramsInfo.isEmpty()) {
            this.title_tv.setText(paramsInfo);
        }
        initcheckPolicy();
    }

    private void initTheme() {
        String paramsInfo = AddPermissionToolUtils.getParamsInfo(this.context, "ANDPERMISSION_TITLE_TEXT_COLOR");
        if (paramsInfo != null && !paramsInfo.isEmpty()) {
            this.title_tv.setTextColor(Color.parseColor(paramsInfo));
        }
        String paramsInfo2 = AddPermissionToolUtils.getParamsInfo(this.context, "ANDPERMISSION_TITLE_BACKGROUND_COLOR");
        if (paramsInfo2 != null && !paramsInfo2.isEmpty()) {
            this.title_tv.setBackgroundColor(Color.parseColor(paramsInfo2));
        }
        String paramsInfo3 = AddPermissionToolUtils.getParamsInfo(this.context, "ANDPERMISSION_CONTENT_TEXT_COLOR");
        if (paramsInfo3 != null && !paramsInfo3.isEmpty()) {
            this.content_tv.setTextColor(Color.parseColor(paramsInfo3));
        }
        String paramsInfo4 = AddPermissionToolUtils.getParamsInfo(this.context, "ANDPERMISSION_CONTENT_BACKGROUND_COLOR");
        if (paramsInfo4 != null && !paramsInfo4.isEmpty()) {
            this.content_tv.setBackgroundColor(Color.parseColor(paramsInfo4));
        }
        String paramsInfo5 = AddPermissionToolUtils.getParamsInfo(this.context, "ANDPERMISSION_REFUSE_TEXT_COLOR");
        if (paramsInfo5 != null && !paramsInfo5.isEmpty()) {
            this.cancel_btn.setTextColor(Color.parseColor(paramsInfo5));
        }
        String paramsInfo6 = AddPermissionToolUtils.getParamsInfo(this.context, "ANDPERMISSION_REFUSE_BACKGROUND_COLOR");
        if (paramsInfo6 != null && !paramsInfo6.isEmpty()) {
            GradientDrawable gradientDrawable = (GradientDrawable) this.cancel_btn.getBackground();
            gradientDrawable.setColor(Color.parseColor(paramsInfo6));
            this.cancel_btn.setBackground(gradientDrawable);
        }
        String paramsInfo7 = AddPermissionToolUtils.getParamsInfo(this.context, "ANDPERMISSION_AGREE_TEXT_COLOR");
        if (paramsInfo7 != null && !paramsInfo7.isEmpty()) {
            this.ok_btn.setTextColor(Color.parseColor(paramsInfo7));
        }
        String paramsInfo8 = AddPermissionToolUtils.getParamsInfo(this.context, "ANDPERMISSION_AGREE_BACKGROUND_COLOR");
        if (paramsInfo8 == null || paramsInfo8.isEmpty()) {
            return;
        }
        GradientDrawable gradientDrawable2 = (GradientDrawable) this.ok_btn.getBackground();
        gradientDrawable2.setColor(Color.parseColor(paramsInfo8));
        this.ok_btn.setBackground(gradientDrawable2);
    }

    @Override
    public void onClick(View view) {
        int id = view.getId();
        if (id == ResourceManger.getId(this.context, "R.id.privacypolicy_ok")) {
            try {
                Class<?> cls = Class.forName("com.bianfeng.seppellita.SepperllitaInterface");
                cls.getMethod("postYmnId", Context.class).invoke(cls.newInstance(), this.context);
            } catch (Exception e) {
                e.printStackTrace();
            }
            dismiss();
            SharedPreferencesUtils.getInstance(this.context).setAgreePolicy(true);
            AddPermissionApi.getPolicyCallBack().onAllow();
            return;
        }
        if (id == ResourceManger.getId(this.context, "R.id.privacypolicy_refuse")) {
            dismiss();
            System.exit(0);
        }
    }

    public static void openBrowser(Context context, String str) {
        Intent intent = new Intent();
        intent.setAction("android.intent.action.VIEW");
        intent.setData(Uri.parse(str));
        if (intent.resolveActivity(context.getPackageManager()) != null) {
            intent.resolveActivity(context.getPackageManager());
            context.startActivity(Intent.createChooser(intent, "请选择浏览器"));
        } else {
            Toast.makeText(context, "Toast.makeText(context,链接错误或无浏览器)", 1);
        }
    }
}
