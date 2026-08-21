package android.support.v4.content;

import android.content.ContentResolver;
import android.content.Context;
import android.database.Cursor;
import android.net.Uri;
import android.os.Build;
import android.os.OperationCanceledException;
import android.support.v4.os.CancellationSignal;
import com.qihoo360.replugin.RePlugin;
import com.qihoo360.replugin.loader.p.PluginProviderClient;

public final class ContentResolverCompat {
    private ContentResolverCompat() {
    }

    public static Cursor query(ContentResolver r7, Uri r8, String[] r9, String r10, String[] r11, String r12, CancellationSignal r13) {
        if (Build.VERSION.SDK_INT < 16) goto L16;
        if (r13 != null) goto L20;
        Object r72 = null;
    L9:
        Context r0 = RePlugin.getPluginContext();     // Catch: Exception -> L6
        return PluginProviderClient.query(r0, r8, r9, r10, r11, r12, (android.os.CancellationSignal) r72);
    L6:
        e = move-exception;
        if ((e instanceof OperationCanceledException) == true) goto L14;
        throw e;
    L14:
        throw new android.support.v4.os.OperationCanceledException();
    L20:
        r72 = r13.getCancellationSignalObject();     // Catch: Exception -> L6
        goto L9
    L16:
        if (r13 == null) goto L19;
        r13.throwIfCanceled();
    L19:
        return PluginProviderClient.query(RePlugin.getPluginContext(), r8, r9, r10, r11, r12);
    }
}
