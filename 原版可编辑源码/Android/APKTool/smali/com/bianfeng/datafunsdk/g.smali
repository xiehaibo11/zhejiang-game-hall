.class public final enum Lcom/bianfeng/datafunsdk/g;
.super Ljava/lang/Enum;
.source "DelDbEnum.java"


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Enum<",
        "Lcom/bianfeng/datafunsdk/g;",
        ">;"
    }
.end annotation


# static fields
.field public static final enum a:Lcom/bianfeng/datafunsdk/g;

.field public static final enum b:Lcom/bianfeng/datafunsdk/g;

.field public static final enum c:Lcom/bianfeng/datafunsdk/g;

.field public static final synthetic d:[Lcom/bianfeng/datafunsdk/g;


# direct methods
.method public static constructor <clinit>()V
    .locals 6

    .line 1
    new-instance v0, Lcom/bianfeng/datafunsdk/g;

    const/4 v1, 0x0

    const-string v2, "NO_NEED_DEL"

    invoke-direct {v0, v2, v1}, Lcom/bianfeng/datafunsdk/g;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/bianfeng/datafunsdk/g;->a:Lcom/bianfeng/datafunsdk/g;

    new-instance v0, Lcom/bianfeng/datafunsdk/g;

    const/4 v2, 0x1

    const-string v3, "NEED_DEL"

    invoke-direct {v0, v3, v2}, Lcom/bianfeng/datafunsdk/g;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/bianfeng/datafunsdk/g;->b:Lcom/bianfeng/datafunsdk/g;

    new-instance v0, Lcom/bianfeng/datafunsdk/g;

    const/4 v3, 0x2

    const-string v4, "DELED"

    invoke-direct {v0, v4, v3}, Lcom/bianfeng/datafunsdk/g;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/bianfeng/datafunsdk/g;->c:Lcom/bianfeng/datafunsdk/g;

    .line 2
    const/4 v4, 0x3

    new-array v4, v4, [Lcom/bianfeng/datafunsdk/g;

    sget-object v5, Lcom/bianfeng/datafunsdk/g;->a:Lcom/bianfeng/datafunsdk/g;

    aput-object v5, v4, v1

    sget-object v1, Lcom/bianfeng/datafunsdk/g;->b:Lcom/bianfeng/datafunsdk/g;

    aput-object v1, v4, v2

    aput-object v0, v4, v3

    sput-object v4, Lcom/bianfeng/datafunsdk/g;->d:[Lcom/bianfeng/datafunsdk/g;

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

.method public static valueOf(Ljava/lang/String;)Lcom/bianfeng/datafunsdk/g;
    .locals 1

    .line 1
    const-class v0, Lcom/bianfeng/datafunsdk/g;

    invoke-static {v0, p0}, Ljava/lang/Enum;->valueOf(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/Enum;

    move-result-object p0

    check-cast p0, Lcom/bianfeng/datafunsdk/g;

    return-object p0
.end method

.method public static values()[Lcom/bianfeng/datafunsdk/g;
    .locals 1

    .line 1
    sget-object v0, Lcom/bianfeng/datafunsdk/g;->d:[Lcom/bianfeng/datafunsdk/g;

    invoke-virtual {v0}, [Lcom/bianfeng/datafunsdk/g;->clone()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, [Lcom/bianfeng/datafunsdk/g;

    return-object v0
.end method
