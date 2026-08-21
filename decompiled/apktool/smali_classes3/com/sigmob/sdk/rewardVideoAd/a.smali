.class public final enum Lcom/sigmob/sdk/rewardVideoAd/a;
.super Ljava/lang/Enum;


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Enum<",
        "Lcom/sigmob/sdk/rewardVideoAd/a;",
        ">;"
    }
.end annotation


# static fields
.field public static final enum a:Lcom/sigmob/sdk/rewardVideoAd/a;

.field public static final enum b:Lcom/sigmob/sdk/rewardVideoAd/a;

.field public static final enum c:Lcom/sigmob/sdk/rewardVideoAd/a;

.field public static final enum d:Lcom/sigmob/sdk/rewardVideoAd/a;

.field public static final enum e:Lcom/sigmob/sdk/rewardVideoAd/a;

.field private static final synthetic g:[Lcom/sigmob/sdk/rewardVideoAd/a;


# instance fields
.field private f:Ljava/lang/Integer;


# direct methods
.method static constructor <clinit>()V
    .locals 9

    new-instance v0, Lcom/sigmob/sdk/rewardVideoAd/a;

    const/4 v1, 0x1

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    const/4 v3, 0x0

    const-string v4, "AppSWith"

    invoke-direct {v0, v4, v3, v2}, Lcom/sigmob/sdk/rewardVideoAd/a;-><init>(Ljava/lang/String;ILjava/lang/Integer;)V

    sput-object v0, Lcom/sigmob/sdk/rewardVideoAd/a;->a:Lcom/sigmob/sdk/rewardVideoAd/a;

    new-instance v0, Lcom/sigmob/sdk/rewardVideoAd/a;

    const/4 v2, 0x2

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    const-string v5, "AutoNextPreload"

    invoke-direct {v0, v5, v1, v4}, Lcom/sigmob/sdk/rewardVideoAd/a;-><init>(Ljava/lang/String;ILjava/lang/Integer;)V

    sput-object v0, Lcom/sigmob/sdk/rewardVideoAd/a;->b:Lcom/sigmob/sdk/rewardVideoAd/a;

    new-instance v0, Lcom/sigmob/sdk/rewardVideoAd/a;

    const/4 v4, 0x3

    invoke-static {v4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v5

    const-string v6, "NormalRequest"

    invoke-direct {v0, v6, v2, v5}, Lcom/sigmob/sdk/rewardVideoAd/a;-><init>(Ljava/lang/String;ILjava/lang/Integer;)V

    sput-object v0, Lcom/sigmob/sdk/rewardVideoAd/a;->c:Lcom/sigmob/sdk/rewardVideoAd/a;

    new-instance v0, Lcom/sigmob/sdk/rewardVideoAd/a;

    const/4 v5, 0x4

    invoke-static {v5}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v6

    const-string v7, "OtherRequest"

    invoke-direct {v0, v7, v4, v6}, Lcom/sigmob/sdk/rewardVideoAd/a;-><init>(Ljava/lang/String;ILjava/lang/Integer;)V

    sput-object v0, Lcom/sigmob/sdk/rewardVideoAd/a;->d:Lcom/sigmob/sdk/rewardVideoAd/a;

    new-instance v0, Lcom/sigmob/sdk/rewardVideoAd/a;

    const/4 v6, 0x5

    invoke-static {v6}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v7

    const-string v8, "SplashCloseRequest"

    invoke-direct {v0, v8, v5, v7}, Lcom/sigmob/sdk/rewardVideoAd/a;-><init>(Ljava/lang/String;ILjava/lang/Integer;)V

    sput-object v0, Lcom/sigmob/sdk/rewardVideoAd/a;->e:Lcom/sigmob/sdk/rewardVideoAd/a;

    new-array v6, v6, [Lcom/sigmob/sdk/rewardVideoAd/a;

    sget-object v7, Lcom/sigmob/sdk/rewardVideoAd/a;->a:Lcom/sigmob/sdk/rewardVideoAd/a;

    aput-object v7, v6, v3

    sget-object v3, Lcom/sigmob/sdk/rewardVideoAd/a;->b:Lcom/sigmob/sdk/rewardVideoAd/a;

    aput-object v3, v6, v1

    sget-object v1, Lcom/sigmob/sdk/rewardVideoAd/a;->c:Lcom/sigmob/sdk/rewardVideoAd/a;

    aput-object v1, v6, v2

    sget-object v1, Lcom/sigmob/sdk/rewardVideoAd/a;->d:Lcom/sigmob/sdk/rewardVideoAd/a;

    aput-object v1, v6, v4

    aput-object v0, v6, v5

    sput-object v6, Lcom/sigmob/sdk/rewardVideoAd/a;->g:[Lcom/sigmob/sdk/rewardVideoAd/a;

    return-void
.end method

.method private constructor <init>(Ljava/lang/String;ILjava/lang/Integer;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/Integer;",
            ")V"
        }
    .end annotation

    invoke-direct {p0, p1, p2}, Ljava/lang/Enum;-><init>(Ljava/lang/String;I)V

    iput-object p3, p0, Lcom/sigmob/sdk/rewardVideoAd/a;->f:Ljava/lang/Integer;

    return-void
.end method

.method public static valueOf(Ljava/lang/String;)Lcom/sigmob/sdk/rewardVideoAd/a;
    .locals 1

    const-class v0, Lcom/sigmob/sdk/rewardVideoAd/a;

    invoke-static {v0, p0}, Ljava/lang/Enum;->valueOf(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/Enum;

    move-result-object p0

    check-cast p0, Lcom/sigmob/sdk/rewardVideoAd/a;

    return-object p0
.end method

.method public static values()[Lcom/sigmob/sdk/rewardVideoAd/a;
    .locals 1

    sget-object v0, Lcom/sigmob/sdk/rewardVideoAd/a;->g:[Lcom/sigmob/sdk/rewardVideoAd/a;

    invoke-virtual {v0}, [Lcom/sigmob/sdk/rewardVideoAd/a;->clone()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, [Lcom/sigmob/sdk/rewardVideoAd/a;

    return-object v0
.end method


# virtual methods
.method public a()Ljava/lang/Integer;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/rewardVideoAd/a;->f:Ljava/lang/Integer;

    return-object v0
.end method
