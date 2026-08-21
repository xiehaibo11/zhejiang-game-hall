package com.ss.android.download.api.model;

import android.text.TextUtils;
import com.huawei.hms.push.constant.RemoteMessageConst;
import com.ss.android.download.api.constant.BaseConstants;
import com.ss.android.downloadlib.addownload.bm;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes3.dex */
public class df {
    private final int b;
    private final List<String> bm;
    private final String c;
    private final String df;
    private final boolean f;
    private final long fw;
    private final Object hq;
    private final String oh;
    private final long pp;
    private final boolean pt;
    private final String q;
    private String rg;
    private final JSONObject rz;
    private final JSONObject un;
    private final JSONObject ux;
    private final String v;

    df(rg rgVar) {
        this.rg = rgVar.rg;
        this.df = rgVar.df;
        this.q = rgVar.q;
        this.pt = rgVar.pt;
        this.pp = rgVar.pp;
        this.c = rgVar.c;
        this.fw = rgVar.fw;
        this.ux = rgVar.ux;
        this.rz = rgVar.rz;
        this.bm = rgVar.b;
        this.b = rgVar.hq;
        this.hq = rgVar.oh;
        this.f = rgVar.v;
        this.v = rgVar.un;
        this.un = rgVar.z;
        this.oh = rgVar.f;
    }

    public static class rg {
        private List<String> b;
        private Map<String, Object> bm;
        private String c;
        private String df;
        private String f;
        private long fw;
        private int hq;
        private Object oh;
        private long pp;
        private String q;
        private String rg;
        private JSONObject rz;
        private String un;
        private JSONObject ux;
        private JSONObject z;
        private boolean pt = false;
        private boolean v = false;

        public rg rg(boolean z) {
            this.v = z;
            return this;
        }

        public rg rg(String str) {
            this.df = str;
            return this;
        }

        public rg df(String str) {
            this.q = str;
            return this;
        }

        public rg rg(long j) {
            this.pp = j;
            return this;
        }

        public rg df(long j) {
            this.fw = j;
            return this;
        }

        public rg q(String str) {
            this.c = str;
            return this;
        }

        public rg df(boolean z) {
            this.pt = z;
            return this;
        }

        public rg rg(JSONObject jSONObject) {
            this.ux = jSONObject;
            return this;
        }

        public rg df(JSONObject jSONObject) {
            this.rz = jSONObject;
            return this;
        }

        public rg rg(List<String> list) {
            this.b = list;
            return this;
        }

        public rg rg(int i) {
            this.hq = i;
            return this;
        }

        public rg rg(Object obj) {
            this.oh = obj;
            return this;
        }

        public rg pt(String str) {
            this.f = str;
            return this;
        }

        public df rg() {
            if (TextUtils.isEmpty(this.rg)) {
                this.rg = BaseConstants.CATEGORY_UMENG;
            }
            JSONObject jSONObject = new JSONObject();
            if (this.ux == null) {
                this.ux = new JSONObject();
            }
            try {
                if (this.bm != null && !this.bm.isEmpty()) {
                    for (Map.Entry<String, Object> entry : this.bm.entrySet()) {
                        if (!this.ux.has(entry.getKey())) {
                            this.ux.putOpt(entry.getKey(), entry.getValue());
                        }
                    }
                }
                if (this.v) {
                    this.un = this.q;
                    JSONObject jSONObject2 = new JSONObject();
                    this.z = jSONObject2;
                    if (this.pt) {
                        jSONObject2.put(BaseConstants.EVENT_LABEL_AD_EXTRA_DATA, this.ux.toString());
                    } else {
                        Iterator<String> itKeys = this.ux.keys();
                        while (itKeys.hasNext()) {
                            String next = itKeys.next();
                            this.z.put(next, this.ux.get(next));
                        }
                    }
                    this.z.put("category", this.rg);
                    this.z.put(RemoteMessageConst.Notification.TAG, this.df);
                    this.z.put("value", this.pp);
                    this.z.put("ext_value", this.fw);
                    if (!TextUtils.isEmpty(this.f)) {
                        this.z.put("refer", this.f);
                    }
                    if (this.rz != null) {
                        this.z = com.ss.android.download.api.q.df.rg(this.rz, this.z);
                    }
                    if (this.pt) {
                        if (!this.z.has(BaseConstants.EVENT_LABEL_LOG_EXTRA) && !TextUtils.isEmpty(this.c)) {
                            this.z.put(BaseConstants.EVENT_LABEL_LOG_EXTRA, this.c);
                        }
                        this.z.put(BaseConstants.EVENT_LABEL_IS_AD_EVENT, "1");
                    }
                }
                if (this.pt) {
                    jSONObject.put(BaseConstants.EVENT_LABEL_AD_EXTRA_DATA, this.ux.toString());
                    if (!jSONObject.has(BaseConstants.EVENT_LABEL_LOG_EXTRA) && !TextUtils.isEmpty(this.c)) {
                        jSONObject.put(BaseConstants.EVENT_LABEL_LOG_EXTRA, this.c);
                    }
                    jSONObject.put(BaseConstants.EVENT_LABEL_IS_AD_EVENT, "1");
                } else {
                    jSONObject.put("extra", this.ux);
                }
                if (!TextUtils.isEmpty(this.f)) {
                    jSONObject.putOpt("refer", this.f);
                }
                if (this.rz != null) {
                    jSONObject = com.ss.android.download.api.q.df.rg(this.rz, jSONObject);
                }
                this.ux = jSONObject;
            } catch (Exception e) {
                bm.qx().rg(e, "DownloadEventModel build");
            }
            return new df(this);
        }
    }

    public String rg() {
        return this.rg;
    }

    public String df() {
        return this.df;
    }

    public String q() {
        return this.q;
    }

    public boolean pt() {
        return this.pt;
    }

    public long pp() {
        return this.pp;
    }

    public String c() {
        return this.c;
    }

    public long fw() {
        return this.fw;
    }

    public JSONObject ux() {
        return this.ux;
    }

    public JSONObject rz() {
        return this.rz;
    }

    public List<String> bm() {
        return this.bm;
    }

    public int b() {
        return this.b;
    }

    public Object hq() {
        return this.hq;
    }

    public boolean oh() {
        return this.f;
    }

    public String f() {
        return this.v;
    }

    public JSONObject v() {
        return this.un;
    }

    public String toString() {
        StringBuilder sb = new StringBuilder();
        sb.append("category: ");
        sb.append(this.rg);
        sb.append("\ttag: ");
        sb.append(this.df);
        sb.append("\tlabel: ");
        sb.append(this.q);
        sb.append("\nisAd: ");
        sb.append(this.pt);
        sb.append("\tadId: ");
        sb.append(this.pp);
        sb.append("\tlogExtra: ");
        sb.append(this.c);
        sb.append("\textValue: ");
        sb.append(this.fw);
        sb.append("\nextJson: ");
        sb.append(this.ux);
        sb.append("\nparamsJson: ");
        sb.append(this.rz);
        sb.append("\nclickTrackUrl: ");
        List<String> list = this.bm;
        sb.append(list != null ? list.toString() : "");
        sb.append("\teventSource: ");
        sb.append(this.b);
        sb.append("\textraObject: ");
        Object obj = this.hq;
        sb.append(obj != null ? obj.toString() : "");
        sb.append("\nisV3: ");
        sb.append(this.f);
        sb.append("\tV3EventName: ");
        sb.append(this.v);
        sb.append("\tV3EventParams: ");
        JSONObject jSONObject = this.un;
        sb.append(jSONObject != null ? jSONObject.toString() : "");
        return sb.toString();
    }
}
