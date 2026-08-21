.class public Lcom/bianfeng/ymnsdk/util/ResourceUtil;
.super Ljava/lang/Object;
.source "ResourceUtil.java"


# static fields
.field private static final FILE_NAME_CFG:Ljava/lang/String; = "ymncfgs"


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 14
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static InputStreamToByte(Ljava/io/InputStream;)[B
    .locals 4
    .param p0, "in"    # Ljava/io/InputStream;

    .line 91
    :try_start_0
    new-instance v0, Ljava/io/ByteArrayOutputStream;

    invoke-direct {v0}, Ljava/io/ByteArrayOutputStream;-><init>()V

    .line 93
    .local v0, "out":Ljava/io/ByteArrayOutputStream;
    const/16 v1, 0x400

    new-array v1, v1, [B

    .line 94
    .local v1, "buff":[B
    :goto_0
    invoke-virtual {p0, v1}, Ljava/io/InputStream;->read([B)I

    move-result v2

    const/4 v3, -0x1

    if-eq v2, v3, :cond_0

    .line 95
    invoke-virtual {v0, v1}, Ljava/io/ByteArrayOutputStream;->write([B)V

    goto :goto_0

    .line 97
    :cond_0
    invoke-virtual {p0}, Ljava/io/InputStream;->close()V

    .line 99
    invoke-virtual {v0}, Ljava/io/ByteArrayOutputStream;->toByteArray()[B

    move-result-object v2

    .line 100
    .local v2, "bytes":[B
    invoke-virtual {v0}, Ljava/io/ByteArrayOutputStream;->flush()V

    .line 101
    invoke-virtual {v0}, Ljava/io/ByteArrayOutputStream;->close()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 102
    return-object v2

    .line 103
    .end local v0    # "out":Ljava/io/ByteArrayOutputStream;
    .end local v1    # "buff":[B
    .end local v2    # "bytes":[B
    :catch_0
    move-exception v0

    .line 104
    .local v0, "e":Ljava/lang/Exception;
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 105
    const/4 v1, 0x0

    return-object v1
.end method

.method public static assetFileExist(Landroid/content/Context;Ljava/lang/String;)Z
    .locals 6
    .param p0, "context"    # Landroid/content/Context;
    .param p1, "filePath"    # Ljava/lang/String;

    .line 68
    invoke-virtual {p0}, Landroid/content/Context;->getAssets()Landroid/content/res/AssetManager;

    move-result-object v0

    .line 70
    .local v0, "am":Landroid/content/res/AssetManager;
    const/4 v1, 0x0

    :try_start_0
    const-string v2, ""

    invoke-virtual {v0, v2}, Landroid/content/res/AssetManager;->list(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v2

    .line 71
    .local v2, "names":[Ljava/lang/String;
    move v3, v1

    .local v3, "i":I
    :goto_0
    array-length v4, v2

    if-ge v3, v4, :cond_1

    .line 72
    aget-object v4, v2, v3

    invoke-virtual {p1}, Ljava/lang/String;->trim()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v4, v5}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v4
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0

    if-eqz v4, :cond_0

    .line 73
    const/4 v1, 0x1

    return v1

    .line 71
    :cond_0
    add-int/lit8 v3, v3, 0x1

    goto :goto_0

    .line 79
    .end local v2    # "names":[Ljava/lang/String;
    .end local v3    # "i":I
    :cond_1
    goto :goto_1

    .line 77
    :catch_0
    move-exception v2

    .line 78
    .local v2, "e":Ljava/io/IOException;
    invoke-virtual {v2}, Ljava/io/IOException;->printStackTrace()V

    .line 80
    .end local v2    # "e":Ljava/io/IOException;
    :goto_1
    return v1
.end method

.method public static deleteFile(Ljava/lang/String;)Z
    .locals 2
    .param p0, "path"    # Ljava/lang/String;

    .line 192
    new-instance v0, Ljava/io/File;

    invoke-direct {v0, p0}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 193
    .local v0, "file":Ljava/io/File;
    invoke-virtual {v0}, Ljava/io/File;->exists()Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-virtual {v0}, Ljava/io/File;->isFile()Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-virtual {v0}, Ljava/io/File;->delete()Z

    move-result v1

    return v1

    .line 194
    :cond_0
    const/4 v1, 0x0

    return v1
.end method

.method public static getAppDataDir(Landroid/content/Context;)Ljava/lang/String;
    .locals 3
    .param p0, "context"    # Landroid/content/Context;

    .line 169
    invoke-virtual {p0}, Landroid/content/Context;->getCacheDir()Ljava/io/File;

    move-result-object v0

    .line 170
    .local v0, "cacheDir":Ljava/io/File;
    if-eqz v0, :cond_0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0}, Ljava/io/File;->getParent()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v2, Ljava/io/File;->separator:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    return-object v1

    .line 171
    :cond_0
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "/data/data/"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v2, Ljava/io/File;->separator:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    return-object v1
.end method

.method public static getFileNameByUrl(Ljava/lang/String;)Ljava/lang/String;
    .locals 2
    .param p0, "url"    # Ljava/lang/String;

    .line 198
    const-string v0, "/"

    invoke-virtual {p0, v0}, Ljava/lang/String;->lastIndexOf(Ljava/lang/String;)I

    move-result v0

    add-int/lit8 v0, v0, 0x1

    invoke-virtual {p0}, Ljava/lang/String;->length()I

    move-result v1

    invoke-virtual {p0, v0, v1}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public static getFolder(Ljava/lang/String;)Ljava/lang/String;
    .locals 5
    .param p0, "filePath"    # Ljava/lang/String;

    .line 115
    sget-object v0, Ljava/io/File;->separator:Ljava/lang/String;

    invoke-virtual {p0, v0}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v0

    .line 116
    .local v0, "a":[Ljava/lang/String;
    array-length v1, v0

    if-gtz v1, :cond_0

    .line 117
    const/4 v1, 0x0

    return-object v1

    .line 118
    :cond_0
    invoke-virtual {p0}, Ljava/lang/String;->length()I

    move-result v1

    .line 119
    .local v1, "tL":I
    array-length v2, v0

    add-int/lit8 v2, v2, -0x1

    aget-object v2, v0, v2

    invoke-virtual {v2}, Ljava/lang/String;->length()I

    move-result v2

    .line 120
    .local v2, "nL":I
    const/4 v3, 0x0

    sub-int v4, v1, v2

    invoke-virtual {p0, v3, v4}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object v3

    return-object v3
.end method

.method public static getSdcardPath()Ljava/lang/String;
    .locals 1

    .line 48
    const-string v0, ""

    return-object v0
.end method

.method public static isSdcardFileExist(Ljava/lang/String;)Z
    .locals 3
    .param p0, "filePath"    # Ljava/lang/String;

    .line 57
    new-instance v0, Ljava/io/File;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-static {}, Lcom/bianfeng/ymnsdk/util/ResourceUtil;->getSdcardPath()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-direct {v0, v1}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 58
    .local v0, "file":Ljava/io/File;
    invoke-virtual {v0}, Ljava/io/File;->exists()Z

    move-result v1

    return v1
.end method

.method public static isSdcardReady()Z
    .locals 2

    .line 39
    invoke-static {}, Landroid/os/Environment;->getExternalStorageState()Ljava/lang/String;

    move-result-object v0

    const-string v1, "mounted"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    return v0
.end method

.method public static mkFileDirs(Ljava/lang/String;)V
    .locals 2
    .param p0, "fullPath"    # Ljava/lang/String;

    .line 179
    new-instance v0, Ljava/io/File;

    invoke-direct {v0, p0}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 180
    .local v0, "file":Ljava/io/File;
    invoke-virtual {v0}, Ljava/io/File;->exists()Z

    move-result v1

    if-nez v1, :cond_0

    .line 181
    invoke-virtual {v0}, Ljava/io/File;->mkdirs()Z

    .line 183
    :cond_0
    return-void
.end method

.method public static readPreferences(Landroid/content/Context;Ljava/lang/String;)Ljava/lang/String;
    .locals 2
    .param p0, "context"    # Landroid/content/Context;
    .param p1, "key"    # Ljava/lang/String;

    .line 24
    const-string v0, "ymncfgs"

    const/4 v1, 0x0

    invoke-virtual {p0, v0, v1}, Landroid/content/Context;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object v0

    .line 25
    .local v0, "preferences":Landroid/content/SharedPreferences;
    const/4 v1, 0x0

    invoke-interface {v0, p1, v1}, Landroid/content/SharedPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    return-object v1
.end method

.method public static removePreferences(Landroid/content/Context;Ljava/lang/String;)V
    .locals 2
    .param p0, "context"    # Landroid/content/Context;
    .param p1, "key"    # Ljava/lang/String;

    .line 29
    const-string v0, "ymncfgs"

    const/4 v1, 0x0

    invoke-virtual {p0, v0, v1}, Landroid/content/Context;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object v0

    .line 30
    .local v0, "preferences":Landroid/content/SharedPreferences;
    invoke-interface {v0}, Landroid/content/SharedPreferences;->edit()Landroid/content/SharedPreferences$Editor;

    move-result-object v1

    invoke-interface {v1, p1}, Landroid/content/SharedPreferences$Editor;->remove(Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    move-result-object v1

    invoke-interface {v1}, Landroid/content/SharedPreferences$Editor;->commit()Z

    .line 31
    return-void
.end method

.method public static retrieveFileFromAssets(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)Z
    .locals 7
    .param p0, "context"    # Landroid/content/Context;
    .param p1, "fromPath"    # Ljava/lang/String;
    .param p2, "toPath"    # Ljava/lang/String;

    .line 131
    const/4 v0, 0x0

    .line 132
    .local v0, "is":Ljava/io/InputStream;
    const/4 v1, 0x0

    .line 134
    .local v1, "fos":Ljava/io/FileOutputStream;
    const/4 v2, 0x0

    :try_start_0
    invoke-virtual {p0}, Landroid/content/Context;->getAssets()Landroid/content/res/AssetManager;

    move-result-object v3

    invoke-virtual {v3, p1}, Landroid/content/res/AssetManager;->open(Ljava/lang/String;)Ljava/io/InputStream;

    move-result-object v3

    move-object v0, v3

    .line 136
    new-instance v3, Ljava/io/File;

    invoke-direct {v3, p2}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 137
    .local v3, "file":Ljava/io/File;
    invoke-virtual {v3}, Ljava/io/File;->createNewFile()Z

    .line 138
    new-instance v4, Ljava/io/FileOutputStream;

    invoke-direct {v4, v3}, Ljava/io/FileOutputStream;-><init>(Ljava/io/File;)V

    move-object v1, v4

    .line 140
    const/16 v4, 0x400

    new-array v4, v4, [B

    .line 141
    .local v4, "temp":[B
    move v5, v2

    .line 142
    .local v5, "i":I
    :goto_0
    invoke-virtual {v0, v4}, Ljava/io/InputStream;->read([B)I

    move-result v6

    move v5, v6

    if-lez v6, :cond_0

    .line 143
    invoke-virtual {v1, v4, v2, v5}, Ljava/io/FileOutputStream;->write([BII)V
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_2
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    .line 145
    :cond_0
    const/4 v2, 0x1

    .line 150
    nop

    .line 151
    :try_start_1
    invoke-virtual {v1}, Ljava/io/FileOutputStream;->close()V
    :try_end_1
    .catch Ljava/io/IOException; {:try_start_1 .. :try_end_1} :catch_0

    .line 153
    goto :goto_1

    .line 152
    :catch_0
    move-exception v6

    .line 155
    :goto_1
    if-eqz v0, :cond_1

    .line 156
    :try_start_2
    invoke-virtual {v0}, Ljava/io/InputStream;->close()V
    :try_end_2
    .catch Ljava/io/IOException; {:try_start_2 .. :try_end_2} :catch_1

    goto :goto_2

    .line 157
    :catch_1
    move-exception v6

    goto :goto_3

    .line 158
    :cond_1
    :goto_2
    nop

    .line 145
    :goto_3
    return v2

    .line 149
    .end local v3    # "file":Ljava/io/File;
    .end local v4    # "temp":[B
    .end local v5    # "i":I
    :catchall_0
    move-exception v2

    goto :goto_8

    .line 146
    :catch_2
    move-exception v3

    .line 147
    .local v3, "e":Ljava/io/IOException;
    :try_start_3
    invoke-virtual {v3}, Ljava/io/IOException;->printStackTrace()V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    .line 150
    .end local v3    # "e":Ljava/io/IOException;
    if-eqz v1, :cond_2

    .line 151
    :try_start_4
    invoke-virtual {v1}, Ljava/io/FileOutputStream;->close()V
    :try_end_4
    .catch Ljava/io/IOException; {:try_start_4 .. :try_end_4} :catch_3

    goto :goto_4

    .line 152
    :catch_3
    move-exception v3

    goto :goto_5

    .line 153
    :cond_2
    :goto_4
    nop

    .line 155
    :goto_5
    if-eqz v0, :cond_3

    .line 156
    :try_start_5
    invoke-virtual {v0}, Ljava/io/InputStream;->close()V
    :try_end_5
    .catch Ljava/io/IOException; {:try_start_5 .. :try_end_5} :catch_4

    goto :goto_6

    .line 157
    :catch_4
    move-exception v3

    .line 159
    goto :goto_7

    .line 158
    :cond_3
    :goto_6
    nop

    .line 160
    :goto_7
    return v2

    .line 150
    :goto_8
    if-eqz v1, :cond_4

    .line 151
    :try_start_6
    invoke-virtual {v1}, Ljava/io/FileOutputStream;->close()V
    :try_end_6
    .catch Ljava/io/IOException; {:try_start_6 .. :try_end_6} :catch_5

    goto :goto_9

    .line 152
    :catch_5
    move-exception v3

    goto :goto_a

    .line 153
    :cond_4
    :goto_9
    nop

    .line 155
    :goto_a
    if-eqz v0, :cond_5

    .line 156
    :try_start_7
    invoke-virtual {v0}, Ljava/io/InputStream;->close()V
    :try_end_7
    .catch Ljava/io/IOException; {:try_start_7 .. :try_end_7} :catch_6

    goto :goto_b

    .line 157
    :catch_6
    move-exception v3

    goto :goto_c

    .line 158
    :cond_5
    :goto_b
    nop

    .line 159
    :goto_c
    throw v2
.end method

.method public static savePreferences(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)V
    .locals 2
    .param p0, "context"    # Landroid/content/Context;
    .param p1, "key"    # Ljava/lang/String;
    .param p2, "value"    # Ljava/lang/String;

    .line 19
    const-string v0, "ymncfgs"

    const/4 v1, 0x0

    invoke-virtual {p0, v0, v1}, Landroid/content/Context;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object v0

    .line 20
    .local v0, "preferences":Landroid/content/SharedPreferences;
    invoke-interface {v0}, Landroid/content/SharedPreferences;->edit()Landroid/content/SharedPreferences$Editor;

    move-result-object v1

    invoke-interface {v1, p1, p2}, Landroid/content/SharedPreferences$Editor;->putString(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    move-result-object v1

    invoke-interface {v1}, Landroid/content/SharedPreferences$Editor;->commit()Z

    .line 21
    return-void
.end method
