package com.sigmob.sdk.base.common;

import android.os.AsyncTask;
import android.text.TextUtils;
import com.czhj.sdk.common.ThreadPool.ThreadPoolFactory;
import com.czhj.sdk.common.models.AdCache;
import com.czhj.sdk.common.utils.FileUtil;
import com.czhj.sdk.common.utils.ImageManager;
import com.czhj.sdk.common.utils.Md5Util;
import com.czhj.sdk.logger.SigmobLog;
import com.czhj.volley.toolbox.DownloadItem;
import com.czhj.volley.toolbox.FileDownloadRequest;
import com.czhj.volley.toolbox.FileDownloader;
import com.sigmob.sdk.base.models.BaseAdUnit;
import com.sigmob.sdk.base.models.rtb.MaterialMeta;
import com.sigmob.sdk.base.models.rtb.ResponseAsset;
import com.sigmob.sdk.base.models.rtb.Template;
import com.sigmob.sdk.videocache.h;
import com.sigmob.windad.WindAdError;
import com.xiaomi.mipush.sdk.Constants;
import java.io.File;
import java.lang.ref.WeakReference;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import java.util.concurrent.CopyOnWriteArrayList;

public class f {
    private static final long f = 512000;
    private static final long g = 61440;
    private static com.sigmob.sdk.videocache.h j;
    private static volatile ImageManager l;
    private String r;
    private String s;
    private HashMap<String, AdCache> u;
    private static final Integer b = 0;
    private static final Integer c = 1;
    private static final Integer d = 2;
    private static final Integer e = 3;
    private static f h = null;
    private static Map<String, BaseAdUnit> i = new HashMap();
    private static HashMap<String, Integer> k = new HashMap<>();
    private static Map<String, List<BaseAdUnit>> v = new HashMap();
    private Map<String, String> m = new HashMap();
    private HashMap<String, Long> n = new HashMap<>();
    private HashSet<a> o = new HashSet<>();
    final FileDownloadRequest.FileDownloadListener a = new FileDownloadRequest.FileDownloadListener() {
        @Override
        public void downloadProgress(DownloadItem downloadItem, long j2, long j3) {
        }

        @Override
        public void onCancel(DownloadItem downloadItem) {
            f.k.put(Md5Util.md5(downloadItem.url), f.e);
            for (a aVar : f.this.o) {
                BaseAdUnit baseAdUnitA = aVar.a();
                if (baseAdUnitA != null && downloadItem.type == DownloadItem.FileType.FILE && baseAdUnitA.getEndCardZipPath().equals(downloadItem.filePath)) {
                    aVar.b(baseAdUnitA);
                }
            }
        }

        @Override
        public void onErrorResponse(DownloadItem downloadItem) {
            SigmobLog.e("onErrorResponse: ", downloadItem.error);
            f.k.put(Md5Util.md5(downloadItem.url), f.e);
            for (a aVar : f.this.o) {
                BaseAdUnit baseAdUnitA = aVar.a();
                if (baseAdUnitA != null && baseAdUnitA.getEndCardZipPath().equals(downloadItem.filePath) && downloadItem.type == DownloadItem.FileType.FILE) {
                    aVar.b(baseAdUnitA);
                }
            }
            f.this.new c(downloadItem).executeOnExecutor(ThreadPoolFactory.BackgroundThreadPool.getInstance().getExecutorService(), new Object[0]);
        }

        @Override
        public void onSuccess(DownloadItem downloadItem) {
            f.k.put(Md5Util.md5(downloadItem.url), f.e);
            for (a aVar : f.this.o) {
                BaseAdUnit baseAdUnitA = aVar.a();
                if (baseAdUnitA != null && downloadItem.type == DownloadItem.FileType.FILE && baseAdUnitA.getEndCardZipPath().equals(downloadItem.filePath)) {
                    aVar.a(baseAdUnitA);
                }
            }
            f.this.new c(downloadItem).executeOnExecutor(ThreadPoolFactory.BackgroundThreadPool.getInstance().getExecutorService(), new Object[0]);
        }
    };
    private ArrayList<BaseAdUnit> p = new ArrayList<>();
    private HashMap<String, AdCache> q = new HashMap<>();
    private HashMap<String, WeakReference<b>> t = new HashMap<>();

    public interface a {
        BaseAdUnit a();

        void a(BaseAdUnit baseAdUnit);

        void b(BaseAdUnit baseAdUnit);
    }

    public interface b {
        void a(BaseAdUnit baseAdUnit);

        void a(BaseAdUnit baseAdUnit, String str);
    }

    class c extends AsyncTask<Object, Void, String> {
        private DownloadItem b;

        c(DownloadItem downloadItem) {
            this.b = null;
            this.b = downloadItem;
        }

        @Override
        protected String doInBackground(Object... objArr) {
            DownloadItem downloadItem = this.b;
            if (downloadItem == null) {
                SigmobLog.e("Download Item is null");
                return WindAdError.ERROR_SIGMOB_FILE_DOWNLOAD.toString();
            }
            if (downloadItem.error != null) {
                return this.b.error.toString();
            }
            String str = this.b.filePath;
            String extensionName = FileUtil.getExtensionName(str);
            String strFileMd5 = Md5Util.fileMd5(str);
            if (!TextUtils.isEmpty(this.b.md5) && !this.b.md5.equalsIgnoreCase(strFileMd5)) {
                this.b.status = 0;
                return WindAdError.ERROR_SIGMOB_FILE_MD5.toString();
            }
            if (this.b.type == DownloadItem.FileType.VIDEO) {
                f.this.m.put(str, strFileMd5);
                this.b.status = 1;
            } else {
                if (TextUtils.isEmpty(extensionName) || !extensionName.equalsIgnoreCase("tgz")) {
                    if (this.b.type == DownloadItem.FileType.MRAID_VIDEO) {
                        return null;
                    }
                    this.b.status = 0;
                    return WindAdError.ERROR_SIGMOB_INFORMATION_LOSE.toString();
                }
                try {
                    com.sigmob.sdk.base.utils.a.a(new File(str), new File(str.replace(".tgz", "/")));
                    this.b.status = 1;
                } catch (Throwable th) {
                    this.b.status = 0;
                    SigmobLog.e(th.getMessage());
                    return WindAdError.ERROR_SIGMOB_FILE_DOWNLOAD.toString();
                }
            }
            return null;
        }

        @Override
        protected void onPostExecute(String str) {
            super.onPostExecute(str);
            if (!TextUtils.isEmpty(str)) {
                FileUtil.deleteFile(this.b.filePath);
            }
            for (BaseAdUnit baseAdUnit : new CopyOnWriteArrayList(f.this.p)) {
                WeakReference weakReference = (WeakReference) f.this.t.get(baseAdUnit.getUuid());
                b bVar = weakReference != null ? (b) weakReference.get() : null;
                if (this.b.type != DownloadItem.FileType.VIDEO || !baseAdUnit.getVideoPath().equals(this.b.filePath)) {
                    if ((this.b.type == DownloadItem.FileType.FILE && baseAdUnit.getEndCardZipPath().equals(this.b.filePath)) || this.b.type == DownloadItem.FileType.ZIP_FILE) {
                        f.this.a(baseAdUnit, str, bVar);
                    } else if (this.b.type == DownloadItem.FileType.MRAID_VIDEO) {
                    }
                }
                z.a(this.b, baseAdUnit, str, false);
                f.this.a(baseAdUnit, str, bVar);
            }
        }
    }

    private class d extends AsyncTask<Object, Void, ArrayList<DownloadItem>> {
        BaseAdUnit a;

        d(BaseAdUnit baseAdUnit) {
            this.a = baseAdUnit;
        }

        private DownloadItem a(Template template) {
            if (!TextUtils.isEmpty(template.context.utf8())) {
                String strMd5 = Md5Util.md5(template.context.utf8());
                File file = new File(com.sigmob.sdk.base.utils.b.c(com.sigmob.sdk.base.utils.b.c), strMd5 + ".tgz");
                if (!file.exists()) {
                    DownloadItem downloadItem = new DownloadItem();
                    downloadItem.url = template.context.utf8();
                    downloadItem.filePath = file.getAbsolutePath();
                    downloadItem.type = DownloadItem.FileType.ZIP_FILE;
                    return downloadItem;
                }
            }
            return null;
        }

        @Override
        protected ArrayList<DownloadItem> doInBackground(Object... objArr) {
            DownloadItem downloadItemA;
            DownloadItem downloadItemA2;
            DownloadItem downloadItemA3;
            String strFileMd5;
            ArrayList<DownloadItem> arrayList = new ArrayList<>();
            BaseAdUnit baseAdUnit = this.a;
            if (baseAdUnit == null || baseAdUnit.getMaterial() == null) {
                return null;
            }
            MaterialMeta material = this.a.getMaterial();
            long length = 0;
            if (!TextUtils.isEmpty(this.a.getVideo_url())) {
                if (this.a.isVideoExist()) {
                    strFileMd5 = Md5Util.fileMd5(this.a.getVideoPath());
                    if (TextUtils.isEmpty(this.a.getVideo_OriginMD5()) || this.a.getVideo_OriginMD5().equalsIgnoreCase(strFileMd5)) {
                        f.this.m.put(this.a.getVideoPath(), strFileMd5);
                        length = new File(this.a.getVideoPath()).length();
                    } else {
                        FileUtil.deleteFile(this.a.getVideoPath());
                    }
                } else {
                    strFileMd5 = null;
                }
                boolean zCheckVideoValid = this.a.checkVideoValid();
                DownloadItem downloadItem = new DownloadItem();
                if (zCheckVideoValid && this.a.isVideoExist()) {
                    downloadItem.url = this.a.getVideo_url();
                    downloadItem.filePath = this.a.getVideoPath();
                    downloadItem.type = DownloadItem.FileType.VIDEO;
                    downloadItem.md5 = strFileMd5;
                    downloadItem.size = length;
                    downloadItem.status = 1;
                    z.a(downloadItem, this.a, (String) null, true);
                } else if (this.a.getPlayMode() != 2) {
                    downloadItem.url = this.a.getVideo_url();
                    downloadItem.filePath = this.a.getVideoPath();
                    downloadItem.type = DownloadItem.FileType.VIDEO;
                    downloadItem.md5 = this.a.getVideo_OriginMD5();
                    f.this.a(downloadItem, this.a);
                    arrayList.add(downloadItem);
                }
            }
            if (material.creative_type.intValue() == l.a.a()) {
                DownloadItem downloadItem2 = new DownloadItem();
                downloadItem2.url = this.a.getEndcard_url();
                downloadItem2.filePath = this.a.getEndCardZipPath();
                downloadItem2.type = DownloadItem.FileType.FILE;
                downloadItem2.md5 = this.a.getEndCard_OriginMD5();
                arrayList.add(downloadItem2);
            }
            if (this.a.scene != null && this.a.scene.type.intValue() == 3 && (downloadItemA3 = a(this.a.scene)) != null) {
                arrayList.add(downloadItemA3);
            }
            if (material.main_template != null && material.main_template.type.intValue() == 3 && (downloadItemA2 = a(material.main_template)) != null) {
                arrayList.add(downloadItemA2);
            }
            if (material.sub_template != null && material.sub_template.type.intValue() == 3 && (downloadItemA = a(material.sub_template)) != null) {
                arrayList.add(downloadItemA);
            }
            if (this.a.isCatchVideo() && material.asset != null && material.asset.size() > 0) {
                for (int i = 0; i < material.asset.size(); i++) {
                    ResponseAsset responseAsset = material.asset.get(i);
                    if (responseAsset != null && responseAsset.video != null && !TextUtils.isEmpty(responseAsset.video.url)) {
                        File fileC = f.c().c(responseAsset.video.url);
                        if (!fileC.exists()) {
                            DownloadItem downloadItem3 = new DownloadItem();
                            downloadItem3.url = responseAsset.video.url;
                            downloadItem3.filePath = fileC.getAbsolutePath();
                            downloadItem3.type = DownloadItem.FileType.MRAID_VIDEO;
                            f.this.a(downloadItem3, this.a);
                            arrayList.add(downloadItem3);
                        }
                    }
                }
            }
            SigmobLog.d("cache() adUnit = [" + this.a.getCrid() + "] videoUrl = [" + this.a.getVideo_url() + "] endcardUrl = [" + this.a.getEndcard_url() + "]");
            return arrayList;
        }

        @Override
        protected void onPostExecute(ArrayList<DownloadItem> arrayList) {
            boolean z;
            super.onPostExecute(arrayList);
            if (this.a == null) {
                return;
            }
            WeakReference weakReference = (WeakReference) f.this.t.get(this.a.getUuid());
            b bVar = weakReference != null ? (b) weakReference.get() : null;
            if (arrayList != null && arrayList.size() != 0) {
                FileDownloader fileDownloaderA = p.a();
                Iterator it = f.this.p.iterator();
                while (true) {
                    if (it.hasNext()) {
                        if (((BaseAdUnit) it.next()).getUuid().equals(this.a.getUuid())) {
                            z = true;
                            break;
                        }
                    } else {
                        z = false;
                        break;
                    }
                }
                if (!z) {
                    f.this.p.add(this.a);
                }
                for (DownloadItem downloadItem : arrayList) {
                    String strMd5 = Md5Util.md5(downloadItem.url);
                    SigmobLog.d("downloader add  item " + downloadItem.url);
                    if (downloadItem.type != DownloadItem.FileType.VIDEO && (f.k.get(strMd5) == null || ((Integer) f.k.get(strMd5)).equals(f.e))) {
                        f.k.put(strMd5, f.c);
                        fileDownloaderA.add(downloadItem, f.this.a);
                    }
                }
            } else if (bVar != null) {
                bVar.a(this.a, null);
            }
            MaterialMeta material = this.a.getMaterial();
            if (material == null || material.ad_privacy == null) {
                return;
            }
            String str = material.ad_privacy.privacy_template_url;
            if (TextUtils.isEmpty(str)) {
                return;
            }
            String strMd52 = Md5Util.md5(str);
            File fileB = com.sigmob.sdk.base.utils.b.b(com.sigmob.sdk.base.utils.b.b);
            File file = new File(fileB, strMd52 + ".html");
            if (file.exists()) {
                SigmobLog.i("privacy_template_url:" + strMd52 + " is exists");
                return;
            }
            try {
                if (fileB.exists() && fileB.isDirectory()) {
                    for (File file2 : fileB.listFiles()) {
                        if (file2.exists() && file2.isFile() && file2.delete()) {
                            SigmobLog.d("删除单个文件" + file2.getAbsolutePath() + "成功！");
                        }
                    }
                }
            } catch (Exception e) {
                e.printStackTrace();
            }
            DownloadItem downloadItem2 = new DownloadItem();
            downloadItem2.url = str;
            downloadItem2.filePath = file.getAbsolutePath();
            downloadItem2.type = DownloadItem.FileType.OTHER;
            arrayList.add(downloadItem2);
            p.a().add(downloadItem2, new FileDownloadRequest.FileDownloadListener() {
                @Override
                public void downloadProgress(DownloadItem downloadItem3, long j, long j2) {
                }

                @Override
                public void onCancel(DownloadItem downloadItem3) {
                    SigmobLog.i("onPostExecute onCancel:" + downloadItem3.url);
                }

                @Override
                public void onErrorResponse(DownloadItem downloadItem3) {
                    SigmobLog.i("onPostExecute onErrorResponse:" + downloadItem3.url);
                }

                @Override
                public void onSuccess(DownloadItem downloadItem3) {
                    SigmobLog.i("onPostExecute onSuccess:" + downloadItem3.url);
                }
            });
        }
    }

    private f() {
    }

    public static synchronized ImageManager a() {
        if (l == null) {
            File file = new File(com.sigmob.sdk.base.utils.b.e());
            synchronized (ImageManager.class) {
                if (l == null) {
                    l = new ImageManager(com.sigmob.sdk.b.b()).customCachePath(file);
                }
            }
        }
        return l;
    }

    public static BaseAdUnit a(String str) {
        return i.get(str);
    }

    private void a(final DownloadItem downloadItem, BaseAdUnit baseAdUnit) {
        if (j != null) {
            String str = downloadItem.url;
            if (TextUtils.isEmpty(str) || j.b(str)) {
                return;
            }
            String strA = j.a(str);
            j.a(new com.sigmob.sdk.videocache.d() {
                @Override
                public void a(File file, String str2, int i2) {
                    SigmobLog.d(file + " onCacheAvailable " + i2);
                    if (i2 != 100 || file == null || file.getAbsolutePath().endsWith("download")) {
                        return;
                    }
                    f.j.a(this);
                    f.this.new c(downloadItem).executeOnExecutor(ThreadPoolFactory.BackgroundThreadPool.getInstance().getExecutorService(), new Object[0]);
                }
            }, str);
            com.sigmob.sdk.videocache.v.a(com.sigmob.sdk.b.b()).a(strA);
        }
    }

    public static void a(BaseAdUnit baseAdUnit) {
        b(baseAdUnit);
    }

    private void a(BaseAdUnit baseAdUnit, String str, b bVar) {
        if (str == null) {
            if (!baseAdUnit.isVideoExist() || !baseAdUnit.isEndCardIndexExist()) {
                return;
            }
            if (baseAdUnit.getPlayMode() == 0 && bVar != null) {
                str = null;
                bVar.a(baseAdUnit, str);
            }
        } else if (bVar != null) {
            bVar.a(baseAdUnit, str);
        }
        this.p.remove(baseAdUnit);
        this.t.remove(baseAdUnit.getUuid());
    }

    public static void a(List<BaseAdUnit> list) {
        if (list == null || list.size() <= 0) {
            return;
        }
        v.put(list.get(0).getUuid(), list);
    }

    public static File[] a(File[] fileArr, long j2, long j3) {
        if (fileArr == null || fileArr.length == 0) {
            return null;
        }
        ArrayList arrayList = new ArrayList(Arrays.asList(fileArr));
        for (File file : fileArr) {
            long j4 = j2 - j3;
            if (file.exists() && j4 > file.lastModified()) {
                file.delete();
                arrayList.remove(file);
                SigmobLog.d("file delete " + file.getName());
            }
        }
        return (File[]) arrayList.toArray(new File[0]);
    }

    public static List<BaseAdUnit> b(String str) {
        return v.get(str);
    }

    public static void b() {
        try {
            FileUtil.deleteDirectory(com.sigmob.sdk.base.utils.b.b(com.sigmob.sdk.base.utils.b.a).getAbsolutePath());
            q();
        } catch (Throwable th) {
            SigmobLog.e(th.getMessage());
        }
    }

    public static void b(BaseAdUnit baseAdUnit) {
        if (baseAdUnit == null || TextUtils.isEmpty(baseAdUnit.getUuid())) {
            return;
        }
        i.put(baseAdUnit.getUuid(), baseAdUnit);
    }

    private void b(final BaseAdUnit baseAdUnit, final b bVar) {
        if (baseAdUnit != null) {
            File adPrivacyTemplateFile = baseAdUnit.getAdPrivacyTemplateFile();
            if (adPrivacyTemplateFile != null && !adPrivacyTemplateFile.exists()) {
                DownloadItem downloadItem = new DownloadItem();
                downloadItem.url = baseAdUnit.getadPrivacy().privacy_template_url;
                downloadItem.filePath = adPrivacyTemplateFile.getAbsolutePath();
                downloadItem.type = DownloadItem.FileType.OTHER;
                FileDownloader fileDownloaderA = p.a();
                if (fileDownloaderA != null) {
                    fileDownloaderA.add(downloadItem, new FileDownloadRequest.FileDownloadListener() {
                        @Override
                        public void downloadProgress(DownloadItem downloadItem2, long j2, long j3) {
                        }

                        @Override
                        public void onCancel(DownloadItem downloadItem2) {
                        }

                        @Override
                        public void onErrorResponse(DownloadItem downloadItem2) {
                        }

                        @Override
                        public void onSuccess(DownloadItem downloadItem2) {
                        }
                    });
                }
            }
            File file = new File(baseAdUnit.getSplashFilePath());
            if (file.exists()) {
                file.setLastModified(System.currentTimeMillis());
                if (bVar != null) {
                    bVar.a(baseAdUnit, null);
                    return;
                }
                return;
            }
            FileDownloader fileDownloaderA2 = p.a();
            DownloadItem downloadItem2 = new DownloadItem();
            downloadItem2.filePath = baseAdUnit.getSplashFilePath();
            downloadItem2.url = baseAdUnit.getSplashURL();
            downloadItem2.type = DownloadItem.FileType.OTHER;
            downloadItem2.userRange = false;
            fileDownloaderA2.add(downloadItem2, new FileDownloadRequest.FileDownloadListener() {
                @Override
                public void downloadProgress(DownloadItem downloadItem3, long j2, long j3) {
                }

                @Override
                public void onCancel(DownloadItem downloadItem3) {
                }

                @Override
                public void onErrorResponse(DownloadItem downloadItem3) {
                    if (bVar != null) {
                        String message = downloadItem3.error.getMessage();
                        if (downloadItem3.error.networkResponse != null) {
                            message = String.valueOf(downloadItem3.error.networkResponse.statusCode);
                        }
                        bVar.a(baseAdUnit, message);
                    }
                    SigmobLog.e("onErrorResponse: ", downloadItem3.error);
                }

                @Override
                public void onSuccess(DownloadItem downloadItem3) {
                    b bVar2 = bVar;
                    if (bVar2 != null) {
                        bVar2.a(baseAdUnit, null);
                    }
                }
            });
        }
    }

    public static com.sigmob.sdk.videocache.h c() {
        return j;
    }

    public static void c(BaseAdUnit baseAdUnit) {
        if (baseAdUnit == null || TextUtils.isEmpty(baseAdUnit.getUuid())) {
            return;
        }
        i.remove(baseAdUnit.getUuid());
        v.remove(baseAdUnit.getUuid());
    }

    public static void d() {
        h.a aVar = new h.a(com.sigmob.sdk.b.b());
        try {
            aVar.a(new File(com.sigmob.sdk.base.utils.b.b()));
        } catch (Throwable th) {
            SigmobLog.e("initHttpProxyCacheServer fail ", th);
        }
        j = aVar.a();
    }

    public static f e() {
        if (h == null) {
            synchronized (f.class) {
                if (h == null) {
                    h = new f();
                }
            }
        }
        return h;
    }

    private String f(String str) {
        File fileC;
        if (TextUtils.isEmpty(str) || (fileC = c().c(str)) == null || !fileC.exists()) {
            return null;
        }
        return fileC.getAbsolutePath();
    }

    public static void f() {
        String str;
        try {
            File[] fileArrClearCacheFileByCount = FileUtil.clearCacheFileByCount(a(FileUtil.orderByDate(com.sigmob.sdk.base.utils.b.d()), System.currentTimeMillis(), com.sigmob.sdk.base.i.a().s()), com.sigmob.sdk.base.i.a().r());
            if (fileArrClearCacheFileByCount == null) {
                str = "splash ad file list is null";
            } else {
                str = "splash ad file remain num: " + fileArrClearCacheFileByCount.length;
            }
            SigmobLog.i(str);
        } catch (Throwable th) {
            SigmobLog.e("clean splash ad file error", th);
        }
    }

    public static void g() {
        String str;
        try {
            File[] fileArrClearCacheFileByCount = FileUtil.clearCacheFileByCount(FileUtil.orderByDate(com.sigmob.sdk.base.utils.b.b()), com.sigmob.sdk.base.i.a().o() + com.sigmob.sdk.base.i.a().t());
            if (fileArrClearCacheFileByCount == null) {
                str = "splash ad file list is null";
            } else {
                str = "splash ad file remain num: " + fileArrClearCacheFileByCount.length;
            }
            SigmobLog.i(str);
        } catch (Throwable th) {
            SigmobLog.e("clean splash ad file error", th);
        }
    }

    public static void h() {
        String str;
        try {
            File[] fileArrClearCacheFileByCount = FileUtil.clearCacheFileByCount(FileUtil.orderByDate(com.sigmob.sdk.base.utils.b.e()), com.sigmob.sdk.base.i.a().t());
            if (fileArrClearCacheFileByCount == null) {
                str = "native ad file list is null";
            } else {
                str = "native ad file remain num: " + fileArrClearCacheFileByCount.length;
            }
            SigmobLog.i(str);
        } catch (Throwable th) {
            SigmobLog.e("clean native ad file error", th);
        }
    }

    public static void i() {
        try {
            File[] fileArrClearCacheFileByCount = FileUtil.clearCacheFileByCount(FileUtil.orderByDate(com.sigmob.sdk.base.utils.b.a(com.sigmob.sdk.b.b()).getAbsolutePath()), 5);
            SigmobLog.i(fileArrClearCacheFileByCount == null ? "Download APK files  is null" : "Download APK files remain num: " + fileArrClearCacheFileByCount.length);
            if (fileArrClearCacheFileByCount == null || fileArrClearCacheFileByCount.length <= 0) {
                return;
            }
            for (File file : fileArrClearCacheFileByCount) {
                if (System.currentTimeMillis() - file.lastModified() > 604800000) {
                    SigmobLog.i("Download APK files timeOut seven day and delete:" + file.getName() + Constants.COLON_SEPARATOR + file.delete());
                }
            }
        } catch (Throwable th) {
            SigmobLog.e("clean Download APK file error", th);
        }
    }

    public static void j() {
        try {
            File[] fileArrOrderByDate = FileUtil.orderByDate(com.sigmob.sdk.base.utils.b.a());
            ArrayList arrayList = new ArrayList(Arrays.asList(fileArrOrderByDate));
            for (File file : fileArrOrderByDate) {
                if (!file.getPath().endsWith(".mp4") && !file.getPath().endsWith(".mp4.tmp") && !file.getPath().endsWith(".tgz") && !file.getPath().endsWith(".html")) {
                    arrayList.remove(file);
                }
            }
            File[] fileArrClearCacheFileByCount = FileUtil.clearCacheFileByCount((File[]) arrayList.toArray(new File[0]), 5);
            SigmobLog.i(fileArrClearCacheFileByCount == null ? "splash ad file list is null" : "splash ad file remain num: " + fileArrClearCacheFileByCount.length);
        } catch (Throwable th) {
            SigmobLog.e("clean splash ad file error", th);
        }
    }

    private static void q() {
        try {
            for (File file : FileUtil.orderByDate(com.sigmob.sdk.base.utils.b.c(com.sigmob.sdk.base.utils.b.c).getAbsolutePath())) {
                long jCurrentTimeMillis = System.currentTimeMillis() - com.sigmob.sdk.base.i.a().s();
                if (file.exists() && jCurrentTimeMillis > file.lastModified()) {
                    if (file.isFile()) {
                        if (!FileUtil.deleteFile(file.getAbsolutePath())) {
                            return;
                        }
                    } else if (file.isDirectory() && !FileUtil.deleteDirectory(file.getAbsolutePath())) {
                        return;
                    }
                }
            }
        } catch (Throwable th) {
            th.printStackTrace();
        }
    }

    public Map<String, AdCache> a(int i2) {
        if (i2 == 1 || i2 == 4) {
            return this.q;
        }
        if (i2 != 5) {
            return null;
        }
        return this.u;
    }

    public void a(a aVar) {
        if (aVar == null || this.o.contains(aVar)) {
            return;
        }
        this.o.add(aVar);
    }

    public void a(BaseAdUnit baseAdUnit, b bVar) {
        if (bVar != null) {
            bVar.a(baseAdUnit);
        }
        if (baseAdUnit == null) {
            SigmobLog.e("adUnit is null");
            if (bVar != null) {
                bVar.a(baseAdUnit, "adUnit is null");
                return;
            }
            return;
        }
        if (baseAdUnit.getAd_type() == 2) {
            b(baseAdUnit, bVar);
            return;
        }
        if (bVar != null) {
            this.t.put(baseAdUnit.getUuid(), new WeakReference<>(bVar));
        }
        try {
            new d(baseAdUnit).executeOnExecutor(ThreadPoolFactory.BackgroundThreadPool.getInstance().getExecutorService(), new Object[0]);
        } catch (Throwable th) {
            SigmobLog.e("AdUnitCheckCacheTask execute error", th);
        }
    }

    public void a(String str, int i2) {
        Map<String, AdCache> mapA;
        if (TextUtils.isEmpty(str) || (mapA = a(i2)) == null) {
            return;
        }
        mapA.remove(str);
    }

    public void b(a aVar) {
        if (aVar == null || !this.o.contains(aVar)) {
            return;
        }
        this.o.remove(aVar);
    }

    public void c(String str) {
        this.r = str;
    }

    public void d(BaseAdUnit baseAdUnit) {
        Map<String, AdCache> mapA;
        AdCache adCache;
        if (baseAdUnit == null || TextUtils.isEmpty(baseAdUnit.getadslot_id()) || (mapA = a(baseAdUnit.getAd_type())) == null || (adCache = mapA.get(baseAdUnit.getadslot_id())) == null) {
            return;
        }
        ArrayList arrayList = new ArrayList(adCache.crids);
        if (adCache != null && arrayList.contains(baseAdUnit.getCrid())) {
            arrayList.remove(baseAdUnit.getCrid());
        }
        mapA.put(baseAdUnit.getadslot_id(), new AdCache(Integer.valueOf(baseAdUnit.getAd_type()), arrayList));
    }

    public void d(String str) {
        this.s = str;
    }

    public String e(String str) {
        return this.m.get(str);
    }

    public void e(BaseAdUnit baseAdUnit) {
        if (baseAdUnit == null || TextUtils.isEmpty(baseAdUnit.getCrid()) || TextUtils.isEmpty(baseAdUnit.getadslot_id())) {
            return;
        }
        Map<String, AdCache> mapA = a(baseAdUnit.getAd_type());
        if ((mapA == null || mapA.size() <= 29) && mapA != null) {
            AdCache adCache = mapA.get(baseAdUnit.getadslot_id());
            ArrayList arrayList = new ArrayList();
            arrayList.add(baseAdUnit.getCrid());
            if (adCache != null) {
                arrayList.addAll(adCache.crids);
            }
            mapA.put(baseAdUnit.getadslot_id(), new AdCache(Integer.valueOf(baseAdUnit.getAd_type()), arrayList));
        }
    }

    public String k() {
        return this.r;
    }

    public String l() {
        return this.s;
    }
}
