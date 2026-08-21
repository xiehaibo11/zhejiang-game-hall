.class public final enum Lcom/czhj/sdk/common/models/AdStatus;
.super Ljava/lang/Enum;


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Enum<",
        "Lcom/czhj/sdk/common/models/AdStatus;",
        ">;"
    }
.end annotation


# static fields
.field private static final synthetic $VALUES:[Lcom/czhj/sdk/common/models/AdStatus;

.field public static final enum AdStatusClick:Lcom/czhj/sdk/common/models/AdStatus;

.field public static final enum AdStatusClose:Lcom/czhj/sdk/common/models/AdStatus;

.field public static final enum AdStatusLoading:Lcom/czhj/sdk/common/models/AdStatus;

.field public static final enum AdStatusNone:Lcom/czhj/sdk/common/models/AdStatus;

.field public static final enum AdStatusPlaying:Lcom/czhj/sdk/common/models/AdStatus;

.field public static final enum AdStatusReady:Lcom/czhj/sdk/common/models/AdStatus;


# direct methods
.method static constructor <clinit>()V
    .locals 9

    new-instance v0, Lcom/czhj/sdk/common/models/AdStatus;

    const/4 v1, 0x0

    const-string v2, "AdStatusNone"

    invoke-direct {v0, v2, v1}, Lcom/czhj/sdk/common/models/AdStatus;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/czhj/sdk/common/models/AdStatus;->AdStatusNone:Lcom/czhj/sdk/common/models/AdStatus;

    new-instance v0, Lcom/czhj/sdk/common/models/AdStatus;

    const/4 v2, 0x1

    const-string v3, "AdStatusLoading"

    invoke-direct {v0, v3, v2}, Lcom/czhj/sdk/common/models/AdStatus;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/czhj/sdk/common/models/AdStatus;->AdStatusLoading:Lcom/czhj/sdk/common/models/AdStatus;

    new-instance v0, Lcom/czhj/sdk/common/models/AdStatus;

    const/4 v3, 0x2

    const-string v4, "AdStatusReady"

    invoke-direct {v0, v4, v3}, Lcom/czhj/sdk/common/models/AdStatus;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/czhj/sdk/common/models/AdStatus;->AdStatusReady:Lcom/czhj/sdk/common/models/AdStatus;

    new-instance v0, Lcom/czhj/sdk/common/models/AdStatus;

    const/4 v4, 0x3

    const-string v5, "AdStatusPlaying"

    invoke-direct {v0, v5, v4}, Lcom/czhj/sdk/common/models/AdStatus;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/czhj/sdk/common/models/AdStatus;->AdStatusPlaying:Lcom/czhj/sdk/common/models/AdStatus;

    new-instance v0, Lcom/czhj/sdk/common/models/AdStatus;

    const/4 v5, 0x4

    const-string v6, "AdStatusClick"

    invoke-direct {v0, v6, v5}, Lcom/czhj/sdk/common/models/AdStatus;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/czhj/sdk/common/models/AdStatus;->AdStatusClick:Lcom/czhj/sdk/common/models/AdStatus;

    new-instance v0, Lcom/czhj/sdk/common/models/AdStatus;

    const/4 v6, 0x5

    const-string v7, "AdStatusClose"

    invoke-direct {v0, v7, v6}, Lcom/czhj/sdk/common/models/AdStatus;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/czhj/sdk/common/models/AdStatus;->AdStatusClose:Lcom/czhj/sdk/common/models/AdStatus;

    const/4 v7, 0x6

    new-array v7, v7, [Lcom/czhj/sdk/common/models/AdStatus;

    sget-object v8, Lcom/czhj/sdk/common/models/AdStatus;->AdStatusNone:Lcom/czhj/sdk/common/models/AdStatus;

    aput-object v8, v7, v1

    sget-object v1, Lcom/czhj/sdk/common/models/AdStatus;->AdStatusLoading:Lcom/czhj/sdk/common/models/AdStatus;

    aput-object v1, v7, v2

    sget-object v1, Lcom/czhj/sdk/common/models/AdStatus;->AdStatusReady:Lcom/czhj/sdk/common/models/AdStatus;

    aput-object v1, v7, v3

    sget-object v1, Lcom/czhj/sdk/common/models/AdStatus;->AdStatusPlaying:Lcom/czhj/sdk/common/models/AdStatus;

    aput-object v1, v7, v4

    sget-object v1, Lcom/czhj/sdk/common/models/AdStatus;->AdStatusClick:Lcom/czhj/sdk/common/models/AdStatus;

    aput-object v1, v7, v5

    aput-object v0, v7, v6

    sput-object v7, Lcom/czhj/sdk/common/models/AdStatus;->$VALUES:[Lcom/czhj/sdk/common/models/AdStatus;

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

.method public static valueOf(Ljava/lang/String;)Lcom/czhj/sdk/common/models/AdStatus;
    .locals 1

    const-class v0, Lcom/czhj/sdk/common/models/AdStatus;

    invoke-static {v0, p0}, Ljava/lang/Enum;->valueOf(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/Enum;

    move-result-object p0

    check-cast p0, Lcom/czhj/sdk/common/models/AdStatus;

    return-object p0
.end method

.method public static values()[Lcom/czhj/sdk/common/models/AdStatus;
    .locals 1

    sget-object v0, Lcom/czhj/sdk/common/models/AdStatus;->$VALUES:[Lcom/czhj/sdk/common/models/AdStatus;

    invoke-virtual {v0}, [Lcom/czhj/sdk/common/models/AdStatus;->clone()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, [Lcom/czhj/sdk/common/models/AdStatus;

    return-object v0
.end method
