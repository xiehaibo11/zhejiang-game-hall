package com.mbridge.msdk.mbbanner.common.c;

import android.content.Context;
import android.graphics.Bitmap;
import android.net.Uri;
import android.text.TextUtils;
import com.loc.at;
import com.mbridge.msdk.MBridgeConstans;
import com.mbridge.msdk.foundation.db.i;
import com.mbridge.msdk.foundation.db.l;
import com.mbridge.msdk.foundation.download.download.H5DownLoadManager;
import com.mbridge.msdk.foundation.entity.CampaignEx;
import com.mbridge.msdk.foundation.entity.CampaignUnit;
import com.mbridge.msdk.foundation.same.b.e;
import com.mbridge.msdk.foundation.tools.SameMD5;
import com.mbridge.msdk.foundation.tools.ae;
import com.mbridge.msdk.foundation.tools.ai;
import com.mbridge.msdk.foundation.tools.ak;
import com.mbridge.msdk.foundation.tools.z;
import com.mbridge.msdk.mbbanner.common.b.d;
import com.mbridge.msdk.mbbanner.common.b.f;
import com.mbridge.msdk.mbbanner.common.util.BannerUtils;
import com.ss.android.download.api.constant.BaseConstants;
import java.io.File;
import java.io.FileOutputStream;
import java.util.ArrayList;
import java.util.List;
import java.util.Timer;
import java.util.TimerTask;

public class b {
    private static final String a = b.class.getSimpleName();
    private Context b;
    private com.mbridge.msdk.mbbanner.common.a.c d;
    private com.mbridge.msdk.mbbanner.common.util.a e;
    private com.mbridge.msdk.mbbanner.common.b.b f;
    private d g;
    private int c = 0;
    private volatile boolean h = false;
    private Timer i = new Timer();
    private volatile List<String> j = new ArrayList();
    private volatile boolean k = false;
    private volatile boolean l = false;
    private volatile boolean m = false;

    public b(Context context, com.mbridge.msdk.mbbanner.common.a.c cVar, com.mbridge.msdk.mbbanner.common.b.b bVar, com.mbridge.msdk.mbbanner.common.util.a aVar) {
        this.b = context.getApplicationContext();
        this.d = cVar;
        this.f = bVar;
        this.e = aVar;
    }

    private void a(String str) {
        if (this.m) {
            return;
        }
        if ((this.k || this.l) && this.j.size() == 0) {
            z.b(a, "在子线程处理业务逻辑 完成");
            this.h = true;
            this.m = true;
            this.i.cancel();
            this.e.a(this.f, str);
            this.g.a(str);
        }
    }

    public final void a(String str, int i, String str2, boolean z) {
        if (!z) {
            if (i == -1) {
                z.d(a, " unitId =" + str + " --> time out!");
            }
            this.i.cancel();
            z.b(a, "在子线程处理业务逻辑 完成");
            z.b(a, "downloadResource--> Fail");
            this.h = true;
            this.e.b(this.f, str);
            this.g.a(str);
            return;
        }
        if (i == 1) {
            z.b(a, "downloadResource--> Success Image");
            synchronized (this) {
                this.j.remove(str2);
                if (this.j.size() == 0) {
                    a(str);
                }
            }
            return;
        }
        if (i == 2) {
            z.b(a, "downloadResource--> Success banner_html");
            this.l = true;
            a(str);
        } else if (i == 3) {
            z.b(a, "downloadResource--> Success banner_url");
            this.k = true;
            a(str);
        }
    }

    public final void a(String str, String str2, com.mbridge.msdk.mbbanner.common.a.b bVar, d dVar) throws Throwable {
        boolean z;
        try {
            z.b(a, "requestCampaign--> started");
            this.g = dVar;
            com.mbridge.msdk.mbbanner.common.f.a aVar = new com.mbridge.msdk.mbbanner.common.f.a() {
                @Override
                public final void a(CampaignUnit campaignUnit) throws Throwable {
                    try {
                        z.b(b.a, "requestCampaign--> Succeed");
                        b.this.e.a(b.this.f, campaignUnit, this.unitId);
                        b.a(b.this, this.unitId, campaignUnit);
                    } catch (Exception e) {
                        z.b(b.a, "requestCampaign--> Fail with exception = " + e.getMessage());
                        b.this.e.a(b.this.f, e.getMessage(), this.unitId);
                        b.this.g.a(this.unitId);
                    }
                }

                @Override
                public final void a(int i, String str3) {
                    z.b(b.a, "requestCampaign--> Fail errorCode:" + i + " msg:" + str3);
                    b.this.e.a(b.this.f, str3, this.unitId);
                    b.this.g.a(this.unitId);
                }
            };
            aVar.setUnitId(str2);
            aVar.setPlacementId(str);
            aVar.setAdType(com.tkay.expressad.foundation.g.a.aP);
            com.mbridge.msdk.mbbanner.common.e.a aVar2 = new com.mbridge.msdk.mbbanner.common.e.a(this.b);
            this.c = b(str2);
            com.mbridge.msdk.foundation.same.net.g.d dVarA = com.mbridge.msdk.mbbanner.common.a.d.a(false, this.b, str2, this.d.a(), this.c, bVar);
            String strG = ae.g(str2);
            if (!TextUtils.isEmpty(strG)) {
                dVarA.a(at.j, strG);
            }
            String strC = bVar.c();
            if (TextUtils.isEmpty(strC)) {
                z = false;
            } else {
                aVar.a(strC);
                z = true;
            }
            this.e.a(z);
            aVar2.choiceV3OrV5BySetting(1, dVarA, aVar, strC);
        } catch (Exception e) {
            e.printStackTrace();
            this.e.a(this.f, e.getMessage(), str2);
            this.g.a(str2);
        }
    }

    private List<CampaignEx> a(String str, CampaignUnit campaignUnit) {
        ArrayList arrayList = new ArrayList();
        if (campaignUnit != null) {
            try {
                if (campaignUnit.getAds() != null && campaignUnit.getAds().size() > 0) {
                    ArrayList<CampaignEx> ads = campaignUnit.getAds();
                    z.b(a, "getNeedShowList 总共返回的campaign有：" + ads.size());
                    ae.a((List<CampaignEx>) ads);
                    for (int i = 0; i < ads.size(); i++) {
                        CampaignEx campaignEx = ads.get(i);
                        if (campaignEx != null && campaignEx.getOfferType() != 99 && (!TextUtils.isEmpty(campaignEx.getBannerUrl()) || !TextUtils.isEmpty(campaignEx.getBannerHtml()) || !TextUtils.isEmpty(campaignEx.getImageUrl()))) {
                            if (ae.b(campaignEx)) {
                                campaignEx.setRtinsType(ae.c(this.b, campaignEx.getPackageName()) ? 1 : 2);
                            }
                            if (campaignEx.getWtick() == 1 || !ae.c(this.b, campaignEx.getPackageName())) {
                                arrayList.add(campaignEx);
                            } else if (ae.b(campaignEx)) {
                                arrayList.add(campaignEx);
                            } else {
                                ae.a(str, campaignEx, com.mbridge.msdk.foundation.same.a.E);
                            }
                        }
                    }
                    z.b(a, "getNeedShowList 返回有以下带有视频素材的campaign：" + arrayList.size());
                }
            } catch (Exception e) {
                e.printStackTrace();
            }
        }
        return arrayList;
    }

    private void a(String str, List<CampaignEx> list) {
        if (list == null || list.size() <= 0) {
            return;
        }
        for (CampaignEx campaignEx : list) {
            if (!TextUtils.isEmpty(campaignEx.getImageUrl())) {
                this.j.add(campaignEx.getImageUrl());
                com.mbridge.msdk.foundation.same.c.b.a(this.b).a(campaignEx.getImageUrl(), new a(this, str));
            }
        }
    }

    private static class a implements com.mbridge.msdk.foundation.same.c.c {
        private b a;
        private String b;

        public a(b bVar, String str) {
            this.a = bVar;
            this.b = str;
        }

        @Override
        public final void onSuccessLoad(Bitmap bitmap, String str) {
            if (MBridgeConstans.DEBUG) {
                z.b(b.a, "DownloadImageListener campaign image success");
            }
            b bVar = this.a;
            if (bVar != null) {
                bVar.a(this.b, 1, str, true);
            }
        }

        @Override
        public final void onFailedLoad(String str, String str2) {
            if (MBridgeConstans.DEBUG) {
                z.b(b.a, "DownloadImageListener campaign image fail");
            }
            b bVar = this.a;
            if (bVar != null) {
                bVar.a(this.b, 1, str2, false);
            }
        }
    }

    private String a(String str, String str2) throws Throwable {
        File file;
        FileOutputStream fileOutputStream;
        String str3 = "";
        if (!TextUtils.isEmpty(str2)) {
            FileOutputStream fileOutputStream2 = null;
            try {
                try {
                    String strB = e.b(com.mbridge.msdk.foundation.same.b.c.g);
                    String md5 = SameMD5.getMD5(ak.a(str2));
                    if (TextUtils.isEmpty(md5)) {
                        md5 = String.valueOf(System.currentTimeMillis());
                    }
                    file = new File(strB, md5.concat(".html"));
                    Uri.parse(str2).getPath();
                    fileOutputStream = new FileOutputStream(file);
                } catch (Exception e) {
                    e = e;
                }
            } catch (Throwable th) {
                th = th;
            }
            try {
                fileOutputStream.write(str2.getBytes());
                fileOutputStream.flush();
                String absolutePath = file.getAbsolutePath();
                try {
                    fileOutputStream.close();
                } catch (Exception e2) {
                    e2.printStackTrace();
                }
                str3 = absolutePath;
            } catch (Exception e3) {
                e = e3;
                fileOutputStream2 = fileOutputStream;
                e.printStackTrace();
                if (fileOutputStream2 != null) {
                    try {
                        fileOutputStream2.close();
                    } catch (Exception e4) {
                        e4.printStackTrace();
                    }
                }
            } catch (Throwable th2) {
                th = th2;
                fileOutputStream2 = fileOutputStream;
                if (fileOutputStream2 != null) {
                    try {
                        fileOutputStream2.close();
                    } catch (Exception e5) {
                        e5.printStackTrace();
                    }
                }
                throw th;
            }
            File file2 = new File(str3);
            if (!file2.exists() || !file2.isFile() || !file2.canRead()) {
                a(str, 2, str2, false);
            } else {
                a(str, 2, str2, true);
            }
        }
        return str3;
    }

    private int b(String str) {
        try {
            int iB = this.d.b();
            if (iB > this.d.c()) {
                return 0;
            }
            return iB;
        } catch (Exception e) {
            e.printStackTrace();
            return 0;
        }
    }

    static void a(b bVar, final String str, final CampaignUnit campaignUnit) throws Throwable {
        if (campaignUnit == null) {
            bVar.e.a(bVar.f, "campaignUnit is NULL!", str);
            bVar.g.a(str);
            return;
        }
        List<CampaignEx> listA = bVar.a(str, campaignUnit);
        new Thread(new Runnable() {
            @Override
            public final void run() {
                z.b(b.a, "在单独子线程保存数据库 开始");
                l.a(i.a(b.this.b)).b();
                CampaignUnit campaignUnit2 = campaignUnit;
                if (campaignUnit2 != null && campaignUnit2.getAds() != null && campaignUnit.getAds().size() > 0) {
                    BannerUtils.updateInstallList(b.this.b, campaignUnit.getAds());
                }
                z.b(b.a, "在单独子线程保存数据库 完成");
            }
        }).start();
        if (listA == null || listA.size() == 0) {
            z.b(a, "tryDownloadOnLoadSuccess 返回的campaign 没有符合下载规则的");
            bVar.e.a(bVar.f, com.tkay.expressad.reward.a.d.a, str);
            bVar.g.a(str);
            return;
        }
        z.b(a, "在子线程处理业务逻辑 开始");
        bVar.i.schedule(new TimerTask() {
            @Override
            public final void run() {
                if (b.this.h) {
                    return;
                }
                b.this.h = true;
                b.this.a(str, -1, "", false);
            }
        }, BaseConstants.Time.MINUTE);
        bVar.d.a(campaignUnit.getSessionId());
        int size = bVar.c;
        int i = 0;
        if (listA != null) {
            try {
                if (listA.size() > 0) {
                    size += listA.size();
                }
            } catch (Exception e) {
                e.printStackTrace();
            }
        }
        if (size > bVar.d.c()) {
            z.b(a, "saveNextOffset 重置offset为0");
            size = 0;
        }
        z.b(a, "saveNextOffset 算出 下次的offset是:" + size);
        if (ai.b(str)) {
            bVar.d.a(size);
        }
        CampaignEx campaignEx = listA.get(0);
        String strTrim = campaignEx.getBannerUrl().trim();
        if (TextUtils.isEmpty(strTrim)) {
            String strTrim2 = campaignEx.getBannerHtml().trim();
            if (!TextUtils.isEmpty(strTrim2)) {
                String strA = bVar.a(str, strTrim2);
                if (listA != null && listA.size() > 0) {
                    while (i < listA.size()) {
                        listA.get(i).setBannerHtml(strA);
                        listA.get(i).setHasMBTplMark(strTrim2.contains("<MBTPLMARK>"));
                        i++;
                    }
                }
            } else {
                bVar.l = true;
                bVar.k = true;
            }
        } else {
            if (!TextUtils.isEmpty(strTrim)) {
                H5DownLoadManager.getInstance().download(strTrim, new f(bVar, str));
            }
            if (listA != null && listA.size() > 0) {
                while (i < listA.size()) {
                    listA.get(i).setBannerUrl(campaignEx.getBannerUrl());
                    listA.get(i).setHasMBTplMark(true);
                    i++;
                }
            }
        }
        bVar.a(str, listA);
    }
}
