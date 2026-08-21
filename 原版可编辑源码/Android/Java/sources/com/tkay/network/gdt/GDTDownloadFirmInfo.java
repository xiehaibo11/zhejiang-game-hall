package com.tkay.network.gdt;

import com.qq.e.comm.compliance.DownloadConfirmCallBack;
import com.tkay.core.api.TYNetworkConfirmInfo;

public class GDTDownloadFirmInfo extends TYNetworkConfirmInfo {
    public String appInfoUrl;
    public DownloadConfirmCallBack confirmCallBack;
    public int scenes;
}
