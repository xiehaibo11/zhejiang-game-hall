package com.bumptech.glide;

interface DownloadOptions {
    com.bumptech.glide.request.FutureTarget<java.io.File> downloadOnly(int r1, int r2);

    <Y extends com.bumptech.glide.request.target.Target<java.io.File>> Y downloadOnly(Y r1);
}
