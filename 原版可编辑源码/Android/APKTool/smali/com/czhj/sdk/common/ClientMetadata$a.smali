.class public final enum Lcom/czhj/sdk/common/ClientMetadata$a;
.super Ljava/lang/Enum;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/czhj/sdk/common/ClientMetadata;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x4019
    name = "a"
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Enum<",
        "Lcom/czhj/sdk/common/ClientMetadata$a;",
        ">;"
    }
.end annotation


# static fields
.field private static final synthetic $VALUES:[Lcom/czhj/sdk/common/ClientMetadata$a;

.field public static final enum DEVICE_ORIENTATION:Lcom/czhj/sdk/common/ClientMetadata$a;

.field public static final enum FORCE_LANDSCAPE:Lcom/czhj/sdk/common/ClientMetadata$a;

.field public static final enum FORCE_PORTRAIT:Lcom/czhj/sdk/common/ClientMetadata$a;

.field public static final enum UNDEFINED:Lcom/czhj/sdk/common/ClientMetadata$a;


# instance fields
.field private final mKey:Ljava/lang/String;


# direct methods
.method static constructor <clinit>()V
    .locals 7

    new-instance v0, Lcom/czhj/sdk/common/ClientMetadata$a;

    const/4 v1, 0x0

    const-string v2, "FORCE_PORTRAIT"

    const-string v3, "portrait"

    invoke-direct {v0, v2, v1, v3}, Lcom/czhj/sdk/common/ClientMetadata$a;-><init>(Ljava/lang/String;ILjava/lang/String;)V

    sput-object v0, Lcom/czhj/sdk/common/ClientMetadata$a;->FORCE_PORTRAIT:Lcom/czhj/sdk/common/ClientMetadata$a;

    new-instance v0, Lcom/czhj/sdk/common/ClientMetadata$a;

    const/4 v2, 0x1

    const-string v3, "FORCE_LANDSCAPE"

    const-string v4, "landscape"

    invoke-direct {v0, v3, v2, v4}, Lcom/czhj/sdk/common/ClientMetadata$a;-><init>(Ljava/lang/String;ILjava/lang/String;)V

    sput-object v0, Lcom/czhj/sdk/common/ClientMetadata$a;->FORCE_LANDSCAPE:Lcom/czhj/sdk/common/ClientMetadata$a;

    new-instance v0, Lcom/czhj/sdk/common/ClientMetadata$a;

    const/4 v3, 0x2

    const-string v4, "DEVICE_ORIENTATION"

    const-string v5, "device"

    invoke-direct {v0, v4, v3, v5}, Lcom/czhj/sdk/common/ClientMetadata$a;-><init>(Ljava/lang/String;ILjava/lang/String;)V

    sput-object v0, Lcom/czhj/sdk/common/ClientMetadata$a;->DEVICE_ORIENTATION:Lcom/czhj/sdk/common/ClientMetadata$a;

    new-instance v0, Lcom/czhj/sdk/common/ClientMetadata$a;

    const/4 v4, 0x3

    const-string v5, "UNDEFINED"

    const-string v6, ""

    invoke-direct {v0, v5, v4, v6}, Lcom/czhj/sdk/common/ClientMetadata$a;-><init>(Ljava/lang/String;ILjava/lang/String;)V

    sput-object v0, Lcom/czhj/sdk/common/ClientMetadata$a;->UNDEFINED:Lcom/czhj/sdk/common/ClientMetadata$a;

    const/4 v5, 0x4

    new-array v5, v5, [Lcom/czhj/sdk/common/ClientMetadata$a;

    sget-object v6, Lcom/czhj/sdk/common/ClientMetadata$a;->FORCE_PORTRAIT:Lcom/czhj/sdk/common/ClientMetadata$a;

    aput-object v6, v5, v1

    sget-object v1, Lcom/czhj/sdk/common/ClientMetadata$a;->FORCE_LANDSCAPE:Lcom/czhj/sdk/common/ClientMetadata$a;

    aput-object v1, v5, v2

    sget-object v1, Lcom/czhj/sdk/common/ClientMetadata$a;->DEVICE_ORIENTATION:Lcom/czhj/sdk/common/ClientMetadata$a;

    aput-object v1, v5, v3

    aput-object v0, v5, v4

    sput-object v5, Lcom/czhj/sdk/common/ClientMetadata$a;->$VALUES:[Lcom/czhj/sdk/common/ClientMetadata$a;

    return-void
.end method

.method private constructor <init>(Ljava/lang/String;ILjava/lang/String;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            ")V"
        }
    .end annotation

    invoke-direct {p0, p1, p2}, Ljava/lang/Enum;-><init>(Ljava/lang/String;I)V

    iput-object p3, p0, Lcom/czhj/sdk/common/ClientMetadata$a;->mKey:Ljava/lang/String;

    return-void
.end method

.method public static valueOf(Ljava/lang/String;)Lcom/czhj/sdk/common/ClientMetadata$a;
    .locals 1

    const-class v0, Lcom/czhj/sdk/common/ClientMetadata$a;

    invoke-static {v0, p0}, Ljava/lang/Enum;->valueOf(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/Enum;

    move-result-object p0

    check-cast p0, Lcom/czhj/sdk/common/ClientMetadata$a;

    return-object p0
.end method

.method public static values()[Lcom/czhj/sdk/common/ClientMetadata$a;
    .locals 1

    sget-object v0, Lcom/czhj/sdk/common/ClientMetadata$a;->$VALUES:[Lcom/czhj/sdk/common/ClientMetadata$a;

    invoke-virtual {v0}, [Lcom/czhj/sdk/common/ClientMetadata$a;->clone()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, [Lcom/czhj/sdk/common/ClientMetadata$a;

    return-object v0
.end method
