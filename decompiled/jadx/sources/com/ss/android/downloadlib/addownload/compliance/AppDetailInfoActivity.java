package com.ss.android.downloadlib.addownload.compliance;

import android.app.Activity;
import android.content.Intent;
import android.os.Bundle;
import android.support.v7.widget.LinearLayoutManager;
import android.support.v7.widget.RecyclerView;
import android.util.Pair;
import android.view.View;
import android.widget.ImageView;
import android.widget.LinearLayout;
import android.widget.TextView;
import com.bytedance.sdk.openadsdk.R;
import com.ss.android.downloadlib.constants.EventConstants;
import java.util.List;

/* JADX INFO: loaded from: classes3.dex */
public class AppDetailInfoActivity extends Activity {
    private long c;
    private TextView df;
    private List<Pair<String, String>> fw;
    private long pp;
    private RecyclerView pt;
    private LinearLayout q;
    private ImageView rg;

    @Override // android.app.Activity
    protected void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        setContentView(R.layout.ttdownloader_activity_app_detail_info);
        if (rg()) {
            df();
        } else {
            com.ss.android.socialbase.appdownloader.q.rg((Activity) this);
        }
    }

    public static void rg(Activity activity, long j) {
        Intent intent = new Intent(activity, (Class<?>) AppDetailInfoActivity.class);
        intent.putExtra("app_info_id", j);
        activity.startActivity(intent);
    }

    private boolean rg() {
        this.pp = getIntent().getLongExtra("app_info_id", 0L);
        com.ss.android.downloadlib.addownload.model.df dfVarRg = q.rg().rg(this.pp);
        if (dfVarRg == null) {
            return false;
        }
        this.c = dfVarRg.df;
        this.fw = dfVarRg.ux;
        return true;
    }

    private void df() {
        this.rg = (ImageView) findViewById(R.id.iv_detail_back);
        this.df = (TextView) findViewById(R.id.tv_empty);
        this.pt = (RecyclerView) findViewById(R.id.permission_list);
        this.q = (LinearLayout) findViewById(R.id.ll_download);
        if (this.fw.isEmpty()) {
            this.pt.setVisibility(8);
            this.df.setVisibility(0);
        } else {
            LinearLayoutManager linearLayoutManager = new LinearLayoutManager(this);
            linearLayoutManager.setOrientation(1);
            this.pt.setLayoutManager(linearLayoutManager);
            this.pt.setAdapter(new rg());
        }
        this.rg.setOnClickListener(new View.OnClickListener() { // from class: com.ss.android.downloadlib.addownload.compliance.AppDetailInfoActivity.1
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                pp.rg(EventConstants.Refer.LP_APP_DETAIL_CLICK_CLOSE, AppDetailInfoActivity.this.c);
                AppDetailInfoActivity.this.finish();
            }
        });
        this.q.setOnClickListener(new View.OnClickListener() { // from class: com.ss.android.downloadlib.addownload.compliance.AppDetailInfoActivity.2
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                pp.rg(EventConstants.Refer.LP_APP_DETAIL_CLICK_DOWNLOAD, AppDetailInfoActivity.this.c);
                df.rg().df(AppDetailInfoActivity.this.c);
                com.ss.android.socialbase.appdownloader.q.rg((Activity) AppDetailInfoActivity.this);
                com.ss.android.socialbase.appdownloader.q.rg(df.rg().df());
            }
        });
    }

    @Override // android.app.Activity
    public void onBackPressed() {
        pp.rg(EventConstants.Refer.LP_APP_DETAIL_CLICK_CLOSE, this.c);
        super.onBackPressed();
    }

    private class rg extends RecyclerView.Adapter<Object> {
        private rg() {
        }
    }
}
