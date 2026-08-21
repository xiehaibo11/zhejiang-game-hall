.class public final enum Lcom/bianfeng/seppellita/db/action/DataTaskEnum;
.super Ljava/lang/Enum;
.source "DataTaskEnum.java"


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Enum<",
        "Lcom/bianfeng/seppellita/db/action/DataTaskEnum;",
        ">;"
    }
.end annotation


# static fields
.field private static final synthetic $VALUES:[Lcom/bianfeng/seppellita/db/action/DataTaskEnum;

.field public static final enum DEL:Lcom/bianfeng/seppellita/db/action/DataTaskEnum;

.field public static final enum DELBEFOREONEMOUTH:Lcom/bianfeng/seppellita/db/action/DataTaskEnum;

.field public static final enum INSERT:Lcom/bianfeng/seppellita/db/action/DataTaskEnum;

.field public static final enum SELECT:Lcom/bianfeng/seppellita/db/action/DataTaskEnum;


# direct methods
.method static constructor <clinit>()V
    .locals 7

    .line 4
    new-instance v0, Lcom/bianfeng/seppellita/db/action/DataTaskEnum;

    const/4 v1, 0x0

    const-string v2, "INSERT"

    invoke-direct {v0, v2, v1}, Lcom/bianfeng/seppellita/db/action/DataTaskEnum;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/bianfeng/seppellita/db/action/DataTaskEnum;->INSERT:Lcom/bianfeng/seppellita/db/action/DataTaskEnum;

    new-instance v0, Lcom/bianfeng/seppellita/db/action/DataTaskEnum;

    const/4 v2, 0x1

    const-string v3, "DEL"

    invoke-direct {v0, v3, v2}, Lcom/bianfeng/seppellita/db/action/DataTaskEnum;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/bianfeng/seppellita/db/action/DataTaskEnum;->DEL:Lcom/bianfeng/seppellita/db/action/DataTaskEnum;

    new-instance v0, Lcom/bianfeng/seppellita/db/action/DataTaskEnum;

    const/4 v3, 0x2

    const-string v4, "SELECT"

    invoke-direct {v0, v4, v3}, Lcom/bianfeng/seppellita/db/action/DataTaskEnum;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/bianfeng/seppellita/db/action/DataTaskEnum;->SELECT:Lcom/bianfeng/seppellita/db/action/DataTaskEnum;

    new-instance v0, Lcom/bianfeng/seppellita/db/action/DataTaskEnum;

    const/4 v4, 0x3

    const-string v5, "DELBEFOREONEMOUTH"

    invoke-direct {v0, v5, v4}, Lcom/bianfeng/seppellita/db/action/DataTaskEnum;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/bianfeng/seppellita/db/action/DataTaskEnum;->DELBEFOREONEMOUTH:Lcom/bianfeng/seppellita/db/action/DataTaskEnum;

    const/4 v5, 0x4

    new-array v5, v5, [Lcom/bianfeng/seppellita/db/action/DataTaskEnum;

    .line 3
    sget-object v6, Lcom/bianfeng/seppellita/db/action/DataTaskEnum;->INSERT:Lcom/bianfeng/seppellita/db/action/DataTaskEnum;

    aput-object v6, v5, v1

    sget-object v1, Lcom/bianfeng/seppellita/db/action/DataTaskEnum;->DEL:Lcom/bianfeng/seppellita/db/action/DataTaskEnum;

    aput-object v1, v5, v2

    sget-object v1, Lcom/bianfeng/seppellita/db/action/DataTaskEnum;->SELECT:Lcom/bianfeng/seppellita/db/action/DataTaskEnum;

    aput-object v1, v5, v3

    aput-object v0, v5, v4

    sput-object v5, Lcom/bianfeng/seppellita/db/action/DataTaskEnum;->$VALUES:[Lcom/bianfeng/seppellita/db/action/DataTaskEnum;

    return-void
.end method

.method private constructor <init>(Ljava/lang/String;I)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()V"
        }
    .end annotation

    .line 3
    invoke-direct {p0, p1, p2}, Ljava/lang/Enum;-><init>(Ljava/lang/String;I)V

    return-void
.end method

.method public static valueOf(Ljava/lang/String;)Lcom/bianfeng/seppellita/db/action/DataTaskEnum;
    .locals 1

    .line 3
    const-class v0, Lcom/bianfeng/seppellita/db/action/DataTaskEnum;

    invoke-static {v0, p0}, Ljava/lang/Enum;->valueOf(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/Enum;

    move-result-object p0

    check-cast p0, Lcom/bianfeng/seppellita/db/action/DataTaskEnum;

    return-object p0
.end method

.method public static values()[Lcom/bianfeng/seppellita/db/action/DataTaskEnum;
    .locals 1

    .line 3
    sget-object v0, Lcom/bianfeng/seppellita/db/action/DataTaskEnum;->$VALUES:[Lcom/bianfeng/seppellita/db/action/DataTaskEnum;

    invoke-virtual {v0}, [Lcom/bianfeng/seppellita/db/action/DataTaskEnum;->clone()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, [Lcom/bianfeng/seppellita/db/action/DataTaskEnum;

    return-object v0
.end method
