.class public final enum Lcom/bianfeng/seppellita/db/action/DelDbEnum;
.super Ljava/lang/Enum;
.source "DelDbEnum.java"


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Enum<",
        "Lcom/bianfeng/seppellita/db/action/DelDbEnum;",
        ">;"
    }
.end annotation


# static fields
.field private static final synthetic $VALUES:[Lcom/bianfeng/seppellita/db/action/DelDbEnum;

.field public static final enum DELED:Lcom/bianfeng/seppellita/db/action/DelDbEnum;

.field public static final enum NEED_DEL:Lcom/bianfeng/seppellita/db/action/DelDbEnum;

.field public static final enum NO_NEED_DEL:Lcom/bianfeng/seppellita/db/action/DelDbEnum;


# direct methods
.method static constructor <clinit>()V
    .locals 6

    .line 4
    new-instance v0, Lcom/bianfeng/seppellita/db/action/DelDbEnum;

    const/4 v1, 0x0

    const-string v2, "NO_NEED_DEL"

    invoke-direct {v0, v2, v1}, Lcom/bianfeng/seppellita/db/action/DelDbEnum;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/bianfeng/seppellita/db/action/DelDbEnum;->NO_NEED_DEL:Lcom/bianfeng/seppellita/db/action/DelDbEnum;

    new-instance v0, Lcom/bianfeng/seppellita/db/action/DelDbEnum;

    const/4 v2, 0x1

    const-string v3, "NEED_DEL"

    invoke-direct {v0, v3, v2}, Lcom/bianfeng/seppellita/db/action/DelDbEnum;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/bianfeng/seppellita/db/action/DelDbEnum;->NEED_DEL:Lcom/bianfeng/seppellita/db/action/DelDbEnum;

    new-instance v0, Lcom/bianfeng/seppellita/db/action/DelDbEnum;

    const/4 v3, 0x2

    const-string v4, "DELED"

    invoke-direct {v0, v4, v3}, Lcom/bianfeng/seppellita/db/action/DelDbEnum;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/bianfeng/seppellita/db/action/DelDbEnum;->DELED:Lcom/bianfeng/seppellita/db/action/DelDbEnum;

    const/4 v4, 0x3

    new-array v4, v4, [Lcom/bianfeng/seppellita/db/action/DelDbEnum;

    .line 3
    sget-object v5, Lcom/bianfeng/seppellita/db/action/DelDbEnum;->NO_NEED_DEL:Lcom/bianfeng/seppellita/db/action/DelDbEnum;

    aput-object v5, v4, v1

    sget-object v1, Lcom/bianfeng/seppellita/db/action/DelDbEnum;->NEED_DEL:Lcom/bianfeng/seppellita/db/action/DelDbEnum;

    aput-object v1, v4, v2

    aput-object v0, v4, v3

    sput-object v4, Lcom/bianfeng/seppellita/db/action/DelDbEnum;->$VALUES:[Lcom/bianfeng/seppellita/db/action/DelDbEnum;

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

.method public static valueOf(Ljava/lang/String;)Lcom/bianfeng/seppellita/db/action/DelDbEnum;
    .locals 1

    .line 3
    const-class v0, Lcom/bianfeng/seppellita/db/action/DelDbEnum;

    invoke-static {v0, p0}, Ljava/lang/Enum;->valueOf(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/Enum;

    move-result-object p0

    check-cast p0, Lcom/bianfeng/seppellita/db/action/DelDbEnum;

    return-object p0
.end method

.method public static values()[Lcom/bianfeng/seppellita/db/action/DelDbEnum;
    .locals 1

    .line 3
    sget-object v0, Lcom/bianfeng/seppellita/db/action/DelDbEnum;->$VALUES:[Lcom/bianfeng/seppellita/db/action/DelDbEnum;

    invoke-virtual {v0}, [Lcom/bianfeng/seppellita/db/action/DelDbEnum;->clone()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, [Lcom/bianfeng/seppellita/db/action/DelDbEnum;

    return-object v0
.end method
