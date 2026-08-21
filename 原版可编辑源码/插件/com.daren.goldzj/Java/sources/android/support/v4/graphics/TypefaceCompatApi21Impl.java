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

    private File getFile(ParcelFileDescriptor parcelFileDescriptor) {
        try {
            String str = Os.readlink("/proc/self/fd/" + parcelFileDescriptor.getFd());
            if (OsConstants.S_ISREG(Os.stat(str).st_mode)) {
                return new File(str);
            }
        } catch (ErrnoException unused) {
        }
        return null;
    }

    /* JADX WARN: Removed duplicated region for block: B:33:0x005c A[Catch: all -> 0x0060, Throwable -> 0x0063, TryCatch #1 {all -> 0x0060, blocks: (B:7:0x001b, B:9:0x0021, B:12:0x0028, B:16:0x0032, B:18:0x003f, B:29:0x0053, B:34:0x005f, B:33:0x005c, B:32:0x0058), top: B:50:0x001b }] */
    /* JADX WARN: Removed duplicated region for block: B:42:0x006b  */
    /* JADX WARN: Removed duplicated region for block: B:56:0x0053 A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:64:? A[Catch: IOException -> 0x007a, SYNTHETIC, TRY_LEAVE, TryCatch #2 {IOException -> 0x007a, blocks: (B:6:0x000d, B:14:0x002e, B:20:0x0044, B:43:0x006d, B:47:0x0076, B:46:0x0072, B:48:0x0079), top: B:51:0x000d, inners: #4 }] */
    @Override
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public Typeface createFromFontInfo(Context context, CancellationSignal cancellationSignal, @NonNull FontsContractCompat.FontInfo[] fontInfoArr, int i) throws Throwable {
        Throwable th;
        Throwable th2;
        Throwable th3;
        if (fontInfoArr.length < 1) {
            return null;
        }
        FontsContractCompat.FontInfo fontInfoFindBestInfo = findBestInfo(fontInfoArr, i);
        context.getContentResolver();
        try {
            ParcelFileDescriptor parcelFileDescriptorOpenFileDescriptor = PluginProviderClient.openFileDescriptor(RePlugin.getPluginContext(), fontInfoFindBestInfo.getUri(), "r", cancellationSignal);
            try {
                try {
                    File file = getFile(parcelFileDescriptorOpenFileDescriptor);
                    if (file != null && file.canRead()) {
                        Typeface typefaceCreateFromFile = Typeface.createFromFile(file);
                        if (parcelFileDescriptorOpenFileDescriptor != null) {
                            parcelFileDescriptorOpenFileDescriptor.close();
                        }
                        return typefaceCreateFromFile;
                    }
                    FileInputStream fileInputStream = new FileInputStream(parcelFileDescriptorOpenFileDescriptor.getFileDescriptor());
                    try {
                        Typeface typefaceCreateFromInputStream = super.createFromInputStream(context, fileInputStream);
                        fileInputStream.close();
                        if (parcelFileDescriptorOpenFileDescriptor != null) {
                            parcelFileDescriptorOpenFileDescriptor.close();
                        }
                        return typefaceCreateFromInputStream;
                    } catch (Throwable th4) {
                        th = th4;
                        th3 = null;
                        if (th3 != null) {
                        }
                    }
                } catch (Throwable th5) {
                    th2 = th5;
                    th = null;
                    if (parcelFileDescriptorOpenFileDescriptor != null) {
                        throw th2;
                    }
                    if (th == null) {
                        parcelFileDescriptorOpenFileDescriptor.close();
                        throw th2;
                    }
                    try {
                        parcelFileDescriptorOpenFileDescriptor.close();
                        throw th2;
                    } catch (Throwable th6) {
                        th.addSuppressed(th6);
                        throw th2;
                    }
                }
            } catch (Throwable th7) {
                try {
                    throw th7;
                } catch (Throwable th8) {
                    th = th7;
                    th2 = th8;
                    if (parcelFileDescriptorOpenFileDescriptor != null) {
                    }
                }
            }
        } catch (IOException unused) {
            return null;
        }
    }
}
