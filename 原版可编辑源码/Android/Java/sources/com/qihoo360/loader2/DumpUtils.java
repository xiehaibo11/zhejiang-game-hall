package com.qihoo360.loader2;

import android.os.IBinder;
import android.util.Log;
import com.qihoo360.loader2.IPluginHost;
import com.qihoo360.replugin.RePluginInternal;
import java.io.FileDescriptor;
import java.io.PrintWriter;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public class DumpUtils {
    private static final String TAG;

    static {
        TAG = RePluginInternal.FOR_DEV ? DumpUtils.class.getSimpleName() : "DumpUtils";
    }

    public static void dump(FileDescriptor fileDescriptor, PrintWriter printWriter, String[] strArr) {
        IBinder iBinderProxyFetchHostBinder = PluginProviderStub.proxyFetchHostBinder(RePluginInternal.getAppContext());
        if (iBinderProxyFetchHostBinder == null) {
            return;
        }
        try {
            String strDump = IPluginHost.Stub.asInterface(iBinderProxyFetchHostBinder).dump();
            if (RePluginInternal.FOR_DEV) {
                Log.d(TAG, "dumpInfo:" + strDump);
            }
            if (printWriter != null) {
                printWriter.println(strDump);
            }
        } catch (Throwable th) {
            th.printStackTrace();
        }
    }
}
