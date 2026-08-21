.class public Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotApi;
.super Ljava/lang/Object;
.source "ScreenShotApi.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotApi$ScreenShotCallback;
    }
.end annotation


# static fields
.field private static volatile screenShotApi:Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotApi;


# instance fields
.field private callback:Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotApi$ScreenShotCallback;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 3
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static getInstance()Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotApi;
    .locals 2

    .line 7
    sget-object v0, Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotApi;->screenShotApi:Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotApi;

    if-nez v0, :cond_1

    .line 8
    const-class v0, Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotApi;

    monitor-enter v0

    .line 9
    :try_start_0
    sget-object v1, Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotApi;->screenShotApi:Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotApi;

    if-nez v1, :cond_0

    .line 10
    new-instance v1, Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotApi;

    invoke-direct {v1}, Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotApi;-><init>()V

    sput-object v1, Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotApi;->screenShotApi:Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotApi;

    .line 12
    :cond_0
    monitor-exit v0

    goto :goto_0

    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1

    .line 14
    :cond_1
    :goto_0
    sget-object v0, Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotApi;->screenShotApi:Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotApi;

    return-object v0
.end method


# virtual methods
.method public getCallback()Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotApi$ScreenShotCallback;
    .locals 1

    .line 24
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotApi;->callback:Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotApi$ScreenShotCallback;

    return-object v0
.end method

.method public setCallback(Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotApi$ScreenShotCallback;)V
    .locals 0

    .line 20
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotApi;->callback:Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotApi$ScreenShotCallback;

    return-void
.end method
