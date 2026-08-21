package com.ss.android.downloadlib.addownload.compliance;

import android.app.Activity;
import android.app.Dialog;
import android.content.DialogInterface;
import android.graphics.Bitmap;
import android.graphics.Color;
import android.os.Bundle;
import android.view.View;
import android.view.Window;
import android.widget.LinearLayout;
import android.widget.TextView;
import com.bytedance.sdk.openadsdk.R;
import com.ss.android.downloadlib.addownload.bm;
import com.ss.android.downloadlib.addownload.compliance.pt;
import com.ss.android.downloadlib.constants.EventConstants;
import com.ss.android.downloadlib.guide.install.ClipImageView;
import com.ss.android.downloadlib.utils.b;

public class rg extends Dialog {
    private long b;
    private final long bm;
    private TextView c;
    private TextView df;
    private ClipImageView fw;
    private final com.ss.android.downloadlib.addownload.model.df hq;
    private TextView pp;
    private TextView pt;
    private TextView q;
    private TextView rg;
    private Activity rz;
    private LinearLayout ux;

    public rg(Activity activity, long j) {
        super(activity);
        this.rz = activity;
        this.bm = j;
        this.hq = (com.ss.android.downloadlib.addownload.model.df) q.rg().get(Long.valueOf(j));
    }

    @Override
    protected void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        if (this.hq == null) {
            dismiss();
            return;
        }
        requestWindowFeature(1);
        setContentView(R.layout.ttdownloader_dialog_appinfo);
        Window window = getWindow();
        if (window != null) {
            window.setBackgroundDrawableResource(R.drawable.ttdownloader_bg_transparent);
        }
        setCancelable(true);
        setCanceledOnTouchOutside(true);
        this.b = this.hq.df;
        rg();
        pp.df(EventConstants.Label.LP_APP_DIALOG_SHOW, this.b);
        setOnCancelListener(new DialogInterface.OnCancelListener() {
            @Override
            public void onCancel(DialogInterface dialogInterface) {
                pp.rg(EventConstants.Refer.LP_APP_DIALOG_CANCEL, rg.this.b);
            }
        });
    }

    private void rg() {
        this.rg = (TextView) findViewById(R.id.tv_app_name);
        this.df = (TextView) findViewById(R.id.tv_app_version);
        this.q = (TextView) findViewById(R.id.tv_app_developer);
        this.pt = (TextView) findViewById(R.id.tv_app_detail);
        this.pp = (TextView) findViewById(R.id.tv_app_privacy);
        this.c = (TextView) findViewById(R.id.tv_give_up);
        this.fw = (ClipImageView) findViewById(R.id.iv_app_icon);
        this.ux = (LinearLayout) findViewById(R.id.ll_download);
        this.rg.setText(b.rg(this.hq.pp, "--"));
        this.df.setText("版本号：" + b.rg(this.hq.c, "--"));
        this.q.setText("开发者：" + b.rg(this.hq.fw, "应用信息正在完善中"));
        this.fw.setRoundRadius(b.rg(bm.getContext(), 8.0f));
        this.fw.setBackgroundColor(Color.parseColor("#EBEBEB"));
        pt.rg().rg(this.bm, new pt.rg() {
            @Override
            public void rg(Bitmap bitmap) {
                if (bitmap != null) {
                    rg.this.fw.setImageBitmap(bitmap);
                } else {
                    pp.rg(8, rg.this.b);
                }
            }
        });
        this.pt.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                df.rg().rg(rg.this.rz);
                AppDetailInfoActivity.rg(rg.this.rz, rg.this.bm);
                pp.rg(EventConstants.Refer.LP_APP_DIALOG_CLICK_DETAIL, rg.this.b);
            }
        });
        this.pp.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                df.rg().rg(rg.this.rz);
                AppPrivacyPolicyActivity.rg(rg.this.rz, rg.this.bm);
                pp.rg(EventConstants.Refer.LP_APP_DIALOG_CLICK_PRIVACY, rg.this.b);
            }
        });
        this.c.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                rg.this.dismiss();
                pp.rg(EventConstants.Refer.LP_APP_DIALOG_CLICK_GIVE_UP, rg.this.b);
            }
        });
        this.ux.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                pp.rg(EventConstants.Refer.LP_APP_DIALOG_CLICK_DOWNLOAD, rg.this.b);
                df.rg().df(rg.this.b);
                rg.this.dismiss();
            }
        });
    }

    @Override
    public void dismiss() {
        super.dismiss();
        com.ss.android.socialbase.appdownloader.q.rg(this.rz);
    }
}
