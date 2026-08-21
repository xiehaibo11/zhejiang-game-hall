package com.mbridge.msdk.out;

import android.app.Activity;
import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.content.IntentFilter;
import android.graphics.Bitmap;
import android.graphics.drawable.Drawable;
import android.os.Bundle;
import android.text.TextUtils;
import android.view.View;
import android.widget.ImageView;
import android.widget.RelativeLayout;
import android.widget.TextView;
import com.mbridge.msdk.foundation.entity.CampaignEx;
import com.mbridge.msdk.foundation.same.c.b;
import com.mbridge.msdk.foundation.same.c.c;
import com.mbridge.msdk.foundation.tools.ae;
import com.mbridge.msdk.widget.MBImageView;
import com.tkay.expressad.foundation.h.i;

public class LoadingActivity extends Activity {
    private Bitmap abitmap;
    private Drawable drawable;
    private String icon_url;
    private ImageView img_icon;
    private OnLoadingDialogCallback mCallback;
    private RelativeLayout rlayout;
    private RelativeLayout rlayout_main;
    private c cipl = new c() {
        @Override
        public void onFailedLoad(String str, String str2) {
        }

        @Override
        public void onSuccessLoad(Bitmap bitmap, String str) {
            if (LoadingActivity.this.img_icon == null || bitmap == null || bitmap.isRecycled() || !((String) LoadingActivity.this.img_icon.getTag()).equals(str)) {
                return;
            }
            LoadingActivity.this.img_icon.setImageBitmap(bitmap);
            LoadingActivity.this.abitmap = bitmap;
        }
    };
    BroadcastReceiver broadcastReceiver = new BroadcastReceiver() {
        @Override
        public void onReceive(Context context, Intent intent) {
            LoadingActivity.this.finish();
        }
    };

    public interface OnLoadingDialogCallback {
        void onCancel(CampaignEx campaignEx);
    }

    @Override
    protected void onResume() {
        super.onResume();
        IntentFilter intentFilter = new IntentFilter();
        intentFilter.addAction("ExitApp");
        BroadcastReceiver broadcastReceiver = this.broadcastReceiver;
        if (broadcastReceiver != null) {
            registerReceiver(broadcastReceiver, intentFilter);
        }
    }

    @Override
    protected void onDestroy() {
        BroadcastReceiver broadcastReceiver = this.broadcastReceiver;
        if (broadcastReceiver != null) {
            unregisterReceiver(broadcastReceiver);
        }
        ImageView imageView = this.img_icon;
        if (imageView != null) {
            imageView.setImageBitmap(null);
        }
        this.img_icon = null;
        this.rlayout_main = null;
        this.cipl = null;
        this.drawable = null;
        RelativeLayout relativeLayout = this.rlayout;
        if (relativeLayout != null) {
            relativeLayout.setBackgroundDrawable(null);
        }
        this.rlayout = null;
        Bitmap bitmap = this.abitmap;
        if (bitmap != null && !bitmap.isRecycled()) {
            this.abitmap = null;
        }
        super.onDestroy();
    }

    @Override
    protected void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        if (getIntent().hasExtra("icon_url")) {
            this.icon_url = getIntent().getStringExtra("icon_url");
        }
        setContentView(initView());
    }

    private View initView() {
        if (this.rlayout_main == null) {
            this.rlayout_main = new RelativeLayout(this);
            this.rlayout = new RelativeLayout(this);
            int iB = ae.b(this, 15.0f);
            this.rlayout.setPadding(iB, iB, iB, iB);
            this.rlayout.setBackgroundResource(getResources().getIdentifier("mbridge_native_bg_loading_camera", i.c, getPackageName()));
            this.rlayout.addView(new TextView(this), new RelativeLayout.LayoutParams(ae.b(this, 140.0f), ae.b(this, 31.5f)));
            MBImageView mBImageView = new MBImageView(this);
            this.img_icon = mBImageView;
            mBImageView.setId(ae.a());
            this.img_icon.setTag(this.icon_url);
            if (!TextUtils.isEmpty(this.icon_url)) {
                b.a(getApplicationContext()).a(this.icon_url, this.cipl);
            }
            int iB2 = ae.b(this, 64.0f);
            RelativeLayout.LayoutParams layoutParams = new RelativeLayout.LayoutParams(iB2, iB2);
            layoutParams.addRule(13, -1);
            this.rlayout.addView(this.img_icon, layoutParams);
            TextView textView = new TextView(this);
            textView.setSingleLine();
            textView.setTextColor(-1);
            textView.setTextSize(16.0f);
            textView.setText("Relax while loading....");
            RelativeLayout.LayoutParams layoutParams2 = new RelativeLayout.LayoutParams(-2, -2);
            layoutParams2.addRule(3, this.img_icon.getId());
            layoutParams2.addRule(14, -1);
            this.rlayout.addView(textView, layoutParams2);
            this.rlayout_main.addView(this.rlayout, new RelativeLayout.LayoutParams(-1, -1));
        }
        return this.rlayout_main;
    }
}
