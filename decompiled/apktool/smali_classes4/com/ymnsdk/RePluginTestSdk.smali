.class public Lcom/ymnsdk/RePluginTestSdk;
.super Ljava/lang/Object;
.source "RePluginTestSdk.java"


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 18
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private static copyAssetsFileToAppFiles(Landroid/app/Activity;Ljava/lang/String;Ljava/lang/String;)V
    .locals 4

    const/4 v0, 0x0

    .line 35
    :try_start_0
    invoke-virtual {p0}, Landroid/app/Activity;->getAssets()Landroid/content/res/AssetManager;

    move-result-object v1

    invoke-virtual {v1, p1}, Landroid/content/res/AssetManager;->open(Ljava/lang/String;)Ljava/io/InputStream;

    move-result-object p1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_1
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    const/4 v1, 0x0

    .line 36
    :try_start_1
    invoke-virtual {p0, p2, v1}, Landroid/app/Activity;->openFileOutput(Ljava/lang/String;I)Ljava/io/FileOutputStream;

    move-result-object v0

    const/16 p0, 0x400

    new-array p0, p0, [B

    .line 39
    :goto_0
    invoke-virtual {p1, p0}, Ljava/io/InputStream;->read([B)I

    move-result p2

    const/4 v2, -0x1

    if-eq p2, v2, :cond_0

    .line 40
    invoke-virtual {v0, p0, v1, p2}, Ljava/io/FileOutputStream;->write([BII)V

    goto :goto_0

    .line 42
    :cond_0
    invoke-virtual {v0}, Ljava/io/FileOutputStream;->flush()V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 47
    :try_start_2
    invoke-virtual {p1}, Ljava/io/InputStream;->close()V

    .line 48
    invoke-virtual {v0}, Ljava/io/FileOutputStream;->close()V
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_2

    goto :goto_2

    :catchall_0
    move-exception p0

    move-object v3, v0

    move-object v0, p1

    move-object p1, v3

    goto :goto_3

    :catch_0
    move-exception p0

    move-object v3, v0

    move-object v0, p1

    move-object p1, v3

    goto :goto_1

    :catchall_1
    move-exception p0

    move-object p1, v0

    goto :goto_3

    :catch_1
    move-exception p0

    move-object p1, v0

    .line 44
    :goto_1
    :try_start_3
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_2

    .line 47
    :try_start_4
    invoke-virtual {v0}, Ljava/io/InputStream;->close()V

    .line 48
    invoke-virtual {p1}, Ljava/io/FileOutputStream;->close()V
    :try_end_4
    .catch Ljava/lang/Exception; {:try_start_4 .. :try_end_4} :catch_2

    goto :goto_2

    :catch_2
    move-exception p0

    .line 50
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    :goto_2
    return-void

    :catchall_2
    move-exception p0

    .line 47
    :goto_3
    :try_start_5
    invoke-virtual {v0}, Ljava/io/InputStream;->close()V

    .line 48
    invoke-virtual {p1}, Ljava/io/FileOutputStream;->close()V
    :try_end_5
    .catch Ljava/lang/Exception; {:try_start_5 .. :try_end_5} :catch_3

    goto :goto_4

    :catch_3
    move-exception p1

    .line 50
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    .line 52
    :goto_4
    throw p0
.end method

.method public static simulateInstallExternalPlugin(Landroid/app/Activity;)V
    .locals 9

    const-string v0, "com.cocos.game.AppActivity"

    const-string v1, "hostActivity"

    const-string v2, "hostPackageName"

    .line 62
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p0}, Landroid/app/Activity;->getFilesDir()Ljava/io/File;

    move-result-object v4

    invoke-virtual {v4}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v4, Ljava/io/File;->separator:Ljava/lang/String;

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, "plugin.apk"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    .line 63
    new-instance v5, Ljava/io/File;

    invoke-direct {v5, v3}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 64
    invoke-virtual {v5}, Ljava/io/File;->exists()Z

    move-result v6

    if-eqz v6, :cond_0

    .line 65
    invoke-static {v5}, Lcom/qihoo360/replugin/utils/FileUtils;->deleteQuietly(Ljava/io/File;)Z

    .line 69
    :cond_0
    invoke-static {p0, v4, v4}, Lcom/ymnsdk/RePluginTestSdk;->copyAssetsFileToAppFiles(Landroid/app/Activity;Ljava/lang/String;Ljava/lang/String;)V

    const/4 v4, 0x0

    .line 71
    invoke-virtual {v5}, Ljava/io/File;->exists()Z

    move-result v5

    if-eqz v5, :cond_1

    const/4 v4, 0x0

    .line 72
    invoke-static {v3, v4}, Lcom/qihoo360/replugin/RePlugin;->install(Ljava/lang/String;Z)Lcom/qihoo360/replugin/model/PluginInfo;

    move-result-object v4

    :cond_1
    if-eqz v4, :cond_2

    .line 75
    invoke-static {v4}, Lcom/qihoo360/replugin/RePlugin;->preload(Lcom/qihoo360/replugin/model/PluginInfo;)Z

    const-string v3, "com.yxl.fish"

    const-string v4, "com.qihoo360.replugin.sample.demo1.MainActivity"

    .line 76
    invoke-static {v3, v4}, Lcom/qihoo360/replugin/RePlugin;->createIntent(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    move-result-object v4

    const/high16 v5, 0x20000

    .line 77
    invoke-virtual {v4, v5}, Landroid/content/Intent;->addFlags(I)Landroid/content/Intent;

    .line 78
    new-instance v5, Lorg/json/JSONObject;

    invoke-direct {v5}, Lorg/json/JSONObject;-><init>()V

    :try_start_0
    const-string v6, "uaalType"

    const-string v7, "shuangkou"

    .line 80
    invoke-virtual {v5, v6, v7}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v6, "deviceID"

    const-string v7, "7736DCD6-2609-45AD-80E0-E56F93F8899B"

    .line 81
    invoke-virtual {v5, v6, v7}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v6, "userID"

    const-string v7, "SAZr714208"

    .line 82
    invoke-virtual {v5, v6, v7}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v6, "numID"

    const-string v7, "112780554"

    .line 83
    invoke-virtual {v5, v6, v7}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v6, "areaID"

    const/16 v7, 0xa

    .line 84
    invoke-virtual {v5, v6, v7}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v6, "sessionID"

    const-string v7, "{779F8F94-5E54-734F-A1FA-376605CFFFE7}"

    .line 85
    invoke-virtual {v5, v6, v7}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v6, "paychannel"

    const/16 v7, 0x2733

    .line 86
    invoke-virtual {v5, v6, v7}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v6, "cpsID"

    const/16 v7, 0x271d

    .line 87
    invoke-virtual {v5, v6, v7}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v6, "thirdPay"

    const-string v7, "payForProduct"

    .line 88
    invoke-virtual {v5, v6, v7}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v6, "com.bf.TTShuangKou.mi"

    .line 89
    invoke-virtual {v5, v2, v6}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 90
    invoke-virtual {v5, v1, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v6

    .line 93
    invoke-virtual {v6}, Ljava/lang/Exception;->printStackTrace()V

    .line 95
    :goto_0
    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    const-string v7, ""

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v7

    invoke-virtual {v6, v7, v8}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    const-string v7, "data"

    invoke-virtual {v4, v7, v6}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    .line 96
    invoke-virtual {v5}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v5

    const-string v6, "unity"

    invoke-virtual {v4, v6, v5}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    .line 97
    invoke-virtual {v4, v2, v3}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    .line 98
    invoke-virtual {v4, v1, v0}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    .line 99
    invoke-static {p0, v4}, Lcom/qihoo360/replugin/RePlugin;->startActivity(Landroid/content/Context;Landroid/content/Intent;)Z

    :cond_2
    return-void
.end method

.method public static testHostApk(Landroid/app/Activity;)V
    .locals 0

    .line 21
    invoke-static {p0}, Lcom/ymnsdk/RePluginTestSdk;->simulateInstallExternalPlugin(Landroid/app/Activity;)V

    return-void
.end method
