.class public final Lcom/kwad/sdk/core/request/model/StatusInfo$SplashAdInfo;
.super Lcom/kwad/sdk/core/response/a/a;

# interfaces
.implements Ljava/io/Serializable;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/sdk/core/request/model/StatusInfo;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x19
    name = "SplashAdInfo"
.end annotation


# static fields
.field private static final serialVersionUID:J = 0x6dc87c3cfc879c88L


# instance fields
.field public dailyShowCount:I

.field public splashStyleControl:Lcom/kwad/sdk/core/request/model/StatusInfo$SplashStyleControl;


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/sdk/core/response/a/a;-><init>()V

    return-void
.end method

.method public static create(Lcom/kwad/sdk/internal/api/SceneImpl;)Lcom/kwad/sdk/core/request/model/StatusInfo$SplashAdInfo;
    .locals 2

    new-instance v0, Lcom/kwad/sdk/core/request/model/StatusInfo$SplashAdInfo;

    invoke-direct {v0}, Lcom/kwad/sdk/core/request/model/StatusInfo$SplashAdInfo;-><init>()V

    invoke-static {}, Lcom/kwad/sdk/utils/b;->HF()I

    move-result v1

    iput v1, v0, Lcom/kwad/sdk/core/request/model/StatusInfo$SplashAdInfo;->dailyShowCount:I

    invoke-static {p0}, Lcom/kwad/sdk/utils/b;->c(Lcom/kwad/sdk/internal/api/SceneImpl;)Lcom/kwad/sdk/core/request/model/StatusInfo$SplashStyleControl;

    move-result-object p0

    iput-object p0, v0, Lcom/kwad/sdk/core/request/model/StatusInfo$SplashAdInfo;->splashStyleControl:Lcom/kwad/sdk/core/request/model/StatusInfo$SplashStyleControl;

    return-object v0
.end method
