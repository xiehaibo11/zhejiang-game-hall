.class public Lcom/mbridge/msdk/out/MBRewardVideoHandler;
.super Ljava/lang/Object;
.source "MBRewardVideoHandler.java"


# static fields
.field private static final AD_TYPE:Ljava/lang/String; = "rv"

.field private static final TAG:Ljava/lang/String; = "MBRewardVideoHandler"


# instance fields
.field private controller:Lcom/mbridge/msdk/reward/a/a;

.field private unitId:Ljava/lang/String;


# direct methods
.method public constructor <init>(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)V
    .locals 1

    .line 30
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 31
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v0

    if-nez v0, :cond_0

    if-eqz p1, :cond_0

    .line 32
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/foundation/controller/a;->b(Landroid/content/Context;)V

    .line 34
    :cond_0
    invoke-static {p3}, Lcom/mbridge/msdk/foundation/tools/ae;->f(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    .line 35
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    .line 36
    invoke-static {p3, p1}, Lcom/mbridge/msdk/foundation/tools/ae;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 38
    :cond_1
    invoke-direct {p0, p2, p3}, Lcom/mbridge/msdk/out/MBRewardVideoHandler;->initMBRewardVideoHandler(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public constructor <init>(Ljava/lang/String;Ljava/lang/String;)V
    .locals 2

    .line 41
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 42
    invoke-static {p2}, Lcom/mbridge/msdk/foundation/tools/ae;->f(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 43
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_0

    .line 44
    invoke-static {p2, v0}, Lcom/mbridge/msdk/foundation/tools/ae;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 46
    :cond_0
    invoke-direct {p0, p1, p2}, Lcom/mbridge/msdk/out/MBRewardVideoHandler;->initMBRewardVideoHandler(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method private initMBRewardVideoHandler(Ljava/lang/String;Ljava/lang/String;)V
    .locals 2

    .line 50
    iput-object p2, p0, Lcom/mbridge/msdk/out/MBRewardVideoHandler;->unitId:Ljava/lang/String;

    .line 52
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/out/MBRewardVideoHandler;->controller:Lcom/mbridge/msdk/reward/a/a;

    if-nez v0, :cond_0

    .line 53
    new-instance v0, Lcom/mbridge/msdk/reward/a/a;

    invoke-direct {v0}, Lcom/mbridge/msdk/reward/a/a;-><init>()V

    iput-object v0, p0, Lcom/mbridge/msdk/out/MBRewardVideoHandler;->controller:Lcom/mbridge/msdk/reward/a/a;

    const/4 v1, 0x0

    .line 54
    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/reward/a/a;->a(Z)V

    .line 56
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/out/MBRewardVideoHandler;->controller:Lcom/mbridge/msdk/reward/a/a;

    invoke-virtual {v0, p1, p2}, Lcom/mbridge/msdk/reward/a/a;->b(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 58
    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p2

    const-string v0, "MBRewardVideoHandler"

    invoke-static {v0, p2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :goto_0
    return-void
.end method


# virtual methods
.method public clearBitmapCache()V
    .locals 2

    .line 178
    :try_start_0
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/same/c/b;->a(Landroid/content/Context;)Lcom/mbridge/msdk/foundation/same/c/b;

    move-result-object v0

    .line 179
    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/same/c/b;->a()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v0

    .line 181
    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    const-string v1, "MBRewardVideoHandler"

    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method public clearVideoCache()V
    .locals 1

    .line 134
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/out/MBRewardVideoHandler;->controller:Lcom/mbridge/msdk/reward/a/a;

    if-eqz v0, :cond_0

    .line 1878
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/x;->a()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 138
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    :cond_0
    :goto_0
    return-void
.end method

.method public getRequestId()Ljava/lang/String;
    .locals 1

    .line 96
    iget-object v0, p0, Lcom/mbridge/msdk/out/MBRewardVideoHandler;->controller:Lcom/mbridge/msdk/reward/a/a;

    if-eqz v0, :cond_0

    .line 97
    invoke-virtual {v0}, Lcom/mbridge/msdk/reward/a/a;->b()Ljava/lang/String;

    move-result-object v0

    return-object v0

    :cond_0
    const-string v0, ""

    return-object v0
.end method

.method public isReady()Z
    .locals 5

    .line 77
    iget-object v0, p0, Lcom/mbridge/msdk/out/MBRewardVideoHandler;->controller:Lcom/mbridge/msdk/reward/a/a;

    const-string v1, "rv"

    const/4 v2, 0x0

    if-eqz v0, :cond_1

    .line 78
    invoke-virtual {v0, v2}, Lcom/mbridge/msdk/reward/a/a;->e(Z)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 80
    invoke-static {}, Lcom/mbridge/msdk/foundation/same/report/f;->a()Lcom/mbridge/msdk/foundation/same/report/f;

    move-result-object v3

    iget-object v4, p0, Lcom/mbridge/msdk/out/MBRewardVideoHandler;->unitId:Ljava/lang/String;

    invoke-virtual {v3, v4, v1, v2}, Lcom/mbridge/msdk/foundation/same/report/f;->d(Ljava/lang/String;Ljava/lang/String;Z)V

    goto :goto_0

    .line 82
    :cond_0
    invoke-static {}, Lcom/mbridge/msdk/foundation/same/report/f;->a()Lcom/mbridge/msdk/foundation/same/report/f;

    move-result-object v3

    iget-object v4, p0, Lcom/mbridge/msdk/out/MBRewardVideoHandler;->unitId:Ljava/lang/String;

    invoke-virtual {v3, v4, v1, v2}, Lcom/mbridge/msdk/foundation/same/report/f;->e(Ljava/lang/String;Ljava/lang/String;Z)V

    :goto_0
    return v0

    .line 86
    :cond_1
    invoke-static {}, Lcom/mbridge/msdk/foundation/same/report/f;->a()Lcom/mbridge/msdk/foundation/same/report/f;

    move-result-object v0

    iget-object v3, p0, Lcom/mbridge/msdk/out/MBRewardVideoHandler;->unitId:Ljava/lang/String;

    invoke-virtual {v0, v3, v1, v2}, Lcom/mbridge/msdk/foundation/same/report/f;->e(Ljava/lang/String;Ljava/lang/String;Z)V

    return v2
.end method

.method public load()V
    .locals 4

    .line 63
    invoke-static {}, Lcom/mbridge/msdk/foundation/same/report/f;->a()Lcom/mbridge/msdk/foundation/same/report/f;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/out/MBRewardVideoHandler;->unitId:Ljava/lang/String;

    const-string v2, "rv"

    const/4 v3, 0x0

    invoke-virtual {v0, v1, v2, v3}, Lcom/mbridge/msdk/foundation/same/report/f;->a(Ljava/lang/String;Ljava/lang/String;Z)V

    .line 64
    iget-object v0, p0, Lcom/mbridge/msdk/out/MBRewardVideoHandler;->controller:Lcom/mbridge/msdk/reward/a/a;

    if-eqz v0, :cond_0

    const/4 v1, 0x1

    .line 65
    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/reward/a/a;->d(Z)V

    :cond_0
    return-void
.end method

.method public loadFormSelfFilling()V
    .locals 4

    .line 70
    invoke-static {}, Lcom/mbridge/msdk/foundation/same/report/f;->a()Lcom/mbridge/msdk/foundation/same/report/f;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/out/MBRewardVideoHandler;->unitId:Ljava/lang/String;

    const/4 v2, 0x0

    const-string v3, "rv"

    invoke-virtual {v0, v1, v3, v2}, Lcom/mbridge/msdk/foundation/same/report/f;->a(Ljava/lang/String;Ljava/lang/String;Z)V

    .line 71
    iget-object v0, p0, Lcom/mbridge/msdk/out/MBRewardVideoHandler;->controller:Lcom/mbridge/msdk/reward/a/a;

    if-eqz v0, :cond_0

    .line 72
    invoke-virtual {v0, v2}, Lcom/mbridge/msdk/reward/a/a;->d(Z)V

    :cond_0
    return-void
.end method

.method public playVideoMute(I)V
    .locals 1

    .line 143
    iget-object v0, p0, Lcom/mbridge/msdk/out/MBRewardVideoHandler;->controller:Lcom/mbridge/msdk/reward/a/a;

    if-eqz v0, :cond_0

    .line 144
    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/reward/a/a;->a(I)V

    :cond_0
    return-void
.end method

.method public setAlertDialogText(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 1

    .line 160
    iget-object v0, p0, Lcom/mbridge/msdk/out/MBRewardVideoHandler;->controller:Lcom/mbridge/msdk/reward/a/a;

    if-eqz v0, :cond_0

    .line 161
    invoke-virtual {v0, p1, p2, p3, p4}, Lcom/mbridge/msdk/reward/a/a;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public setRewardPlus(Z)V
    .locals 1

    .line 171
    iget-object v0, p0, Lcom/mbridge/msdk/out/MBRewardVideoHandler;->controller:Lcom/mbridge/msdk/reward/a/a;

    if-eqz v0, :cond_0

    .line 172
    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/reward/a/a;->c(Z)V

    :cond_0
    return-void
.end method

.method public setRewardVideoListener(Lcom/mbridge/msdk/video/bt/module/b/g;)V
    .locals 4

    .line 124
    iget-object v0, p0, Lcom/mbridge/msdk/out/MBRewardVideoHandler;->controller:Lcom/mbridge/msdk/reward/a/a;

    if-eqz v0, :cond_0

    .line 125
    new-instance v1, Lcom/mbridge/msdk/video/bt/module/b/a;

    iget-object v2, p0, Lcom/mbridge/msdk/out/MBRewardVideoHandler;->unitId:Ljava/lang/String;

    const/4 v3, 0x0

    invoke-direct {v1, p1, v2, v3}, Lcom/mbridge/msdk/video/bt/module/b/a;-><init>(Lcom/mbridge/msdk/video/bt/module/b/g;Ljava/lang/String;Z)V

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/reward/a/a;->a(Lcom/mbridge/msdk/videocommon/listener/InterVideoOutListener;)V

    :cond_0
    return-void
.end method

.method public show()V
    .locals 4

    .line 103
    invoke-static {}, Lcom/mbridge/msdk/foundation/same/report/f;->a()Lcom/mbridge/msdk/foundation/same/report/f;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/out/MBRewardVideoHandler;->unitId:Ljava/lang/String;

    const-string v2, "rv"

    const/4 v3, 0x0

    invoke-virtual {v0, v1, v2, v3}, Lcom/mbridge/msdk/foundation/same/report/f;->f(Ljava/lang/String;Ljava/lang/String;Z)V

    .line 104
    iget-object v0, p0, Lcom/mbridge/msdk/out/MBRewardVideoHandler;->controller:Lcom/mbridge/msdk/reward/a/a;

    if-eqz v0, :cond_0

    const/4 v1, 0x0

    .line 105
    invoke-virtual {v0, v1, v1, v1}, Lcom/mbridge/msdk/reward/a/a;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public show(Ljava/lang/String;)V
    .locals 4

    .line 110
    invoke-static {}, Lcom/mbridge/msdk/foundation/same/report/f;->a()Lcom/mbridge/msdk/foundation/same/report/f;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/out/MBRewardVideoHandler;->unitId:Ljava/lang/String;

    const-string v2, "rv"

    const/4 v3, 0x0

    invoke-virtual {v0, v1, v2, v3}, Lcom/mbridge/msdk/foundation/same/report/f;->f(Ljava/lang/String;Ljava/lang/String;Z)V

    .line 111
    iget-object v0, p0, Lcom/mbridge/msdk/out/MBRewardVideoHandler;->controller:Lcom/mbridge/msdk/reward/a/a;

    if-eqz v0, :cond_0

    const/4 v1, 0x0

    .line 112
    invoke-virtual {v0, v1, p1, v1}, Lcom/mbridge/msdk/reward/a/a;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public show(Ljava/lang/String;Ljava/lang/String;)V
    .locals 4

    .line 117
    invoke-static {}, Lcom/mbridge/msdk/foundation/same/report/f;->a()Lcom/mbridge/msdk/foundation/same/report/f;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/out/MBRewardVideoHandler;->unitId:Ljava/lang/String;

    const-string v2, "rv"

    const/4 v3, 0x0

    invoke-virtual {v0, v1, v2, v3}, Lcom/mbridge/msdk/foundation/same/report/f;->f(Ljava/lang/String;Ljava/lang/String;Z)V

    .line 118
    iget-object v0, p0, Lcom/mbridge/msdk/out/MBRewardVideoHandler;->controller:Lcom/mbridge/msdk/reward/a/a;

    if-eqz v0, :cond_0

    const/4 v1, 0x0

    .line 119
    invoke-virtual {v0, v1, p1, p2}, Lcom/mbridge/msdk/reward/a/a;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    return-void
.end method
