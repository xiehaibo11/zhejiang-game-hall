package com.kwad.components.core.f;

import android.content.Context;
import android.text.TextUtils;
import com.kwad.components.offline.api.IOfflineCompo;
import com.kwad.sdk.components.d;
import com.kwad.sdk.components.f;
import com.kwad.sdk.core.e.c;
import com.kwad.sdk.utils.at;
import com.kwad.sdk.utils.bc;
import com.kwad.sdk.utils.be;
import com.kwad.sdk.utils.y;
import com.yxcorp.kuaishou.addfp.KWEGIDDFP;
import com.yxcorp.kuaishou.addfp.ResponseDfpCallback;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public final class a extends d implements f {
    private String Kj;
    private long Kk;
    private String Kl;
    private Context mContext;

    private void ab(Context context) {
        c.i("EncryptComponentsImpl", "initGId");
        try {
            if (at.IY()) {
                JSONObject jSONObject = new JSONObject();
                jSONObject.put("64", 0);
                KWEGIDDFP.handlePolicy(jSONObject);
            }
        } catch (Throwable th) {
            c.printStackTrace(th);
        }
        KWEGIDDFP.instance().getEGidByCallback(context, false, new ResponseDfpCallback() { // from class: com.kwad.components.core.f.a.1
            @Override // com.yxcorp.kuaishou.addfp.ResponseDfpCallback
            public final void onFailed(int i, String str) {
                c.e("EncryptComponentsImpl", "initGId onFailed errorCode:" + i + "errorMessage :" + str);
            }

            @Override // com.yxcorp.kuaishou.addfp.ResponseDfpCallback
            public final void onSuccess(String str, String str2) {
                c.d("initGId onSuccess", "deviceInfo：" + str2);
                a.this.nP();
                a.this.ao(str2);
            }
        });
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void ao(String str) {
        if (this.mContext == null || bc.isNullString(str) || bc.isEquals(nU(), str)) {
            return;
        }
        this.Kl = str;
        y.ac(this.mContext, str);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void nP() {
        String strCb = y.cb(this.mContext);
        String strJJ = be.JJ();
        if (TextUtils.isEmpty(strCb)) {
            y.U(this.mContext, strJJ);
            return;
        }
        if (TextUtils.equals(strCb, strJJ)) {
            return;
        }
        this.Kj = "";
        this.Kk = 0L;
        this.Kl = "";
        y.T(this.mContext, "");
        y.d(this.mContext, this.Kk);
        y.ac(this.mContext, this.Kl);
        y.U(this.mContext, strJJ);
    }

    private String nS() {
        if (TextUtils.isEmpty(this.Kj)) {
            this.Kj = y.bY(this.mContext);
        }
        return this.Kj;
    }

    private long nT() {
        if (this.Kk == 0) {
            this.Kk = y.bZ(this.mContext);
        }
        return this.Kk;
    }

    private String nU() {
        if (TextUtils.isEmpty(this.Kl)) {
            this.Kl = y.ce(this.mContext);
        }
        return this.Kl;
    }

    @Override // com.kwad.sdk.components.f
    public final void ap(String str) {
        if (this.mContext == null || bc.isNullString(str) || bc.isEquals(nS(), str)) {
            return;
        }
        try {
            this.Kj = str;
            y.T(this.mContext, str);
            KWEGIDDFP.instance().setEgid(this.mContext, str);
        } catch (Throwable th) {
            c.e("EncryptComponentsImpl", "setEGid error : " + th);
        }
    }

    @Override // com.kwad.sdk.components.a
    public final Class getComponentsType() {
        return f.class;
    }

    @Override // com.kwad.sdk.components.a
    public final void init(Context context) {
        try {
            this.mContext = context;
            ab(context);
        } catch (Throwable th) {
            c.e("EncryptComponentsImpl", "initGId error : " + th);
        }
    }

    @Override // com.kwad.sdk.components.f
    public final String nQ() {
        return (com.kwad.sdk.core.config.d.zs() || System.currentTimeMillis() >= nT() || TextUtils.isEmpty(nS())) ? nU() : "";
    }

    @Override // com.kwad.sdk.components.f
    public final com.kwad.sdk.core.a.f nR() {
        return new com.kwad.sdk.core.a.a();
    }

    @Override // com.kwad.sdk.components.d, com.kwad.sdk.components.a
    public final int priority() {
        return IOfflineCompo.Priority.HIGHEST;
    }

    @Override // com.kwad.sdk.components.f
    public final void t(long j) {
        if (this.mContext == null || j <= 0 || j == nT()) {
            return;
        }
        this.Kk = j;
        y.d(this.mContext, j);
    }
}
