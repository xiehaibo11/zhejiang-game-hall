package com.mbridge.msdk.playercommon.exoplayer2.offline;

import android.net.Uri;
import com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroupArray;
import java.util.List;

public final class ProgressiveDownloadHelper extends DownloadHelper {
    private final String customCacheKey;
    private final Uri uri;

    @Override
    public final int getPeriodCount() {
        return 1;
    }

    @Override
    protected final void prepareInternal() {
    }

    public ProgressiveDownloadHelper(Uri uri) {
        this(uri, null);
    }

    public ProgressiveDownloadHelper(Uri uri, String str) {
        this.uri = uri;
        this.customCacheKey = str;
    }

    @Override
    public final TrackGroupArray getTrackGroups(int i) {
        return TrackGroupArray.EMPTY;
    }

    @Override
    public final DownloadAction getDownloadAction(byte[] bArr, List<TrackKey> list) {
        return new ProgressiveDownloadAction(this.uri, false, bArr, this.customCacheKey);
    }

    @Override
    public final DownloadAction getRemoveAction(byte[] bArr) {
        return new ProgressiveDownloadAction(this.uri, true, bArr, this.customCacheKey);
    }
}
