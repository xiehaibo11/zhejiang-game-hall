package com.mbridge.msdk.foundation.download.download;

import android.webkit.URLUtil;
import com.mbridge.msdk.MBridgeConstans;
import com.mbridge.msdk.foundation.download.download.H5DownLoadManager;
import com.mbridge.msdk.foundation.same.e.a;
import com.mbridge.msdk.foundation.tools.ai;

/* JADX INFO: loaded from: classes2.dex */
public class DownLoadUtils {
    private static final int DOWNLOAD_CONNECTION_TIME_OUT = 20000;
    private static final int DOWNLOAD_READ_TIME_OUT = 30000;
    public static final String END_TAG = "<mbridgeloadend></mbridgeloadend>";
    private static final String TAG = "DownLoadUtils";

    public static void getSourceCodeFromNetUrl(final String str, final H5DownLoadManager.IOnDownLoadH5Source iOnDownLoadH5Source, final boolean z) {
        try {
            if (!ai.a(str) && URLUtil.isNetworkUrl(str)) {
                DownloadTask.getInstance().runTask(new a() { // from class: com.mbridge.msdk.foundation.download.download.DownLoadUtils.1
                    @Override // com.mbridge.msdk.foundation.same.e.a
                    public final void cancelTask() {
                    }

                    @Override // com.mbridge.msdk.foundation.same.e.a
                    public final void pauseTask(boolean z2) {
                    }

                    /* JADX WARN: Can't wrap try/catch for region: R(13:0|2|(4:113|3|(1:5)|6)|(8:8|9|115|10|(9:109|11|(1:13)(1:117)|47|(1:49)|(1:53)|(3:103|57|(1:(2:75|(1:77))(2:72|(1:74)))(1:62))(0)|102|88)|14|(4:16|100|17|(1:19)(1:21))(1:24)|25)(2:32|33)|107|34|(1:36)|(1:38)|39|(0)(0)|102|88|(1:(0))) */
                    /* JADX WARN: Code restructure failed: missing block: B:40:0x00a7, code lost:
                    
                        r3 = e;
                     */
                    /* JADX WARN: Multi-variable type inference failed */
                    /* JADX WARN: Removed duplicated region for block: B:103:0x00e5 A[EXC_TOP_SPLITTER, SYNTHETIC] */
                    /* JADX WARN: Removed duplicated region for block: B:111:0x0151 A[EXC_TOP_SPLITTER, SYNTHETIC] */
                    /* JADX WARN: Removed duplicated region for block: B:49:0x00d0 A[Catch: Exception -> 0x00d4, TRY_ENTER, TryCatch #10 {Exception -> 0x00d4, blocks: (B:36:0x009d, B:38:0x00a2, B:49:0x00d0, B:53:0x00d8), top: B:113:0x0004 }] */
                    /* JADX WARN: Removed duplicated region for block: B:53:0x00d8 A[Catch: Exception -> 0x00d4, TRY_LEAVE, TryCatch #10 {Exception -> 0x00d4, blocks: (B:36:0x009d, B:38:0x00a2, B:49:0x00d0, B:53:0x00d8), top: B:113:0x0004 }] */
                    /* JADX WARN: Removed duplicated region for block: B:65:0x00f8  */
                    /* JADX WARN: Removed duplicated region for block: B:96:0x0159 A[Catch: Exception -> 0x0155, TRY_LEAVE, TryCatch #8 {Exception -> 0x0155, blocks: (B:92:0x0151, B:96:0x0159), top: B:111:0x0151 }] */
                    /* JADX WARN: Type inference failed for: r0v19, types: [com.mbridge.msdk.foundation.download.download.H5DownLoadManager$IOnDownLoadH5Source] */
                    /* JADX WARN: Type inference failed for: r6v0 */
                    /* JADX WARN: Type inference failed for: r6v1 */
                    /* JADX WARN: Type inference failed for: r6v10 */
                    /* JADX WARN: Type inference failed for: r6v11, types: [java.io.ByteArrayOutputStream] */
                    /* JADX WARN: Type inference failed for: r6v12 */
                    /* JADX WARN: Type inference failed for: r6v13 */
                    /* JADX WARN: Type inference failed for: r6v2, types: [java.io.ByteArrayOutputStream] */
                    /* JADX WARN: Type inference failed for: r6v3 */
                    /* JADX WARN: Type inference failed for: r6v4 */
                    /* JADX WARN: Type inference failed for: r6v5, types: [java.io.ByteArrayOutputStream] */
                    /* JADX WARN: Type inference failed for: r6v8 */
                    /* JADX WARN: Type inference failed for: r6v9, types: [java.io.ByteArrayOutputStream] */
                    /* JADX WARN: Type inference failed for: r7v0 */
                    /* JADX WARN: Type inference failed for: r7v1 */
                    /* JADX WARN: Type inference failed for: r7v14 */
                    /* JADX WARN: Type inference failed for: r7v2, types: [java.lang.String] */
                    /* JADX WARN: Type inference failed for: r7v3 */
                    /* JADX WARN: Type inference failed for: r7v4 */
                    /* JADX WARN: Type inference failed for: r7v5 */
                    /* JADX WARN: Type inference failed for: r7v9 */
                    /* JADX WARN: Type inference fix 'apply assigned field type' failed
                    java.lang.UnsupportedOperationException: ArgType.getObject(), call class: class jadx.core.dex.instructions.args.ArgType$UnknownArg
                    	at jadx.core.dex.instructions.args.ArgType.getObject(ArgType.java:593)
                    	at jadx.core.dex.attributes.nodes.ClassTypeVarsAttr.getTypeVarsMapFor(ClassTypeVarsAttr.java:35)
                    	at jadx.core.dex.nodes.utils.TypeUtils.replaceClassGenerics(TypeUtils.java:177)
                    	at jadx.core.dex.visitors.typeinference.FixTypesVisitor.insertExplicitUseCast(FixTypesVisitor.java:397)
                    	at jadx.core.dex.visitors.typeinference.FixTypesVisitor.tryFieldTypeWithNewCasts(FixTypesVisitor.java:359)
                    	at jadx.core.dex.visitors.typeinference.FixTypesVisitor.applyFieldType(FixTypesVisitor.java:309)
                    	at jadx.core.dex.visitors.typeinference.FixTypesVisitor.visit(FixTypesVisitor.java:94)
                     */
                    @Override // com.mbridge.msdk.foundation.same.e.a
                    /*
                        Code decompiled incorrectly, please refer to instructions dump.
                        To view partially-correct add '--show-bad-code' argument
                    */
                    public final void runTask() throws java.lang.Throwable {
                        /*
                            Method dump skipped, instruction units count: 356
                            To view this dump add '--comments-level debug' option
                        */
                        throw new UnsupportedOperationException("Method not decompiled: com.mbridge.msdk.foundation.download.download.DownLoadUtils.AnonymousClass1.runTask():void");
                    }
                });
                return;
            }
            if (iOnDownLoadH5Source != null) {
                iOnDownLoadH5Source.onFailed("url is error");
            }
        } catch (Throwable th) {
            if (MBridgeConstans.DEBUG) {
                th.printStackTrace();
            }
        }
    }
}
