package com.ymnsdk.replugin.patch.download;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
public class DownloadCode {
    private static final java.util.Map<com.ymnsdk.replugin.patch.download.DownloadCode.Code, java.lang.String> mCodeMsg = null;

    /* JADX WARN: Classes with same name are omitted, all sources:
      classes.dex
      classes4.dex
     */
    public enum Code extends java.lang.Enum<com.ymnsdk.replugin.patch.download.DownloadCode.Code> {
        private static final com.ymnsdk.replugin.patch.download.DownloadCode.Code[] $VALUES = null;
        public static final com.ymnsdk.replugin.patch.download.DownloadCode.Code FileIsBroken = null;
        public static final com.ymnsdk.replugin.patch.download.DownloadCode.Code FileReadStreamException = null;
        public static final com.ymnsdk.replugin.patch.download.DownloadCode.Code FileRenameFailed = null;
        public static final com.ymnsdk.replugin.patch.download.DownloadCode.Code FileStatusSyncError = null;
        public static final com.ymnsdk.replugin.patch.download.DownloadCode.Code FileSyncReadStatusException = null;
        public static final com.ymnsdk.replugin.patch.download.DownloadCode.Code FileVerifyHashFailed = null;
        public static final com.ymnsdk.replugin.patch.download.DownloadCode.Code FileVerifySizeFailed = null;
        public static final com.ymnsdk.replugin.patch.download.DownloadCode.Code ManualStop = null;
        public static final com.ymnsdk.replugin.patch.download.DownloadCode.Code NetworkTimeout = null;
        public static final com.ymnsdk.replugin.patch.download.DownloadCode.Code NetworkUnreachable = null;
        public static final com.ymnsdk.replugin.patch.download.DownloadCode.Code RequestFail = null;
        public static final com.ymnsdk.replugin.patch.download.DownloadCode.Code Success = null;
        public static final com.ymnsdk.replugin.patch.download.DownloadCode.Code TaskIsDownloading = null;

        static {
                com.ymnsdk.replugin.patch.download.DownloadCode$Code r0 = new com.ymnsdk.replugin.patch.download.DownloadCode$Code
                r1 = 0
                java.lang.String r2 = "ManualStop"
                r0.<init>(r2, r1)
                com.ymnsdk.replugin.patch.download.DownloadCode.Code.ManualStop = r0
                com.ymnsdk.replugin.patch.download.DownloadCode$Code r0 = new com.ymnsdk.replugin.patch.download.DownloadCode$Code
                r2 = 1
                java.lang.String r3 = "Success"
                r0.<init>(r3, r2)
                com.ymnsdk.replugin.patch.download.DownloadCode.Code.Success = r0
                com.ymnsdk.replugin.patch.download.DownloadCode$Code r0 = new com.ymnsdk.replugin.patch.download.DownloadCode$Code
                r3 = 2
                java.lang.String r4 = "TaskIsDownloading"
                r0.<init>(r4, r3)
                com.ymnsdk.replugin.patch.download.DownloadCode.Code.TaskIsDownloading = r0
                com.ymnsdk.replugin.patch.download.DownloadCode$Code r0 = new com.ymnsdk.replugin.patch.download.DownloadCode$Code
                r4 = 3
                java.lang.String r5 = "RequestFail"
                r0.<init>(r5, r4)
                com.ymnsdk.replugin.patch.download.DownloadCode.Code.RequestFail = r0
                com.ymnsdk.replugin.patch.download.DownloadCode$Code r0 = new com.ymnsdk.replugin.patch.download.DownloadCode$Code
                r5 = 4
                java.lang.String r6 = "FileStatusSyncError"
                r0.<init>(r6, r5)
                com.ymnsdk.replugin.patch.download.DownloadCode.Code.FileStatusSyncError = r0
                com.ymnsdk.replugin.patch.download.DownloadCode$Code r0 = new com.ymnsdk.replugin.patch.download.DownloadCode$Code
                r6 = 5
                java.lang.String r7 = "FileSyncReadStatusException"
                r0.<init>(r7, r6)
                com.ymnsdk.replugin.patch.download.DownloadCode.Code.FileSyncReadStatusException = r0
                com.ymnsdk.replugin.patch.download.DownloadCode$Code r0 = new com.ymnsdk.replugin.patch.download.DownloadCode$Code
                r7 = 6
                java.lang.String r8 = "FileReadStreamException"
                r0.<init>(r8, r7)
                com.ymnsdk.replugin.patch.download.DownloadCode.Code.FileReadStreamException = r0
                com.ymnsdk.replugin.patch.download.DownloadCode$Code r0 = new com.ymnsdk.replugin.patch.download.DownloadCode$Code
                r8 = 7
                java.lang.String r9 = "FileIsBroken"
                r0.<init>(r9, r8)
                com.ymnsdk.replugin.patch.download.DownloadCode.Code.FileIsBroken = r0
                com.ymnsdk.replugin.patch.download.DownloadCode$Code r0 = new com.ymnsdk.replugin.patch.download.DownloadCode$Code
                r9 = 8
                java.lang.String r10 = "FileVerifyHashFailed"
                r0.<init>(r10, r9)
                com.ymnsdk.replugin.patch.download.DownloadCode.Code.FileVerifyHashFailed = r0
                com.ymnsdk.replugin.patch.download.DownloadCode$Code r0 = new com.ymnsdk.replugin.patch.download.DownloadCode$Code
                r10 = 9
                java.lang.String r11 = "FileVerifySizeFailed"
                r0.<init>(r11, r10)
                com.ymnsdk.replugin.patch.download.DownloadCode.Code.FileVerifySizeFailed = r0
                com.ymnsdk.replugin.patch.download.DownloadCode$Code r0 = new com.ymnsdk.replugin.patch.download.DownloadCode$Code
                r11 = 10
                java.lang.String r12 = "FileRenameFailed"
                r0.<init>(r12, r11)
                com.ymnsdk.replugin.patch.download.DownloadCode.Code.FileRenameFailed = r0
                com.ymnsdk.replugin.patch.download.DownloadCode$Code r0 = new com.ymnsdk.replugin.patch.download.DownloadCode$Code
                r12 = 11
                java.lang.String r13 = "NetworkTimeout"
                r0.<init>(r13, r12)
                com.ymnsdk.replugin.patch.download.DownloadCode.Code.NetworkTimeout = r0
                com.ymnsdk.replugin.patch.download.DownloadCode$Code r0 = new com.ymnsdk.replugin.patch.download.DownloadCode$Code
                r13 = 12
                java.lang.String r14 = "NetworkUnreachable"
                r0.<init>(r14, r13)
                com.ymnsdk.replugin.patch.download.DownloadCode.Code.NetworkUnreachable = r0
                r14 = 13
                com.ymnsdk.replugin.patch.download.DownloadCode$Code[] r14 = new com.ymnsdk.replugin.patch.download.DownloadCode.Code[r14]
                com.ymnsdk.replugin.patch.download.DownloadCode$Code r15 = com.ymnsdk.replugin.patch.download.DownloadCode.Code.ManualStop
                r14[r1] = r15
                com.ymnsdk.replugin.patch.download.DownloadCode$Code r1 = com.ymnsdk.replugin.patch.download.DownloadCode.Code.Success
                r14[r2] = r1
                com.ymnsdk.replugin.patch.download.DownloadCode$Code r1 = com.ymnsdk.replugin.patch.download.DownloadCode.Code.TaskIsDownloading
                r14[r3] = r1
                com.ymnsdk.replugin.patch.download.DownloadCode$Code r1 = com.ymnsdk.replugin.patch.download.DownloadCode.Code.RequestFail
                r14[r4] = r1
                com.ymnsdk.replugin.patch.download.DownloadCode$Code r1 = com.ymnsdk.replugin.patch.download.DownloadCode.Code.FileStatusSyncError
                r14[r5] = r1
                com.ymnsdk.replugin.patch.download.DownloadCode$Code r1 = com.ymnsdk.replugin.patch.download.DownloadCode.Code.FileSyncReadStatusException
                r14[r6] = r1
                com.ymnsdk.replugin.patch.download.DownloadCode$Code r1 = com.ymnsdk.replugin.patch.download.DownloadCode.Code.FileReadStreamException
                r14[r7] = r1
                com.ymnsdk.replugin.patch.download.DownloadCode$Code r1 = com.ymnsdk.replugin.patch.download.DownloadCode.Code.FileIsBroken
                r14[r8] = r1
                com.ymnsdk.replugin.patch.download.DownloadCode$Code r1 = com.ymnsdk.replugin.patch.download.DownloadCode.Code.FileVerifyHashFailed
                r14[r9] = r1
                com.ymnsdk.replugin.patch.download.DownloadCode$Code r1 = com.ymnsdk.replugin.patch.download.DownloadCode.Code.FileVerifySizeFailed
                r14[r10] = r1
                com.ymnsdk.replugin.patch.download.DownloadCode$Code r1 = com.ymnsdk.replugin.patch.download.DownloadCode.Code.FileRenameFailed
                r14[r11] = r1
                com.ymnsdk.replugin.patch.download.DownloadCode$Code r1 = com.ymnsdk.replugin.patch.download.DownloadCode.Code.NetworkTimeout
                r14[r12] = r1
                r14[r13] = r0
                com.ymnsdk.replugin.patch.download.DownloadCode.Code.$VALUES = r14
                return
        }

        Code(java.lang.String r1, int r2) {
                r0 = this;
                r0.<init>(r1, r2)
                return
        }

        public static com.ymnsdk.replugin.patch.download.DownloadCode.Code valueOf(java.lang.String r1) {
                java.lang.Class<com.ymnsdk.replugin.patch.download.DownloadCode$Code> r0 = com.ymnsdk.replugin.patch.download.DownloadCode.Code.class
                java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
                com.ymnsdk.replugin.patch.download.DownloadCode$Code r1 = (com.ymnsdk.replugin.patch.download.DownloadCode.Code) r1
                return r1
        }

        public static com.ymnsdk.replugin.patch.download.DownloadCode.Code[] values() {
                com.ymnsdk.replugin.patch.download.DownloadCode$Code[] r0 = com.ymnsdk.replugin.patch.download.DownloadCode.Code.$VALUES
                java.lang.Object r0 = r0.clone()
                com.ymnsdk.replugin.patch.download.DownloadCode$Code[] r0 = (com.ymnsdk.replugin.patch.download.DownloadCode.Code[]) r0
                return r0
        }
    }

    static {
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            com.ymnsdk.replugin.patch.download.DownloadCode.mCodeMsg = r0
            com.ymnsdk.replugin.patch.download.DownloadCode$Code r1 = com.ymnsdk.replugin.patch.download.DownloadCode.Code.ManualStop
            java.lang.String r2 = "5|代码控制暂停当前下载"
            r0.put(r1, r2)
            java.util.Map<com.ymnsdk.replugin.patch.download.DownloadCode$Code, java.lang.String> r0 = com.ymnsdk.replugin.patch.download.DownloadCode.mCodeMsg
            com.ymnsdk.replugin.patch.download.DownloadCode$Code r1 = com.ymnsdk.replugin.patch.download.DownloadCode.Code.Success
            java.lang.String r2 = "-1|下载成功"
            r0.put(r1, r2)
            java.util.Map<com.ymnsdk.replugin.patch.download.DownloadCode$Code, java.lang.String> r0 = com.ymnsdk.replugin.patch.download.DownloadCode.mCodeMsg
            com.ymnsdk.replugin.patch.download.DownloadCode$Code r1 = com.ymnsdk.replugin.patch.download.DownloadCode.Code.TaskIsDownloading
            java.lang.String r2 = "2|当前任务正在下载"
            r0.put(r1, r2)
            java.util.Map<com.ymnsdk.replugin.patch.download.DownloadCode$Code, java.lang.String> r0 = com.ymnsdk.replugin.patch.download.DownloadCode.mCodeMsg
            com.ymnsdk.replugin.patch.download.DownloadCode$Code r1 = com.ymnsdk.replugin.patch.download.DownloadCode.Code.RequestFail
            java.lang.String r2 = "4|断点续传：下载请求失败"
            r0.put(r1, r2)
            java.util.Map<com.ymnsdk.replugin.patch.download.DownloadCode$Code, java.lang.String> r0 = com.ymnsdk.replugin.patch.download.DownloadCode.mCodeMsg
            com.ymnsdk.replugin.patch.download.DownloadCode$Code r1 = com.ymnsdk.replugin.patch.download.DownloadCode.Code.FileStatusSyncError
            java.lang.String r2 = "5|断点续传：文件状态同步失败"
            r0.put(r1, r2)
            java.util.Map<com.ymnsdk.replugin.patch.download.DownloadCode$Code, java.lang.String> r0 = com.ymnsdk.replugin.patch.download.DownloadCode.mCodeMsg
            com.ymnsdk.replugin.patch.download.DownloadCode$Code r1 = com.ymnsdk.replugin.patch.download.DownloadCode.Code.FileSyncReadStatusException
            java.lang.String r2 = "5|断点续传：同步写文件状态出错"
            r0.put(r1, r2)
            java.util.Map<com.ymnsdk.replugin.patch.download.DownloadCode$Code, java.lang.String> r0 = com.ymnsdk.replugin.patch.download.DownloadCode.mCodeMsg
            com.ymnsdk.replugin.patch.download.DownloadCode$Code r1 = com.ymnsdk.replugin.patch.download.DownloadCode.Code.FileReadStreamException
            java.lang.String r2 = "4|断点续传：读写超时，socket超时"
            r0.put(r1, r2)
            java.util.Map<com.ymnsdk.replugin.patch.download.DownloadCode$Code, java.lang.String> r0 = com.ymnsdk.replugin.patch.download.DownloadCode.mCodeMsg
            com.ymnsdk.replugin.patch.download.DownloadCode$Code r1 = com.ymnsdk.replugin.patch.download.DownloadCode.Code.FileIsBroken
            java.lang.String r2 = "重新下载：文件损毁, 无法断点续传"
            r0.put(r1, r2)
            java.util.Map<com.ymnsdk.replugin.patch.download.DownloadCode$Code, java.lang.String> r0 = com.ymnsdk.replugin.patch.download.DownloadCode.mCodeMsg
            com.ymnsdk.replugin.patch.download.DownloadCode$Code r1 = com.ymnsdk.replugin.patch.download.DownloadCode.Code.FileVerifyHashFailed
            java.lang.String r2 = "3|重新下载：patch下载校验失败"
            r0.put(r1, r2)
            java.util.Map<com.ymnsdk.replugin.patch.download.DownloadCode$Code, java.lang.String> r0 = com.ymnsdk.replugin.patch.download.DownloadCode.mCodeMsg
            com.ymnsdk.replugin.patch.download.DownloadCode$Code r1 = com.ymnsdk.replugin.patch.download.DownloadCode.Code.FileVerifySizeFailed
            java.lang.String r2 = "1|重新下载：文件长度与服务器长度不一致"
            r0.put(r1, r2)
            java.util.Map<com.ymnsdk.replugin.patch.download.DownloadCode$Code, java.lang.String> r0 = com.ymnsdk.replugin.patch.download.DownloadCode.mCodeMsg
            com.ymnsdk.replugin.patch.download.DownloadCode$Code r1 = com.ymnsdk.replugin.patch.download.DownloadCode.Code.FileRenameFailed
            java.lang.String r2 = "5|文件重命名失败"
            r0.put(r1, r2)
            java.util.Map<com.ymnsdk.replugin.patch.download.DownloadCode$Code, java.lang.String> r0 = com.ymnsdk.replugin.patch.download.DownloadCode.mCodeMsg
            com.ymnsdk.replugin.patch.download.DownloadCode$Code r1 = com.ymnsdk.replugin.patch.download.DownloadCode.Code.NetworkTimeout
            java.lang.String r2 = "4|上层调用：网络连接超时"
            r0.put(r1, r2)
            java.util.Map<com.ymnsdk.replugin.patch.download.DownloadCode$Code, java.lang.String> r0 = com.ymnsdk.replugin.patch.download.DownloadCode.mCodeMsg
            com.ymnsdk.replugin.patch.download.DownloadCode$Code r1 = com.ymnsdk.replugin.patch.download.DownloadCode.Code.NetworkUnreachable
            java.lang.String r2 = "0|上层调用：无网络"
            r0.put(r1, r2)
            return
    }

    public DownloadCode() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.String translate(com.ymnsdk.replugin.patch.download.DownloadCode.Code r1) {
            java.util.Map<com.ymnsdk.replugin.patch.download.DownloadCode$Code, java.lang.String> r0 = com.ymnsdk.replugin.patch.download.DownloadCode.mCodeMsg
            boolean r0 = r0.containsKey(r1)
            if (r0 == 0) goto L11
            java.util.Map<com.ymnsdk.replugin.patch.download.DownloadCode$Code, java.lang.String> r0 = com.ymnsdk.replugin.patch.download.DownloadCode.mCodeMsg
            java.lang.Object r1 = r0.get(r1)
            java.lang.String r1 = (java.lang.String) r1
            return r1
        L11:
            java.lang.String r1 = "Invalid Code!"
            return r1
    }
}
