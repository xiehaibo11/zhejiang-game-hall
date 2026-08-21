package com.ss.android.downloadlib.addownload.rg;

import android.app.Activity;
import android.app.Dialog;
import android.text.TextUtils;
import android.view.KeyEvent;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.TextView;
import com.bytedance.sdk.openadsdk.R;

/* JADX INFO: loaded from: classes3.dex */
public class pt extends Dialog {
    private Activity c;
    private TextView df;
    private String fw;
    private boolean pp;
    private q pt;
    private TextView q;
    private TextView rg;
    private String rz;
    private String ux;

    public pt(Activity activity, String str, String str2, String str3, boolean z, q qVar) {
        super(activity, R.style.ttdownloader_translucent_dialog);
        this.c = activity;
        this.pt = qVar;
        this.fw = str;
        this.ux = str2;
        this.rz = str3;
        setCanceledOnTouchOutside(z);
        pt();
    }

    private void pt() {
        setContentView(LayoutInflater.from(this.c.getApplicationContext()).inflate(rg(), (ViewGroup) null));
        this.rg = (TextView) findViewById(df());
        this.df = (TextView) findViewById(q());
        this.q = (TextView) findViewById(R.id.message_tv);
        if (!TextUtils.isEmpty(this.ux)) {
            this.rg.setText(this.ux);
        }
        if (!TextUtils.isEmpty(this.rz)) {
            this.df.setText(this.rz);
        }
        if (!TextUtils.isEmpty(this.fw)) {
            this.q.setText(this.fw);
        }
        this.rg.setOnClickListener(new View.OnClickListener() { // from class: com.ss.android.downloadlib.addownload.rg.pt.1
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                pt.this.pp();
            }
        });
        this.df.setOnClickListener(new View.OnClickListener() { // from class: com.ss.android.downloadlib.addownload.rg.pt.2
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                pt.this.c();
            }
        });
    }

    public int rg() {
        return R.layout.ttdownloader_dialog_select_operation;
    }

    public int df() {
        return R.id.confirm_tv;
    }

    public int q() {
        return R.id.cancel_tv;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void pp() {
        this.pp = true;
        dismiss();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void c() {
        dismiss();
    }

    @Override // android.app.Dialog, android.content.DialogInterface
    public void dismiss() {
        super.dismiss();
        if (!this.c.isFinishing()) {
            this.c.finish();
        }
        if (this.pp) {
            this.pt.rg();
        } else {
            this.pt.df();
        }
    }

    @Override // android.app.Dialog, android.view.Window.Callback
    public boolean dispatchKeyEvent(KeyEvent keyEvent) {
        if (keyEvent.getKeyCode() == 4) {
            return true;
        }
        return super.dispatchKeyEvent(keyEvent);
    }

    public static class rg {
        private q c;
        private String df;
        private boolean pp;
        private String pt;
        private String q;
        private Activity rg;

        public rg(Activity activity) {
            this.rg = activity;
        }

        public rg rg(String str) {
            this.df = str;
            return this;
        }

        public rg df(String str) {
            this.q = str;
            return this;
        }

        public rg q(String str) {
            this.pt = str;
            return this;
        }

        public rg rg(boolean z) {
            this.pp = z;
            return this;
        }

        public rg rg(q qVar) {
            this.c = qVar;
            return this;
        }

        public pt rg() {
            return new pt(this.rg, this.df, this.q, this.pt, this.pp, this.c);
        }
    }
}
