.class public Lcom/bianfeng/ymnsdk/YmnApplication;
.super Landroid/app/Application;
.source "YmnApplication.java"


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 1
    invoke-direct {p0}, Landroid/app/Application;-><init>()V

    return-void
.end method


# virtual methods
.method public onCreate()V
    .locals 4

    .line 1
    invoke-super {p0}, Landroid/app/Application;->onCreate()V

    .line 7
    new-instance v0, Lnet/grandcentrix/tray/AppPreferences;

    invoke-direct {v0, p0}, Lnet/grandcentrix/tray/AppPreferences;-><init>(Landroid/content/Context;)V

    const-string v1, "false"

    const-string v2, "ymnInit"

    .line 8
    invoke-virtual {v0, v2, v1}, Lnet/grandcentrix/tray/AppPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    .line 9
    invoke-virtual {v3, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_0

    const-string v1, "YmnApplication"

    const-string v3, "onCreate"

    .line 11
    invoke-static {v1, v3}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 12
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/YmnSdkWrapper;->innerInit(Landroid/content/Context;)V

    const-string v1, "true"

    .line 13
    invoke-virtual {v0, v2, v1}, Lnet/grandcentrix/tray/AppPreferences;->put(Ljava/lang/String;Ljava/lang/String;)Z

    :cond_0
    return-void
.end method
