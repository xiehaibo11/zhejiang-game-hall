package com.ss.android.downloadad.api.rg;

import com.ss.android.download.api.download.DownloadController;
import com.ss.android.download.api.download.DownloadEventConfig;
import com.ss.android.download.api.download.DownloadModel;
import com.ss.android.download.api.model.DeepLink;
import com.ss.android.downloadad.api.download.AdDownloadController;
import com.ss.android.downloadad.api.download.AdDownloadEventConfig;
import com.ss.android.downloadad.api.download.AdDownloadModel;
import com.ss.android.downloadlib.addownload.bm;
import java.util.List;
import java.util.concurrent.atomic.AtomicBoolean;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes3.dex */
public class df implements rg {
    private String ax;
    private String b;
    private String bj;
    private long bl;
    private String bm;
    private long c;
    private String cd;
    private long d;
    protected boolean df;
    private int dj;
    private boolean ev;
    private long ey;
    private int f;
    private transient boolean fg;
    private String fl;
    private int fo;
    private String fw;
    private boolean g;
    private long gk;
    private int go;
    private boolean h;
    private String hq;
    private long i;
    private boolean j;
    private String k;
    private boolean ka;
    private int l;
    private long lc;
    private boolean lu;
    private int m;
    private int mc;
    private boolean ms;
    private boolean n;
    private int oh;
    private boolean oi;
    private boolean om;
    private long ou;
    private boolean oy;
    private int p;
    private long pp;
    public final AtomicBoolean pt;
    public final AtomicBoolean q;
    private String qx;
    private String r;
    private boolean re;
    protected boolean rg;
    private String rz;
    private boolean s;
    private boolean su;
    private boolean t;
    private int un;
    private int ux;
    private int v;
    private boolean vd;
    private boolean xv;
    private JSONObject y;
    private boolean yw;
    private String z;

    @Override // com.ss.android.downloadad.api.rg.rg
    public JSONObject b() {
        return null;
    }

    @Override // com.ss.android.downloadad.api.rg.rg
    public List<String> f() {
        return null;
    }

    @Override // com.ss.android.downloadad.api.rg.rg
    public int n() {
        return -1;
    }

    @Override // com.ss.android.downloadad.api.rg.rg
    public JSONObject r() {
        return null;
    }

    @Override // com.ss.android.downloadad.api.rg.rg
    public JSONObject un() {
        return null;
    }

    @Override // com.ss.android.downloadad.api.rg.rg
    public Object v() {
        return null;
    }

    private df() {
        this.ux = 1;
        this.n = true;
        this.re = false;
        this.l = 0;
        this.p = 0;
        this.lu = false;
        this.g = false;
        this.oy = true;
        this.ev = true;
        this.rg = true;
        this.df = true;
        this.q = new AtomicBoolean(false);
        this.pt = new AtomicBoolean(false);
        this.mc = 1;
        this.s = true;
        this.ey = -1L;
    }

    public df(DownloadModel downloadModel, DownloadEventConfig downloadEventConfig, DownloadController downloadController) {
        this(downloadModel, downloadEventConfig, downloadController, 0);
    }

    public df(DownloadModel downloadModel, DownloadEventConfig downloadEventConfig, DownloadController downloadController, int i) {
        this.ux = 1;
        this.n = true;
        this.re = false;
        this.l = 0;
        this.p = 0;
        this.lu = false;
        this.g = false;
        this.oy = true;
        this.ev = true;
        this.rg = true;
        this.df = true;
        this.q = new AtomicBoolean(false);
        this.pt = new AtomicBoolean(false);
        this.mc = 1;
        this.s = true;
        this.ey = -1L;
        this.pp = downloadModel.getId();
        this.c = downloadModel.getExtraValue();
        this.fw = downloadModel.getLogExtra();
        this.rz = downloadModel.getPackageName();
        this.y = downloadModel.getExtra();
        this.n = downloadModel.isAd();
        this.un = downloadModel.getVersionCode();
        this.z = downloadModel.getVersionName();
        this.bm = downloadModel.getDownloadUrl();
        if (downloadModel.getDeepLink() != null) {
            this.b = downloadModel.getDeepLink().getOpenUrl();
            this.hq = downloadModel.getDeepLink().getWebUrl();
        }
        this.oh = downloadModel.getModelType();
        this.r = downloadModel.getName();
        this.qx = downloadModel.getAppIcon();
        this.bj = downloadModel.getMimeType();
        this.cd = downloadEventConfig.getClickButtonTag();
        this.ax = downloadEventConfig.getRefer();
        this.ms = downloadEventConfig.isEnableV3Event();
        this.re = downloadController.isEnableBackDialog();
        this.f = downloadController.getLinkMode();
        this.v = downloadController.getDownloadMode();
        this.s = downloadController.enableShowComplianceDialog();
        this.su = downloadController.isAutoDownloadOnCardShow();
        this.oy = downloadController.enableNewActivity();
        this.rg = downloadController.enableAH();
        this.df = downloadController.enableAM();
        this.fo = i;
        long jCurrentTimeMillis = System.currentTimeMillis();
        this.ou = jCurrentTimeMillis;
        this.i = jCurrentTimeMillis;
        this.g = downloadModel.shouldDownloadWithPatchApply();
    }

    public int re() {
        return this.l;
    }

    public void rg(int i) {
        this.l = i;
    }

    public synchronized void l() {
        this.l++;
    }

    public int p() {
        return this.p;
    }

    public void df(int i) {
        this.p = i;
    }

    public synchronized void i() {
        this.p++;
    }

    public long lc() {
        long j = this.i;
        return j == 0 ? this.ou : j;
    }

    public void rg(long j) {
        this.i = j;
    }

    public long d() {
        return this.lc;
    }

    public void df(long j) {
        this.lc = j;
    }

    public void q(long j) {
        this.d = j;
    }

    public int dj() {
        return this.dj;
    }

    public void q(int i) {
        this.dj = i;
    }

    public int go() {
        return this.go;
    }

    public void pt(int i) {
        this.go = i;
    }

    public String k() {
        return this.k;
    }

    public void rg(String str) {
        this.k = str;
    }

    @Override // com.ss.android.downloadad.api.rg.rg
    public long df() {
        return this.pp;
    }

    public void pt(long j) {
        this.pp = j;
    }

    @Override // com.ss.android.downloadad.api.rg.rg
    public long hq() {
        return this.c;
    }

    public void pp(long j) {
        this.c = j;
    }

    public int lu() {
        return this.ux;
    }

    public void pp(int i) {
        this.ux = i;
    }

    @Override // com.ss.android.downloadad.api.rg.rg
    public String pp() {
        return this.rz;
    }

    public void df(String str) {
        this.rz = str;
    }

    public long bj() {
        return this.ou;
    }

    public void c(long j) {
        if (j > 0) {
            this.ou = j;
        }
    }

    @Override // com.ss.android.downloadad.api.rg.rg
    public String pt() {
        return this.fw;
    }

    public void q(String str) {
        this.fw = str;
    }

    @Override // com.ss.android.downloadad.api.rg.rg
    public boolean q() {
        return this.n;
    }

    public void rg(boolean z) {
        this.n = z;
    }

    @Override // com.ss.android.downloadad.api.rg.rg
    public JSONObject fw() {
        return this.y;
    }

    public void rg(JSONObject jSONObject) {
        this.y = jSONObject;
    }

    public void c(int i) {
        this.un = i;
    }

    public void pt(String str) {
        this.z = str;
    }

    public int g() {
        return this.un;
    }

    public String oy() {
        return this.z;
    }

    public void fw(int i) {
        this.fo = i;
    }

    @Override // com.ss.android.downloadad.api.rg.rg
    public int qx() {
        return this.fo;
    }

    public void df(boolean z) {
        this.ms = z;
    }

    @Override // com.ss.android.downloadad.api.rg.rg
    public boolean oh() {
        return this.ms;
    }

    public void ux(int i) {
        this.m = i;
    }

    public int ev() {
        return this.m;
    }

    public void rz(int i) {
        this.mc = i;
    }

    public void pp(String str) {
        this.hq = str;
    }

    @Override // com.ss.android.downloadad.api.rg.rg
    public int ux() {
        return this.mc;
    }

    public void q(boolean z) {
        this.re = z;
    }

    public boolean cd() {
        return this.re;
    }

    public void c(String str) {
        this.cd = str;
    }

    @Override // com.ss.android.downloadad.api.rg.rg
    public String bm() {
        return this.cd;
    }

    public void fw(String str) {
        this.ax = str;
    }

    @Override // com.ss.android.downloadad.api.rg.rg
    public String rz() {
        return this.ax;
    }

    public void ux(String str) {
        this.bm = str;
    }

    @Override // com.ss.android.downloadad.api.rg.rg
    public String rg() {
        return this.bm;
    }

    public void rz(String str) {
        this.b = str;
    }

    @Override // com.ss.android.downloadad.api.rg.rg
    public String c() {
        return this.b;
    }

    public void fw(long j) {
        this.ey = j;
    }

    public long ax() {
        return this.ey;
    }

    public void bm(String str) {
        this.r = str;
    }

    public String ms() {
        return this.r;
    }

    public void b(String str) {
        this.qx = str;
    }

    public void bm(int i) {
        this.f = i;
    }

    public int om() {
        return this.f;
    }

    public void b(int i) {
        this.v = i;
    }

    public void hq(int i) {
        this.oh = i;
    }

    public void pt(boolean z) {
        this.h = z;
    }

    public String m() {
        return this.fl;
    }

    public void hq(String str) {
        this.fl = str;
    }

    public boolean mc() {
        return this.j;
    }

    public void pp(boolean z) {
        this.j = z;
    }

    public boolean bl() {
        return this.om;
    }

    public void c(boolean z) {
        this.om = z;
    }

    public boolean gk() {
        return this.ka;
    }

    public void fw(boolean z) {
        this.ka = z;
    }

    public long s() {
        return this.bl;
    }

    public void ux(long j) {
        this.bl = j;
    }

    public long su() {
        return this.gk;
    }

    public void rz(long j) {
        this.gk = j;
    }

    public boolean fl() {
        return this.lu;
    }

    public void ux(boolean z) {
        this.lu = z;
    }

    public String h() {
        return this.bj;
    }

    public void oh(String str) {
        this.bj = str;
    }

    public boolean j() {
        return this.g;
    }

    public void rz(boolean z) {
        this.g = z;
    }

    public boolean ka() {
        return this.fg;
    }

    public void bm(boolean z) {
        this.fg = z;
    }

    public boolean ey() {
        return this.xv;
    }

    public void b(boolean z) {
        this.xv = z;
    }

    public boolean fg() {
        return this.vd;
    }

    public void hq(boolean z) {
        this.vd = z;
    }

    public boolean xv() {
        return this.t;
    }

    public void oh(boolean z) {
        this.t = z;
    }

    public boolean t() {
        return this.yw;
    }

    public void f(boolean z) {
        this.yw = z;
    }

    public boolean vd() {
        return this.oi;
    }

    public void v(boolean z) {
        this.oi = z;
    }

    public void un(boolean z) {
        this.s = z;
    }

    public void z(boolean z) {
        this.su = z;
    }

    @Override // com.ss.android.downloadad.api.rg.rg
    public boolean z() {
        return this.oy;
    }

    public void r(boolean z) {
        this.oy = z;
    }

    public void qx(boolean z) {
        this.ev = z;
    }

    public void n(boolean z) {
        this.rg = z;
    }

    public void ou(boolean z) {
        this.df = z;
    }

    public JSONObject yw() {
        JSONObject jSONObject = new JSONObject();
        try {
            jSONObject.put("mId", this.pp);
            jSONObject.put("mExtValue", this.c);
            jSONObject.put("mLogExtra", this.fw);
            jSONObject.put("mDownloadStatus", this.ux);
            jSONObject.put("mPackageName", this.rz);
            jSONObject.put("mIsAd", this.n);
            jSONObject.put("mTimeStamp", this.ou);
            jSONObject.put("mExtras", this.y);
            jSONObject.put("mVersionCode", this.un);
            jSONObject.put("mVersionName", this.z);
            jSONObject.put("mDownloadId", this.fo);
            jSONObject.put("mIsV3Event", this.ms);
            jSONObject.put("mScene", this.m);
            jSONObject.put("mEventTag", this.cd);
            jSONObject.put("mEventRefer", this.ax);
            jSONObject.put("mDownloadUrl", this.bm);
            jSONObject.put("mEnableBackDialog", this.re);
            jSONObject.put("hasSendInstallFinish", this.q.get());
            jSONObject.put("hasSendDownloadFailedFinally", this.pt.get());
            jSONObject.put("mLastFailedErrCode", this.go);
            jSONObject.put("mLastFailedErrMsg", this.k);
            jSONObject.put("mOpenUrl", this.b);
            jSONObject.put("mLinkMode", this.f);
            jSONObject.put("mDownloadMode", this.v);
            jSONObject.put("mModelType", this.oh);
            jSONObject.put("mAppName", this.r);
            jSONObject.put("mAppIcon", this.qx);
            jSONObject.put("mDownloadFailedTimes", this.l);
            jSONObject.put("mRecentDownloadResumeTime", this.i == 0 ? this.ou : this.i);
            jSONObject.put("mClickPauseTimes", this.p);
            jSONObject.put("mJumpInstallTime", this.lc);
            jSONObject.put("mCancelInstallTime", this.d);
            jSONObject.put("mLastFailedResumeCount", this.dj);
            jSONObject.put("mIsUpdateDownload", this.lu);
            jSONObject.put("mOriginMimeType", this.bj);
            jSONObject.put("mIsPatchApplyHandled", this.g);
            jSONObject.put("downloadFinishReason", this.fl);
            jSONObject.put("clickDownloadTime", this.bl);
            jSONObject.put("clickDownloadSize", this.gk);
            jSONObject.put("installAfterCleanSpace", this.om);
            jSONObject.put("funnelType", this.mc);
            jSONObject.put("webUrl", this.hq);
            jSONObject.put("enableShowComplianceDialog", this.s);
            jSONObject.put("isAutoDownloadOnCardShow", this.su);
            int i = 1;
            jSONObject.put("enable_new_activity", this.oy ? 1 : 0);
            jSONObject.put("enable_pause", this.ev ? 1 : 0);
            jSONObject.put("enable_ah", this.rg ? 1 : 0);
            if (!this.df) {
                i = 0;
            }
            jSONObject.put("enable_am", i);
        } catch (Exception e) {
            bm.qx().rg(e, "NativeDownloadModel toJson");
        }
        return jSONObject;
    }

    public static df df(JSONObject jSONObject) {
        if (jSONObject == null) {
            return null;
        }
        df dfVar = new df();
        try {
            dfVar.pt(com.ss.android.download.api.q.df.rg(jSONObject, "mId"));
            dfVar.pp(com.ss.android.download.api.q.df.rg(jSONObject, "mExtValue"));
            dfVar.q(jSONObject.optString("mLogExtra"));
            dfVar.pp(jSONObject.optInt("mDownloadStatus"));
            dfVar.df(jSONObject.optString("mPackageName"));
            boolean z = true;
            dfVar.rg(jSONObject.optBoolean("mIsAd", true));
            dfVar.c(com.ss.android.download.api.q.df.rg(jSONObject, "mTimeStamp"));
            dfVar.c(jSONObject.optInt("mVersionCode"));
            dfVar.pt(jSONObject.optString("mVersionName"));
            dfVar.fw(jSONObject.optInt("mDownloadId"));
            dfVar.df(jSONObject.optBoolean("mIsV3Event"));
            dfVar.ux(jSONObject.optInt("mScene"));
            dfVar.c(jSONObject.optString("mEventTag"));
            dfVar.fw(jSONObject.optString("mEventRefer"));
            dfVar.ux(jSONObject.optString("mDownloadUrl"));
            dfVar.q(jSONObject.optBoolean("mEnableBackDialog"));
            dfVar.q.set(jSONObject.optBoolean("hasSendInstallFinish"));
            dfVar.pt.set(jSONObject.optBoolean("hasSendDownloadFailedFinally"));
            dfVar.pt(jSONObject.optInt("mLastFailedErrCode"));
            dfVar.rg(jSONObject.optString("mLastFailedErrMsg"));
            dfVar.rz(jSONObject.optString("mOpenUrl"));
            dfVar.bm(jSONObject.optInt("mLinkMode"));
            dfVar.b(jSONObject.optInt("mDownloadMode"));
            dfVar.hq(jSONObject.optInt("mModelType"));
            dfVar.bm(jSONObject.optString("mAppName"));
            dfVar.b(jSONObject.optString("mAppIcon"));
            dfVar.rg(jSONObject.optInt("mDownloadFailedTimes", 0));
            dfVar.rg(com.ss.android.download.api.q.df.rg(jSONObject, "mRecentDownloadResumeTime"));
            dfVar.df(jSONObject.optInt("mClickPauseTimes"));
            dfVar.df(com.ss.android.download.api.q.df.rg(jSONObject, "mJumpInstallTime"));
            dfVar.q(com.ss.android.download.api.q.df.rg(jSONObject, "mCancelInstallTime"));
            dfVar.q(jSONObject.optInt("mLastFailedResumeCount"));
            dfVar.hq(jSONObject.optString("downloadFinishReason"));
            dfVar.rz(jSONObject.optLong("clickDownloadSize"));
            dfVar.ux(jSONObject.optLong("clickDownloadTime"));
            dfVar.ux(jSONObject.optBoolean("mIsUpdateDownload"));
            dfVar.oh(jSONObject.optString("mOriginMimeType"));
            dfVar.rz(jSONObject.optBoolean("mIsPatchApplyHandled"));
            dfVar.c(jSONObject.optBoolean("installAfterCleanSpace"));
            dfVar.rz(jSONObject.optInt("funnelType", 1));
            dfVar.pp(jSONObject.optString("webUrl"));
            dfVar.un(jSONObject.optBoolean("enableShowComplianceDialog", true));
            dfVar.z(jSONObject.optBoolean("isAutoDownloadOnCardShow"));
            dfVar.r(jSONObject.optInt("enable_new_activity", 1) == 1);
            dfVar.qx(jSONObject.optInt("enable_pause", 1) == 1);
            dfVar.n(jSONObject.optInt("enable_ah", 1) == 1);
            if (jSONObject.optInt("enable_am", 1) != 1) {
                z = false;
            }
            dfVar.ou(z);
            dfVar.rg(jSONObject.optJSONObject("mExtras"));
        } catch (Exception e) {
            bm.qx().rg(e, "NativeDownloadModel fromJson");
        }
        return dfVar;
    }

    @Override // com.ss.android.downloadad.api.rg.rg
    public DownloadModel ou() {
        return oi();
    }

    @Override // com.ss.android.downloadad.api.rg.rg
    public DownloadEventConfig y() {
        return ox();
    }

    @Override // com.ss.android.downloadad.api.rg.rg
    public DownloadController fo() {
        return ls();
    }

    public AdDownloadModel oi() {
        return new AdDownloadModel.Builder().setAdId(this.pp).setExtraValue(this.c).setLogExtra(this.fw).setPackageName(this.rz).setExtra(this.y).setIsAd(this.n).setVersionCode(this.un).setVersionName(this.z).setDownloadUrl(this.bm).setModelType(this.oh).setMimeType(this.bj).setAppName(this.r).setAppIcon(this.qx).setDeepLink(new DeepLink(this.b, this.hq, null)).build();
    }

    public AdDownloadEventConfig ox() {
        return new AdDownloadEventConfig.Builder().setClickButtonTag(this.cd).setRefer(this.ax).setIsEnableV3Event(this.ms).build();
    }

    public AdDownloadController ls() {
        return new AdDownloadController.Builder().setIsEnableBackDialog(this.re).setLinkMode(this.f).setDownloadMode(this.v).setEnableShowComplianceDialog(this.s).setEnableAH(this.rg).setEnableAM(this.df).build();
    }
}
