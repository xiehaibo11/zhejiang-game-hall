.class public Lorg/cocos2dx/javascript/SDKWrapper;
.super Ljava/lang/Object;
.source "SDKWrapper.java"


# static fields
.field private static mInstace:Lorg/cocos2dx/javascript/SDKWrapper;


# instance fields
.field private mainActive:Landroid/content/Context;

.field private sdkClasses:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lorg/cocos2dx/javascript/service/SDKClass;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method public constructor <init>()V
    .locals 1

    .line 42
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x0

    .line 43
    iput-object v0, p0, Lorg/cocos2dx/javascript/SDKWrapper;->mainActive:Landroid/content/Context;

    return-void
.end method

.method public static getInstance()Lorg/cocos2dx/javascript/SDKWrapper;
    .locals 1

    .line 48
    sget-object v0, Lorg/cocos2dx/javascript/SDKWrapper;->mInstace:Lorg/cocos2dx/javascript/SDKWrapper;

    if-nez v0, :cond_0

    .line 49
    new-instance v0, Lorg/cocos2dx/javascript/SDKWrapper;

    invoke-direct {v0}, Lorg/cocos2dx/javascript/SDKWrapper;-><init>()V

    sput-object v0, Lorg/cocos2dx/javascript/SDKWrapper;->mInstace:Lorg/cocos2dx/javascript/SDKWrapper;

    .line 51
    :cond_0
    sget-object v0, Lorg/cocos2dx/javascript/SDKWrapper;->mInstace:Lorg/cocos2dx/javascript/SDKWrapper;

    return-object v0
.end method

.method private getJson(Landroid/content/Context;Ljava/lang/String;)Ljava/lang/String;
    .locals 3

    .line 86
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    .line 87
    invoke-virtual {p1}, Landroid/content/Context;->getAssets()Landroid/content/res/AssetManager;

    move-result-object p1

    .line 89
    :try_start_0
    new-instance v1, Ljava/io/BufferedReader;

    new-instance v2, Ljava/io/InputStreamReader;

    invoke-virtual {p1, p2}, Landroid/content/res/AssetManager;->open(Ljava/lang/String;)Ljava/io/InputStream;

    move-result-object p1

    invoke-direct {v2, p1}, Ljava/io/InputStreamReader;-><init>(Ljava/io/InputStream;)V

    invoke-direct {v1, v2}, Ljava/io/BufferedReader;-><init>(Ljava/io/Reader;)V

    .line 91
    :goto_0
    invoke-virtual {v1}, Ljava/io/BufferedReader;->readLine()Ljava/lang/String;

    move-result-object p1

    if-eqz p1, :cond_0

    .line 92
    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 95
    invoke-virtual {p1}, Ljava/io/IOException;->printStackTrace()V

    const/4 p1, 0x0

    .line 96
    invoke-virtual {v0}, Ljava/lang/StringBuilder;->length()I

    move-result p2

    invoke-virtual {v0, p1, p2}, Ljava/lang/StringBuilder;->delete(II)Ljava/lang/StringBuilder;

    .line 98
    :cond_0
    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p1}, Ljava/lang/String;->trim()Ljava/lang/String;

    move-result-object p1

    return-object p1
.end method


# virtual methods
.method public getContext()Landroid/content/Context;
    .locals 1

    .line 62
    iget-object v0, p0, Lorg/cocos2dx/javascript/SDKWrapper;->mainActive:Landroid/content/Context;

    return-object v0
.end method

.method public init(Landroid/content/Context;)V
    .locals 2

    .line 55
    iput-object p1, p0, Lorg/cocos2dx/javascript/SDKWrapper;->mainActive:Landroid/content/Context;

    .line 56
    iget-object v0, p0, Lorg/cocos2dx/javascript/SDKWrapper;->sdkClasses:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lorg/cocos2dx/javascript/service/SDKClass;

    .line 57
    invoke-virtual {v1, p1}, Lorg/cocos2dx/javascript/service/SDKClass;->init(Landroid/content/Context;)V

    goto :goto_0

    :cond_0
    return-void
.end method

.method public loadSDKClass()V
    .locals 0

    return-void
.end method

.method public onActivityResult(IILandroid/content/Intent;)V
    .locals 2

    .line 128
    iget-object v0, p0, Lorg/cocos2dx/javascript/SDKWrapper;->sdkClasses:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lorg/cocos2dx/javascript/service/SDKClass;

    .line 129
    invoke-virtual {v1, p1, p2, p3}, Lorg/cocos2dx/javascript/service/SDKClass;->onActivityResult(IILandroid/content/Intent;)V

    goto :goto_0

    :cond_0
    return-void
.end method

.method public onBackPressed()V
    .locals 2

    .line 152
    iget-object v0, p0, Lorg/cocos2dx/javascript/SDKWrapper;->sdkClasses:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lorg/cocos2dx/javascript/service/SDKClass;

    .line 153
    invoke-virtual {v1}, Lorg/cocos2dx/javascript/service/SDKClass;->onBackPressed()V

    goto :goto_0

    :cond_0
    return-void
.end method

.method public onConfigurationChanged(Landroid/content/res/Configuration;)V
    .locals 2

    .line 158
    iget-object v0, p0, Lorg/cocos2dx/javascript/SDKWrapper;->sdkClasses:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lorg/cocos2dx/javascript/service/SDKClass;

    .line 159
    invoke-virtual {v1, p1}, Lorg/cocos2dx/javascript/service/SDKClass;->onConfigurationChanged(Landroid/content/res/Configuration;)V

    goto :goto_0

    :cond_0
    return-void
.end method

.method public onDestroy()V
    .locals 2

    .line 122
    iget-object v0, p0, Lorg/cocos2dx/javascript/SDKWrapper;->sdkClasses:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lorg/cocos2dx/javascript/service/SDKClass;

    .line 123
    invoke-virtual {v1}, Lorg/cocos2dx/javascript/service/SDKClass;->onDestroy()V

    goto :goto_0

    :cond_0
    return-void
.end method

.method public onNewIntent(Landroid/content/Intent;)V
    .locals 2

    .line 134
    iget-object v0, p0, Lorg/cocos2dx/javascript/SDKWrapper;->sdkClasses:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lorg/cocos2dx/javascript/service/SDKClass;

    .line 135
    invoke-virtual {v1, p1}, Lorg/cocos2dx/javascript/service/SDKClass;->onNewIntent(Landroid/content/Intent;)V

    goto :goto_0

    :cond_0
    return-void
.end method

.method public onPause()V
    .locals 2

    .line 116
    iget-object v0, p0, Lorg/cocos2dx/javascript/SDKWrapper;->sdkClasses:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lorg/cocos2dx/javascript/service/SDKClass;

    .line 117
    invoke-virtual {v1}, Lorg/cocos2dx/javascript/service/SDKClass;->onPause()V

    goto :goto_0

    :cond_0
    return-void
.end method

.method public onRestart()V
    .locals 2

    .line 140
    iget-object v0, p0, Lorg/cocos2dx/javascript/SDKWrapper;->sdkClasses:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lorg/cocos2dx/javascript/service/SDKClass;

    .line 141
    invoke-virtual {v1}, Lorg/cocos2dx/javascript/service/SDKClass;->onRestart()V

    goto :goto_0

    :cond_0
    return-void
.end method

.method public onRestoreInstanceState(Landroid/os/Bundle;)V
    .locals 2

    .line 164
    iget-object v0, p0, Lorg/cocos2dx/javascript/SDKWrapper;->sdkClasses:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lorg/cocos2dx/javascript/service/SDKClass;

    .line 165
    invoke-virtual {v1, p1}, Lorg/cocos2dx/javascript/service/SDKClass;->onRestoreInstanceState(Landroid/os/Bundle;)V

    goto :goto_0

    :cond_0
    return-void
.end method

.method public onResume()V
    .locals 2

    .line 110
    iget-object v0, p0, Lorg/cocos2dx/javascript/SDKWrapper;->sdkClasses:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lorg/cocos2dx/javascript/service/SDKClass;

    .line 111
    invoke-virtual {v1}, Lorg/cocos2dx/javascript/service/SDKClass;->onResume()V

    goto :goto_0

    :cond_0
    return-void
.end method

.method public onSaveInstanceState(Landroid/os/Bundle;)V
    .locals 2

    .line 170
    iget-object v0, p0, Lorg/cocos2dx/javascript/SDKWrapper;->sdkClasses:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lorg/cocos2dx/javascript/service/SDKClass;

    .line 171
    invoke-virtual {v1, p1}, Lorg/cocos2dx/javascript/service/SDKClass;->onSaveInstanceState(Landroid/os/Bundle;)V

    goto :goto_0

    :cond_0
    return-void
.end method

.method public onStart()V
    .locals 2

    .line 176
    iget-object v0, p0, Lorg/cocos2dx/javascript/SDKWrapper;->sdkClasses:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lorg/cocos2dx/javascript/service/SDKClass;

    .line 177
    invoke-virtual {v1}, Lorg/cocos2dx/javascript/service/SDKClass;->onStart()V

    goto :goto_0

    :cond_0
    return-void
.end method

.method public onStop()V
    .locals 2

    .line 146
    iget-object v0, p0, Lorg/cocos2dx/javascript/SDKWrapper;->sdkClasses:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lorg/cocos2dx/javascript/service/SDKClass;

    .line 147
    invoke-virtual {v1}, Lorg/cocos2dx/javascript/service/SDKClass;->onStop()V

    goto :goto_0

    :cond_0
    return-void
.end method

.method public setGLSurfaceView(Landroid/opengl/GLSurfaceView;Landroid/content/Context;)V
    .locals 0

    return-void
.end method
