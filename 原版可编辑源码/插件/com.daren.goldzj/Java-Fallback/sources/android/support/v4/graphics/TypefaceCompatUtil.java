package android.support.v4.graphics;

import android.content.Context;
import android.content.res.Resources;
import android.net.Uri;
import android.os.CancellationSignal;
import android.os.ParcelFileDescriptor;
import android.os.Process;
import android.os.StrictMode;
import android.support.annotation.Nullable;
import android.support.annotation.RequiresApi;
import android.support.annotation.RestrictTo;
import android.util.Log;
import com.qihoo360.replugin.RePlugin;
import com.qihoo360.replugin.loader.p.PluginProviderClient;
import java.io.Closeable;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.InputStream;
import java.nio.ByteBuffer;
import java.nio.MappedByteBuffer;
import java.nio.channels.FileChannel;

@RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
public class TypefaceCompatUtil {
    private static final String CACHE_FILE_PREFIX = ".font";
    private static final String TAG = "TypefaceCompatUtil";

    private TypefaceCompatUtil() {
    }

    @Nullable
    public static File getTempFile(Context r5) {
        String r0 = CACHE_FILE_PREFIX + Process.myPid() + "-" + Process.myTid() + "-";
        int r1 = 0;
    L4:
        if (r1 >= 100) goto L10;
        File r2 = new File(r5.getCacheDir(), r0 + r1);
        if (r2.createNewFile() == false) goto L9;
        return r2;
    L9:
        r1 = r1 + 1;
        goto L4
    L10:
        return null;
    }

    @RequiresApi(19)
    @Nullable
    private static ByteBuffer mmap(File r9) {
        FileInputStream r1 = new FileInputStream(r9);     // Catch: IOException -> L20
        FileChannel r2 = r1.getChannel();     // Catch: Throwable -> L7 Throwable -> L9
        MappedByteBuffer r92 = r2.map(FileChannel.MapMode.READ_ONLY, 0, r2.size());     // Catch: Throwable -> L7 Throwable -> L9
        r1.close();     // Catch: IOException -> L20
        return r92;
    L9:
        th = move-exception;
        throw th;     // Catch: Throwable -> L11
    L11:
        th = move-exception;
        Throwable r22 = th;
        th = th;
    L13:
        if (r22 != null) goto L22;
        r1.close();     // Catch: IOException -> L20
        throw th;     // Catch: IOException -> L20
    L22:
        r1.close();     // Catch: Throwable -> L16 IOException -> L20
    L29:
        throw th;     // Catch: IOException -> L20
    L16:
        th = move-exception;
        r22.addSuppressed(th);     // Catch: IOException -> L20
        throw th;     // Catch: IOException -> L20
    L7:
        th = th;
        r22 = null;
    L20:
        return null;
    }

    @RequiresApi(19)
    @Nullable
    public static ByteBuffer mmap(Context r8, CancellationSignal r9, Uri r10) {
        r8.getContentResolver();
        ParcelFileDescriptor r92 = PluginProviderClient.openFileDescriptor(RePlugin.getPluginContext(), r10, "r", r9);     // Catch: IOException -> L41
        if (r92 != null) goto L42;
        if (r92 == null) goto L7;
        r92.close();     // Catch: IOException -> L41
    L7:
        return null;
    L42:
        FileInputStream r102 = new FileInputStream(r92.getFileDescriptor());     // Catch: Throwable -> L27 Throwable -> L29
        FileChannel r1 = r102.getChannel();     // Catch: Throwable -> L14 Throwable -> L16
        MappedByteBuffer r0 = r1.map(FileChannel.MapMode.READ_ONLY, 0, r1.size());     // Catch: Throwable -> L14 Throwable -> L16
        r102.close();     // Catch: Throwable -> L27 Throwable -> L29
        if (r92 == null) goto L13;
        r92.close();     // Catch: IOException -> L41
    L13:
        return r0;
    L16:
        th = move-exception;
        throw th;     // Catch: Throwable -> L18
    L18:
        th = move-exception;
        Throwable r12 = th;
        th = th;
    L20:
        if (r12 != null) goto L48;
        r102.close();     // Catch: Throwable -> L27 Throwable -> L29
        throw th;     // Catch: Throwable -> L27 Throwable -> L29
    L48:
        r102.close();     // Catch: Throwable -> L23 Throwable -> L27
        throw th;     // Catch: Throwable -> L27 Throwable -> L29
    L23:
        th = move-exception;
        r12.addSuppressed(th);     // Catch: Throwable -> L27 Throwable -> L29
        throw th;     // Catch: Throwable -> L27 Throwable -> L29
    L14:
        th = th;
        r12 = null;
    L27:
        Throwable th = th;
        Throwable r02 = null;
    L33:
        if (r92 == null) goto L56;
        if (r02 != null) goto L46;
        r92.close();     // Catch: IOException -> L41
        throw th;     // Catch: IOException -> L41
    L46:
        r92.close();     // Catch: Throwable -> L37 IOException -> L41
    L58:
        throw th;     // Catch: IOException -> L41
    L37:
        th = move-exception;
        r02.addSuppressed(th);     // Catch: IOException -> L41
        throw th;     // Catch: IOException -> L41
    L56:
        throw th;     // Catch: IOException -> L41
    L29:
        th = move-exception;
        throw th;     // Catch: Throwable -> L31
    L31:
        th = move-exception;
        r02 = th;
        th = th;
    L41:
        return null;
    }

    @RequiresApi(19)
    @Nullable
    public static ByteBuffer copyToDirectBuffer(Context r1, Resources r2, int r3) {
        File r12 = getTempFile(r1);
        if (r12 != null) goto L15;
        return null;
    L15:
    L12:
        th = move-exception;
        r12.delete();
        throw th;
    L6:
        if (copyToFile(r12, r2, r3) == true) goto L9;
        r12.delete();
        return null;
    L9:
        ByteBuffer r22 = mmap(r12);     // Catch: Throwable -> L12
        r12.delete();
        return r22;
    }

    public static boolean copyToFile(File r5, InputStream r6) {
        StrictMode.ThreadPolicy r0 = StrictMode.allowThreadDiskWrites();
        FileOutputStream r2 = null;
        FileOutputStream r3 = new FileOutputStream(r5, false);     // Catch: Throwable -> L16 IOException -> L18
        byte[] r52 = new byte[1024];     // Catch: Throwable -> L12 IOException -> L14
    L6:
        int r22 = r6.read(r52);     // Catch: Throwable -> L12 IOException -> L14
        if (r22 == (-1)) goto L10;
        r3.write(r52, 0, r22);     // Catch: Throwable -> L12 IOException -> L14
        goto L6
    L10:
        closeQuietly(r3);
        StrictMode.setThreadPolicy(r0);
        return true;
    L14:
        e = e;
        r2 = r3;
    L19:
        Log.e(TAG, "Error copying resource contents to temp file: " + e.getMessage());     // Catch: Throwable -> L16
        closeQuietly(r2);
        StrictMode.setThreadPolicy(r0);
        return false;
    L12:
        th = th;
        r2 = r3;
    L22:
        closeQuietly(r2);
        StrictMode.setThreadPolicy(r0);
        throw th;
    L18:
        e = e;
    L16:
        th = th;
        goto L22
    }

    public static boolean copyToFile(File r0, Resources r1, int r2) {
        InputStream r12 = r1.openRawResource(r2);     // Catch: Throwable -> L8
        boolean r02 = copyToFile(r0, r12);     // Catch: Throwable -> L6
        closeQuietly(r12);
        return r02;
    L6:
        th = th;
    L10:
        closeQuietly(r12);
        throw th;
    L8:
        th = th;
        r12 = null;
        goto L10
    }

    public static void closeQuietly(Closeable r0) {
        if (r0 == null) goto L8;
        r0.close();     // Catch: IOException -> L5
        return;
    L9:
        return;
    }
}
