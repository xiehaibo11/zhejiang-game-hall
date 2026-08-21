.class public final enum Lcom/bianfeng/datafunsdk/timer/LoopType;
.super Ljava/lang/Enum;
.source "LoopType.java"


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Enum<",
        "Lcom/bianfeng/datafunsdk/timer/LoopType;",
        ">;"
    }
.end annotation


# static fields
.field public static final synthetic $VALUES:[Lcom/bianfeng/datafunsdk/timer/LoopType;

.field public static final enum DINGSHI:Lcom/bianfeng/datafunsdk/timer/LoopType;

.field public static final enum NONE:Lcom/bianfeng/datafunsdk/timer/LoopType;

.field public static final enum ZENGDINGSHI:Lcom/bianfeng/datafunsdk/timer/LoopType;


# direct methods
.method public static constructor <clinit>()V
    .locals 6

    .line 1
    new-instance v0, Lcom/bianfeng/datafunsdk/timer/LoopType;

    const/4 v1, 0x0

    const-string v2, "NONE"

    invoke-direct {v0, v2, v1}, Lcom/bianfeng/datafunsdk/timer/LoopType;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/bianfeng/datafunsdk/timer/LoopType;->NONE:Lcom/bianfeng/datafunsdk/timer/LoopType;

    new-instance v0, Lcom/bianfeng/datafunsdk/timer/LoopType;

    const/4 v2, 0x1

    const-string v3, "DINGSHI"

    invoke-direct {v0, v3, v2}, Lcom/bianfeng/datafunsdk/timer/LoopType;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/bianfeng/datafunsdk/timer/LoopType;->DINGSHI:Lcom/bianfeng/datafunsdk/timer/LoopType;

    new-instance v0, Lcom/bianfeng/datafunsdk/timer/LoopType;

    const/4 v3, 0x2

    const-string v4, "ZENGDINGSHI"

    invoke-direct {v0, v4, v3}, Lcom/bianfeng/datafunsdk/timer/LoopType;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/bianfeng/datafunsdk/timer/LoopType;->ZENGDINGSHI:Lcom/bianfeng/datafunsdk/timer/LoopType;

    .line 2
    const/4 v4, 0x3

    new-array v4, v4, [Lcom/bianfeng/datafunsdk/timer/LoopType;

    sget-object v5, Lcom/bianfeng/datafunsdk/timer/LoopType;->NONE:Lcom/bianfeng/datafunsdk/timer/LoopType;

    aput-object v5, v4, v1

    sget-object v1, Lcom/bianfeng/datafunsdk/timer/LoopType;->DINGSHI:Lcom/bianfeng/datafunsdk/timer/LoopType;

    aput-object v1, v4, v2

    aput-object v0, v4, v3

    sput-object v4, Lcom/bianfeng/datafunsdk/timer/LoopType;->$VALUES:[Lcom/bianfeng/datafunsdk/timer/LoopType;

    return-void
.end method

.method public constructor <init>(Ljava/lang/String;I)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()V"
        }
    .end annotation

    .line 1
    invoke-direct {p0, p1, p2}, Ljava/lang/Enum;-><init>(Ljava/lang/String;I)V

    return-void
.end method

.method public static valueOf(Ljava/lang/String;)Lcom/bianfeng/datafunsdk/timer/LoopType;
    .locals 1

    .line 1
    const-class v0, Lcom/bianfeng/datafunsdk/timer/LoopType;

    invoke-static {v0, p0}, Ljava/lang/Enum;->valueOf(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/Enum;

    move-result-object p0

    check-cast p0, Lcom/bianfeng/datafunsdk/timer/LoopType;

    return-object p0
.end method

.method public static values()[Lcom/bianfeng/datafunsdk/timer/LoopType;
    .locals 1

    .line 1
    sget-object v0, Lcom/bianfeng/datafunsdk/timer/LoopType;->$VALUES:[Lcom/bianfeng/datafunsdk/timer/LoopType;

    invoke-virtual {v0}, [Lcom/bianfeng/datafunsdk/timer/LoopType;->clone()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, [Lcom/bianfeng/datafunsdk/timer/LoopType;

    return-object v0
.end method
