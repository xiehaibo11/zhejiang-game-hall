.class public Lorg/cocos2dx/lua/AppActivity;
.super Lorg/cocos2dx/lib/Cocos2dxActivity;
.source "AppActivity.java"


# static fields
.field public static mactivity:Lorg/cocos2dx/lua/AppActivity;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 31
    invoke-direct {p0}, Lorg/cocos2dx/lib/Cocos2dxActivity;-><init>()V

    return-void
.end method

.method public static buglyAddUserValue(Ljava/lang/String;)V
    .locals 2

    .line 132
    invoke-static {}, Lorg/cocos2dx/lua/AppActivity;->getContext()Landroid/content/Context;

    move-result-object v0

    check-cast v0, Lorg/cocos2dx/lua/AppActivity;

    new-instance v1, Lorg/cocos2dx/lua/AppActivity$5;

    invoke-direct {v1, p0}, Lorg/cocos2dx/lua/AppActivity$5;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Lorg/cocos2dx/lua/AppActivity;->runOnUiThread(Ljava/lang/Runnable;)V

    return-void
.end method

.method public static buglyLog(Ljava/lang/String;)V
    .locals 2

    .line 150
    invoke-static {}, Lorg/cocos2dx/lua/AppActivity;->getContext()Landroid/content/Context;

    move-result-object v0

    check-cast v0, Lorg/cocos2dx/lua/AppActivity;

    new-instance v1, Lorg/cocos2dx/lua/AppActivity$6;

    invoke-direct {v1, p0}, Lorg/cocos2dx/lua/AppActivity$6;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Lorg/cocos2dx/lua/AppActivity;->runOnUiThread(Ljava/lang/Runnable;)V

    return-void
.end method

.method public static buglyReportLuaException(Ljava/lang/String;)V
    .locals 2

    .line 189
    invoke-static {}, Lorg/cocos2dx/lua/AppActivity;->getContext()Landroid/content/Context;

    move-result-object v0

    check-cast v0, Lorg/cocos2dx/lua/AppActivity;

    new-instance v1, Lorg/cocos2dx/lua/AppActivity$7;

    invoke-direct {v1, p0}, Lorg/cocos2dx/lua/AppActivity$7;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Lorg/cocos2dx/lua/AppActivity;->runOnUiThread(Ljava/lang/Runnable;)V

    return-void
.end method

.method public static buglySetTag(Ljava/lang/String;)V
    .locals 2

    .line 114
    invoke-static {}, Lorg/cocos2dx/lua/AppActivity;->getContext()Landroid/content/Context;

    move-result-object v0

    check-cast v0, Lorg/cocos2dx/lua/AppActivity;

    new-instance v1, Lorg/cocos2dx/lua/AppActivity$4;

    invoke-direct {v1, p0}, Lorg/cocos2dx/lua/AppActivity$4;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Lorg/cocos2dx/lua/AppActivity;->runOnUiThread(Ljava/lang/Runnable;)V

    return-void
.end method

.method public static buglySetUserId(Ljava/lang/String;)V
    .locals 2

    .line 97
    invoke-static {}, Lorg/cocos2dx/lua/AppActivity;->getContext()Landroid/content/Context;

    move-result-object v0

    check-cast v0, Lorg/cocos2dx/lua/AppActivity;

    new-instance v1, Lorg/cocos2dx/lua/AppActivity$3;

    invoke-direct {v1, p0}, Lorg/cocos2dx/lua/AppActivity$3;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Lorg/cocos2dx/lua/AppActivity;->runOnUiThread(Ljava/lang/Runnable;)V

    return-void
.end method

.method public static hideSplash()V
    .locals 1

    .line 212
    sget-object v0, Lorg/cocos2dx/lua/AppActivity;->mactivity:Lorg/cocos2dx/lua/AppActivity;

    invoke-static {v0}, Lcom/bianfeng/gongxiang/screenlib/ScreenSdk;->hideSplashView(Landroid/app/Activity;)V

    return-void
.end method

.method static initSDKYMN()V
    .locals 2

    .line 85
    sget-object v0, Lorg/cocos2dx/lua/AppActivity;->mactivity:Lorg/cocos2dx/lua/AppActivity;

    new-instance v1, Lorg/cocos2dx/lua/AppActivity$2;

    invoke-direct {v1}, Lorg/cocos2dx/lua/AppActivity$2;-><init>()V

    invoke-virtual {v0, v1}, Lorg/cocos2dx/lua/AppActivity;->runOnUiThread(Ljava/lang/Runnable;)V

    return-void
.end method

.method public static readJsonFile(Ljava/lang/String;)Ljava/lang/String;
    .locals 3

    .line 271
    new-instance v0, Ljava/io/File;

    invoke-direct {v0, p0}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 273
    invoke-virtual {v0}, Ljava/io/File;->exists()Z

    move-result p0

    const/4 v1, 0x0

    if-nez p0, :cond_0

    return-object v1

    .line 279
    :cond_0
    :try_start_0
    new-instance p0, Ljava/io/FileInputStream;

    invoke-direct {p0, v0}, Ljava/io/FileInputStream;-><init>(Ljava/io/File;)V

    .line 281
    invoke-virtual {p0}, Ljava/io/FileInputStream;->available()I

    move-result v0

    .line 282
    new-array v0, v0, [B

    .line 284
    invoke-virtual {p0, v0}, Ljava/io/FileInputStream;->read([B)I

    .line 285
    invoke-virtual {p0}, Ljava/io/FileInputStream;->close()V

    .line 287
    new-instance p0, Ljava/lang/String;

    const-string v2, "UTF-8"

    invoke-direct {p0, v0, v2}, Ljava/lang/String;-><init>([BLjava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object p0

    :catch_0
    move-exception p0

    .line 291
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    return-object v1
.end method


# virtual methods
.method public checkScheme()V
    .locals 9

    const-string v0, " "

    .line 344
    invoke-virtual {p0}, Lorg/cocos2dx/lua/AppActivity;->getIntent()Landroid/content/Intent;

    move-result-object v1

    .line 345
    invoke-virtual {v1}, Landroid/content/Intent;->getScheme()Ljava/lang/String;

    move-result-object v2

    .line 346
    invoke-virtual {v1}, Landroid/content/Intent;->getData()Landroid/net/Uri;

    move-result-object v3

    .line 347
    sget-object v4, Ljava/lang/System;->out:Ljava/io/PrintStream;

    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    const-string v6, "scheme:"

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v4, v2}, Ljava/io/PrintStream;->println(Ljava/lang/String;)V

    if-eqz v3, :cond_0

    const-string v2, "key"

    .line 349
    invoke-virtual {v3, v2}, Landroid/net/Uri;->getQueryParameter(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    .line 350
    sget-object v4, Ljava/lang/System;->out:Ljava/io/PrintStream;

    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    const-string v6, "String:"

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v4, v5}, Ljava/io/PrintStream;->println(Ljava/lang/String;)V

    const/16 v4, 0x641

    .line 352
    :try_start_0
    invoke-virtual {v3}, Landroid/net/Uri;->getQuery()Ljava/lang/String;

    move-result-object v3

    invoke-static {v4, v3}, Lorg/cocos2dx/lua/YmnSupport;->ymnCallBack(ILjava/lang/String;)V

    const-string v3, "clipboard"

    .line 353
    invoke-virtual {p0, v3}, Lorg/cocos2dx/lua/AppActivity;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Landroid/content/ClipboardManager;

    .line 354
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3}, Landroid/content/ClipboardManager;->getPrimaryClip()Landroid/content/ClipData;

    move-result-object v5

    invoke-virtual {v5}, Landroid/content/ClipData;->getDescription()Landroid/content/ClipDescription;

    move-result-object v5

    invoke-virtual {v5}, Landroid/content/ClipDescription;->getLabel()Ljava/lang/CharSequence;

    move-result-object v5

    check-cast v5, Ljava/lang/String;

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Landroid/content/ClipboardManager;->getPrimaryClip()Landroid/content/ClipData;

    move-result-object v5

    const/4 v6, 0x0

    invoke-virtual {v5, v6}, Landroid/content/ClipData;->getItemAt(I)Landroid/content/ClipData$Item;

    move-result-object v5

    invoke-virtual {v5}, Landroid/content/ClipData$Item;->getText()Ljava/lang/CharSequence;

    move-result-object v5

    check-cast v5, Ljava/lang/String;

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    .line 355
    sget-object v5, Ljava/lang/System;->out:Ljava/io/PrintStream;

    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    const-string v8, "String1:"

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v5, v4}, Ljava/io/PrintStream;->println(Ljava/lang/String;)V

    const-string v4, ""

    .line 356
    invoke-static {v4, v2}, Landroid/content/ClipData;->newPlainText(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Landroid/content/ClipData;

    move-result-object v2

    .line 357
    invoke-virtual {v3, v2}, Landroid/content/ClipboardManager;->setPrimaryClip(Landroid/content/ClipData;)V

    .line 358
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3}, Landroid/content/ClipboardManager;->getPrimaryClip()Landroid/content/ClipData;

    move-result-object v4

    invoke-virtual {v4}, Landroid/content/ClipData;->getDescription()Landroid/content/ClipDescription;

    move-result-object v4

    invoke-virtual {v4}, Landroid/content/ClipDescription;->getLabel()Ljava/lang/CharSequence;

    move-result-object v4

    check-cast v4, Ljava/lang/String;

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Landroid/content/ClipboardManager;->getPrimaryClip()Landroid/content/ClipData;

    move-result-object v0

    invoke-virtual {v0, v6}, Landroid/content/ClipData;->getItemAt(I)Landroid/content/ClipData$Item;

    move-result-object v0

    invoke-virtual {v0}, Landroid/content/ClipData$Item;->getText()Ljava/lang/CharSequence;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 359
    sget-object v2, Ljava/lang/System;->out:Ljava/io/PrintStream;

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "String2:"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v2, v0}, Ljava/io/PrintStream;->println(Ljava/lang/String;)V

    const/4 v0, 0x0

    .line 360
    invoke-virtual {v1, v0}, Landroid/content/Intent;->setData(Landroid/net/Uri;)Landroid/content/Intent;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 362
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    :cond_0
    :goto_0
    return-void
.end method

.method invokeZJBWechatSetPayParams(ILjava/lang/String;ILjava/lang/String;)V
    .locals 2

    .line 310
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    :try_start_0
    const-string v1, "wxAppId"

    .line 312
    invoke-virtual {v0, v1, p4}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string p4, "appId"

    .line 313
    invoke-static {p1}, Ljava/lang/Integer;->toString(I)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p4, p1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string p1, "packageId"

    .line 314
    invoke-static {p3}, Ljava/lang/Integer;->toString(I)Ljava/lang/String;

    move-result-object p3

    invoke-virtual {v0, p1, p3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string p1, "clientKey"

    .line 315
    invoke-virtual {v0, p1, p2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string p1, "wechat_set_pay_params"

    const/4 p2, 0x1

    .line 316
    new-array p2, p2, [Ljava/lang/String;

    const/4 p3, 0x0

    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p4

    aput-object p4, p2, p3

    invoke-static {p1, p2}, Lcom/bianfeng/ymnsdk/YmnSdk;->callFunction(Ljava/lang/String;[Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 318
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    return-void
.end method

.method protected onCreate(Landroid/os/Bundle;)V
    .locals 1

    const/4 v0, 0x0

    .line 36
    invoke-super {p0, v0}, Lorg/cocos2dx/lib/Cocos2dxActivity;->setEnableVirtualButton(Z)V

    .line 37
    invoke-super {p0, p1}, Lorg/cocos2dx/lib/Cocos2dxActivity;->onCreate(Landroid/os/Bundle;)V

    .line 39
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/YmnSdk;->onCreate(Landroid/app/Activity;)V

    .line 40
    sput-object p0, Lorg/cocos2dx/lua/AppActivity;->mactivity:Lorg/cocos2dx/lua/AppActivity;

    .line 44
    invoke-virtual {p0}, Lorg/cocos2dx/lua/AppActivity;->getGLSurfaceView()Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView;

    move-result-object p1

    invoke-virtual {p1, v0}, Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView;->setMultipleTouchEnabled(Z)V

    .line 46
    invoke-virtual {p0}, Lorg/cocos2dx/lua/AppActivity;->isTaskRoot()Z

    move-result p1

    if-nez p1, :cond_0

    return-void

    .line 56
    :cond_0
    invoke-static {p0}, Lcom/bianfeng/libuniverse/Universe;->onCreate(Landroid/content/Context;)V

    .line 57
    invoke-static {p0}, Lorg/cocos2dx/lua/XhSupport;->setActivity(Landroid/app/Activity;)V

    .line 60
    invoke-static {p0}, Lcom/ymnsdk/replugin/RepluginSdkJavaBridging;->onCreate(Landroid/content/Context;)V

    .line 62
    new-instance p1, Lorg/cocos2dx/lua/AppActivity$1;

    invoke-direct {p1, p0}, Lorg/cocos2dx/lua/AppActivity$1;-><init>(Lorg/cocos2dx/lua/AppActivity;)V

    invoke-static {p1}, Lcom/ymnsdk/replugin/RepluginSdkJavaBridging;->addRePluginLister(Lcom/ymnsdk/replugin/listener/RepluginListener;)V

    return-void
.end method

.method protected onDestroy()V
    .locals 0

    .line 265
    invoke-super {p0}, Lorg/cocos2dx/lib/Cocos2dxActivity;->onDestroy()V

    .line 266
    invoke-static {}, Lcom/ymnsdk/replugin/RepluginSdkJavaBridging;->onDestory()V

    return-void
.end method

.method protected onNewIntent(Landroid/content/Intent;)V
    .locals 2

    .line 323
    invoke-super {p0, p1}, Lorg/cocos2dx/lib/Cocos2dxActivity;->onNewIntent(Landroid/content/Intent;)V

    .line 324
    sget-object v0, Ljava/lang/System;->out:Ljava/io/PrintStream;

    const-string v1, "_debug onNewIntent"

    invoke-virtual {v0, v1}, Ljava/io/PrintStream;->println(Ljava/lang/String;)V

    if-eqz p1, :cond_0

    .line 325
    invoke-virtual {p1}, Landroid/content/Intent;->getData()Landroid/net/Uri;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 326
    invoke-virtual {p0}, Lorg/cocos2dx/lua/AppActivity;->checkScheme()V

    goto :goto_0

    :cond_0
    if-nez p1, :cond_1

    .line 329
    sget-object v0, Ljava/lang/System;->out:Ljava/io/PrintStream;

    const-string v1, "_debug onNewIntent intent is null"

    invoke-virtual {v0, v1}, Ljava/io/PrintStream;->println(Ljava/lang/String;)V

    goto :goto_0

    .line 331
    :cond_1
    sget-object v0, Ljava/lang/System;->out:Ljava/io/PrintStream;

    const-string v1, "_debug onNewIntent intent.getData is null"

    invoke-virtual {v0, v1}, Ljava/io/PrintStream;->println(Ljava/lang/String;)V

    .line 334
    :goto_0
    invoke-static {p1}, Lorg/cocos2dx/lua/YmnSupport;->onNewIntent(Landroid/content/Intent;)V

    .line 335
    invoke-static {p1}, Lcom/ymnsdk/replugin/RepluginSdkJavaBridging;->onNewIntent(Landroid/content/Intent;)V

    return-void
.end method

.method protected onPause()V
    .locals 0

    .line 299
    invoke-super {p0}, Lorg/cocos2dx/lib/Cocos2dxActivity;->onPause()V

    .line 300
    invoke-static {}, Lorg/cocos2dx/lua/YmnSupport;->onPause()V

    return-void
.end method

.method public onRequestPermissionsResult(I[Ljava/lang/String;[I)V
    .locals 0

    .line 217
    invoke-super {p0, p1, p2, p3}, Lorg/cocos2dx/lib/Cocos2dxActivity;->onRequestPermissionsResult(I[Ljava/lang/String;[I)V

    .line 218
    invoke-static {p1, p2, p3}, Lcom/bianfeng/ymnsdk/YmnSdk;->onRequestPermissionsResult(I[Ljava/lang/String;[I)V

    return-void
.end method

.method protected onResume()V
    .locals 2

    .line 229
    invoke-super {p0}, Lorg/cocos2dx/lib/Cocos2dxActivity;->onResume()V

    .line 230
    invoke-virtual {p0}, Lorg/cocos2dx/lua/AppActivity;->checkScheme()V

    .line 231
    invoke-static {}, Lorg/cocos2dx/lua/YmnSupport;->onResume()V

    const-string v0, "onResume:"

    const-string v1, "Activity_onResume\u89e6\u53d1"

    .line 233
    invoke-static {v0, v1}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;)I

    return-void
.end method

.method protected onStart()V
    .locals 0

    .line 223
    invoke-super {p0}, Lorg/cocos2dx/lib/Cocos2dxActivity;->onStart()V

    .line 224
    invoke-static {}, Lorg/cocos2dx/lua/YmnSupport;->onStart()V

    return-void
.end method

.method protected onStop()V
    .locals 0

    .line 305
    invoke-super {p0}, Lorg/cocos2dx/lib/Cocos2dxActivity;->onStop()V

    .line 306
    invoke-static {}, Lorg/cocos2dx/lua/YmnSupport;->onStop()V

    return-void
.end method
