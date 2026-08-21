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
    public static File getTempFile(Context context) {
        String str = CACHE_FILE_PREFIX + Process.myPid() + "-" + Process.myTid() + "-";
        for (int i = 0; i < 100; i++) {
            File file = new File(context.getCacheDir(), str + i);
            if (file.createNewFile()) {
                return file;
            }
        }
        return null;
    }

    /* JADX WARN: Removed duplicated region for block: B:18:0x002e A[Catch: IOException -> 0x0032, TryCatch #1 {IOException -> 0x0032, blocks: (B:3:0x0001, B:5:0x0016, B:14:0x0025, B:19:0x0031, B:18:0x002e, B:17:0x002a), top: B:21:0x0001, inners: #3 }] */
    /* JADX WARN: Removed duplicated region for block: B:22:0x0025 A[EXC_TOP_SPLITTER, SYNTHETIC] */
    @RequiresApi(19)
    @Nullable
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private static ByteBuffer mmap(File file) throws Throwable {
        Throwable th;
        try {
            FileInputStream fileInputStream = new FileInputStream(file);
            try {
                FileChannel channel = fileInputStream.getChannel();
                MappedByteBuffer map = channel.map(FileChannel.MapMode.READ_ONLY, 0L, channel.size());
                fileInputStream.close();
                return map;
            } catch (Throwable th2) {
                th = th2;
                th = null;
                if (th != null) {
                }
            }
        } catch (IOException unused) {
            return null;
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:25:0x004c A[Catch: all -> 0x0050, Throwable -> 0x0053, TryCatch #1 {all -> 0x0050, blocks: (B:8:0x0016, B:10:0x002f, B:21:0x0043, B:26:0x004f, B:25:0x004c, B:24:0x0048), top: B:42:0x0016 }] */
    /* JADX WARN: Removed duplicated region for block: B:34:0x005b  */
    /* JADX WARN: Removed duplicated region for block: B:48:0x0043 A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:56:? A[Catch: IOException -> 0x006a, SYNTHETIC, TRY_LEAVE, TryCatch #2 {IOException -> 0x006a, blocks: (B:3:0x0004, B:6:0x0012, B:12:0x0034, B:35:0x005d, B:39:0x0066, B:38:0x0062, B:40:0x0069), top: B:43:0x0004, inners: #4 }] */
    @RequiresApi(19)
    @Nullable
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static ByteBuffer mmap(Context context, CancellationSignal cancellationSignal, Uri uri) throws Throwable {
        Throwable th;
        Throwable th2;
        Throwable th3;
        context.getContentResolver();
        try {
            ParcelFileDescriptor parcelFileDescriptorOpenFileDescriptor = PluginProviderClient.openFileDescriptor(RePlugin.getPluginContext(), uri, "r", cancellationSignal);
            if (parcelFileDescriptorOpenFileDescriptor == null) {
                if (parcelFileDescriptorOpenFileDescriptor != null) {
                    parcelFileDescriptorOpenFileDescriptor.close();
                }
                return null;
            }
            try {
                try {
                    FileInputStream fileInputStream = new FileInputStream(parcelFileDescriptorOpenFileDescriptor.getFileDescriptor());
                    try {
                        FileChannel channel = fileInputStream.getChannel();
                        MappedByteBuffer map = channel.map(FileChannel.MapMode.READ_ONLY, 0L, channel.size());
                        fileInputStream.close();
                        if (parcelFileDescriptorOpenFileDescriptor != null) {
                            parcelFileDescriptorOpenFileDescriptor.close();
                        }
                        return map;
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

    @RequiresApi(19)
    @Nullable
    public static ByteBuffer copyToDirectBuffer(Context context, Resources resources, int i) {
        File tempFile = getTempFile(context);
        if (tempFile == null) {
            return null;
        }
        try {
            if (copyToFile(tempFile, resources, i)) {
                return mmap(tempFile);
            }
            return null;
        } finally {
            tempFile.delete();
        }
    }

    public static boolean copyToFile(File file, InputStream inputStream) throws Throwable {
        FileOutputStream fileOutputStream;
        StrictMode.ThreadPolicy threadPolicyAllowThreadDiskWrites = StrictMode.allowThreadDiskWrites();
        FileOutputStream fileOutputStream2 = null;
        try {
            try {
                fileOutputStream = new FileOutputStream(file, false);
            } catch (IOException e) {
                e = e;
            }
        } catch (Throwable th) {
            th = th;
        }
        try {
            byte[] bArr = new byte[1024];
            while (true) {
                int i = inputStream.read(bArr);
                if (i != -1) {
                    fileOutputStream.write(bArr, 0, i);
                } else {
                    closeQuietly(fileOutputStream);
                    StrictMode.setThreadPolicy(threadPolicyAllowThreadDiskWrites);
                    return true;
                }
            }
        } catch (IOException e2) {
            e = e2;
            fileOutputStream2 = fileOutputStream;
            Log.e(TAG, "Error copying resource contents to temp file: " + e.getMessage());
            closeQuietly(fileOutputStream2);
            StrictMode.setThreadPolicy(threadPolicyAllowThreadDiskWrites);
            return false;
        } catch (Throwable th2) {
            th = th2;
            fileOutputStream2 = fileOutputStream;
            closeQuietly(fileOutputStream2);
            StrictMode.setThreadPolicy(threadPolicyAllowThreadDiskWrites);
            throw th;
        }
    }

    public static boolean copyToFile(File file, Resources resources, int i) throws Throwable {
        InputStream inputStreamOpenRawResource;
        try {
            inputStreamOpenRawResource = resources.openRawResource(i);
            try {
                boolean zCopyToFile = copyToFile(file, inputStreamOpenRawResource);
                closeQuietly(inputStreamOpenRawResource);
                return zCopyToFile;
            } catch (Throwable th) {
                th = th;
                closeQuietly(inputStreamOpenRawResource);
                throw th;
            }
        } catch (Throwable th2) {
            th = th2;
            inputStreamOpenRawResource = null;
        }
    }

    public static void closeQuietly(Closeable closeable) {
        if (closeable != null) {
            try {
                closeable.close();
            } catch (IOException unused) {
            }
        }
    }
}
