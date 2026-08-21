package com.ss.android.socialbase.appdownloader;

import android.app.Activity;
import android.content.Context;
import com.ss.android.downloadad.api.constant.AdBaseConstants;
import com.ss.android.socialbase.downloader.constants.EnqueueType;
import com.ss.android.socialbase.downloader.depend.IDownloadCompleteHandler;
import com.ss.android.socialbase.downloader.depend.IDownloadDepend;
import com.ss.android.socialbase.downloader.depend.IDownloadDiskSpaceHandler;
import com.ss.android.socialbase.downloader.depend.IDownloadFileUriProvider;
import com.ss.android.socialbase.downloader.depend.IDownloadListener;
import com.ss.android.socialbase.downloader.depend.IDownloadMonitorDepend;
import com.ss.android.socialbase.downloader.depend.INotificationClickCallback;
import com.ss.android.socialbase.downloader.downloader.IChunkAdjustCalculator;
import com.ss.android.socialbase.downloader.downloader.IChunkCntCalculator;
import com.ss.android.socialbase.downloader.downloader.IRetryDelayTimeCalculator;
import com.ss.android.socialbase.downloader.model.HttpHeader;
import com.ss.android.socialbase.downloader.notification.AbsNotificationItem;
import java.util.ArrayList;
import java.util.List;
import org.json.JSONObject;

public class c {
    private boolean bj;
    private IDownloadDiskSpaceHandler bl;
    private String c;
    private int cd;
    private int d;
    private Context df;
    private boolean dj;
    private long ey;
    private IDownloadListener f;
    private int fg;
    private JSONObject fl;
    private boolean fo;
    private String fw;
    private boolean g;
    private boolean gk;
    private String go;
    private String h;
    private boolean i;
    private int ka;
    private String l;
    private boolean lu;
    private com.ss.android.socialbase.appdownloader.q.pp m;
    private IDownloadFileUriProvider mc;
    private IDownloadMonitorDepend ms;
    private IRetryDelayTimeCalculator n;
    private IDownloadListener oh;
    private int[] oi;
    private IDownloadDepend om;
    private AbsNotificationItem ou;
    private long p;
    private String pp;
    private List<String> pt;
    private String q;
    private IChunkCntCalculator qx;
    private IChunkAdjustCalculator r;
    private String re;
    private Activity rg;
    private INotificationClickCallback s;
    private boolean su;
    private List<HttpHeader> ux;
    private String v;
    private boolean xv;
    private boolean y;
    private String yw;
    private boolean z;
    private boolean rz = true;
    private boolean bm = false;
    private boolean b = true;
    private boolean hq = false;
    private String un = AdBaseConstants.MIME_APK;
    private int lc = 5;
    private boolean k = true;
    private EnqueueType oy = EnqueueType.ENQUEUE_NONE;
    private int ev = 150;
    private boolean ax = true;
    private List<IDownloadCompleteHandler> j = new ArrayList();
    private boolean t = true;
    private boolean vd = true;

    public c(Context context, String str) {
        this.df = context.getApplicationContext();
        this.q = str;
    }

    public Activity getActivity() {
        return this.rg;
    }

    public Context getContext() {
        return this.df;
    }

    public String rg() {
        return this.q;
    }

    public String df() {
        return this.pp;
    }

    public String q() {
        return this.fw;
    }

    public List<HttpHeader> pt() {
        return this.ux;
    }

    public boolean pp() {
        return this.rz;
    }

    public boolean c() {
        return this.bm;
    }

    public boolean fw() {
        return this.b;
    }

    public boolean ux() {
        return this.hq;
    }

    public IDownloadListener rz() {
        return this.oh;
    }

    public IDownloadListener bm() {
        return this.f;
    }

    public String b() {
        return this.v;
    }

    public String hq() {
        return this.un;
    }

    public boolean oh() {
        return this.z;
    }

    public AbsNotificationItem f() {
        return this.ou;
    }

    public IChunkCntCalculator v() {
        return this.qx;
    }

    public IChunkAdjustCalculator un() {
        return this.r;
    }

    public boolean z() {
        return this.y;
    }

    public boolean r() {
        return this.fo;
    }

    public int qx() {
        return this.fg;
    }

    public void rg(int i) {
        this.fg = i;
    }

    public String n() {
        return this.re;
    }

    public String ou() {
        return this.l;
    }

    public long y() {
        return this.p;
    }

    public int fo() {
        return this.lc;
    }

    public int re() {
        return this.d;
    }

    public boolean l() {
        return this.dj;
    }

    public String p() {
        return this.go;
    }

    public boolean i() {
        return this.k;
    }

    public boolean lc() {
        return this.lu;
    }

    public IRetryDelayTimeCalculator d() {
        return this.n;
    }

    public int dj() {
        return this.ev;
    }

    public int go() {
        return this.cd;
    }

    public boolean k() {
        return this.bj;
    }

    public boolean lu() {
        return this.g;
    }

    public boolean bj() {
        return this.ax;
    }

    public boolean g() {
        return this.gk;
    }

    public EnqueueType oy() {
        return this.oy;
    }

    public boolean ev() {
        return this.i;
    }

    public String cd() {
        return this.c;
    }

    public IDownloadMonitorDepend ax() {
        return this.ms;
    }

    public IDownloadDepend ms() {
        return this.om;
    }

    public com.ss.android.socialbase.appdownloader.q.pp om() {
        return this.m;
    }

    public IDownloadFileUriProvider m() {
        return this.mc;
    }

    public INotificationClickCallback mc() {
        return this.s;
    }

    public List<IDownloadCompleteHandler> bl() {
        return this.j;
    }

    public boolean gk() {
        return this.su;
    }

    public int s() {
        return this.ka;
    }

    public long su() {
        return this.ey;
    }

    public boolean fl() {
        return this.vd;
    }

    public String h() {
        return this.yw;
    }

    public int[] j() {
        return this.oi;
    }

    public boolean ka() {
        return this.xv;
    }

    public boolean ey() {
        return this.t;
    }

    public c rg(String str) {
        this.pp = str;
        return this;
    }

    public c df(String str) {
        this.c = str;
        return this;
    }

    public c q(String str) {
        this.fw = str;
        return this;
    }

    public c rg(List<HttpHeader> list) {
        this.ux = list;
        return this;
    }

    public c rg(boolean z) {
        this.rz = z;
        return this;
    }

    public c df(boolean z) {
        this.bm = z;
        return this;
    }

    public c q(boolean z) {
        this.hq = z;
        return this;
    }

    public c rg(IDownloadListener iDownloadListener) {
        this.oh = iDownloadListener;
        return this;
    }

    public c pt(String str) {
        this.v = str;
        return this;
    }

    public c pp(String str) {
        this.un = str;
        return this;
    }

    public c pt(boolean z) {
        this.z = z;
        return this;
    }

    public c pp(boolean z) {
        this.y = z;
        return this;
    }

    public c c(boolean z) {
        this.fo = z;
        return this;
    }

    public c c(String str) {
        this.re = str;
        return this;
    }

    public c fw(String str) {
        this.l = str;
        return this;
    }

    public c rg(long j) {
        this.p = j;
        return this;
    }

    public c df(int i) {
        this.lc = i;
        return this;
    }

    public c q(int i) {
        this.d = i;
        return this;
    }

    public c fw(boolean z) {
        this.dj = z;
        return this;
    }

    public c ux(String str) {
        this.go = str;
        return this;
    }

    public c ux(boolean z) {
        this.gk = z;
        return this;
    }

    public c rz(boolean z) {
        this.k = z;
        return this;
    }

    public c bm(boolean z) {
        this.lu = z;
        return this;
    }

    public c b(boolean z) {
        this.bj = z;
        return this;
    }

    public c hq(boolean z) {
        this.g = z;
        return this;
    }

    public c pt(int i) {
        this.ev = i;
        return this;
    }

    public c pp(int i) {
        this.cd = i;
        return this;
    }

    public c oh(boolean z) {
        this.ax = z;
        return this;
    }

    public c rg(EnqueueType enqueueType) {
        this.oy = enqueueType;
        return this;
    }

    public c f(boolean z) {
        this.i = z;
        return this;
    }

    public c rg(IDownloadFileUriProvider iDownloadFileUriProvider) {
        this.mc = iDownloadFileUriProvider;
        return this;
    }

    public c rz(String str) {
        this.yw = str;
        return this;
    }

    public c bm(String str) {
        this.h = str;
        return this;
    }

    public String fg() {
        return this.h;
    }

    public c c(int i) {
        this.ka = i;
        return this;
    }

    public List<String> xv() {
        return this.pt;
    }

    public c df(List<String> list) {
        this.pt = list;
        return this;
    }

    public IDownloadDiskSpaceHandler t() {
        return this.bl;
    }

    public c rg(IDownloadDiskSpaceHandler iDownloadDiskSpaceHandler) {
        this.bl = iDownloadDiskSpaceHandler;
        return this;
    }

    public JSONObject vd() {
        return this.fl;
    }

    public c rg(JSONObject jSONObject) {
        this.fl = jSONObject;
        return this;
    }

    public c rg(IDownloadCompleteHandler iDownloadCompleteHandler) {
        synchronized (this.j) {
            if (iDownloadCompleteHandler != null) {
                if (!this.j.contains(iDownloadCompleteHandler)) {
                    this.j.add(iDownloadCompleteHandler);
                    return this;
                }
            }
            return this;
        }
    }

    public c v(boolean z) {
        this.xv = z;
        return this;
    }

    public c un(boolean z) {
        this.t = z;
        return this;
    }
}
