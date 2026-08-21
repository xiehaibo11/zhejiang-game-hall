package android.support.v4.graphics;

import android.content.Context;
import android.graphics.Typeface;
import android.os.CancellationSignal;
import android.os.ParcelFileDescriptor;
import android.support.annotation.NonNull;
import android.support.annotation.RequiresApi;
import android.support.annotation.RestrictTo;
import android.support.v4.provider.FontsContractCompat;
import android.system.ErrnoException;
import android.system.Os;
import android.system.OsConstants;
import com.qihoo360.replugin.RePlugin;
import com.qihoo360.replugin.loader.p.PluginProviderClient;
import java.io.File;
import java.io.FileInputStream;
import java.io.IOException;

@RequiresApi(21)
@RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
class TypefaceCompatApi21Impl extends TypefaceCompatBaseImpl {
    private static final String TAG = "TypefaceCompatApi21Impl";

    TypefaceCompatApi21Impl() {
    }

    private File getFile(ParcelFileDescriptor r4) {
        String r42 = Os.readlink("/proc/self/fd/" + r4.getFd());     // Catch: ErrnoException -> L8
        if (OsConstants.S_ISREG(Os.stat(r42).st_mode) == false) goto L7;
        return new File(r42);
    L7:
        return null;
    }

    @Override
    public Typeface createFromFontInfo(Context r5, CancellationSignal r6, @NonNull FontsContractCompat.FontInfo[] r7, int r8) {
        if (r7.length >= 1) goto L5;
        return null;
    L5:
        FontsContractCompat.FontInfo r72 = findBestInfo(r7, r8);
        r5.getContentResolver();
        ParcelFileDescriptor r62 = PluginProviderClient.openFileDescriptor(RePlugin.getPluginContext(), r72.getUri(), "r", r6);     // Catch: IOException -> L49
        File r73 = getFile(r62);     // Catch: Throwable -> L35 Throwable -> L37
        if (r73 != null) goto L10;
    L16:
        FileInputStream r74 = new FileInputStream(r62.getFileDescriptor());     // Catch: Throwable -> L35 Throwable -> L37
        Typeface r52 = super.createFromInputStream(r5, r74);     // Catch: Throwable -> L22 Throwable -> L24
        r74.close();     // Catch: Throwable -> L35 Throwable -> L37
        if (r62 == null) goto L21;
        r62.close();     // Catch: IOException -> L49
    L21:
        return r52;
    L24:
        th = move-exception;
        throw th;     // Catch: Throwable -> L26
    L26:
        th = move-exception;
        Throwable r82 = th;
        th = th;
    L28:
        if (r82 != null) goto L56;
        r74.close();     // Catch: Throwable -> L35 Throwable -> L37
        throw th;     // Catch: Throwable -> L35 Throwable -> L37
    L56:
        r74.close();     // Catch: Throwable -> L31 Throwable -> L35
        throw th;     // Catch: Throwable -> L35 Throwable -> L37
    L31:
        th = move-exception;
        r82.addSuppressed(th);     // Catch: Throwable -> L35 Throwable -> L37
        throw th;     // Catch: Throwable -> L35 Throwable -> L37
    L22:
        th = th;
        r82 = null;
        goto L28
    L10:
        if (r73.canRead() == false) goto L16;
        Typeface r53 = Typeface.createFromFile(r73);     // Catch: Throwable -> L35 Throwable -> L37
        if (r62 == null) goto L15;
        r62.close();     // Catch: IOException -> L49
    L15:
        return r53;
    L35:
        Throwable th = th;
        Throwable r75 = null;
    L41:
        if (r62 == null) goto L64;
        if (r75 != null) goto L54;
        r62.close();     // Catch: IOException -> L49
        throw th;     // Catch: IOException -> L49
    L54:
        r62.close();     // Catch: Throwable -> L45 IOException -> L49
    L66:
        throw th;     // Catch: IOException -> L49
    L45:
        th = move-exception;
        r75.addSuppressed(th);     // Catch: IOException -> L49
        throw th;     // Catch: IOException -> L49
    L64:
        throw th;     // Catch: IOException -> L49
    L37:
        th = move-exception;
        throw th;     // Catch: Throwable -> L39
    L39:
        th = move-exception;
        r75 = th;
        th = th;
    L49:
        return null;
    }
}
