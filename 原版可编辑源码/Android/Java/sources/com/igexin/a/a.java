package com.igexin.a;

import android.content.Context;
import android.content.pm.ApplicationInfo;
import android.os.Build;
import java.io.Closeable;
import java.io.File;
import java.io.FileNotFoundException;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.InputStream;
import java.io.OutputStream;
import java.util.zip.ZipEntry;
import java.util.zip.ZipFile;

public class a implements e {
    private long a(InputStream inputStream, OutputStream outputStream) throws IOException {
        byte[] bArr = new byte[4096];
        long j = 0;
        while (true) {
            int i = inputStream.read(bArr);
            if (i == -1) {
                outputStream.flush();
                return j;
            }
            outputStream.write(bArr, 0, i);
            j += (long) i;
        }
    }

    private b a(Context context, String[] strArr, String str, i iVar) {
        int i;
        String[] strArrA = a(context);
        int length = strArrA.length;
        int i2 = 0;
        ZipFile zipFile = null;
        int i3 = 0;
        while (i3 < length) {
            String str2 = strArrA[i3];
            int i4 = i2;
            while (true) {
                int i5 = i4 + 1;
                i = 5;
                if (i4 >= 5) {
                    break;
                }
                try {
                    zipFile = new ZipFile(new File(str2), 1);
                    break;
                } catch (IOException unused) {
                    i4 = i5;
                }
            }
            if (zipFile != null) {
                int i6 = i2;
                while (true) {
                    int i7 = i6 + 1;
                    if (i6 < i) {
                        int length2 = strArr.length;
                        int i8 = i2;
                        while (i8 < length2) {
                            String str3 = "lib" + File.separatorChar + strArr[i8] + File.separatorChar + str;
                            Object[] objArr = new Object[2];
                            objArr[i2] = str3;
                            objArr[1] = str2;
                            iVar.a("Looking for %s in APK %s...", objArr);
                            ZipEntry entry = zipFile.getEntry(str3);
                            if (entry != null) {
                                return new b(zipFile, entry);
                            }
                            i8++;
                            i2 = 0;
                        }
                        i6 = i7;
                        i = 5;
                    } else {
                        try {
                            zipFile.close();
                            break;
                        } catch (IOException unused2) {
                        }
                    }
                }
            }
            i3++;
            i2 = 0;
        }
        return null;
    }

    private void a(Closeable closeable) {
        if (closeable != null) {
            try {
                closeable.close();
            } catch (IOException unused) {
            }
        }
    }

    private String[] a(Context context) {
        ApplicationInfo applicationInfo = context.getApplicationInfo();
        if (Build.VERSION.SDK_INT < 21 || applicationInfo.splitSourceDirs == null || applicationInfo.splitSourceDirs.length == 0) {
            return new String[]{applicationInfo.sourceDir};
        }
        String[] strArr = new String[applicationInfo.splitSourceDirs.length + 1];
        strArr[0] = applicationInfo.sourceDir;
        System.arraycopy(applicationInfo.splitSourceDirs, 0, strArr, 1, applicationInfo.splitSourceDirs.length);
        return strArr;
    }

    @Override
    public void a(Context context, String[] strArr, String str, File file, i iVar) throws Throwable {
        FileOutputStream fileOutputStream;
        InputStream inputStream;
        long jA;
        b bVar = null;
        Closeable closeable = null;
        try {
            b bVarA = a(context, strArr, str, iVar);
            try {
                if (bVarA == null) {
                    throw new c(str);
                }
                int i = 0;
                while (true) {
                    int i2 = i + 1;
                    if (i >= 5) {
                        iVar.a("FATAL! Couldn't extract the library from the APK!");
                        if (bVarA != null) {
                            try {
                                if (bVarA.a != null) {
                                    bVarA.a.close();
                                    return;
                                }
                                return;
                            } catch (IOException unused) {
                                return;
                            }
                        }
                        return;
                    }
                    iVar.a("Found %s! Extracting...", str);
                    try {
                        if (file.exists() || file.createNewFile()) {
                            try {
                                inputStream = bVarA.a.getInputStream(bVarA.b);
                                try {
                                    fileOutputStream = new FileOutputStream(file);
                                } catch (FileNotFoundException unused2) {
                                    fileOutputStream = null;
                                } catch (IOException unused3) {
                                    fileOutputStream = null;
                                } catch (Throwable th) {
                                    th = th;
                                    fileOutputStream = null;
                                }
                                try {
                                    jA = a(inputStream, fileOutputStream);
                                    fileOutputStream.getFD().sync();
                                } catch (FileNotFoundException unused4) {
                                    a(inputStream);
                                } catch (IOException unused5) {
                                    a(inputStream);
                                } catch (Throwable th2) {
                                    th = th2;
                                    closeable = inputStream;
                                    a(closeable);
                                    a(fileOutputStream);
                                    throw th;
                                }
                            } catch (FileNotFoundException unused6) {
                                inputStream = null;
                                fileOutputStream = null;
                            } catch (IOException unused7) {
                                inputStream = null;
                                fileOutputStream = null;
                            } catch (Throwable th3) {
                                th = th3;
                                fileOutputStream = null;
                            }
                            if (jA == file.length()) {
                                a(inputStream);
                                a(fileOutputStream);
                                file.setReadable(true, false);
                                file.setExecutable(true, false);
                                file.setWritable(true);
                                if (bVarA != null) {
                                    try {
                                        if (bVarA.a != null) {
                                            bVarA.a.close();
                                            return;
                                        }
                                        return;
                                    } catch (IOException unused8) {
                                        return;
                                    }
                                }
                                return;
                            }
                            a(inputStream);
                            a(fileOutputStream);
                        }
                    } catch (IOException unused9) {
                    }
                    i = i2;
                }
            } catch (Throwable th4) {
                th = th4;
                bVar = bVarA;
                if (bVar != null) {
                    try {
                        if (bVar.a != null) {
                            bVar.a.close();
                        }
                    } catch (IOException unused10) {
                    }
                }
                throw th;
            }
        } catch (Throwable th5) {
            th = th5;
        }
    }
}
