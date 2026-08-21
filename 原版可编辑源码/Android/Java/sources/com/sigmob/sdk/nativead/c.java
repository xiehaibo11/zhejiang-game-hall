package com.sigmob.sdk.nativead;

import android.os.Bundle;
import com.czhj.volley.toolbox.DownloadItem;
import com.czhj.volley.toolbox.FileDownloadRequest;
import com.czhj.volley.toolbox.FileDownloader;
import com.sigmob.sdk.base.common.AdActivity;
import com.sigmob.sdk.base.common.m;
import com.sigmob.sdk.base.models.BaseAdUnit;
import com.sigmob.sdk.base.models.rtb.MaterialMeta;
import com.sigmob.sdk.videoAd.BaseAdActivity;
import java.io.File;
import java.util.Map;

public class c extends com.sigmob.sdk.base.common.v {
    private NativeAdBroadcastReceiver d;

    interface a extends m.b, m.c {
        void c();

        void d();

        void e();
    }

    protected c(m.b bVar) {
        super(bVar);
    }

    private static boolean a(MaterialMeta materialMeta) {
        return true;
    }

    @Override
    protected void a(m.b bVar) {
        File adPrivacyTemplateFile = this.c.getAdPrivacyTemplateFile();
        if (adPrivacyTemplateFile == null || adPrivacyTemplateFile.exists()) {
            return;
        }
        DownloadItem downloadItem = new DownloadItem();
        downloadItem.url = this.c.getadPrivacy().privacy_template_url;
        downloadItem.filePath = adPrivacyTemplateFile.getAbsolutePath();
        downloadItem.type = DownloadItem.FileType.OTHER;
        FileDownloader fileDownloaderA = com.sigmob.sdk.base.common.p.a();
        if (fileDownloaderA != null) {
            fileDownloaderA.add(downloadItem, new FileDownloadRequest.FileDownloadListener() {
                @Override
                public void downloadProgress(DownloadItem downloadItem2, long j, long j2) {
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

    @Override
    public void a(BaseAdUnit baseAdUnit, Bundle bundle) {
        super.a(baseAdUnit, bundle);
        AdActivity.a(com.sigmob.sdk.b.b(), AdActivity.class, this.a, bundle, BaseAdActivity.e);
    }

    @Override
    public void a(Map<String, Object> map, BaseAdUnit baseAdUnit) {
        super.a(map, baseAdUnit);
        if (this.d == null && (this.b instanceof a)) {
            NativeAdBroadcastReceiver nativeAdBroadcastReceiver = new NativeAdBroadcastReceiver((a) this.b, this.a);
            this.d = nativeAdBroadcastReceiver;
            nativeAdBroadcastReceiver.a(nativeAdBroadcastReceiver);
        }
    }

    @Override
    protected boolean a(BaseAdUnit baseAdUnit) {
        if (baseAdUnit.getMaterial() != null) {
            return a(baseAdUnit.getMaterial());
        }
        return false;
    }

    @Override
    public void b(BaseAdUnit baseAdUnit) {
        super.b(baseAdUnit);
    }
}
