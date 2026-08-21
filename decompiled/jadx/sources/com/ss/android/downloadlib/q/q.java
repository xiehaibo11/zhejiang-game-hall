package com.ss.android.downloadlib.q;

import com.ss.android.download.api.config.oh;
import com.ss.android.downloadad.api.constant.AdBaseConstants;
import com.ss.android.downloadlib.addownload.bm;
import com.ss.android.downloadlib.utils.b;
import com.ss.android.socialbase.downloader.depend.IDownloadCompleteHandler;
import com.ss.android.socialbase.downloader.exception.BaseException;
import com.ss.android.socialbase.downloader.model.DownloadInfo;
import com.ss.android.socialbase.downloader.setting.DownloadSetting;
import com.tkay.china.common.a.a;
import java.io.File;

/* JADX INFO: loaded from: classes3.dex */
public class q implements IDownloadCompleteHandler {
    @Override // com.ss.android.socialbase.downloader.depend.IDownloadCompleteHandler
    public void handle(DownloadInfo downloadInfo) throws BaseException {
        oh ohVarBm = bm.bm();
        if (downloadInfo == null || ohVarBm == null) {
            return;
        }
        String packageName = downloadInfo.getPackageName();
        String targetFilePath = downloadInfo.getTargetFilePath();
        File fileRg = rg(packageName, targetFilePath);
        com.ss.android.downloadad.api.rg.df dfVarRg = com.ss.android.downloadlib.addownload.model.c.rg().rg(downloadInfo);
        ohVarBm.rg(packageName, targetFilePath, fileRg, dfVarRg != null ? b.rg(dfVarRg.fw()) : null);
        downloadInfo.setMimeType(AdBaseConstants.MIME_APK);
        downloadInfo.setName(fileRg.getName());
        downloadInfo.setMd5(null);
    }

    @Override // com.ss.android.socialbase.downloader.depend.IDownloadCompleteHandler
    public boolean needHandle(DownloadInfo downloadInfo) {
        if (downloadInfo != null) {
            return com.ss.android.download.api.q.df.rg(DownloadSetting.obtain(downloadInfo.getId()), downloadInfo.getMimeType());
        }
        return false;
    }

    private File rg(String str, String str2) {
        File file = new File(str2);
        String name = file.getName();
        int iLastIndexOf = name.lastIndexOf(46);
        if (iLastIndexOf > 0) {
            str = name.substring(0, iLastIndexOf);
        }
        return new File(file.getParent(), str + a.g);
    }
}
