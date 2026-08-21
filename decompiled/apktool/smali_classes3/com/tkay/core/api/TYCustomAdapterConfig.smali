.class public Lcom/tkay/core/api/TYCustomAdapterConfig;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/tkay/core/api/TYCustomAdapterConfig$Builder;
    }
.end annotation


# instance fields
.field private adCacheTime:J

.field private realTimeBidSwitch:Z


# direct methods
.method private constructor <init>()V
    .locals 0

    .line 7
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method synthetic constructor <init>(Lcom/tkay/core/api/TYCustomAdapterConfig$1;)V
    .locals 0

    .line 3
    invoke-direct {p0}, Lcom/tkay/core/api/TYCustomAdapterConfig;-><init>()V

    return-void
.end method

.method static synthetic access$102(Lcom/tkay/core/api/TYCustomAdapterConfig;Z)Z
    .locals 0

    .line 3
    iput-boolean p1, p0, Lcom/tkay/core/api/TYCustomAdapterConfig;->realTimeBidSwitch:Z

    return p1
.end method

.method static synthetic access$202(Lcom/tkay/core/api/TYCustomAdapterConfig;J)J
    .locals 0

    .line 3
    iput-wide p1, p0, Lcom/tkay/core/api/TYCustomAdapterConfig;->adCacheTime:J

    return-wide p1
.end method


# virtual methods
.method public getAdCacheTime()J
    .locals 2

    .line 15
    iget-wide v0, p0, Lcom/tkay/core/api/TYCustomAdapterConfig;->adCacheTime:J

    return-wide v0
.end method

.method public isRealTimeBidSwitch()Z
    .locals 1

    .line 11
    iget-boolean v0, p0, Lcom/tkay/core/api/TYCustomAdapterConfig;->realTimeBidSwitch:Z

    return v0
.end method
