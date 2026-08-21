.class public Lcom/qihoo360/replugin/utils/pkg/PackageFilesUtil;
.super Ljava/lang/Object;
.source "PackageFilesUtil.java"


# static fields
.field private static final TAG:Ljava/lang/String; = "PackageFilesUtil"

.field private static final TIMESTAMP_EXT:Ljava/lang/String; = ".timestamp"


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 42
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private static compareDataFileVersion(Landroid/content/Context;Ljava/lang/String;)Z
    .locals 16

    move-object/from16 v1, p1

    const-string v2, " version="

    const-string v3, "close error"

    const-string v4, "PackageFilesUtil"

    const/4 v0, 0x4

    new-array v5, v0, [B

    const/16 v6, 0x54

    const/4 v7, 0x3

    const/16 v8, 0x41

    const/4 v9, 0x2

    const/16 v10, 0x44

    const/16 v11, 0x56

    const/4 v12, 0x0

    const/4 v14, 0x1

    .line 206
    :try_start_0
    new-instance v15, Ljava/io/DataInputStream;

    invoke-virtual/range {p0 .. p0}, Landroid/content/Context;->getAssets()Landroid/content/res/AssetManager;

    move-result-object v0

    invoke-virtual {v0, v1}, Landroid/content/res/AssetManager;->open(Ljava/lang/String;)Ljava/io/InputStream;

    move-result-object v0

    invoke-direct {v15, v0}, Ljava/io/DataInputStream;-><init>(Ljava/io/InputStream;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_4
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 207
    :try_start_1
    invoke-virtual {v15, v5}, Ljava/io/DataInputStream;->read([B)I

    .line 208
    aget-byte v0, v5, v12

    if-ne v0, v11, :cond_1

    aget-byte v0, v5, v14

    if-ne v0, v10, :cond_1

    aget-byte v0, v5, v9

    if-ne v0, v8, :cond_1

    aget-byte v0, v5, v7

    if-ne v0, v6, :cond_1

    .line 209
    invoke-virtual {v15}, Ljava/io/DataInputStream;->readInt()I

    .line 210
    invoke-virtual {v15}, Ljava/io/DataInputStream;->readInt()I

    .line 211
    invoke-virtual {v15}, Ljava/io/DataInputStream;->readInt()I

    move-result v13
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_3
    .catchall {:try_start_1 .. :try_end_1} :catchall_3

    .line 212
    :try_start_2
    sget-boolean v0, Lcom/qihoo360/mobilesafe/core/BuildConfig;->DEBUG:Z

    if-eqz v0, :cond_0

    .line 213
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v6, "Get assets version file="

    invoke-virtual {v0, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v13}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v4, v0}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_1
    .catchall {:try_start_2 .. :try_end_2} :catchall_3

    .line 225
    :cond_0
    :try_start_3
    invoke-virtual {v15}, Ljava/io/DataInputStream;->close()V
    :try_end_3
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_0

    goto :goto_3

    :catch_0
    move-exception v0

    move-object v6, v0

    .line 227
    sget-boolean v0, Lcom/qihoo360/mobilesafe/core/BuildConfig;->DEBUG:Z

    if-eqz v0, :cond_4

    .line 228
    :goto_0
    invoke-static {v4, v3, v6}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I

    goto :goto_3

    :catch_1
    move-exception v0

    goto :goto_2

    .line 225
    :cond_1
    :try_start_4
    invoke-virtual {v15}, Ljava/io/DataInputStream;->close()V
    :try_end_4
    .catch Ljava/lang/Exception; {:try_start_4 .. :try_end_4} :catch_2

    goto :goto_1

    :catch_2
    move-exception v0

    move-object v1, v0

    .line 227
    sget-boolean v0, Lcom/qihoo360/mobilesafe/core/BuildConfig;->DEBUG:Z

    if-eqz v0, :cond_2

    .line 228
    invoke-static {v4, v3, v1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I

    :cond_2
    :goto_1
    return v14

    :catch_3
    move-exception v0

    const/4 v13, -0x1

    goto :goto_2

    :catchall_0
    move-exception v0

    move-object v1, v0

    const/4 v15, 0x0

    goto/16 :goto_b

    :catch_4
    move-exception v0

    const/4 v13, -0x1

    const/4 v15, 0x0

    .line 219
    :goto_2
    :try_start_5
    sget-boolean v6, Lcom/qihoo360/mobilesafe/core/BuildConfig;->DEBUG:Z

    if-eqz v6, :cond_3

    .line 220
    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    const-string v7, "Get assets version error, file:"

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    invoke-static {v4, v6, v0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I
    :try_end_5
    .catchall {:try_start_5 .. :try_end_5} :catchall_3

    :cond_3
    if-eqz v15, :cond_4

    .line 225
    :try_start_6
    invoke-virtual {v15}, Ljava/io/DataInputStream;->close()V
    :try_end_6
    .catch Ljava/lang/Exception; {:try_start_6 .. :try_end_6} :catch_5

    goto :goto_3

    :catch_5
    move-exception v0

    move-object v6, v0

    .line 227
    sget-boolean v0, Lcom/qihoo360/mobilesafe/core/BuildConfig;->DEBUG:Z

    if-eqz v0, :cond_4

    goto :goto_0

    .line 234
    :cond_4
    :goto_3
    :try_start_7
    new-instance v6, Ljava/io/DataInputStream;

    new-instance v0, Ljava/io/FileInputStream;

    invoke-virtual/range {p0 .. p1}, Landroid/content/Context;->getFileStreamPath(Ljava/lang/String;)Ljava/io/File;

    move-result-object v7

    invoke-direct {v0, v7}, Ljava/io/FileInputStream;-><init>(Ljava/io/File;)V

    invoke-direct {v6, v0}, Ljava/io/DataInputStream;-><init>(Ljava/io/InputStream;)V
    :try_end_7
    .catch Ljava/lang/Exception; {:try_start_7 .. :try_end_7} :catch_a
    .catchall {:try_start_7 .. :try_end_7} :catchall_2

    .line 235
    :try_start_8
    invoke-virtual {v6, v5}, Ljava/io/DataInputStream;->read([B)I

    .line 236
    aget-byte v0, v5, v12

    if-ne v0, v11, :cond_6

    aget-byte v0, v5, v14

    if-ne v0, v10, :cond_6

    aget-byte v0, v5, v9

    if-ne v0, v8, :cond_6

    const/4 v7, 0x3

    aget-byte v0, v5, v7

    const/16 v5, 0x54

    if-ne v0, v5, :cond_6

    .line 237
    invoke-virtual {v6}, Ljava/io/DataInputStream;->readInt()I

    .line 238
    invoke-virtual {v6}, Ljava/io/DataInputStream;->readInt()I

    .line 239
    invoke-virtual {v6}, Ljava/io/DataInputStream;->readInt()I

    move-result v5
    :try_end_8
    .catch Ljava/lang/Exception; {:try_start_8 .. :try_end_8} :catch_9
    .catchall {:try_start_8 .. :try_end_8} :catchall_1

    .line 240
    :try_start_9
    sget-boolean v0, Lcom/qihoo360/mobilesafe/core/BuildConfig;->DEBUG:Z

    if-eqz v0, :cond_5

    .line 241
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v7, "Get local version file="

    invoke-virtual {v0, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v4, v0}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I
    :try_end_9
    .catch Ljava/lang/Exception; {:try_start_9 .. :try_end_9} :catch_7
    .catchall {:try_start_9 .. :try_end_9} :catchall_1

    .line 253
    :cond_5
    :try_start_a
    invoke-virtual {v6}, Ljava/io/DataInputStream;->close()V
    :try_end_a
    .catch Ljava/lang/Exception; {:try_start_a .. :try_end_a} :catch_6

    goto :goto_8

    :catch_6
    move-exception v0

    move-object v1, v0

    .line 255
    sget-boolean v0, Lcom/qihoo360/mobilesafe/core/BuildConfig;->DEBUG:Z

    if-eqz v0, :cond_9

    goto :goto_7

    :catch_7
    move-exception v0

    move-object v15, v6

    goto :goto_6

    .line 253
    :cond_6
    :try_start_b
    invoke-virtual {v6}, Ljava/io/DataInputStream;->close()V
    :try_end_b
    .catch Ljava/lang/Exception; {:try_start_b .. :try_end_b} :catch_8

    goto :goto_4

    :catch_8
    move-exception v0

    move-object v1, v0

    .line 255
    sget-boolean v0, Lcom/qihoo360/mobilesafe/core/BuildConfig;->DEBUG:Z

    if-eqz v0, :cond_7

    .line 256
    invoke-static {v4, v3, v1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I

    :cond_7
    :goto_4
    return v14

    :catchall_1
    move-exception v0

    move-object v1, v0

    move-object v15, v6

    goto :goto_9

    :catch_9
    move-exception v0

    move-object v15, v6

    goto :goto_5

    :catchall_2
    move-exception v0

    move-object v1, v0

    goto :goto_9

    :catch_a
    move-exception v0

    :goto_5
    const/4 v5, -0x1

    .line 247
    :goto_6
    :try_start_c
    sget-boolean v2, Lcom/qihoo360/mobilesafe/core/BuildConfig;->DEBUG:Z

    if-eqz v2, :cond_8

    .line 248
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v6, "Get file version error, file:"

    invoke-virtual {v2, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v4, v1, v0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I
    :try_end_c
    .catchall {:try_start_c .. :try_end_c} :catchall_2

    :cond_8
    if-eqz v15, :cond_9

    .line 253
    :try_start_d
    invoke-virtual {v15}, Ljava/io/DataInputStream;->close()V
    :try_end_d
    .catch Ljava/lang/Exception; {:try_start_d .. :try_end_d} :catch_b

    goto :goto_8

    :catch_b
    move-exception v0

    move-object v1, v0

    .line 255
    sget-boolean v0, Lcom/qihoo360/mobilesafe/core/BuildConfig;->DEBUG:Z

    if-eqz v0, :cond_9

    .line 256
    :goto_7
    invoke-static {v4, v3, v1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I

    :cond_9
    :goto_8
    const/4 v1, -0x1

    if-eq v13, v1, :cond_b

    if-eq v5, v1, :cond_b

    if-gt v13, v5, :cond_b

    .line 262
    sget-boolean v0, Lcom/qihoo360/mobilesafe/core/BuildConfig;->DEBUG:Z

    if-eqz v0, :cond_a

    const-string v0, "compare file version not extract"

    .line 263
    invoke-static {v4, v0}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    :cond_a
    return v12

    .line 267
    :cond_b
    sget-boolean v0, Lcom/qihoo360/mobilesafe/core/BuildConfig;->DEBUG:Z

    if-eqz v0, :cond_c

    const-string v0, "compare file version need extract"

    .line 268
    invoke-static {v4, v0}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    :cond_c
    return v14

    :goto_9
    if-eqz v15, :cond_d

    .line 253
    :try_start_e
    invoke-virtual {v15}, Ljava/io/DataInputStream;->close()V
    :try_end_e
    .catch Ljava/lang/Exception; {:try_start_e .. :try_end_e} :catch_c

    goto :goto_a

    :catch_c
    move-exception v0

    move-object v2, v0

    .line 255
    sget-boolean v0, Lcom/qihoo360/mobilesafe/core/BuildConfig;->DEBUG:Z

    if-eqz v0, :cond_d

    .line 256
    invoke-static {v4, v3, v2}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I

    .line 258
    :cond_d
    :goto_a
    throw v1

    :catchall_3
    move-exception v0

    move-object v1, v0

    :goto_b
    if-eqz v15, :cond_e

    .line 225
    :try_start_f
    invoke-virtual {v15}, Ljava/io/DataInputStream;->close()V
    :try_end_f
    .catch Ljava/lang/Exception; {:try_start_f .. :try_end_f} :catch_d

    goto :goto_c

    :catch_d
    move-exception v0

    move-object v2, v0

    .line 227
    sget-boolean v0, Lcom/qihoo360/mobilesafe/core/BuildConfig;->DEBUG:Z

    if-eqz v0, :cond_e

    .line 228
    invoke-static {v4, v3, v2}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I

    .line 230
    :cond_e
    :goto_c
    throw v1
.end method

.method public static forceDelete(Lcom/qihoo360/replugin/model/PluginInfo;)V
    .locals 6

    if-nez p0, :cond_0

    return-void

    .line 287
    :cond_0
    :try_start_0
    invoke-virtual {p0}, Lcom/qihoo360/replugin/model/PluginInfo;->getApkFile()Ljava/io/File;

    move-result-object v0

    .line 288
    invoke-virtual {v0}, Ljava/io/File;->exists()Z

    move-result v1
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_1
    .catch Ljava/lang/IllegalArgumentException; {:try_start_0 .. :try_end_0} :catch_0

    const-string v2, "delete "

    const-string v3, "PackageFilesUtil"

    if-eqz v1, :cond_1

    .line 289
    :try_start_1
    invoke-static {v0}, Lcom/qihoo360/replugin/utils/FileUtils;->forceDelete(Ljava/io/File;)V

    .line 290
    sget-boolean v0, Lcom/qihoo360/mobilesafe/core/BuildConfig;->DEBUG:Z

    if-eqz v0, :cond_1

    .line 291
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Lcom/qihoo360/replugin/model/PluginInfo;->getApkFile()Ljava/io/File;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v3, v0}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 296
    :cond_1
    invoke-virtual {p0}, Lcom/qihoo360/replugin/model/PluginInfo;->getDexFile()Ljava/io/File;

    move-result-object v0

    .line 297
    invoke-virtual {v0}, Ljava/io/File;->exists()Z

    move-result v1

    if-eqz v1, :cond_2

    .line 298
    invoke-static {v0}, Lcom/qihoo360/replugin/utils/FileUtils;->forceDelete(Ljava/io/File;)V

    .line 299
    sget-boolean v0, Lcom/qihoo360/mobilesafe/core/BuildConfig;->DEBUG:Z

    if-eqz v0, :cond_2

    .line 300
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Lcom/qihoo360/replugin/model/PluginInfo;->getDexFile()Ljava/io/File;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v3, v0}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 304
    :cond_2
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0x19

    if-le v0, v1, :cond_4

    .line 307
    invoke-virtual {p0}, Lcom/qihoo360/replugin/model/PluginInfo;->getDexParentDir()Ljava/io/File;

    move-result-object v0

    .line 308
    invoke-virtual {p0}, Lcom/qihoo360/replugin/model/PluginInfo;->getDexFile()Ljava/io/File;

    move-result-object v1

    invoke-virtual {v1}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/qihoo360/replugin/utils/FileUtils;->getFileNameWithoutExt(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 310
    new-instance v4, Ljava/io/File;

    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v5, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, ".vdex"

    invoke-virtual {v5, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-direct {v4, v0, v1}, Ljava/io/File;-><init>(Ljava/io/File;Ljava/lang/String;)V

    .line 311
    invoke-static {v4}, Lcom/qihoo360/replugin/utils/FileUtils;->forceDelete(Ljava/io/File;)V

    .line 312
    sget-boolean v0, Lcom/qihoo360/mobilesafe/core/BuildConfig;->DEBUG:Z

    if-eqz v0, :cond_3

    .line 313
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v3, v0}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 317
    :cond_3
    new-instance v0, Ljava/io/File;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p0}, Lcom/qihoo360/replugin/model/PluginInfo;->getApkFile()Ljava/io/File;

    move-result-object v4

    invoke-virtual {v4}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v1, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, ".prof"

    invoke-virtual {v1, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-direct {v0, v1}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 318
    invoke-static {v0}, Lcom/qihoo360/replugin/utils/FileUtils;->forceDelete(Ljava/io/File;)V

    .line 319
    sget-boolean v1, Lcom/qihoo360/mobilesafe/core/BuildConfig;->DEBUG:Z

    if-eqz v1, :cond_4

    .line 320
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v3, v0}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 324
    :cond_4
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0x15

    if-ge v0, v1, :cond_5

    .line 325
    invoke-virtual {p0}, Lcom/qihoo360/replugin/model/PluginInfo;->getExtraOdexDir()Ljava/io/File;

    move-result-object v0

    invoke-static {v0}, Lcom/qihoo360/replugin/utils/FileUtils;->forceDelete(Ljava/io/File;)V

    .line 326
    sget-boolean v0, Lcom/qihoo360/mobilesafe/core/BuildConfig;->DEBUG:Z

    if-eqz v0, :cond_5

    .line 327
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Lcom/qihoo360/replugin/model/PluginInfo;->getExtraOdexDir()Ljava/io/File;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v3, v0}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 332
    :cond_5
    invoke-virtual {p0}, Lcom/qihoo360/replugin/model/PluginInfo;->getNativeLibsDir()Ljava/io/File;

    move-result-object v0

    .line 333
    invoke-virtual {v0}, Ljava/io/File;->exists()Z

    move-result v0

    if-eqz v0, :cond_6

    .line 334
    invoke-virtual {p0}, Lcom/qihoo360/replugin/model/PluginInfo;->getNativeLibsDir()Ljava/io/File;

    move-result-object v0

    invoke-static {v0}, Lcom/qihoo360/replugin/utils/FileUtils;->forceDelete(Ljava/io/File;)V

    .line 335
    sget-boolean v0, Lcom/qihoo360/mobilesafe/core/BuildConfig;->DEBUG:Z

    if-eqz v0, :cond_6

    .line 336
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Lcom/qihoo360/replugin/model/PluginInfo;->getNativeLibsDir()Ljava/io/File;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v3, v0}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    :cond_6
    const-string v0, "plugin_v3_%s.lock"

    const/4 v1, 0x1

    new-array v1, v1, [Ljava/lang/Object;

    const/4 v4, 0x0

    .line 341
    invoke-virtual {p0}, Lcom/qihoo360/replugin/model/PluginInfo;->getApkFile()Ljava/io/File;

    move-result-object p0

    invoke-virtual {p0}, Ljava/io/File;->getName()Ljava/lang/String;

    move-result-object p0

    aput-object p0, v1, v4

    invoke-static {v0, v1}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p0

    .line 342
    new-instance v0, Ljava/io/File;

    invoke-static {}, Lcom/qihoo360/replugin/RePluginInternal;->getAppContext()Landroid/content/Context;

    move-result-object v1

    invoke-virtual {v1}, Landroid/content/Context;->getFilesDir()Ljava/io/File;

    move-result-object v1

    invoke-direct {v0, v1, p0}, Ljava/io/File;-><init>(Ljava/io/File;Ljava/lang/String;)V

    .line 343
    invoke-static {v0}, Lcom/qihoo360/replugin/utils/FileUtils;->forceDelete(Ljava/io/File;)V

    .line 344
    sget-boolean p0, Lcom/qihoo360/mobilesafe/core/BuildConfig;->DEBUG:Z

    if-eqz p0, :cond_7

    .line 345
    new-instance p0, Ljava/lang/StringBuilder;

    invoke-direct {p0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {v3, p0}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I
    :try_end_1
    .catch Ljava/io/IOException; {:try_start_1 .. :try_end_1} :catch_1
    .catch Ljava/lang/IllegalArgumentException; {:try_start_1 .. :try_end_1} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    .line 353
    invoke-virtual {p0}, Ljava/lang/IllegalArgumentException;->printStackTrace()V

    goto :goto_0

    :catch_1
    move-exception p0

    .line 349
    invoke-virtual {p0}, Ljava/io/IOException;->printStackTrace()V

    :cond_7
    :goto_0
    return-void
.end method

.method public static getBundleTimestamp(Landroid/content/Context;Ljava/lang/String;)J
    .locals 1

    .line 144
    :try_start_0
    invoke-virtual {p0}, Landroid/content/Context;->getAssets()Landroid/content/res/AssetManager;

    move-result-object p0

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, ".timestamp"

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, p1}, Landroid/content/res/AssetManager;->open(Ljava/lang/String;)Ljava/io/InputStream;

    move-result-object p0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    const/4 p0, 0x0

    :goto_0
    if-eqz p0, :cond_0

    .line 150
    invoke-static {p0}, Lcom/qihoo360/replugin/utils/pkg/PackageFilesUtil;->getTimestampFromStream(Ljava/io/InputStream;)J

    move-result-wide p0

    return-wide p0

    :cond_0
    const-wide/16 p0, 0x0

    return-wide p0
.end method

.method public static getFileTimestamp(Landroid/content/Context;Ljava/lang/String;)J
    .locals 1

    .line 128
    :try_start_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, ".timestamp"

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, p1}, Landroid/content/Context;->openFileInput(Ljava/lang/String;)Ljava/io/FileInputStream;

    move-result-object p0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    const/4 p0, 0x0

    :goto_0
    if-eqz p0, :cond_0

    .line 134
    invoke-static {p0}, Lcom/qihoo360/replugin/utils/pkg/PackageFilesUtil;->getTimestampFromStream(Ljava/io/InputStream;)J

    move-result-wide p0

    return-wide p0

    :cond_0
    const-wide/16 p0, 0x0

    return-wide p0
.end method

.method public static getLatestFileTimestamp(Landroid/content/Context;Ljava/lang/String;)J
    .locals 2

    .line 96
    invoke-static {p0, p1}, Lcom/qihoo360/replugin/utils/pkg/PackageFilesUtil;->getFileTimestamp(Landroid/content/Context;Ljava/lang/String;)J

    move-result-wide v0

    .line 97
    invoke-static {p0, p1}, Lcom/qihoo360/replugin/utils/pkg/PackageFilesUtil;->getBundleTimestamp(Landroid/content/Context;Ljava/lang/String;)J

    move-result-wide p0

    .line 99
    invoke-static {v0, v1, p0, p1}, Ljava/lang/Math;->max(JJ)J

    move-result-wide p0

    return-wide p0
.end method

.method private static getTimestampFromStream(Ljava/io/InputStream;)J
    .locals 7

    const-string v0, ""

    const-string v1, "PackageFilesUtil"

    const/4 v2, 0x0

    .line 160
    :try_start_0
    new-instance v3, Ljava/io/DataInputStream;

    invoke-direct {v3, p0}, Ljava/io/DataInputStream;-><init>(Ljava/io/InputStream;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_3
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 161
    :try_start_1
    invoke-virtual {v3}, Ljava/io/DataInputStream;->readLine()Ljava/lang/String;

    move-result-object v2

    .line 162
    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-nez v4, :cond_1

    .line 163
    invoke-static {v2}, Ljava/lang/Long;->parseLong(Ljava/lang/String;)J

    move-result-wide v4
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_2
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    .line 173
    :try_start_2
    invoke-virtual {v3}, Ljava/io/DataInputStream;->close()V

    if-eqz p0, :cond_0

    .line 176
    invoke-virtual {p0}, Ljava/io/InputStream;->close()V
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    .line 179
    sget-boolean v2, Lcom/qihoo360/mobilesafe/core/BuildConfig;->DEBUG:Z

    if-eqz v2, :cond_0

    .line 180
    invoke-static {v1, v0, p0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I

    :cond_0
    :goto_0
    return-wide v4

    .line 173
    :cond_1
    :try_start_3
    invoke-virtual {v3}, Ljava/io/DataInputStream;->close()V

    if-eqz p0, :cond_4

    .line 176
    invoke-virtual {p0}, Ljava/io/InputStream;->close()V
    :try_end_3
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_1

    goto :goto_5

    :catch_1
    move-exception p0

    .line 179
    sget-boolean v2, Lcom/qihoo360/mobilesafe/core/BuildConfig;->DEBUG:Z

    if-eqz v2, :cond_4

    .line 180
    :goto_1
    invoke-static {v1, v0, p0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I

    goto :goto_5

    :catch_2
    move-exception v2

    goto :goto_2

    :catchall_0
    move-exception v3

    move-object v6, v3

    move-object v3, v2

    move-object v2, v6

    goto :goto_6

    :catch_3
    move-exception v3

    move-object v6, v3

    move-object v3, v2

    move-object v2, v6

    .line 167
    :goto_2
    :try_start_4
    sget-boolean v4, Lcom/qihoo360/mobilesafe/core/BuildConfig;->DEBUG:Z

    if-eqz v4, :cond_2

    .line 168
    invoke-static {v1, v0, v2}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_1

    :cond_2
    if-eqz v3, :cond_3

    .line 173
    :try_start_5
    invoke-virtual {v3}, Ljava/io/DataInputStream;->close()V

    goto :goto_3

    :catch_4
    move-exception p0

    goto :goto_4

    :cond_3
    :goto_3
    if-eqz p0, :cond_4

    .line 176
    invoke-virtual {p0}, Ljava/io/InputStream;->close()V
    :try_end_5
    .catch Ljava/lang/Exception; {:try_start_5 .. :try_end_5} :catch_4

    goto :goto_5

    .line 179
    :goto_4
    sget-boolean v2, Lcom/qihoo360/mobilesafe/core/BuildConfig;->DEBUG:Z

    if-eqz v2, :cond_4

    goto :goto_1

    :cond_4
    :goto_5
    const-wide/16 v0, 0x0

    return-wide v0

    :catchall_1
    move-exception v2

    :goto_6
    if-eqz v3, :cond_5

    .line 173
    :try_start_6
    invoke-virtual {v3}, Ljava/io/DataInputStream;->close()V

    goto :goto_7

    :catch_5
    move-exception p0

    goto :goto_8

    :cond_5
    :goto_7
    if-eqz p0, :cond_6

    .line 176
    invoke-virtual {p0}, Ljava/io/InputStream;->close()V
    :try_end_6
    .catch Ljava/lang/Exception; {:try_start_6 .. :try_end_6} :catch_5

    goto :goto_9

    .line 179
    :goto_8
    sget-boolean v3, Lcom/qihoo360/mobilesafe/core/BuildConfig;->DEBUG:Z

    if-eqz v3, :cond_6

    .line 180
    invoke-static {v1, v0, p0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I

    .line 182
    :cond_6
    :goto_9
    throw v2
.end method

.method public static isExtractedFromAssetsToFiles(Landroid/content/Context;Ljava/lang/String;)Z
    .locals 1

    .line 189
    invoke-virtual {p0, p1}, Landroid/content/Context;->getFileStreamPath(Ljava/lang/String;)Ljava/io/File;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 190
    invoke-virtual {v0}, Ljava/io/File;->exists()Z

    move-result v0

    if-nez v0, :cond_0

    goto :goto_0

    .line 197
    :cond_0
    invoke-static {p0, p1}, Lcom/qihoo360/replugin/utils/pkg/PackageFilesUtil;->compareDataFileVersion(Landroid/content/Context;Ljava/lang/String;)Z

    move-result p0

    return p0

    .line 191
    :cond_1
    :goto_0
    sget-boolean p0, Lcom/qihoo360/mobilesafe/core/BuildConfig;->DEBUG:Z

    if-eqz p0, :cond_2

    .line 192
    new-instance p0, Ljava/lang/StringBuilder;

    invoke-direct {p0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "Extract no exist file from assets filename = "

    invoke-virtual {p0, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    const-string p1, "PackageFilesUtil"

    invoke-static {p1, p0}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    :cond_2
    const/4 p0, 0x1

    return p0
.end method

.method public static isFileUpdated(Landroid/content/Context;Ljava/lang/String;)Z
    .locals 4

    .line 110
    invoke-virtual {p0, p1}, Landroid/content/Context;->getFileStreamPath(Ljava/lang/String;)Ljava/io/File;

    move-result-object v0

    const/4 v1, 0x0

    if-nez v0, :cond_0

    return v1

    .line 114
    :cond_0
    invoke-virtual {v0}, Ljava/io/File;->exists()Z

    move-result v0

    if-nez v0, :cond_1

    return v1

    .line 118
    :cond_1
    invoke-static {p0, p1}, Lcom/qihoo360/replugin/utils/pkg/PackageFilesUtil;->getFileTimestamp(Landroid/content/Context;Ljava/lang/String;)J

    move-result-wide v2

    .line 119
    invoke-static {p0, p1}, Lcom/qihoo360/replugin/utils/pkg/PackageFilesUtil;->getBundleTimestamp(Landroid/content/Context;Ljava/lang/String;)J

    move-result-wide p0

    cmp-long p0, p0, v2

    if-gtz p0, :cond_2

    const/4 v1, 0x1

    :cond_2
    return v1
.end method

.method public static openLatestInputFile(Landroid/content/Context;Ljava/lang/String;)Ljava/io/InputStream;
    .locals 4

    .line 54
    invoke-static {p0, p1}, Lcom/qihoo360/replugin/utils/pkg/PackageFilesUtil;->getFileTimestamp(Landroid/content/Context;Ljava/lang/String;)J

    move-result-wide v0

    .line 55
    invoke-static {p0, p1}, Lcom/qihoo360/replugin/utils/pkg/PackageFilesUtil;->getBundleTimestamp(Landroid/content/Context;Ljava/lang/String;)J

    move-result-wide v2

    cmp-long v0, v0, v2

    const-string v1, "PackageFilesUtil"

    const/4 v2, 0x0

    if-ltz v0, :cond_0

    .line 61
    :try_start_0
    invoke-virtual {p0, p1}, Landroid/content/Context;->openFileInput(Ljava/lang/String;)Ljava/io/FileInputStream;

    move-result-object v2

    .line 63
    sget-boolean v0, Lcom/qihoo360/mobilesafe/core/BuildConfig;->DEBUG:Z

    if-eqz v0, :cond_0

    .line 64
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "Opening in files directory: "

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v1, v0}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    .line 67
    :catch_0
    sget-boolean v0, Lcom/qihoo360/mobilesafe/core/BuildConfig;->DEBUG:Z

    if-eqz v0, :cond_0

    .line 68
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, " in files directory not found, skip."

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v1, v0}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    :cond_0
    :goto_0
    if-nez v2, :cond_1

    .line 77
    :try_start_1
    invoke-virtual {p0}, Landroid/content/Context;->getAssets()Landroid/content/res/AssetManager;

    move-result-object p0

    invoke-virtual {p0, p1}, Landroid/content/res/AssetManager;->open(Ljava/lang/String;)Ljava/io/InputStream;

    move-result-object v2

    .line 78
    sget-boolean p0, Lcom/qihoo360/mobilesafe/core/BuildConfig;->DEBUG:Z

    if-eqz p0, :cond_1

    .line 79
    new-instance p0, Ljava/lang/StringBuilder;

    invoke-direct {p0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "Opening in assets: "

    invoke-virtual {p0, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {v1, p0}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I
    :try_end_1
    .catch Ljava/io/FileNotFoundException; {:try_start_1 .. :try_end_1} :catch_2
    .catch Ljava/io/IOException; {:try_start_1 .. :try_end_1} :catch_1

    goto :goto_1

    :catch_1
    move-exception p0

    .line 85
    sget-boolean v0, Lcom/qihoo360/mobilesafe/core/BuildConfig;->DEBUG:Z

    if-eqz v0, :cond_1

    .line 86
    invoke-static {v1, p1, p0}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I

    :catch_2
    :cond_1
    :goto_1
    return-object v2
.end method
