package com.ymnsdk.replugin.patch.download;

import java.util.HashMap;
import java.util.Map;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
/* JADX INFO: loaded from: classes.dex */
public class DownloadCode {
    private static final Map<Code, String> mCodeMsg;

    /* JADX WARN: Classes with same name are omitted, all sources:
      classes.dex
      classes4.dex
     */
    public enum Code {
        ManualStop,
        Success,
        TaskIsDownloading,
        RequestFail,
        FileStatusSyncError,
        FileSyncReadStatusException,
        FileReadStreamException,
        FileIsBroken,
        FileVerifyHashFailed,
        FileVerifySizeFailed,
        FileRenameFailed,
        NetworkTimeout,
        NetworkUnreachable
    }

    static {
        HashMap map = new HashMap();
        mCodeMsg = map;
        map.put(Code.ManualStop, "5|代码控制暂停当前下载");
        mCodeMsg.put(Code.Success, "-1|下载成功");
        mCodeMsg.put(Code.TaskIsDownloading, "2|当前任务正在下载");
        mCodeMsg.put(Code.RequestFail, "4|断点续传：下载请求失败");
        mCodeMsg.put(Code.FileStatusSyncError, "5|断点续传：文件状态同步失败");
        mCodeMsg.put(Code.FileSyncReadStatusException, "5|断点续传：同步写文件状态出错");
        mCodeMsg.put(Code.FileReadStreamException, "4|断点续传：读写超时，socket超时");
        mCodeMsg.put(Code.FileIsBroken, "重新下载：文件损毁, 无法断点续传");
        mCodeMsg.put(Code.FileVerifyHashFailed, "3|重新下载：patch下载校验失败");
        mCodeMsg.put(Code.FileVerifySizeFailed, "1|重新下载：文件长度与服务器长度不一致");
        mCodeMsg.put(Code.FileRenameFailed, "5|文件重命名失败");
        mCodeMsg.put(Code.NetworkTimeout, "4|上层调用：网络连接超时");
        mCodeMsg.put(Code.NetworkUnreachable, "0|上层调用：无网络");
    }

    public static String translate(Code code) {
        return mCodeMsg.containsKey(code) ? mCodeMsg.get(code) : "Invalid Code!";
    }
}
