package com.tkay.expressad.exoplayer.j;

import android.content.ContentResolver;
import android.content.Context;
import android.content.res.AssetFileDescriptor;
import android.net.Uri;
import java.io.EOFException;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.nio.channels.FileChannel;

public final class e implements h {
    private final ContentResolver a;
    private final aa<? super e> b;
    private Uri c;
    private AssetFileDescriptor d;
    private FileInputStream e;
    private long f;
    private boolean g;

    public static class a extends IOException {
        public a(IOException iOException) {
            super(iOException);
        }
    }

    private e(Context context) {
        this(context, null);
    }

    public e(Context context, aa<? super e> aaVar) {
        this.a = context.getContentResolver();
        this.b = aaVar;
    }

    @Override
    public final long a(k kVar) throws a {
        try {
            Uri uri = kVar.c;
            this.c = uri;
            AssetFileDescriptor assetFileDescriptorOpenAssetFileDescriptor = this.a.openAssetFileDescriptor(uri, "r");
            this.d = assetFileDescriptorOpenAssetFileDescriptor;
            if (assetFileDescriptorOpenAssetFileDescriptor == null) {
                throw new FileNotFoundException("Could not open file descriptor for: " + this.c);
            }
            this.e = new FileInputStream(this.d.getFileDescriptor());
            long startOffset = this.d.getStartOffset();
            long jSkip = this.e.skip(kVar.f + startOffset) - startOffset;
            if (jSkip != kVar.f) {
                throw new EOFException();
            }
            long jPosition = -1;
            if (kVar.g != -1) {
                this.f = kVar.g;
            } else {
                long length = this.d.getLength();
                if (length == -1) {
                    FileChannel channel = this.e.getChannel();
                    long size = channel.size();
                    if (size != 0) {
                        jPosition = size - channel.position();
                    }
                    this.f = jPosition;
                } else {
                    this.f = length - jSkip;
                }
            }
            this.g = true;
            aa<? super e> aaVar = this.b;
            if (aaVar != null) {
                aaVar.b();
            }
            return this.f;
        } catch (IOException e) {
            throw new a(e);
        }
    }

    @Override
    public final int a(byte[] bArr, int i, int i2) throws a {
        if (i2 == 0) {
            return 0;
        }
        long j = this.f;
        if (j == 0) {
            return -1;
        }
        if (j != -1) {
            try {
                i2 = (int) Math.min(j, i2);
            } catch (IOException e) {
                throw new a(e);
            }
        }
        int i3 = this.e.read(bArr, i, i2);
        if (i3 == -1) {
            if (this.f == -1) {
                return -1;
            }
            throw new a(new EOFException());
        }
        long j2 = this.f;
        if (j2 != -1) {
            this.f = j2 - ((long) i3);
        }
        aa<? super e> aaVar = this.b;
        if (aaVar != null) {
            aaVar.a(i3);
        }
        return i3;
    }

    @Override
    public final Uri a() {
        return this.c;
    }

    @Override
    public final void b() {
        this.c = null;
        try {
            try {
                if (this.e != null) {
                    this.e.close();
                }
                this.e = null;
            } catch (Throwable th) {
                this.e = null;
                try {
                    try {
                        if (this.d != null) {
                            this.d.close();
                        }
                        this.d = null;
                        if (this.g) {
                            this.g = false;
                            aa<? super e> aaVar = this.b;
                            if (aaVar != null) {
                                aaVar.c();
                            }
                        }
                        throw th;
                    } catch (IOException e) {
                        throw new a(e);
                    }
                } finally {
                    this.d = null;
                    if (this.g) {
                        this.g = false;
                        aa<? super e> aaVar2 = this.b;
                        if (aaVar2 != null) {
                            aaVar2.c();
                        }
                    }
                }
            }
            try {
                try {
                    if (this.d != null) {
                        this.d.close();
                    }
                } catch (IOException e2) {
                    throw new a(e2);
                }
            } finally {
                this.d = null;
                if (this.g) {
                    this.g = false;
                    aa<? super e> aaVar3 = this.b;
                    if (aaVar3 != null) {
                        aaVar3.c();
                    }
                }
            }
        } catch (IOException e3) {
            throw new a(e3);
        }
    }
}
