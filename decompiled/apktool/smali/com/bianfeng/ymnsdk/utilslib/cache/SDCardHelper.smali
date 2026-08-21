.class public final Lcom/bianfeng/ymnsdk/utilslib/cache/SDCardHelper;
.super Ljava/lang/Object;
.source "SDCardHelper.java"


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 23
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method protected static getFilesDir(Landroid/content/Context;)Ljava/lang/String;
    .locals 1
    .param p0, "context"    # Landroid/content/Context;

    .line 247
    invoke-virtual {p0}, Landroid/content/Context;->getFilesDir()Ljava/io/File;

    move-result-object v0

    invoke-virtual {v0}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method protected static getInsideFilePath(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
    .locals 4
    .param p0, "context"    # Landroid/content/Context;
    .param p1, "type"    # Ljava/lang/String;
    .param p2, "path"    # Ljava/lang/String;

    .line 256
    invoke-virtual {p0}, Landroid/content/Context;->getFilesDir()Ljava/io/File;

    move-result-object v0

    invoke-virtual {v0}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object v0

    .line 257
    .local v0, "insidePath":Ljava/lang/String;
    new-instance v1, Ljava/io/File;

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-direct {v1, v2}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 258
    .local v1, "file":Ljava/io/File;
    invoke-virtual {v1}, Ljava/io/File;->exists()Z

    move-result v2

    if-nez v2, :cond_0

    .line 259
    invoke-virtual {v1}, Ljava/io/File;->mkdir()Z

    .line 261
    :cond_0
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v3, Ljava/io/File;->separator:Ljava/lang/String;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    return-object v2
.end method

.method protected static getSDCardBaseDir()Ljava/lang/String;
    .locals 3

    .line 34
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->isAgreeprivacy()Z

    move-result v0

    const/4 v1, 0x0

    if-nez v0, :cond_0

    .line 35
    sget-object v0, Ljava/lang/System;->out:Ljava/io/PrintStream;

    const-string v2, "state of showDebugLog is isAgreeprivacy"

    invoke-virtual {v0, v2}, Ljava/io/PrintStream;->println(Ljava/lang/String;)V

    .line 36
    return-object v1

    .line 38
    :cond_0
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/cache/SDCardHelper;->isSDCardMounted()Z

    move-result v0

    if-eqz v0, :cond_1

    .line 39
    invoke-static {}, Landroid/os/Environment;->getExternalStorageDirectory()Ljava/io/File;

    move-result-object v0

    invoke-virtual {v0}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object v0

    return-object v0

    .line 41
    :cond_1
    return-object v1
.end method

.method protected static getSDCardPrivateCacheDir(Landroid/content/Context;)Ljava/lang/String;
    .locals 1
    .param p0, "context"    # Landroid/content/Context;

    .line 233
    invoke-virtual {p0}, Landroid/content/Context;->getExternalCacheDir()Ljava/io/File;

    move-result-object v0

    invoke-virtual {v0}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method protected static getSDCardPrivateFilesDir(Landroid/content/Context;Ljava/lang/String;)Ljava/lang/String;
    .locals 1
    .param p0, "context"    # Landroid/content/Context;
    .param p1, "type"    # Ljava/lang/String;

    .line 238
    invoke-virtual {p0, p1}, Landroid/content/Context;->getExternalFilesDir(Ljava/lang/String;)Ljava/io/File;

    move-result-object v0

    invoke-virtual {v0}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method protected static getSDCardPublicDir(Ljava/lang/String;)Ljava/lang/String;
    .locals 1
    .param p0, "type"    # Ljava/lang/String;

    .line 228
    invoke-static {p0}, Landroid/os/Environment;->getExternalStoragePublicDirectory(Ljava/lang/String;)Ljava/io/File;

    move-result-object v0

    invoke-virtual {v0}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method protected static isFileExist(Ljava/lang/String;)Z
    .locals 3
    .param p0, "filePath"    # Ljava/lang/String;

    .line 265
    sget-object v0, Ljava/lang/System;->out:Ljava/io/PrintStream;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "state of showDebugLog is "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/io/PrintStream;->println(Ljava/lang/String;)V

    .line 266
    new-instance v0, Ljava/io/File;

    invoke-direct {v0, p0}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 267
    .local v0, "file":Ljava/io/File;
    invoke-virtual {v0}, Ljava/io/File;->isFile()Z

    move-result v1

    return v1
.end method

.method protected static isSDCardMounted()Z
    .locals 2

    .line 27
    invoke-static {}, Landroid/os/Environment;->getExternalStorageState()Ljava/lang/String;

    move-result-object v0

    const-string v1, "mounted"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    return v0
.end method

.method protected static loadBitmapFromSDCard(Landroid/content/Context;Ljava/lang/String;)Landroid/graphics/Bitmap;
    .locals 3
    .param p0, "context"    # Landroid/content/Context;
    .param p1, "filePath"    # Ljava/lang/String;
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/bianfeng/ymnsdk/utilslib/exception/YmnException;
        }
    .end annotation

    .line 215
    invoke-static {p0, p1}, Lcom/bianfeng/ymnsdk/utilslib/cache/SDCardHelper;->loadFileFromSDCard(Landroid/content/Context;Ljava/lang/String;)[B

    move-result-object v0

    .line 216
    .local v0, "data":[B
    if-eqz v0, :cond_0

    .line 217
    const/4 v1, 0x0

    array-length v2, v0

    invoke-static {v0, v1, v2}, Landroid/graphics/BitmapFactory;->decodeByteArray([BII)Landroid/graphics/Bitmap;

    move-result-object v1

    .line 218
    .local v1, "bm":Landroid/graphics/Bitmap;
    if-eqz v1, :cond_0

    .line 219
    return-object v1

    .line 222
    .end local v1    # "bm":Landroid/graphics/Bitmap;
    :cond_0
    const/4 v1, 0x0

    return-object v1
.end method

.method protected static loadFileFromSDCard(Landroid/content/Context;Ljava/lang/String;)[B
    .locals 7
    .param p0, "context"    # Landroid/content/Context;
    .param p1, "fileDir"    # Ljava/lang/String;
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/bianfeng/ymnsdk/utilslib/exception/YmnException;
        }
    .end annotation

    .line 184
    const-string v0, "android.permission.READ_EXTERNAL_STORAGE"

    invoke-static {v0, p0}, Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;->check(Ljava/lang/String;Landroid/content/Context;)Z

    move-result v0

    if-eqz v0, :cond_2

    .line 187
    invoke-static {p1}, Lcom/bianfeng/ymnsdk/utilslib/cache/SDCardHelper;->isFileExist(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 190
    const/4 v0, 0x0

    .line 191
    .local v0, "bis":Ljava/io/BufferedInputStream;
    new-instance v1, Ljava/io/ByteArrayOutputStream;

    invoke-direct {v1}, Ljava/io/ByteArrayOutputStream;-><init>()V

    .line 193
    .local v1, "baos":Ljava/io/ByteArrayOutputStream;
    :try_start_0
    new-instance v2, Ljava/io/BufferedInputStream;

    new-instance v3, Ljava/io/FileInputStream;

    new-instance v4, Ljava/io/File;

    invoke-direct {v4, p1}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    invoke-direct {v3, v4}, Ljava/io/FileInputStream;-><init>(Ljava/io/File;)V

    invoke-direct {v2, v3}, Ljava/io/BufferedInputStream;-><init>(Ljava/io/InputStream;)V

    move-object v0, v2

    .line 194
    const/16 v2, 0x2000

    new-array v2, v2, [B

    .line 195
    .local v2, "buffer":[B
    const/4 v3, 0x0

    move v4, v3

    .line 196
    .local v4, "c":I
    :goto_0
    invoke-virtual {v0, v2}, Ljava/io/BufferedInputStream;->read([B)I

    move-result v5

    move v4, v5

    const/4 v6, -0x1

    if-eq v5, v6, :cond_0

    .line 197
    invoke-virtual {v1, v2, v3, v4}, Ljava/io/ByteArrayOutputStream;->write([BII)V

    .line 198
    invoke-virtual {v1}, Ljava/io/ByteArrayOutputStream;->flush()V

    goto :goto_0

    .line 200
    :cond_0
    invoke-virtual {v1}, Ljava/io/ByteArrayOutputStream;->toByteArray()[B

    move-result-object v3
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_1
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 205
    :try_start_1
    invoke-virtual {v1}, Ljava/io/ByteArrayOutputStream;->close()V

    .line 206
    invoke-virtual {v0}, Ljava/io/BufferedInputStream;->close()V
    :try_end_1
    .catch Ljava/io/IOException; {:try_start_1 .. :try_end_1} :catch_0

    .line 209
    goto :goto_1

    .line 207
    :catch_0
    move-exception v5

    .line 208
    .local v5, "e":Ljava/io/IOException;
    invoke-virtual {v5}, Ljava/io/IOException;->printStackTrace()V

    .line 200
    .end local v5    # "e":Ljava/io/IOException;
    :goto_1
    return-object v3

    .line 204
    .end local v2    # "buffer":[B
    .end local v4    # "c":I
    :catchall_0
    move-exception v2

    goto :goto_2

    .line 201
    :catch_1
    move-exception v2

    .line 202
    .local v2, "e":Ljava/lang/Exception;
    :try_start_2
    new-instance v3, Lcom/bianfeng/ymnsdk/utilslib/exception/YmnException;

    invoke-direct {v3, v2}, Lcom/bianfeng/ymnsdk/utilslib/exception/YmnException;-><init>(Ljava/lang/Throwable;)V

    .end local v0    # "bis":Ljava/io/BufferedInputStream;
    .end local v1    # "baos":Ljava/io/ByteArrayOutputStream;
    .end local p0    # "context":Landroid/content/Context;
    .end local p1    # "fileDir":Ljava/lang/String;
    throw v3
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    .line 205
    .end local v2    # "e":Ljava/lang/Exception;
    .restart local v0    # "bis":Ljava/io/BufferedInputStream;
    .restart local v1    # "baos":Ljava/io/ByteArrayOutputStream;
    .restart local p0    # "context":Landroid/content/Context;
    .restart local p1    # "fileDir":Ljava/lang/String;
    :goto_2
    :try_start_3
    invoke-virtual {v1}, Ljava/io/ByteArrayOutputStream;->close()V

    .line 206
    invoke-virtual {v0}, Ljava/io/BufferedInputStream;->close()V
    :try_end_3
    .catch Ljava/io/IOException; {:try_start_3 .. :try_end_3} :catch_2

    .line 209
    goto :goto_3

    .line 207
    :catch_2
    move-exception v3

    .line 208
    .local v3, "e":Ljava/io/IOException;
    invoke-virtual {v3}, Ljava/io/IOException;->printStackTrace()V

    .line 210
    .end local v3    # "e":Ljava/io/IOException;
    :goto_3
    throw v2

    .line 188
    .end local v0    # "bis":Ljava/io/BufferedInputStream;
    .end local v1    # "baos":Ljava/io/ByteArrayOutputStream;
    :cond_1
    new-instance v0, Lcom/bianfeng/ymnsdk/utilslib/exception/YmnException;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "no file"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-direct {v0, v1}, Lcom/bianfeng/ymnsdk/utilslib/exception/YmnException;-><init>(Ljava/lang/String;)V

    throw v0

    .line 185
    :cond_2
    new-instance v0, Lcom/bianfeng/ymnsdk/utilslib/exception/YmnException;

    const-string v1, "no permission read"

    invoke-direct {v0, v1}, Lcom/bianfeng/ymnsdk/utilslib/exception/YmnException;-><init>(Ljava/lang/String;)V

    throw v0
.end method

.method protected static removeFileFromSDCard(Ljava/lang/String;)V
    .locals 3
    .param p0, "filePath"    # Ljava/lang/String;
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/bianfeng/ymnsdk/utilslib/exception/YmnException;
        }
    .end annotation

    .line 272
    new-instance v0, Ljava/io/File;

    invoke-direct {v0, p0}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 273
    .local v0, "file":Ljava/io/File;
    invoke-virtual {v0}, Ljava/io/File;->exists()Z

    move-result v1

    if-eqz v1, :cond_0

    .line 275
    :try_start_0
    invoke-virtual {v0}, Ljava/io/File;->delete()Z
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 278
    goto :goto_0

    .line 276
    :catch_0
    move-exception v1

    .line 277
    .local v1, "e":Ljava/lang/Exception;
    new-instance v2, Lcom/bianfeng/ymnsdk/utilslib/exception/YmnException;

    invoke-direct {v2, v1}, Lcom/bianfeng/ymnsdk/utilslib/exception/YmnException;-><init>(Ljava/lang/Throwable;)V

    throw v2

    .line 280
    .end local v1    # "e":Ljava/lang/Exception;
    :cond_0
    :goto_0
    return-void
.end method

.method protected static saveBitmapToSDCardPrivateCacheDir(Landroid/graphics/Bitmap;Ljava/lang/String;Landroid/content/Context;)Z
    .locals 5
    .param p0, "bitmap"    # Landroid/graphics/Bitmap;
    .param p1, "fileName"    # Ljava/lang/String;
    .param p2, "context"    # Landroid/content/Context;
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/bianfeng/ymnsdk/utilslib/exception/YmnException;
        }
    .end annotation

    .line 153
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/cache/SDCardHelper;->isSDCardMounted()Z

    move-result v0

    if-eqz v0, :cond_3

    .line 154
    const/4 v0, 0x0

    .line 156
    .local v0, "bos":Ljava/io/BufferedOutputStream;
    invoke-virtual {p2}, Landroid/content/Context;->getExternalCacheDir()Ljava/io/File;

    move-result-object v1

    .line 158
    .local v1, "file":Ljava/io/File;
    :try_start_0
    new-instance v2, Ljava/io/BufferedOutputStream;

    new-instance v3, Ljava/io/FileOutputStream;

    new-instance v4, Ljava/io/File;

    invoke-direct {v4, v1, p1}, Ljava/io/File;-><init>(Ljava/io/File;Ljava/lang/String;)V

    invoke-direct {v3, v4}, Ljava/io/FileOutputStream;-><init>(Ljava/io/File;)V

    invoke-direct {v2, v3}, Ljava/io/BufferedOutputStream;-><init>(Ljava/io/OutputStream;)V

    move-object v0, v2

    .line 159
    const/16 v2, 0x64

    if-eqz p1, :cond_1

    const-string v3, ".png"

    invoke-virtual {p1, v3}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_0

    const-string v3, ".PNG"

    invoke-virtual {p1, v3}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v3

    if-eqz v3, :cond_1

    .line 160
    :cond_0
    sget-object v3, Landroid/graphics/Bitmap$CompressFormat;->PNG:Landroid/graphics/Bitmap$CompressFormat;

    invoke-virtual {p0, v3, v2, v0}, Landroid/graphics/Bitmap;->compress(Landroid/graphics/Bitmap$CompressFormat;ILjava/io/OutputStream;)Z

    goto :goto_0

    .line 162
    :cond_1
    sget-object v3, Landroid/graphics/Bitmap$CompressFormat;->JPEG:Landroid/graphics/Bitmap$CompressFormat;

    invoke-virtual {p0, v3, v2, v0}, Landroid/graphics/Bitmap;->compress(Landroid/graphics/Bitmap$CompressFormat;ILjava/io/OutputStream;)Z

    .line 164
    :goto_0
    invoke-virtual {v0}, Ljava/io/BufferedOutputStream;->flush()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_1
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 168
    nop

    .line 170
    :try_start_1
    invoke-virtual {v0}, Ljava/io/BufferedOutputStream;->close()V
    :try_end_1
    .catch Ljava/io/IOException; {:try_start_1 .. :try_end_1} :catch_0

    .line 173
    :goto_1
    goto :goto_2

    .line 171
    :catch_0
    move-exception v2

    .line 172
    .local v2, "e":Ljava/io/IOException;
    invoke-virtual {v2}, Ljava/io/IOException;->printStackTrace()V

    .end local v2    # "e":Ljava/io/IOException;
    goto :goto_1

    .line 176
    :goto_2
    const/4 v2, 0x1

    return v2

    .line 168
    :catchall_0
    move-exception v2

    goto :goto_3

    .line 165
    :catch_1
    move-exception v2

    .line 166
    .local v2, "e":Ljava/lang/Exception;
    :try_start_2
    new-instance v3, Lcom/bianfeng/ymnsdk/utilslib/exception/YmnException;

    invoke-direct {v3, v2}, Lcom/bianfeng/ymnsdk/utilslib/exception/YmnException;-><init>(Ljava/lang/Throwable;)V

    .end local v0    # "bos":Ljava/io/BufferedOutputStream;
    .end local v1    # "file":Ljava/io/File;
    .end local p0    # "bitmap":Landroid/graphics/Bitmap;
    .end local p1    # "fileName":Ljava/lang/String;
    .end local p2    # "context":Landroid/content/Context;
    throw v3
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    .line 168
    .end local v2    # "e":Ljava/lang/Exception;
    .restart local v0    # "bos":Ljava/io/BufferedOutputStream;
    .restart local v1    # "file":Ljava/io/File;
    .restart local p0    # "bitmap":Landroid/graphics/Bitmap;
    .restart local p1    # "fileName":Ljava/lang/String;
    .restart local p2    # "context":Landroid/content/Context;
    :goto_3
    if-eqz v0, :cond_2

    .line 170
    :try_start_3
    invoke-virtual {v0}, Ljava/io/BufferedOutputStream;->close()V
    :try_end_3
    .catch Ljava/io/IOException; {:try_start_3 .. :try_end_3} :catch_2

    .line 173
    goto :goto_4

    .line 171
    :catch_2
    move-exception v3

    .line 172
    .local v3, "e":Ljava/io/IOException;
    invoke-virtual {v3}, Ljava/io/IOException;->printStackTrace()V

    .line 175
    .end local v3    # "e":Ljava/io/IOException;
    :cond_2
    :goto_4
    throw v2

    .line 178
    .end local v0    # "bos":Ljava/io/BufferedOutputStream;
    .end local v1    # "file":Ljava/io/File;
    :cond_3
    const/4 v0, 0x0

    return v0
.end method

.method protected static saveFileToSDCardCustomDir(Landroid/content/Context;[BLjava/lang/String;Ljava/lang/String;)Z
    .locals 5
    .param p0, "context"    # Landroid/content/Context;
    .param p1, "data"    # [B
    .param p2, "dir"    # Ljava/lang/String;
    .param p3, "fileName"    # Ljava/lang/String;
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/bianfeng/ymnsdk/utilslib/exception/YmnException;
        }
    .end annotation

    .line 75
    const-string v0, "android.permission.WRITE_EXTERNAL_STORAGE"

    invoke-static {v0, p0}, Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;->check(Ljava/lang/String;Landroid/content/Context;)Z

    move-result v0

    if-eqz v0, :cond_2

    .line 79
    const/4 v0, 0x0

    .line 80
    .local v0, "bos":Ljava/io/BufferedOutputStream;
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/cache/SDCardHelper;->isSDCardMounted()Z

    move-result v1

    if-eqz v1, :cond_1

    .line 81
    new-instance v1, Ljava/io/File;

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/cache/SDCardHelper;->getSDCardBaseDir()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v3, Ljava/io/File;->separator:Ljava/lang/String;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-direct {v1, v2}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 82
    .local v1, "file":Ljava/io/File;
    invoke-virtual {v1}, Ljava/io/File;->exists()Z

    move-result v2

    if-nez v2, :cond_0

    .line 83
    invoke-virtual {v1}, Ljava/io/File;->mkdirs()Z

    .line 86
    :cond_0
    :try_start_0
    new-instance v2, Ljava/io/BufferedOutputStream;

    new-instance v3, Ljava/io/FileOutputStream;

    new-instance v4, Ljava/io/File;

    invoke-direct {v4, v1, p3}, Ljava/io/File;-><init>(Ljava/io/File;Ljava/lang/String;)V

    invoke-direct {v3, v4}, Ljava/io/FileOutputStream;-><init>(Ljava/io/File;)V

    invoke-direct {v2, v3}, Ljava/io/BufferedOutputStream;-><init>(Ljava/io/OutputStream;)V

    move-object v0, v2

    .line 87
    invoke-virtual {v0, p1}, Ljava/io/BufferedOutputStream;->write([B)V

    .line 88
    invoke-virtual {v0}, Ljava/io/BufferedOutputStream;->flush()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_1
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 89
    const/4 v2, 0x1

    .line 94
    :try_start_1
    invoke-virtual {v0}, Ljava/io/BufferedOutputStream;->close()V
    :try_end_1
    .catch Ljava/io/IOException; {:try_start_1 .. :try_end_1} :catch_0

    .line 97
    goto :goto_0

    .line 95
    :catch_0
    move-exception v3

    .line 96
    .local v3, "e":Ljava/io/IOException;
    invoke-virtual {v3}, Ljava/io/IOException;->printStackTrace()V

    .line 89
    .end local v3    # "e":Ljava/io/IOException;
    :goto_0
    return v2

    .line 93
    :catchall_0
    move-exception v2

    goto :goto_1

    .line 90
    :catch_1
    move-exception v2

    .line 91
    .local v2, "e":Ljava/lang/Exception;
    :try_start_2
    new-instance v3, Lcom/bianfeng/ymnsdk/utilslib/exception/YmnException;

    invoke-direct {v3, v2}, Lcom/bianfeng/ymnsdk/utilslib/exception/YmnException;-><init>(Ljava/lang/Throwable;)V

    .end local v0    # "bos":Ljava/io/BufferedOutputStream;
    .end local v1    # "file":Ljava/io/File;
    .end local p0    # "context":Landroid/content/Context;
    .end local p1    # "data":[B
    .end local p2    # "dir":Ljava/lang/String;
    .end local p3    # "fileName":Ljava/lang/String;
    throw v3
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    .line 94
    .end local v2    # "e":Ljava/lang/Exception;
    .restart local v0    # "bos":Ljava/io/BufferedOutputStream;
    .restart local v1    # "file":Ljava/io/File;
    .restart local p0    # "context":Landroid/content/Context;
    .restart local p1    # "data":[B
    .restart local p2    # "dir":Ljava/lang/String;
    .restart local p3    # "fileName":Ljava/lang/String;
    :goto_1
    :try_start_3
    invoke-virtual {v0}, Ljava/io/BufferedOutputStream;->close()V
    :try_end_3
    .catch Ljava/io/IOException; {:try_start_3 .. :try_end_3} :catch_2

    .line 97
    goto :goto_2

    .line 95
    :catch_2
    move-exception v3

    .line 96
    .restart local v3    # "e":Ljava/io/IOException;
    invoke-virtual {v3}, Ljava/io/IOException;->printStackTrace()V

    .line 98
    .end local v3    # "e":Ljava/io/IOException;
    :goto_2
    throw v2

    .line 102
    .end local v1    # "file":Ljava/io/File;
    :cond_1
    const/4 v1, 0x0

    return v1

    .line 76
    .end local v0    # "bos":Ljava/io/BufferedOutputStream;
    :cond_2
    new-instance v0, Lcom/bianfeng/ymnsdk/utilslib/exception/YmnException;

    const-string v1, "no permission read"

    invoke-direct {v0, v1}, Lcom/bianfeng/ymnsdk/utilslib/exception/YmnException;-><init>(Ljava/lang/String;)V

    throw v0
.end method

.method protected static saveFileToSDCardPrivateCacheDir([BLjava/lang/String;Landroid/content/Context;)Z
    .locals 5
    .param p0, "data"    # [B
    .param p1, "fileName"    # Ljava/lang/String;
    .param p2, "context"    # Landroid/content/Context;
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/bianfeng/ymnsdk/utilslib/exception/YmnException;
        }
    .end annotation

    .line 130
    const/4 v0, 0x0

    .line 131
    .local v0, "bos":Ljava/io/BufferedOutputStream;
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/cache/SDCardHelper;->isSDCardMounted()Z

    move-result v1

    if-eqz v1, :cond_0

    .line 132
    invoke-virtual {p2}, Landroid/content/Context;->getExternalCacheDir()Ljava/io/File;

    move-result-object v1

    .line 134
    .local v1, "file":Ljava/io/File;
    :try_start_0
    new-instance v2, Ljava/io/BufferedOutputStream;

    new-instance v3, Ljava/io/FileOutputStream;

    new-instance v4, Ljava/io/File;

    invoke-direct {v4, v1, p1}, Ljava/io/File;-><init>(Ljava/io/File;Ljava/lang/String;)V

    invoke-direct {v3, v4}, Ljava/io/FileOutputStream;-><init>(Ljava/io/File;)V

    invoke-direct {v2, v3}, Ljava/io/BufferedOutputStream;-><init>(Ljava/io/OutputStream;)V

    move-object v0, v2

    .line 135
    invoke-virtual {v0, p0}, Ljava/io/BufferedOutputStream;->write([B)V

    .line 136
    invoke-virtual {v0}, Ljava/io/BufferedOutputStream;->flush()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_1
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 137
    const/4 v2, 0x1

    .line 142
    :try_start_1
    invoke-virtual {v0}, Ljava/io/BufferedOutputStream;->close()V
    :try_end_1
    .catch Ljava/io/IOException; {:try_start_1 .. :try_end_1} :catch_0

    .line 145
    goto :goto_0

    .line 143
    :catch_0
    move-exception v3

    .line 144
    .local v3, "e":Ljava/io/IOException;
    invoke-virtual {v3}, Ljava/io/IOException;->printStackTrace()V

    .line 137
    .end local v3    # "e":Ljava/io/IOException;
    :goto_0
    return v2

    .line 141
    :catchall_0
    move-exception v2

    goto :goto_1

    .line 138
    :catch_1
    move-exception v2

    .line 139
    .local v2, "e":Ljava/lang/Exception;
    :try_start_2
    new-instance v3, Lcom/bianfeng/ymnsdk/utilslib/exception/YmnException;

    invoke-direct {v3, v2}, Lcom/bianfeng/ymnsdk/utilslib/exception/YmnException;-><init>(Ljava/lang/Throwable;)V

    .end local v0    # "bos":Ljava/io/BufferedOutputStream;
    .end local v1    # "file":Ljava/io/File;
    .end local p0    # "data":[B
    .end local p1    # "fileName":Ljava/lang/String;
    .end local p2    # "context":Landroid/content/Context;
    throw v3
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    .line 142
    .end local v2    # "e":Ljava/lang/Exception;
    .restart local v0    # "bos":Ljava/io/BufferedOutputStream;
    .restart local v1    # "file":Ljava/io/File;
    .restart local p0    # "data":[B
    .restart local p1    # "fileName":Ljava/lang/String;
    .restart local p2    # "context":Landroid/content/Context;
    :goto_1
    :try_start_3
    invoke-virtual {v0}, Ljava/io/BufferedOutputStream;->close()V
    :try_end_3
    .catch Ljava/io/IOException; {:try_start_3 .. :try_end_3} :catch_2

    .line 145
    goto :goto_2

    .line 143
    :catch_2
    move-exception v3

    .line 144
    .restart local v3    # "e":Ljava/io/IOException;
    invoke-virtual {v3}, Ljava/io/IOException;->printStackTrace()V

    .line 146
    .end local v3    # "e":Ljava/io/IOException;
    :goto_2
    throw v2

    .line 148
    .end local v1    # "file":Ljava/io/File;
    :cond_0
    const/4 v1, 0x0

    return v1
.end method

.method protected static saveFileToSDCardPrivateFilesDir([BLjava/lang/String;Ljava/lang/String;Landroid/content/Context;)Z
    .locals 5
    .param p0, "data"    # [B
    .param p1, "type"    # Ljava/lang/String;
    .param p2, "fileName"    # Ljava/lang/String;
    .param p3, "context"    # Landroid/content/Context;
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/bianfeng/ymnsdk/utilslib/exception/YmnException;
        }
    .end annotation

    .line 107
    const/4 v0, 0x0

    .line 108
    .local v0, "bos":Ljava/io/BufferedOutputStream;
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/cache/SDCardHelper;->isSDCardMounted()Z

    move-result v1

    if-eqz v1, :cond_0

    .line 109
    invoke-virtual {p3, p1}, Landroid/content/Context;->getExternalFilesDir(Ljava/lang/String;)Ljava/io/File;

    move-result-object v1

    .line 111
    .local v1, "file":Ljava/io/File;
    :try_start_0
    new-instance v2, Ljava/io/BufferedOutputStream;

    new-instance v3, Ljava/io/FileOutputStream;

    new-instance v4, Ljava/io/File;

    invoke-direct {v4, v1, p2}, Ljava/io/File;-><init>(Ljava/io/File;Ljava/lang/String;)V

    invoke-direct {v3, v4}, Ljava/io/FileOutputStream;-><init>(Ljava/io/File;)V

    invoke-direct {v2, v3}, Ljava/io/BufferedOutputStream;-><init>(Ljava/io/OutputStream;)V

    move-object v0, v2

    .line 112
    invoke-virtual {v0, p0}, Ljava/io/BufferedOutputStream;->write([B)V

    .line 113
    invoke-virtual {v0}, Ljava/io/BufferedOutputStream;->flush()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_1
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 114
    const/4 v2, 0x1

    .line 119
    :try_start_1
    invoke-virtual {v0}, Ljava/io/BufferedOutputStream;->close()V
    :try_end_1
    .catch Ljava/io/IOException; {:try_start_1 .. :try_end_1} :catch_0

    .line 122
    goto :goto_0

    .line 120
    :catch_0
    move-exception v3

    .line 121
    .local v3, "e":Ljava/io/IOException;
    invoke-virtual {v3}, Ljava/io/IOException;->printStackTrace()V

    .line 114
    .end local v3    # "e":Ljava/io/IOException;
    :goto_0
    return v2

    .line 118
    :catchall_0
    move-exception v2

    goto :goto_1

    .line 115
    :catch_1
    move-exception v2

    .line 116
    .local v2, "e":Ljava/lang/Exception;
    :try_start_2
    new-instance v3, Lcom/bianfeng/ymnsdk/utilslib/exception/YmnException;

    invoke-direct {v3, v2}, Lcom/bianfeng/ymnsdk/utilslib/exception/YmnException;-><init>(Ljava/lang/Throwable;)V

    .end local v0    # "bos":Ljava/io/BufferedOutputStream;
    .end local v1    # "file":Ljava/io/File;
    .end local p0    # "data":[B
    .end local p1    # "type":Ljava/lang/String;
    .end local p2    # "fileName":Ljava/lang/String;
    .end local p3    # "context":Landroid/content/Context;
    throw v3
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    .line 119
    .end local v2    # "e":Ljava/lang/Exception;
    .restart local v0    # "bos":Ljava/io/BufferedOutputStream;
    .restart local v1    # "file":Ljava/io/File;
    .restart local p0    # "data":[B
    .restart local p1    # "type":Ljava/lang/String;
    .restart local p2    # "fileName":Ljava/lang/String;
    .restart local p3    # "context":Landroid/content/Context;
    :goto_1
    :try_start_3
    invoke-virtual {v0}, Ljava/io/BufferedOutputStream;->close()V
    :try_end_3
    .catch Ljava/io/IOException; {:try_start_3 .. :try_end_3} :catch_2

    .line 122
    goto :goto_2

    .line 120
    :catch_2
    move-exception v3

    .line 121
    .restart local v3    # "e":Ljava/io/IOException;
    invoke-virtual {v3}, Ljava/io/IOException;->printStackTrace()V

    .line 123
    .end local v3    # "e":Ljava/io/IOException;
    :goto_2
    throw v2

    .line 125
    .end local v1    # "file":Ljava/io/File;
    :cond_0
    const/4 v1, 0x0

    return v1
.end method

.method protected static saveFileToSDCardPublicDir(Landroid/content/Context;[BLjava/lang/String;Ljava/lang/String;)Z
    .locals 5
    .param p0, "context"    # Landroid/content/Context;
    .param p1, "data"    # [B
    .param p2, "type"    # Ljava/lang/String;
    .param p3, "fileName"    # Ljava/lang/String;
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/bianfeng/ymnsdk/utilslib/exception/YmnException;
        }
    .end annotation

    .line 46
    const-string v0, "android.permission.WRITE_EXTERNAL_STORAGE"

    invoke-static {v0, p0}, Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;->check(Ljava/lang/String;Landroid/content/Context;)Z

    move-result v0

    if-eqz v0, :cond_2

    .line 49
    const/4 v0, 0x0

    .line 51
    .local v0, "bos":Ljava/io/BufferedOutputStream;
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/cache/SDCardHelper;->isSDCardMounted()Z

    move-result v1

    if-eqz v1, :cond_1

    .line 52
    invoke-static {p2}, Landroid/os/Environment;->getExternalStoragePublicDirectory(Ljava/lang/String;)Ljava/io/File;

    move-result-object v1

    .line 54
    .local v1, "file":Ljava/io/File;
    :try_start_0
    new-instance v2, Ljava/io/BufferedOutputStream;

    new-instance v3, Ljava/io/FileOutputStream;

    new-instance v4, Ljava/io/File;

    invoke-direct {v4, v1, p3}, Ljava/io/File;-><init>(Ljava/io/File;Ljava/lang/String;)V

    invoke-direct {v3, v4}, Ljava/io/FileOutputStream;-><init>(Ljava/io/File;)V

    invoke-direct {v2, v3}, Ljava/io/BufferedOutputStream;-><init>(Ljava/io/OutputStream;)V

    move-object v0, v2

    .line 55
    invoke-virtual {v0, p1}, Ljava/io/BufferedOutputStream;->write([B)V

    .line 56
    invoke-virtual {v0}, Ljava/io/BufferedOutputStream;->flush()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_1
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 57
    const/4 v2, 0x1

    .line 62
    nop

    .line 63
    :try_start_1
    invoke-virtual {v0}, Ljava/io/BufferedOutputStream;->close()V
    :try_end_1
    .catch Ljava/io/IOException; {:try_start_1 .. :try_end_1} :catch_0

    .line 67
    goto :goto_0

    .line 65
    :catch_0
    move-exception v3

    .line 66
    .local v3, "e":Ljava/io/IOException;
    invoke-virtual {v3}, Ljava/io/IOException;->printStackTrace()V

    .line 57
    .end local v3    # "e":Ljava/io/IOException;
    :goto_0
    return v2

    .line 61
    :catchall_0
    move-exception v2

    goto :goto_1

    .line 58
    :catch_1
    move-exception v2

    .line 59
    .local v2, "e":Ljava/lang/Exception;
    :try_start_2
    new-instance v3, Lcom/bianfeng/ymnsdk/utilslib/exception/YmnException;

    invoke-direct {v3, v2}, Lcom/bianfeng/ymnsdk/utilslib/exception/YmnException;-><init>(Ljava/lang/Throwable;)V

    .end local v0    # "bos":Ljava/io/BufferedOutputStream;
    .end local v1    # "file":Ljava/io/File;
    .end local p0    # "context":Landroid/content/Context;
    .end local p1    # "data":[B
    .end local p2    # "type":Ljava/lang/String;
    .end local p3    # "fileName":Ljava/lang/String;
    throw v3
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    .line 62
    .end local v2    # "e":Ljava/lang/Exception;
    .restart local v0    # "bos":Ljava/io/BufferedOutputStream;
    .restart local v1    # "file":Ljava/io/File;
    .restart local p0    # "context":Landroid/content/Context;
    .restart local p1    # "data":[B
    .restart local p2    # "type":Ljava/lang/String;
    .restart local p3    # "fileName":Ljava/lang/String;
    :goto_1
    if-eqz v0, :cond_0

    .line 63
    :try_start_3
    invoke-virtual {v0}, Ljava/io/BufferedOutputStream;->close()V
    :try_end_3
    .catch Ljava/io/IOException; {:try_start_3 .. :try_end_3} :catch_2

    goto :goto_2

    .line 65
    :catch_2
    move-exception v3

    .line 66
    .restart local v3    # "e":Ljava/io/IOException;
    invoke-virtual {v3}, Ljava/io/IOException;->printStackTrace()V

    goto :goto_3

    .line 67
    .end local v3    # "e":Ljava/io/IOException;
    :cond_0
    :goto_2
    nop

    .line 68
    :goto_3
    throw v2

    .line 70
    .end local v1    # "file":Ljava/io/File;
    :cond_1
    const/4 v1, 0x0

    return v1

    .line 47
    .end local v0    # "bos":Ljava/io/BufferedOutputStream;
    :cond_2
    new-instance v0, Lcom/bianfeng/ymnsdk/utilslib/exception/YmnException;

    const-string v1, "no permission read"

    invoke-direct {v0, v1}, Lcom/bianfeng/ymnsdk/utilslib/exception/YmnException;-><init>(Ljava/lang/String;)V

    throw v0
.end method
