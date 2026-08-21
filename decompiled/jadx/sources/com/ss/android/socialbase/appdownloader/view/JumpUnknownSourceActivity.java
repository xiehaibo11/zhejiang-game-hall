package com.ss.android.socialbase.appdownloader.view;

import android.app.Activity;
import android.content.Context;
import android.content.DialogInterface;
import android.content.Intent;
import android.os.Bundle;
import android.text.TextUtils;
import android.view.Window;
import android.view.WindowManager;
import com.ss.android.socialbase.appdownloader.df;
import com.ss.android.socialbase.appdownloader.pt;
import com.ss.android.socialbase.appdownloader.q;
import com.ss.android.socialbase.appdownloader.q.b;
import com.ss.android.socialbase.appdownloader.q.hq;
import com.ss.android.socialbase.appdownloader.rz;
import com.ss.android.socialbase.appdownloader.ux;
import com.ss.android.socialbase.downloader.setting.DownloadSettingKeys;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes3.dex */
public class JumpUnknownSourceActivity extends Activity {
    private Intent df;
    private JSONObject pp;
    private int pt;
    private Intent q;
    private b rg;

    @Override // android.app.Activity
    protected void onNewIntent(Intent intent) {
        super.onNewIntent(intent);
        setIntent(intent);
        ux.rg().rg(this);
    }

    @Override // android.app.Activity
    protected void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        rg();
        ux.rg().rg(this);
    }

    private void rg() {
        Window window = getWindow();
        WindowManager.LayoutParams attributes = window.getAttributes();
        attributes.alpha = 0.0f;
        window.setAttributes(attributes);
    }

    @Override // android.app.Activity
    protected void onResume() {
        super.onResume();
        Intent intent = getIntent();
        this.df = intent;
        if (intent != null) {
            this.q = (Intent) intent.getParcelableExtra("intent");
            this.pt = intent.getIntExtra("id", -1);
            try {
                this.pp = new JSONObject(intent.getStringExtra("config"));
            } catch (Exception e) {
                e.printStackTrace();
            }
        }
        if (this.pp == null) {
            q.rg((Activity) this);
            return;
        }
        df();
        b bVar = this.rg;
        if (bVar != null && !bVar.df()) {
            this.rg.rg();
        } else if (this.rg == null) {
            finish();
        }
    }

    private void df() {
        if (this.rg != null || this.df == null) {
            return;
        }
        try {
            com.ss.android.socialbase.appdownloader.q.q qVarRg = pt.bm().rg();
            hq hqVarRg = qVarRg != null ? qVarRg.rg(this) : null;
            if (hqVarRg == null) {
                hqVarRg = new com.ss.android.socialbase.appdownloader.pt.rg(this);
            }
            int iRg = rz.rg(this, "tt_appdownloader_tip");
            int iRg2 = rz.rg(this, "tt_appdownloader_label_ok");
            int iRg3 = rz.rg(this, "tt_appdownloader_label_cancel");
            String strOptString = this.pp.optString(DownloadSettingKeys.AhPlans.KEY_JUMP_UNKNOWN_SOURCE_TIPS);
            if (TextUtils.isEmpty(strOptString)) {
                strOptString = getString(rz.rg(this, "tt_appdownloader_jump_unknown_source_tips"));
            }
            hqVarRg.rg(iRg).rg(strOptString).rg(iRg2, new DialogInterface.OnClickListener() { // from class: com.ss.android.socialbase.appdownloader.view.JumpUnknownSourceActivity.3
                @Override // android.content.DialogInterface.OnClickListener
                public void onClick(DialogInterface dialogInterface, int i) {
                    JumpUnknownSourceActivity jumpUnknownSourceActivity = JumpUnknownSourceActivity.this;
                    if (df.rg(jumpUnknownSourceActivity, jumpUnknownSourceActivity.q, JumpUnknownSourceActivity.this.pt, JumpUnknownSourceActivity.this.pp)) {
                        df.q(JumpUnknownSourceActivity.this.pt, JumpUnknownSourceActivity.this.pp);
                    } else {
                        JumpUnknownSourceActivity jumpUnknownSourceActivity2 = JumpUnknownSourceActivity.this;
                        df.rg((Context) jumpUnknownSourceActivity2, jumpUnknownSourceActivity2.q, true);
                    }
                    df.rg(JumpUnknownSourceActivity.this.pt, JumpUnknownSourceActivity.this.pp);
                    JumpUnknownSourceActivity.this.finish();
                }
            }).df(iRg3, new DialogInterface.OnClickListener() { // from class: com.ss.android.socialbase.appdownloader.view.JumpUnknownSourceActivity.2
                @Override // android.content.DialogInterface.OnClickListener
                public void onClick(DialogInterface dialogInterface, int i) {
                    if (JumpUnknownSourceActivity.this.q != null) {
                        JumpUnknownSourceActivity jumpUnknownSourceActivity = JumpUnknownSourceActivity.this;
                        df.rg((Context) jumpUnknownSourceActivity, jumpUnknownSourceActivity.q, true);
                    }
                    df.df(JumpUnknownSourceActivity.this.pt, JumpUnknownSourceActivity.this.pp);
                    JumpUnknownSourceActivity.this.finish();
                }
            }).rg(new DialogInterface.OnCancelListener() { // from class: com.ss.android.socialbase.appdownloader.view.JumpUnknownSourceActivity.1
                @Override // android.content.DialogInterface.OnCancelListener
                public void onCancel(DialogInterface dialogInterface) {
                    if (JumpUnknownSourceActivity.this.q != null) {
                        JumpUnknownSourceActivity jumpUnknownSourceActivity = JumpUnknownSourceActivity.this;
                        df.rg((Context) jumpUnknownSourceActivity, jumpUnknownSourceActivity.q, true);
                    }
                    df.df(JumpUnknownSourceActivity.this.pt, JumpUnknownSourceActivity.this.pp);
                    JumpUnknownSourceActivity.this.finish();
                }
            }).rg(false);
            this.rg = hqVarRg.rg();
        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}
