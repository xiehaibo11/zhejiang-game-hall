package com.bumptech.glide.load.data;

import android.content.res.AssetManager;
import android.os.ParcelFileDescriptor;
import java.io.IOException;

public class FileDescriptorAssetPathFetcher extends AssetPathFetcher<ParcelFileDescriptor> {
    public FileDescriptorAssetPathFetcher(AssetManager assetManager, String str) {
        super(assetManager, str);
    }

    @Override
    protected ParcelFileDescriptor loadResource(AssetManager assetManager, String str) throws IOException {
        return assetManager.openFd(str).getParcelFileDescriptor();
    }

    @Override
    protected void close(ParcelFileDescriptor parcelFileDescriptor) throws IOException {
        parcelFileDescriptor.close();
    }
}
