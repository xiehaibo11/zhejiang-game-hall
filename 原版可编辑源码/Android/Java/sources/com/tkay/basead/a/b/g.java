package com.tkay.basead.a.b;

import android.media.MediaMetadataRetriever;
import android.text.TextUtils;
import java.io.File;
import java.io.FileDescriptor;

public final class g {

    public static class a {
        public int a;
        public int b;
    }

    public static a a(String str) {
        a aVar = null;
        try {
            if (TextUtils.isEmpty(str) || !new File(str).exists()) {
                return null;
            }
            a aVar2 = new a();
            try {
                MediaMetadataRetriever mediaMetadataRetriever = new MediaMetadataRetriever();
                mediaMetadataRetriever.setDataSource(str);
                String strExtractMetadata = mediaMetadataRetriever.extractMetadata(18);
                String strExtractMetadata2 = mediaMetadataRetriever.extractMetadata(19);
                mediaMetadataRetriever.release();
                aVar2.a = Integer.parseInt(strExtractMetadata);
                aVar2.b = Integer.parseInt(strExtractMetadata2);
                return aVar2;
            } catch (Exception e) {
                e = e;
                aVar = aVar2;
            }
        } catch (Exception e2) {
            e = e2;
        }
        e.printStackTrace();
        return aVar;
    }

    private static a a(FileDescriptor fileDescriptor) {
        a aVar;
        a aVar2 = null;
        if (fileDescriptor == null) {
            return null;
        }
        try {
            aVar = new a();
        } catch (Exception e) {
            e = e;
        }
        try {
            MediaMetadataRetriever mediaMetadataRetriever = new MediaMetadataRetriever();
            mediaMetadataRetriever.setDataSource(fileDescriptor);
            String strExtractMetadata = mediaMetadataRetriever.extractMetadata(18);
            String strExtractMetadata2 = mediaMetadataRetriever.extractMetadata(19);
            mediaMetadataRetriever.release();
            aVar.a = Integer.parseInt(strExtractMetadata);
            aVar.b = Integer.parseInt(strExtractMetadata2);
            return aVar;
        } catch (Exception e2) {
            e = e2;
            aVar2 = aVar;
            e.printStackTrace();
            return aVar2;
        }
    }

    private static a a(String str, int i, int i2) {
        a aVarA = a(str);
        if (aVarA == null) {
            return null;
        }
        float f = (aVarA.a * 1.0f) / aVarA.b;
        if (f < (i * 1.0f) / i2) {
            aVarA.b = i2;
            aVarA.a = (int) (aVarA.b * f);
        } else {
            aVarA.a = i;
            aVarA.b = (int) (aVarA.a / f);
        }
        return aVarA;
    }

    private static a a(FileDescriptor fileDescriptor, int i, int i2) {
        a aVarA = a(fileDescriptor);
        if (aVarA == null) {
            return null;
        }
        if ((aVarA.a * 1.0f) / aVarA.b < (i * 1.0f) / i2) {
            aVarA.b = i2;
            aVarA.a = (int) Math.ceil(aVarA.b * r0);
        } else {
            aVarA.a = i;
            aVarA.b = (int) Math.ceil(aVarA.a / r0);
        }
        return aVarA;
    }
}
