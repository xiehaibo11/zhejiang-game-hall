.class public Lcom/bianfeng/ymnsdk/ymnlink/YmnLinkActivity;
.super Landroid/app/Activity;
.source "YmnLinkActivity.java"


# static fields
.field static final KEY_GAME_ACTIVITY:Ljava/lang/String; = "GAME_ACTIVITY"


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 16
    invoke-direct {p0}, Landroid/app/Activity;-><init>()V

    return-void
.end method

.method private getGameActivityName()Ljava/lang/String;
    .locals 2

    .line 43
    invoke-direct {p0}, Lcom/bianfeng/ymnsdk/ymnlink/YmnLinkActivity;->getGameActivityNameByManifest()Ljava/lang/String;

    move-result-object v0

    .line 44
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_0

    .line 45
    invoke-direct {p0}, Lcom/bianfeng/ymnsdk/ymnlink/YmnLinkActivity;->getGameActivityNameByDefault()Ljava/lang/String;

    move-result-object v0

    :cond_0
    return-object v0
.end method

.method private getGameActivityNameByDefault()Ljava/lang/String;
    .locals 1

    :try_start_0
    const-string v0, "org.cocos2dx.cpp.AppActivity"

    .line 65
    invoke-static {v0}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;
    :try_end_0
    .catch Ljava/lang/ClassNotFoundException; {:try_start_0 .. :try_end_0} :catch_0

    return-object v0

    :catch_0
    const/4 v0, 0x0

    return-object v0
.end method

.method private getGameActivityNameByManifest()Ljava/lang/String;
    .locals 3

    .line 52
    :try_start_0
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/ymnlink/YmnLinkActivity;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object v0

    .line 53
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/ymnlink/YmnLinkActivity;->getPackageName()Ljava/lang/String;

    move-result-object v1

    const/16 v2, 0x80

    .line 54
    invoke-virtual {v0, v1, v2}, Landroid/content/pm/PackageManager;->getApplicationInfo(Ljava/lang/String;I)Landroid/content/pm/ApplicationInfo;

    move-result-object v0

    .line 55
    iget-object v0, v0, Landroid/content/pm/ApplicationInfo;->metaData:Landroid/os/Bundle;

    const-string v1, "GAME_ACTIVITY"

    invoke-virtual {v0, v1}, Landroid/os/Bundle;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0
    :try_end_0
    .catch Landroid/content/pm/PackageManager$NameNotFoundException; {:try_start_0 .. :try_end_0} :catch_0

    return-object v0

    :catch_0
    move-exception v0

    .line 57
    invoke-virtual {v0}, Landroid/content/pm/PackageManager$NameNotFoundException;->printStackTrace()V

    const/4 v0, 0x0

    return-object v0
.end method


# virtual methods
.method protected onCreate(Landroid/os/Bundle;)V
    .locals 3

    .line 22
    invoke-super {p0, p1}, Landroid/app/Activity;->onCreate(Landroid/os/Bundle;)V

    .line 24
    :try_start_0
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/ymnlink/YmnLinkActivity;->getIntent()Landroid/content/Intent;

    move-result-object p1

    invoke-virtual {p1}, Landroid/content/Intent;->getData()Landroid/net/Uri;

    move-result-object p1

    .line 25
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "ymnlink received data "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->d(Ljava/lang/String;)I

    .line 26
    invoke-static {p1}, Lcom/bianfeng/ymnsdk/ymnlink/YmnLinkCache;->setLaunchData(Landroid/net/Uri;)V

    .line 27
    invoke-direct {p0}, Lcom/bianfeng/ymnsdk/ymnlink/YmnLinkActivity;->getGameActivityName()Ljava/lang/String;

    move-result-object v0

    .line 28
    new-instance v1, Landroid/content/Intent;

    invoke-direct {v1}, Landroid/content/Intent;-><init>()V

    .line 29
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_0

    .line 30
    invoke-virtual {v1, p0, v0}, Landroid/content/Intent;->setClassName(Landroid/content/Context;Ljava/lang/String;)Landroid/content/Intent;

    goto :goto_0

    .line 32
    :cond_0
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/ymnlink/YmnLinkActivity;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object v0

    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/ymnlink/YmnLinkActivity;->getPackageName()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/content/pm/PackageManager;->getLaunchIntentForPackage(Ljava/lang/String;)Landroid/content/Intent;

    move-result-object v1

    .line 34
    :goto_0
    invoke-virtual {v1, p1}, Landroid/content/Intent;->setData(Landroid/net/Uri;)Landroid/content/Intent;

    .line 35
    invoke-virtual {p0, v1}, Lcom/bianfeng/ymnsdk/ymnlink/YmnLinkActivity;->startActivity(Landroid/content/Intent;)V

    .line 36
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/ymnlink/YmnLinkActivity;->finish()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_1

    :catch_0
    move-exception p1

    .line 38
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :goto_1
    return-void
.end method
