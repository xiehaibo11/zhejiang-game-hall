package com.sigmob.sdk.splash;

import android.content.Context;
import android.graphics.Bitmap;
import android.graphics.BitmapFactory;
import android.graphics.Movie;
import android.text.TextUtils;
import android.widget.ImageView;
import android.widget.RelativeLayout;
import com.czhj.sdk.common.utils.FileUtil;
import com.czhj.sdk.common.utils.ImageTypeUtil;
import com.sigmob.sdk.base.common.BaseBroadcastReceiver;
import com.sigmob.sdk.base.models.BaseAdUnit;
import com.sigmob.sdk.base.models.IntentActions;
import com.sigmob.sdk.base.views.r;
import java.util.Arrays;
import java.util.List;

public class e extends d {
    r b;

    public e(Context context) {
        super(context);
        RelativeLayout.LayoutParams layoutParams = new RelativeLayout.LayoutParams(-1, -1);
        r rVar = new r(context);
        this.b = rVar;
        rVar.setScaleType(ImageView.ScaleType.FIT_XY);
        setBackgroundColor(-1);
        addView(this.b, layoutParams);
    }

    @Override
    public void a() {
        super.a();
    }

    @Override
    public boolean a(BaseAdUnit baseAdUnit) {
        Bitmap bitmapDecodeFile;
        String splashFilePath = baseAdUnit.getSplashFilePath();
        List listAsList = Arrays.asList("git", "jpeg", "jpg", "png", "bmp", "webp", "tif");
        String fileType = ImageTypeUtil.getFileType(splashFilePath);
        if (TextUtils.isEmpty(fileType)) {
            return false;
        }
        if (fileType.equals("gif")) {
            Movie movieDecodeByteArray = Movie.decodeByteArray(FileUtil.readBytes(splashFilePath), 0, FileUtil.readBytes(splashFilePath).length);
            if (movieDecodeByteArray != null) {
                this.b.setMovie(movieDecodeByteArray);
                BaseBroadcastReceiver.a(getContext(), baseAdUnit.getUuid(), IntentActions.ACTION_INTERSTITIAL_SHOW);
                return true;
            }
        } else if (listAsList.contains(fileType) && (bitmapDecodeFile = BitmapFactory.decodeFile(splashFilePath)) != null) {
            BaseBroadcastReceiver.a(getContext(), baseAdUnit.getUuid(), IntentActions.ACTION_INTERSTITIAL_SHOW);
            this.b.setImageBitmap(bitmapDecodeFile);
            return true;
        }
        return false;
    }

    @Override
    public void b() {
        super.b();
    }

    @Override
    public void c() {
        super.c();
    }

    @Override
    public int getDuration() {
        return super.getDuration();
    }
}
