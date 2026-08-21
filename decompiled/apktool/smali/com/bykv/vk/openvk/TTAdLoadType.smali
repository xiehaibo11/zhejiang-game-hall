.class public final enum Lcom/bykv/vk/openvk/TTAdLoadType;
.super Ljava/lang/Enum;


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Enum<",
        "Lcom/bykv/vk/openvk/TTAdLoadType;",
        ">;"
    }
.end annotation


# static fields
.field public static final enum LOAD:Lcom/bykv/vk/openvk/TTAdLoadType;

.field public static final enum PRELOAD:Lcom/bykv/vk/openvk/TTAdLoadType;

.field public static final enum UNKNOWN:Lcom/bykv/vk/openvk/TTAdLoadType;

.field private static final synthetic rg:[Lcom/bykv/vk/openvk/TTAdLoadType;


# direct methods
.method static constructor <clinit>()V
    .locals 6

    .line 10
    new-instance v0, Lcom/bykv/vk/openvk/TTAdLoadType;

    const/4 v1, 0x0

    const-string v2, "UNKNOWN"

    invoke-direct {v0, v2, v1}, Lcom/bykv/vk/openvk/TTAdLoadType;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/bykv/vk/openvk/TTAdLoadType;->UNKNOWN:Lcom/bykv/vk/openvk/TTAdLoadType;

    .line 12
    new-instance v0, Lcom/bykv/vk/openvk/TTAdLoadType;

    const/4 v2, 0x1

    const-string v3, "PRELOAD"

    invoke-direct {v0, v3, v2}, Lcom/bykv/vk/openvk/TTAdLoadType;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/bykv/vk/openvk/TTAdLoadType;->PRELOAD:Lcom/bykv/vk/openvk/TTAdLoadType;

    .line 14
    new-instance v0, Lcom/bykv/vk/openvk/TTAdLoadType;

    const/4 v3, 0x2

    const-string v4, "LOAD"

    invoke-direct {v0, v4, v3}, Lcom/bykv/vk/openvk/TTAdLoadType;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/bykv/vk/openvk/TTAdLoadType;->LOAD:Lcom/bykv/vk/openvk/TTAdLoadType;

    const/4 v4, 0x3

    new-array v4, v4, [Lcom/bykv/vk/openvk/TTAdLoadType;

    .line 8
    sget-object v5, Lcom/bykv/vk/openvk/TTAdLoadType;->UNKNOWN:Lcom/bykv/vk/openvk/TTAdLoadType;

    aput-object v5, v4, v1

    sget-object v1, Lcom/bykv/vk/openvk/TTAdLoadType;->PRELOAD:Lcom/bykv/vk/openvk/TTAdLoadType;

    aput-object v1, v4, v2

    aput-object v0, v4, v3

    sput-object v4, Lcom/bykv/vk/openvk/TTAdLoadType;->rg:[Lcom/bykv/vk/openvk/TTAdLoadType;

    return-void
.end method

.method private constructor <init>(Ljava/lang/String;I)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()V"
        }
    .end annotation

    .line 8
    invoke-direct {p0, p1, p2}, Ljava/lang/Enum;-><init>(Ljava/lang/String;I)V

    return-void
.end method

.method public static valueOf(Ljava/lang/String;)Lcom/bykv/vk/openvk/TTAdLoadType;
    .locals 1

    .line 8
    const-class v0, Lcom/bykv/vk/openvk/TTAdLoadType;

    invoke-static {v0, p0}, Ljava/lang/Enum;->valueOf(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/Enum;

    move-result-object p0

    check-cast p0, Lcom/bykv/vk/openvk/TTAdLoadType;

    return-object p0
.end method

.method public static values()[Lcom/bykv/vk/openvk/TTAdLoadType;
    .locals 1

    .line 8
    sget-object v0, Lcom/bykv/vk/openvk/TTAdLoadType;->rg:[Lcom/bykv/vk/openvk/TTAdLoadType;

    invoke-virtual {v0}, [Lcom/bykv/vk/openvk/TTAdLoadType;->clone()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, [Lcom/bykv/vk/openvk/TTAdLoadType;

    return-object v0
.end method
