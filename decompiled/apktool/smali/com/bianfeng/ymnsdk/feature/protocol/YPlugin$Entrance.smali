.class public final enum Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Entrance;
.super Ljava/lang/Enum;
.source "YPlugin.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x4019
    name = "Entrance"
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Enum<",
        "Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Entrance;",
        ">;"
    }
.end annotation


# static fields
.field private static final synthetic $VALUES:[Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Entrance;

.field public static final enum ACTIVITY:Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Entrance;

.field public static final enum APPLICATION:Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Entrance;

.field public static final enum CONTEXT:Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Entrance;


# direct methods
.method static constructor <clinit>()V
    .locals 5

    .line 39
    new-instance v0, Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Entrance;

    const/4 v1, 0x0

    const-string v2, "CONTEXT"

    invoke-direct {v0, v2, v1}, Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Entrance;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Entrance;->CONTEXT:Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Entrance;

    .line 42
    new-instance v0, Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Entrance;

    const/4 v2, 0x1

    const-string v3, "ACTIVITY"

    invoke-direct {v0, v3, v2}, Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Entrance;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Entrance;->ACTIVITY:Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Entrance;

    .line 45
    new-instance v0, Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Entrance;

    const/4 v3, 0x2

    const-string v4, "APPLICATION"

    invoke-direct {v0, v4, v3}, Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Entrance;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Entrance;->APPLICATION:Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Entrance;

    .line 37
    const/4 v0, 0x3

    new-array v0, v0, [Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Entrance;

    sget-object v4, Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Entrance;->CONTEXT:Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Entrance;

    aput-object v4, v0, v1

    sget-object v1, Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Entrance;->ACTIVITY:Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Entrance;

    aput-object v1, v0, v2

    sget-object v1, Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Entrance;->APPLICATION:Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Entrance;

    aput-object v1, v0, v3

    sput-object v0, Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Entrance;->$VALUES:[Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Entrance;

    return-void
.end method

.method private constructor <init>(Ljava/lang/String;I)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()V"
        }
    .end annotation

    .line 37
    invoke-direct {p0, p1, p2}, Ljava/lang/Enum;-><init>(Ljava/lang/String;I)V

    return-void
.end method

.method public static valueOf(Ljava/lang/String;)Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Entrance;
    .locals 1
    .param p0, "name"    # Ljava/lang/String;

    .line 37
    const-class v0, Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Entrance;

    invoke-static {v0, p0}, Ljava/lang/Enum;->valueOf(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/Enum;

    move-result-object v0

    check-cast v0, Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Entrance;

    return-object v0
.end method

.method public static values()[Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Entrance;
    .locals 1

    .line 37
    sget-object v0, Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Entrance;->$VALUES:[Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Entrance;

    invoke-virtual {v0}, [Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Entrance;->clone()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, [Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Entrance;

    return-object v0
.end method
