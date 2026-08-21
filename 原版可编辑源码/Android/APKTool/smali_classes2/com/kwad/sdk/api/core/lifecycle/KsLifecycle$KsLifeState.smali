.class public final enum Lcom/kwad/sdk/api/core/lifecycle/KsLifecycle$KsLifeState;
.super Ljava/lang/Enum;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/sdk/api/core/lifecycle/KsLifecycle;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x4019
    name = "KsLifeState"
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Enum<",
        "Lcom/kwad/sdk/api/core/lifecycle/KsLifecycle$KsLifeState;",
        ">;"
    }
.end annotation


# static fields
.field private static final synthetic $VALUES:[Lcom/kwad/sdk/api/core/lifecycle/KsLifecycle$KsLifeState;

.field public static final enum CREATED:Lcom/kwad/sdk/api/core/lifecycle/KsLifecycle$KsLifeState;

.field public static final enum DESTROYED:Lcom/kwad/sdk/api/core/lifecycle/KsLifecycle$KsLifeState;

.field public static final enum INITIALIZED:Lcom/kwad/sdk/api/core/lifecycle/KsLifecycle$KsLifeState;

.field public static final enum RESUMED:Lcom/kwad/sdk/api/core/lifecycle/KsLifecycle$KsLifeState;

.field public static final enum STARTED:Lcom/kwad/sdk/api/core/lifecycle/KsLifecycle$KsLifeState;


# instance fields
.field mReal:Landroid/arch/lifecycle/Lifecycle$State;


# direct methods
.method static constructor <clinit>()V
    .locals 8

    new-instance v0, Lcom/kwad/sdk/api/core/lifecycle/KsLifecycle$KsLifeState;

    sget-object v1, Landroid/arch/lifecycle/Lifecycle$State;->DESTROYED:Landroid/arch/lifecycle/Lifecycle$State;

    const/4 v2, 0x0

    const-string v3, "DESTROYED"

    invoke-direct {v0, v3, v2, v1}, Lcom/kwad/sdk/api/core/lifecycle/KsLifecycle$KsLifeState;-><init>(Ljava/lang/String;ILandroid/arch/lifecycle/Lifecycle$State;)V

    sput-object v0, Lcom/kwad/sdk/api/core/lifecycle/KsLifecycle$KsLifeState;->DESTROYED:Lcom/kwad/sdk/api/core/lifecycle/KsLifecycle$KsLifeState;

    new-instance v0, Lcom/kwad/sdk/api/core/lifecycle/KsLifecycle$KsLifeState;

    sget-object v1, Landroid/arch/lifecycle/Lifecycle$State;->DESTROYED:Landroid/arch/lifecycle/Lifecycle$State;

    const/4 v3, 0x1

    const-string v4, "INITIALIZED"

    invoke-direct {v0, v4, v3, v1}, Lcom/kwad/sdk/api/core/lifecycle/KsLifecycle$KsLifeState;-><init>(Ljava/lang/String;ILandroid/arch/lifecycle/Lifecycle$State;)V

    sput-object v0, Lcom/kwad/sdk/api/core/lifecycle/KsLifecycle$KsLifeState;->INITIALIZED:Lcom/kwad/sdk/api/core/lifecycle/KsLifecycle$KsLifeState;

    new-instance v0, Lcom/kwad/sdk/api/core/lifecycle/KsLifecycle$KsLifeState;

    sget-object v1, Landroid/arch/lifecycle/Lifecycle$State;->DESTROYED:Landroid/arch/lifecycle/Lifecycle$State;

    const/4 v4, 0x2

    const-string v5, "CREATED"

    invoke-direct {v0, v5, v4, v1}, Lcom/kwad/sdk/api/core/lifecycle/KsLifecycle$KsLifeState;-><init>(Ljava/lang/String;ILandroid/arch/lifecycle/Lifecycle$State;)V

    sput-object v0, Lcom/kwad/sdk/api/core/lifecycle/KsLifecycle$KsLifeState;->CREATED:Lcom/kwad/sdk/api/core/lifecycle/KsLifecycle$KsLifeState;

    new-instance v0, Lcom/kwad/sdk/api/core/lifecycle/KsLifecycle$KsLifeState;

    sget-object v1, Landroid/arch/lifecycle/Lifecycle$State;->DESTROYED:Landroid/arch/lifecycle/Lifecycle$State;

    const/4 v5, 0x3

    const-string v6, "STARTED"

    invoke-direct {v0, v6, v5, v1}, Lcom/kwad/sdk/api/core/lifecycle/KsLifecycle$KsLifeState;-><init>(Ljava/lang/String;ILandroid/arch/lifecycle/Lifecycle$State;)V

    sput-object v0, Lcom/kwad/sdk/api/core/lifecycle/KsLifecycle$KsLifeState;->STARTED:Lcom/kwad/sdk/api/core/lifecycle/KsLifecycle$KsLifeState;

    new-instance v0, Lcom/kwad/sdk/api/core/lifecycle/KsLifecycle$KsLifeState;

    sget-object v1, Landroid/arch/lifecycle/Lifecycle$State;->DESTROYED:Landroid/arch/lifecycle/Lifecycle$State;

    const/4 v6, 0x4

    const-string v7, "RESUMED"

    invoke-direct {v0, v7, v6, v1}, Lcom/kwad/sdk/api/core/lifecycle/KsLifecycle$KsLifeState;-><init>(Ljava/lang/String;ILandroid/arch/lifecycle/Lifecycle$State;)V

    sput-object v0, Lcom/kwad/sdk/api/core/lifecycle/KsLifecycle$KsLifeState;->RESUMED:Lcom/kwad/sdk/api/core/lifecycle/KsLifecycle$KsLifeState;

    const/4 v1, 0x5

    new-array v1, v1, [Lcom/kwad/sdk/api/core/lifecycle/KsLifecycle$KsLifeState;

    sget-object v7, Lcom/kwad/sdk/api/core/lifecycle/KsLifecycle$KsLifeState;->DESTROYED:Lcom/kwad/sdk/api/core/lifecycle/KsLifecycle$KsLifeState;

    aput-object v7, v1, v2

    sget-object v2, Lcom/kwad/sdk/api/core/lifecycle/KsLifecycle$KsLifeState;->INITIALIZED:Lcom/kwad/sdk/api/core/lifecycle/KsLifecycle$KsLifeState;

    aput-object v2, v1, v3

    sget-object v2, Lcom/kwad/sdk/api/core/lifecycle/KsLifecycle$KsLifeState;->CREATED:Lcom/kwad/sdk/api/core/lifecycle/KsLifecycle$KsLifeState;

    aput-object v2, v1, v4

    sget-object v2, Lcom/kwad/sdk/api/core/lifecycle/KsLifecycle$KsLifeState;->STARTED:Lcom/kwad/sdk/api/core/lifecycle/KsLifecycle$KsLifeState;

    aput-object v2, v1, v5

    aput-object v0, v1, v6

    sput-object v1, Lcom/kwad/sdk/api/core/lifecycle/KsLifecycle$KsLifeState;->$VALUES:[Lcom/kwad/sdk/api/core/lifecycle/KsLifecycle$KsLifeState;

    return-void
.end method

.method private constructor <init>(Ljava/lang/String;ILandroid/arch/lifecycle/Lifecycle$State;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/arch/lifecycle/Lifecycle$State;",
            ")V"
        }
    .end annotation

    invoke-direct {p0, p1, p2}, Ljava/lang/Enum;-><init>(Ljava/lang/String;I)V

    iput-object p3, p0, Lcom/kwad/sdk/api/core/lifecycle/KsLifecycle$KsLifeState;->mReal:Landroid/arch/lifecycle/Lifecycle$State;

    return-void
.end method

.method public static createFrom(Landroid/arch/lifecycle/Lifecycle$State;)Lcom/kwad/sdk/api/core/lifecycle/KsLifecycle$KsLifeState;
    .locals 5

    invoke-static {}, Lcom/kwad/sdk/api/core/lifecycle/KsLifecycle$KsLifeState;->values()[Lcom/kwad/sdk/api/core/lifecycle/KsLifecycle$KsLifeState;

    move-result-object v0

    array-length v1, v0

    const/4 v2, 0x0

    :goto_0
    if-ge v2, v1, :cond_1

    aget-object v3, v0, v2

    iget-object v4, v3, Lcom/kwad/sdk/api/core/lifecycle/KsLifecycle$KsLifeState;->mReal:Landroid/arch/lifecycle/Lifecycle$State;

    if-ne v4, p0, :cond_0

    return-object v3

    :cond_0
    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    :cond_1
    const/4 p0, 0x0

    return-object p0
.end method

.method public static valueOf(Ljava/lang/String;)Lcom/kwad/sdk/api/core/lifecycle/KsLifecycle$KsLifeState;
    .locals 1

    const-class v0, Lcom/kwad/sdk/api/core/lifecycle/KsLifecycle$KsLifeState;

    invoke-static {v0, p0}, Ljava/lang/Enum;->valueOf(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/Enum;

    move-result-object p0

    check-cast p0, Lcom/kwad/sdk/api/core/lifecycle/KsLifecycle$KsLifeState;

    return-object p0
.end method

.method public static values()[Lcom/kwad/sdk/api/core/lifecycle/KsLifecycle$KsLifeState;
    .locals 1

    sget-object v0, Lcom/kwad/sdk/api/core/lifecycle/KsLifecycle$KsLifeState;->$VALUES:[Lcom/kwad/sdk/api/core/lifecycle/KsLifecycle$KsLifeState;

    invoke-virtual {v0}, [Lcom/kwad/sdk/api/core/lifecycle/KsLifecycle$KsLifeState;->clone()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, [Lcom/kwad/sdk/api/core/lifecycle/KsLifecycle$KsLifeState;

    return-object v0
.end method


# virtual methods
.method public final isAtLeast(Lcom/kwad/sdk/api/core/lifecycle/KsLifecycle$KsLifeState;)Z
    .locals 0

    invoke-virtual {p0, p1}, Lcom/kwad/sdk/api/core/lifecycle/KsLifecycle$KsLifeState;->compareTo(Ljava/lang/Enum;)I

    move-result p1

    if-ltz p1, :cond_0

    const/4 p1, 0x1

    return p1

    :cond_0
    const/4 p1, 0x0

    return p1
.end method
