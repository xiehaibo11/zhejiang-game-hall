.class final enum Lcom/kwad/sdk/core/threads/GlobalThreadPools$ParamType;
.super Ljava/lang/Enum;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/sdk/core/threads/GlobalThreadPools;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x4018
    name = "ParamType"
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Enum<",
        "Lcom/kwad/sdk/core/threads/GlobalThreadPools$ParamType;",
        ">;"
    }
.end annotation


# static fields
.field private static final synthetic $VALUES:[Lcom/kwad/sdk/core/threads/GlobalThreadPools$ParamType;

.field public static final enum CORE:Lcom/kwad/sdk/core/threads/GlobalThreadPools$ParamType;

.field public static final enum KEEP_ALIVE:Lcom/kwad/sdk/core/threads/GlobalThreadPools$ParamType;

.field public static final enum MAX:Lcom/kwad/sdk/core/threads/GlobalThreadPools$ParamType;


# direct methods
.method static constructor <clinit>()V
    .locals 6

    new-instance v0, Lcom/kwad/sdk/core/threads/GlobalThreadPools$ParamType;

    const/4 v1, 0x0

    const-string v2, "CORE"

    invoke-direct {v0, v2, v1}, Lcom/kwad/sdk/core/threads/GlobalThreadPools$ParamType;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/kwad/sdk/core/threads/GlobalThreadPools$ParamType;->CORE:Lcom/kwad/sdk/core/threads/GlobalThreadPools$ParamType;

    new-instance v0, Lcom/kwad/sdk/core/threads/GlobalThreadPools$ParamType;

    const/4 v2, 0x1

    const-string v3, "MAX"

    invoke-direct {v0, v3, v2}, Lcom/kwad/sdk/core/threads/GlobalThreadPools$ParamType;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/kwad/sdk/core/threads/GlobalThreadPools$ParamType;->MAX:Lcom/kwad/sdk/core/threads/GlobalThreadPools$ParamType;

    new-instance v0, Lcom/kwad/sdk/core/threads/GlobalThreadPools$ParamType;

    const/4 v3, 0x2

    const-string v4, "KEEP_ALIVE"

    invoke-direct {v0, v4, v3}, Lcom/kwad/sdk/core/threads/GlobalThreadPools$ParamType;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/kwad/sdk/core/threads/GlobalThreadPools$ParamType;->KEEP_ALIVE:Lcom/kwad/sdk/core/threads/GlobalThreadPools$ParamType;

    const/4 v4, 0x3

    new-array v4, v4, [Lcom/kwad/sdk/core/threads/GlobalThreadPools$ParamType;

    sget-object v5, Lcom/kwad/sdk/core/threads/GlobalThreadPools$ParamType;->CORE:Lcom/kwad/sdk/core/threads/GlobalThreadPools$ParamType;

    aput-object v5, v4, v1

    sget-object v1, Lcom/kwad/sdk/core/threads/GlobalThreadPools$ParamType;->MAX:Lcom/kwad/sdk/core/threads/GlobalThreadPools$ParamType;

    aput-object v1, v4, v2

    aput-object v0, v4, v3

    sput-object v4, Lcom/kwad/sdk/core/threads/GlobalThreadPools$ParamType;->$VALUES:[Lcom/kwad/sdk/core/threads/GlobalThreadPools$ParamType;

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

.method public static valueOf(Ljava/lang/String;)Lcom/kwad/sdk/core/threads/GlobalThreadPools$ParamType;
    .locals 1

    const-class v0, Lcom/kwad/sdk/core/threads/GlobalThreadPools$ParamType;

    invoke-static {v0, p0}, Ljava/lang/Enum;->valueOf(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/Enum;

    move-result-object p0

    check-cast p0, Lcom/kwad/sdk/core/threads/GlobalThreadPools$ParamType;

    return-object p0
.end method

.method public static values()[Lcom/kwad/sdk/core/threads/GlobalThreadPools$ParamType;
    .locals 1

    sget-object v0, Lcom/kwad/sdk/core/threads/GlobalThreadPools$ParamType;->$VALUES:[Lcom/kwad/sdk/core/threads/GlobalThreadPools$ParamType;

    invoke-virtual {v0}, [Lcom/kwad/sdk/core/threads/GlobalThreadPools$ParamType;->clone()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, [Lcom/kwad/sdk/core/threads/GlobalThreadPools$ParamType;

    return-object v0
.end method
