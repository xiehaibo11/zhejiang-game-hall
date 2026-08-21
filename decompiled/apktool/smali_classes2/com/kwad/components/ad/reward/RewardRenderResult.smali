.class public final enum Lcom/kwad/components/ad/reward/RewardRenderResult;
.super Ljava/lang/Enum;


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Enum<",
        "Lcom/kwad/components/ad/reward/RewardRenderResult;",
        ">;"
    }
.end annotation


# static fields
.field private static final synthetic $VALUES:[Lcom/kwad/components/ad/reward/RewardRenderResult;

.field public static final enum DEFAULT:Lcom/kwad/components/ad/reward/RewardRenderResult;

.field public static final enum FULLSCREEN_TK:Lcom/kwad/components/ad/reward/RewardRenderResult;

.field public static final enum LIVE_TK:Lcom/kwad/components/ad/reward/RewardRenderResult;

.field public static final enum NEO_TK:Lcom/kwad/components/ad/reward/RewardRenderResult;

.field public static final enum TK_IMAGE:Lcom/kwad/components/ad/reward/RewardRenderResult;


# direct methods
.method static constructor <clinit>()V
    .locals 8

    new-instance v0, Lcom/kwad/components/ad/reward/RewardRenderResult;

    const/4 v1, 0x0

    const-string v2, "DEFAULT"

    invoke-direct {v0, v2, v1}, Lcom/kwad/components/ad/reward/RewardRenderResult;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/kwad/components/ad/reward/RewardRenderResult;->DEFAULT:Lcom/kwad/components/ad/reward/RewardRenderResult;

    new-instance v0, Lcom/kwad/components/ad/reward/RewardRenderResult;

    const/4 v2, 0x1

    const-string v3, "NEO_TK"

    invoke-direct {v0, v3, v2}, Lcom/kwad/components/ad/reward/RewardRenderResult;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/kwad/components/ad/reward/RewardRenderResult;->NEO_TK:Lcom/kwad/components/ad/reward/RewardRenderResult;

    new-instance v0, Lcom/kwad/components/ad/reward/RewardRenderResult;

    const/4 v3, 0x2

    const-string v4, "LIVE_TK"

    invoke-direct {v0, v4, v3}, Lcom/kwad/components/ad/reward/RewardRenderResult;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/kwad/components/ad/reward/RewardRenderResult;->LIVE_TK:Lcom/kwad/components/ad/reward/RewardRenderResult;

    new-instance v0, Lcom/kwad/components/ad/reward/RewardRenderResult;

    const/4 v4, 0x3

    const-string v5, "FULLSCREEN_TK"

    invoke-direct {v0, v5, v4}, Lcom/kwad/components/ad/reward/RewardRenderResult;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/kwad/components/ad/reward/RewardRenderResult;->FULLSCREEN_TK:Lcom/kwad/components/ad/reward/RewardRenderResult;

    new-instance v0, Lcom/kwad/components/ad/reward/RewardRenderResult;

    const/4 v5, 0x4

    const-string v6, "TK_IMAGE"

    invoke-direct {v0, v6, v5}, Lcom/kwad/components/ad/reward/RewardRenderResult;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/kwad/components/ad/reward/RewardRenderResult;->TK_IMAGE:Lcom/kwad/components/ad/reward/RewardRenderResult;

    const/4 v6, 0x5

    new-array v6, v6, [Lcom/kwad/components/ad/reward/RewardRenderResult;

    sget-object v7, Lcom/kwad/components/ad/reward/RewardRenderResult;->DEFAULT:Lcom/kwad/components/ad/reward/RewardRenderResult;

    aput-object v7, v6, v1

    sget-object v1, Lcom/kwad/components/ad/reward/RewardRenderResult;->NEO_TK:Lcom/kwad/components/ad/reward/RewardRenderResult;

    aput-object v1, v6, v2

    sget-object v1, Lcom/kwad/components/ad/reward/RewardRenderResult;->LIVE_TK:Lcom/kwad/components/ad/reward/RewardRenderResult;

    aput-object v1, v6, v3

    sget-object v1, Lcom/kwad/components/ad/reward/RewardRenderResult;->FULLSCREEN_TK:Lcom/kwad/components/ad/reward/RewardRenderResult;

    aput-object v1, v6, v4

    aput-object v0, v6, v5

    sput-object v6, Lcom/kwad/components/ad/reward/RewardRenderResult;->$VALUES:[Lcom/kwad/components/ad/reward/RewardRenderResult;

    return-void
.end method

.method private constructor <init>(Ljava/lang/String;I)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()V"
        }
    .end annotation

    invoke-direct {p0, p1, p2}, Ljava/lang/Enum;-><init>(Ljava/lang/String;I)V

    return-void
.end method

.method public static valueOf(Ljava/lang/String;)Lcom/kwad/components/ad/reward/RewardRenderResult;
    .locals 1

    const-class v0, Lcom/kwad/components/ad/reward/RewardRenderResult;

    invoke-static {v0, p0}, Ljava/lang/Enum;->valueOf(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/Enum;

    move-result-object p0

    check-cast p0, Lcom/kwad/components/ad/reward/RewardRenderResult;

    return-object p0
.end method

.method public static values()[Lcom/kwad/components/ad/reward/RewardRenderResult;
    .locals 1

    sget-object v0, Lcom/kwad/components/ad/reward/RewardRenderResult;->$VALUES:[Lcom/kwad/components/ad/reward/RewardRenderResult;

    invoke-virtual {v0}, [Lcom/kwad/components/ad/reward/RewardRenderResult;->clone()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, [Lcom/kwad/components/ad/reward/RewardRenderResult;

    return-object v0
.end method
