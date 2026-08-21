.class public final enum Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Policy;
.super Ljava/lang/Enum;
.source "YPlugin.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x4019
    name = "Policy"
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Enum<",
        "Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Policy;",
        ">;"
    }
.end annotation


# static fields
.field private static final synthetic $VALUES:[Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Policy;

.field public static final enum FORCE:Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Policy;

.field public static final enum LAZY:Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Policy;

.field public static final enum REMOTE:Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Policy;

.field public static final enum TRIGGER:Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Policy;


# direct methods
.method static constructor <clinit>()V
    .locals 6

    .line 22
    new-instance v0, Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Policy;

    const/4 v1, 0x0

    const-string v2, "LAZY"

    invoke-direct {v0, v2, v1}, Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Policy;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Policy;->LAZY:Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Policy;

    .line 25
    new-instance v0, Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Policy;

    const/4 v2, 0x1

    const-string v3, "FORCE"

    invoke-direct {v0, v3, v2}, Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Policy;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Policy;->FORCE:Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Policy;

    .line 28
    new-instance v0, Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Policy;

    const/4 v3, 0x2

    const-string v4, "REMOTE"

    invoke-direct {v0, v4, v3}, Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Policy;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Policy;->REMOTE:Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Policy;

    .line 31
    new-instance v0, Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Policy;

    const/4 v4, 0x3

    const-string v5, "TRIGGER"

    invoke-direct {v0, v5, v4}, Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Policy;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Policy;->TRIGGER:Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Policy;

    .line 20
    const/4 v0, 0x4

    new-array v0, v0, [Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Policy;

    sget-object v5, Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Policy;->LAZY:Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Policy;

    aput-object v5, v0, v1

    sget-object v1, Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Policy;->FORCE:Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Policy;

    aput-object v1, v0, v2

    sget-object v1, Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Policy;->REMOTE:Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Policy;

    aput-object v1, v0, v3

    sget-object v1, Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Policy;->TRIGGER:Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Policy;

    aput-object v1, v0, v4

    sput-object v0, Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Policy;->$VALUES:[Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Policy;

    return-void
.end method

.method private constructor <init>(Ljava/lang/String;I)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()V"
        }
    .end annotation

    .line 20
    invoke-direct {p0, p1, p2}, Ljava/lang/Enum;-><init>(Ljava/lang/String;I)V

    return-void
.end method

.method public static valueOf(Ljava/lang/String;)Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Policy;
    .locals 1
    .param p0, "name"    # Ljava/lang/String;

    .line 20
    const-class v0, Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Policy;

    invoke-static {v0, p0}, Ljava/lang/Enum;->valueOf(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/Enum;

    move-result-object v0

    check-cast v0, Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Policy;

    return-object v0
.end method

.method public static values()[Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Policy;
    .locals 1

    .line 20
    sget-object v0, Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Policy;->$VALUES:[Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Policy;

    invoke-virtual {v0}, [Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Policy;->clone()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, [Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Policy;

    return-object v0
.end method
