.class public Lcom/bianfeng/ymnsdk/sysfunc/EmptyActivity;
.super Landroid/app/Activity;
.source "EmptyActivity.java"


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 12
    invoke-direct {p0}, Landroid/app/Activity;-><init>()V

    return-void
.end method

.method private startGameActivity()V
    .locals 7

    const-string v0, "sysfunc_open_activity"

    .line 30
    invoke-static {v0}, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 31
    invoke-virtual {v1}, Ljava/lang/String;->isEmpty()Z

    move-result v2

    const-string v3, ""

    if-eqz v2, :cond_0

    .line 33
    invoke-virtual {p0, v0}, Lcom/bianfeng/ymnsdk/sysfunc/EmptyActivity;->getMetaData(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    if-nez v1, :cond_0

    move-object v1, v3

    .line 36
    :cond_0
    invoke-virtual {v1}, Ljava/lang/String;->isEmpty()Z

    move-result v2

    const-string v4, "org.cocos2dx.cpp.AppActivity"

    if-eqz v2, :cond_1

    move-object v1, v4

    :cond_1
    if-eqz v1, :cond_8

    .line 41
    :try_start_0
    invoke-static {v1}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v2

    .line 42
    new-instance v5, Landroid/content/Intent;

    invoke-direct {v5, p0, v2}, Landroid/content/Intent;-><init>(Landroid/content/Context;Ljava/lang/Class;)V

    .line 43
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v6, "startActivity1 is "

    invoke-virtual {v2, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 44
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/sysfunc/EmptyActivity;->getIntent()Landroid/content/Intent;

    move-result-object v1

    invoke-virtual {v1}, Landroid/content/Intent;->getData()Landroid/net/Uri;

    move-result-object v1

    if-eqz v1, :cond_2

    .line 45
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/sysfunc/EmptyActivity;->getIntent()Landroid/content/Intent;

    move-result-object v1

    invoke-virtual {v1}, Landroid/content/Intent;->getData()Landroid/net/Uri;

    move-result-object v1

    invoke-virtual {v5, v1}, Landroid/content/Intent;->setData(Landroid/net/Uri;)Landroid/content/Intent;

    .line 47
    :cond_2
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/sysfunc/EmptyActivity;->getIntent()Landroid/content/Intent;

    move-result-object v1

    invoke-virtual {v1}, Landroid/content/Intent;->getExtras()Landroid/os/Bundle;

    move-result-object v1

    if-eqz v1, :cond_3

    .line 48
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/sysfunc/EmptyActivity;->getIntent()Landroid/content/Intent;

    move-result-object v1

    invoke-virtual {v1}, Landroid/content/Intent;->getExtras()Landroid/os/Bundle;

    move-result-object v1

    .line 49
    invoke-virtual {v5, v1}, Landroid/content/Intent;->putExtras(Landroid/os/Bundle;)Landroid/content/Intent;

    .line 51
    :cond_3
    invoke-virtual {p0, v5}, Lcom/bianfeng/ymnsdk/sysfunc/EmptyActivity;->startActivity(Landroid/content/Intent;)V

    .line 52
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/sysfunc/EmptyActivity;->finish()V
    :try_end_0
    .catch Ljava/lang/ClassNotFoundException; {:try_start_0 .. :try_end_0} :catch_1
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_3

    :catch_0
    move-exception v0

    goto :goto_2

    :catch_1
    move-exception v1

    .line 55
    :try_start_1
    invoke-virtual {v1}, Ljava/lang/ClassNotFoundException;->printStackTrace()V

    .line 56
    invoke-virtual {p0, v0}, Lcom/bianfeng/ymnsdk/sysfunc/EmptyActivity;->getMetaData(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    if-nez v0, :cond_4

    goto :goto_0

    :cond_4
    move-object v3, v0

    .line 58
    :goto_0
    invoke-virtual {v3}, Ljava/lang/String;->isEmpty()Z

    move-result v0

    if-eqz v0, :cond_5

    goto :goto_1

    :cond_5
    move-object v4, v3

    .line 59
    :goto_1
    invoke-static {v4}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v0

    .line 60
    new-instance v1, Landroid/content/Intent;

    invoke-direct {v1, p0, v0}, Landroid/content/Intent;-><init>(Landroid/content/Context;Ljava/lang/Class;)V

    .line 61
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "startActivity2 is "

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 62
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/sysfunc/EmptyActivity;->getIntent()Landroid/content/Intent;

    move-result-object v0

    invoke-virtual {v0}, Landroid/content/Intent;->getData()Landroid/net/Uri;

    move-result-object v0

    if-eqz v0, :cond_6

    .line 63
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/sysfunc/EmptyActivity;->getIntent()Landroid/content/Intent;

    move-result-object v0

    invoke-virtual {v0}, Landroid/content/Intent;->getData()Landroid/net/Uri;

    move-result-object v0

    invoke-virtual {v1, v0}, Landroid/content/Intent;->setData(Landroid/net/Uri;)Landroid/content/Intent;

    .line 65
    :cond_6
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/sysfunc/EmptyActivity;->getIntent()Landroid/content/Intent;

    move-result-object v0

    invoke-virtual {v0}, Landroid/content/Intent;->getExtras()Landroid/os/Bundle;

    move-result-object v0

    if-eqz v0, :cond_7

    .line 66
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/sysfunc/EmptyActivity;->getIntent()Landroid/content/Intent;

    move-result-object v0

    invoke-virtual {v0}, Landroid/content/Intent;->getExtras()Landroid/os/Bundle;

    move-result-object v0

    .line 67
    invoke-virtual {v1, v0}, Landroid/content/Intent;->putExtras(Landroid/os/Bundle;)Landroid/content/Intent;

    .line 69
    :cond_7
    invoke-virtual {p0, v1}, Lcom/bianfeng/ymnsdk/sysfunc/EmptyActivity;->startActivity(Landroid/content/Intent;)V

    .line 70
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/sysfunc/EmptyActivity;->finish()V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    goto :goto_3

    .line 73
    :goto_2
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 75
    :cond_8
    :goto_3
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/sysfunc/EmptyActivity;->finish()V

    return-void
.end method


# virtual methods
.method public getMetaData(Ljava/lang/String;)Ljava/lang/String;
    .locals 4

    const/4 v0, 0x0

    if-nez p1, :cond_0

    return-object v0

    .line 85
    :cond_0
    :try_start_0
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/sysfunc/EmptyActivity;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object v1

    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/sysfunc/EmptyActivity;->getPackageName()Ljava/lang/String;

    move-result-object v2

    const/16 v3, 0x80

    invoke-virtual {v1, v2, v3}, Landroid/content/pm/PackageManager;->getApplicationInfo(Ljava/lang/String;I)Landroid/content/pm/ApplicationInfo;

    move-result-object v1

    if-eqz v1, :cond_1

    .line 87
    iget-object v1, v1, Landroid/content/pm/ApplicationInfo;->metaData:Landroid/os/Bundle;

    goto :goto_0

    :cond_1
    move-object v1, v0

    :goto_0
    if-eqz v1, :cond_2

    .line 90
    invoke-virtual {v1, p1}, Landroid/os/Bundle;->get(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p1

    if-eqz p1, :cond_2

    .line 92
    invoke-static {p1}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1
    :try_end_0
    .catch Landroid/content/pm/PackageManager$NameNotFoundException; {:try_start_0 .. :try_end_0} :catch_0

    move-object v0, p1

    :catch_0
    :cond_2
    return-object v0
.end method

.method public onCreate(Landroid/os/Bundle;)V
    .locals 1

    .line 15
    invoke-super {p0, p1}, Landroid/app/Activity;->onCreate(Landroid/os/Bundle;)V

    .line 16
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/sysfunc/EmptyActivity;->isTaskRoot()Z

    move-result p1

    if-nez p1, :cond_0

    .line 17
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/sysfunc/EmptyActivity;->getIntent()Landroid/content/Intent;

    move-result-object p1

    const-string v0, "android.intent.category.LAUNCHER"

    invoke-virtual {p1, v0}, Landroid/content/Intent;->hasCategory(Ljava/lang/String;)Z

    move-result p1

    if-eqz p1, :cond_0

    .line 18
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/sysfunc/EmptyActivity;->getIntent()Landroid/content/Intent;

    move-result-object p1

    invoke-virtual {p1}, Landroid/content/Intent;->getAction()Ljava/lang/String;

    move-result-object p1

    if-eqz p1, :cond_0

    .line 19
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/sysfunc/EmptyActivity;->getIntent()Landroid/content/Intent;

    move-result-object p1

    invoke-virtual {p1}, Landroid/content/Intent;->getAction()Ljava/lang/String;

    move-result-object p1

    const-string v0, "android.intent.action.MAIN"

    invoke-virtual {p1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_0

    .line 21
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/sysfunc/EmptyActivity;->finish()V

    return-void

    .line 24
    :cond_0
    invoke-direct {p0}, Lcom/bianfeng/ymnsdk/sysfunc/EmptyActivity;->startGameActivity()V

    .line 25
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->init(Landroid/content/Context;)V

    const-string p1, "EmptyActivity onCreate"

    .line 26
    invoke-static {p1}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    return-void
.end method
