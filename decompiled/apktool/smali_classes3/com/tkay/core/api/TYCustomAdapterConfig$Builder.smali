.class public Lcom/tkay/core/api/TYCustomAdapterConfig$Builder;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/core/api/TYCustomAdapterConfig;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x9
    name = "Builder"
.end annotation


# instance fields
.field private adCacheTime:J

.field private realTimeBidSwitch:Z


# direct methods
.method public constructor <init>()V
    .locals 2

    .line 22
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x0

    .line 19
    iput-boolean v0, p0, Lcom/tkay/core/api/TYCustomAdapterConfig$Builder;->realTimeBidSwitch:Z

    const-wide/32 v0, 0x1b7740

    .line 20
    iput-wide v0, p0, Lcom/tkay/core/api/TYCustomAdapterConfig$Builder;->adCacheTime:J

    return-void
.end method


# virtual methods
.method public adCacheTime(J)Lcom/tkay/core/api/TYCustomAdapterConfig$Builder;
    .locals 0

    .line 33
    iput-wide p1, p0, Lcom/tkay/core/api/TYCustomAdapterConfig$Builder;->adCacheTime:J

    return-object p0
.end method

.method public build()Lcom/tkay/core/api/TYCustomAdapterConfig;
    .locals 3

    .line 39
    new-instance v0, Lcom/tkay/core/api/TYCustomAdapterConfig;

    const/4 v1, 0x0

    invoke-direct {v0, v1}, Lcom/tkay/core/api/TYCustomAdapterConfig;-><init>(Lcom/tkay/core/api/TYCustomAdapterConfig$1;)V

    .line 40
    iget-boolean v1, p0, Lcom/tkay/core/api/TYCustomAdapterConfig$Builder;->realTimeBidSwitch:Z

    invoke-static {v0, v1}, Lcom/tkay/core/api/TYCustomAdapterConfig;->access$102(Lcom/tkay/core/api/TYCustomAdapterConfig;Z)Z

    .line 41
    iget-wide v1, p0, Lcom/tkay/core/api/TYCustomAdapterConfig$Builder;->adCacheTime:J

    invoke-static {v0, v1, v2}, Lcom/tkay/core/api/TYCustomAdapterConfig;->access$202(Lcom/tkay/core/api/TYCustomAdapterConfig;J)J

    return-object v0
.end method

.method public realTimeBidSwitch(Z)Lcom/tkay/core/api/TYCustomAdapterConfig$Builder;
    .locals 0

    .line 27
    iput-boolean p1, p0, Lcom/tkay/core/api/TYCustomAdapterConfig$Builder;->realTimeBidSwitch:Z

    return-object p0
.end method
