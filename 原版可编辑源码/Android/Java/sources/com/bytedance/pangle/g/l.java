package com.bytedance.pangle.g;

import android.os.Build;
import android.system.ErrnoException;
import android.system.Os;
import android.system.OsConstants;
import com.bytedance.pangle.util.FieldUtils;
import java.io.FileDescriptor;
import java.io.IOException;
import java.lang.reflect.Constructor;
import java.lang.reflect.InvocationTargetException;
import java.nio.ByteBuffer;

final class l implements k {
    private static final long a = Os.sysconf(OsConstants._SC_PAGESIZE);
    private final FileDescriptor b;
    private final long c;
    private final long d;

    l(FileDescriptor fileDescriptor, long j, long j2) {
        this.b = fileDescriptor;
        this.c = j;
        this.d = j2;
    }

    @Override
    public final long a() {
        return this.d;
    }

    /* JADX WARN: Removed duplicated region for block: B:100:? A[RETURN, SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:20:0x0058  */
    /* JADX WARN: Removed duplicated region for block: B:87:0x014a A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:91:0x0121 A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:96:0x00ca A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:98:0x005f A[EXC_TOP_SPLITTER, SYNTHETIC] */
    @Override
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void a(j jVar, long j, int i) throws Throwable {
        int iIntValue;
        long jMmap;
        ByteBuffer byteBuffer;
        long j2 = this.c + j;
        long j3 = a;
        long j4 = (j2 / j3) * j3;
        int i2 = (int) (j2 - j4);
        long j5 = i + i2;
        try {
            try {
                ByteBuffer byteBuffer2 = null;
                if (com.bytedance.pangle.util.i.g()) {
                    try {
                        iIntValue = ((Integer) FieldUtils.readField(com.bytedance.pangle.b.a.a.a((Class<?>) OsConstants.class, "MAP_POPULATE"), (Object) null)).intValue();
                    } catch (IllegalAccessException e) {
                        e.printStackTrace();
                        iIntValue = 0;
                    } catch (Exception e2) {
                        e2.printStackTrace();
                        iIntValue = 0;
                    }
                    jMmap = Os.mmap(0L, j5, OsConstants.PROT_READ, OsConstants.MAP_SHARED | iIntValue, this.b, j4);
                    try {
                        if (!(Build.VERSION.SDK_INT < 24 && Build.VERSION.SDK_INT <= 28)) {
                            try {
                                Constructor constructorA = com.bytedance.pangle.b.a.a.a(Class.forName("java.nio.DirectByteBuffer"), (Class<?>[]) new Class[]{Integer.TYPE, Long.TYPE, FileDescriptor.class, Runnable.class, Boolean.TYPE});
                                if (constructorA != null && constructorA.isAccessible()) {
                                    byteBuffer = (ByteBuffer) constructorA.newInstance(Integer.valueOf(i), Long.valueOf(((long) i2) + jMmap), this.b, null, Boolean.TRUE);
                                    byteBuffer2 = byteBuffer;
                                }
                            } catch (ClassNotFoundException e3) {
                                e3.printStackTrace();
                            } catch (IllegalAccessException e4) {
                                e4.printStackTrace();
                            } catch (InstantiationException e5) {
                                e5.printStackTrace();
                            } catch (InvocationTargetException e6) {
                                e6.printStackTrace();
                            } catch (Exception e7) {
                                e7.printStackTrace();
                            }
                        } else {
                            try {
                                Constructor constructorA2 = com.bytedance.pangle.b.a.a.a(Class.forName("java.nio.DirectByteBuffer"), (Class<?>[]) new Class[]{Long.TYPE, Integer.TYPE});
                                if (constructorA2 != null && constructorA2.isAccessible()) {
                                    byteBuffer = (ByteBuffer) constructorA2.newInstance(Long.valueOf(((long) i2) + jMmap), Integer.valueOf(i));
                                    byteBuffer2 = byteBuffer;
                                }
                            } catch (ClassNotFoundException e8) {
                                e8.printStackTrace();
                            } catch (IllegalAccessException e9) {
                                e9.printStackTrace();
                            } catch (InstantiationException e10) {
                                e10.printStackTrace();
                            } catch (InvocationTargetException e11) {
                                e11.printStackTrace();
                            } catch (Exception e12) {
                                e12.printStackTrace();
                            }
                        }
                        jVar.a(byteBuffer2);
                        if (jMmap == 0) {
                            try {
                                Os.munmap(jMmap, j5);
                                return;
                            } catch (ErrnoException unused) {
                                return;
                            }
                        }
                        return;
                    } catch (ErrnoException e13) {
                        e = e13;
                    }
                } else {
                    iIntValue = 0;
                    jMmap = Os.mmap(0L, j5, OsConstants.PROT_READ, OsConstants.MAP_SHARED | iIntValue, this.b, j4);
                    if (!(Build.VERSION.SDK_INT < 24 && Build.VERSION.SDK_INT <= 28)) {
                    }
                    jVar.a(byteBuffer2);
                    if (jMmap == 0) {
                    }
                }
            } catch (Throwable th) {
                th = th;
                if (0 != 0) {
                    try {
                        Os.munmap(0L, j5);
                    } catch (ErrnoException unused2) {
                    }
                }
                throw th;
            }
        } catch (ErrnoException e14) {
            e = e14;
        } catch (Throwable th2) {
            th = th2;
            if (0 != 0) {
            }
            throw th;
        }
        throw new IOException("Failed to mmap " + j5 + " bytes", e);
    }
}
