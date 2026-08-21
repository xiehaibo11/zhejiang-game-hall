package com.bianfeng.ymnsdk.sysfunc.screenshot;

import android.graphics.Bitmap;
import android.graphics.BitmapFactory;
import android.graphics.Canvas;
import android.graphics.Paint;
import android.graphics.Rect;
import android.text.TextUtils;
import java.io.FileOutputStream;
import java.text.SimpleDateFormat;
import java.util.Date;
import java.util.Locale;

public class WaterMarkHelp {
    public static String saveImageWithWatermark(String str, String str2) {
        try {
            Bitmap bitmapAddWatermarkToBitmap = addWatermarkToBitmap(str, str2);
            FileOutputStream fileOutputStream = new FileOutputStream(str);
            bitmapAddWatermarkToBitmap.compress(Bitmap.CompressFormat.JPEG, 100, fileOutputStream);
            fileOutputStream.flush();
            fileOutputStream.close();
            return str;
        } catch (Exception e) {
            e.printStackTrace();
            return str;
        }
    }

    public static Bitmap addWatermarkToBitmap(String str, String str2) {
        Bitmap bitmapDecodeFile = BitmapFactory.decodeFile(str);
        if (TextUtils.isEmpty(str2)) {
            return bitmapDecodeFile;
        }
        Bitmap bitmapCopy = bitmapDecodeFile.copy(bitmapDecodeFile.getConfig(), true);
        Canvas canvas = new Canvas(bitmapCopy);
        Paint paint = new Paint();
        paint.setColor(-1);
        paint.setTextSize(25.0f);
        paint.setAntiAlias(true);
        paint.setStyle(Paint.Style.STROKE);
        paint.setStrokeWidth(1.0f);
        paint.setColor(-16777216);
        paint.getTextBounds(str2, 0, str2.length(), new Rect());
        int width = (bitmapDecodeFile.getWidth() * 8) / 100;
        int height = (bitmapDecodeFile.getHeight() * 85) / 100;
        paint.setAlpha(85);
        float f = width;
        canvas.drawText(str2, f, height, paint);
        canvas.drawText(new SimpleDateFormat("yyyy-MM-dd HH:mm", Locale.getDefault()).format(new Date()), f, height + r1.height() + 10, paint);
        return bitmapCopy;
    }
}
