.class public final enum Lcom/bianfeng/netlibsdk/Request$Priority;
.super Ljava/lang/Enum;
.source "Request.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/bianfeng/netlibsdk/Request;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x4019
    name = "Priority"
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Enum<",
        "Lcom/bianfeng/netlibsdk/Request$Priority;",
        ">;"
    }
.end annotation


# static fields
.field private static final synthetic $VALUES:[Lcom/bianfeng/netlibsdk/Request$Priority;

.field public static final enum HIGH:Lcom/bianfeng/netlibsdk/Request$Priority;

.field public static final enum IMMEDIATE:Lcom/bianfeng/netlibsdk/Request$Priority;

.field public static final enum LOW:Lcom/bianfeng/netlibsdk/Request$Priority;

.field public static final enum NORMAL:Lcom/bianfeng/netlibsdk/Request$Priority;


# direct methods
.method static constructor <clinit>()V
    .locals 7

    .line 131
    new-instance v0, Lcom/bianfeng/netlibsdk/Request$Priority;

    const/4 v1, 0x0

    const-string v2, "LOW"

    invoke-direct {v0, v2, v1}, Lcom/bianfeng/netlibsdk/Request$Priority;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/bianfeng/netlibsdk/Request$Priority;->LOW:Lcom/bianfeng/netlibsdk/Request$Priority;

    .line 132
    new-instance v0, Lcom/bianfeng/netlibsdk/Request$Priority;

    const/4 v2, 0x1

    const-string v3, "NORMAL"

    invoke-direct {v0, v3, v2}, Lcom/bianfeng/netlibsdk/Request$Priority;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/bianfeng/netlibsdk/Request$Priority;->NORMAL:Lcom/bianfeng/netlibsdk/Request$Priority;

    .line 133
    new-instance v0, Lcom/bianfeng/netlibsdk/Request$Priority;

    const/4 v3, 0x2

    const-string v4, "HIGH"

    invoke-direct {v0, v4, v3}, Lcom/bianfeng/netlibsdk/Request$Priority;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/bianfeng/netlibsdk/Request$Priority;->HIGH:Lcom/bianfeng/netlibsdk/Request$Priority;

    .line 134
    new-instance v0, Lcom/bianfeng/netlibsdk/Request$Priority;

    const/4 v4, 0x3

    const-string v5, "IMMEDIATE"

    invoke-direct {v0, v5, v4}, Lcom/bianfeng/netlibsdk/Request$Priority;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/bianfeng/netlibsdk/Request$Priority;->IMMEDIATE:Lcom/bianfeng/netlibsdk/Request$Priority;

    const/4 v5, 0x4

    new-array v5, v5, [Lcom/bianfeng/netlibsdk/Request$Priority;

    .line 130
    sget-object v6, Lcom/bianfeng/netlibsdk/Request$Priority;->LOW:Lcom/bianfeng/netlibsdk/Request$Priority;

    aput-object v6, v5, v1

    sget-object v1, Lcom/bianfeng/netlibsdk/Request$Priority;->NORMAL:Lcom/bianfeng/netlibsdk/Request$Priority;

    aput-object v1, v5, v2

    sget-object v1, Lcom/bianfeng/netlibsdk/Request$Priority;->HIGH:Lcom/bianfeng/netlibsdk/Request$Priority;

    aput-object v1, v5, v3

    aput-object v0, v5, v4

    sput-object v5, Lcom/bianfeng/netlibsdk/Request$Priority;->$VALUES:[Lcom/bianfeng/netlibsdk/Request$Priority;

    return-void
.end method

.method private constructor <init>(Ljava/lang/String;I)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()V"
        }
    .end annotation

    .line 130
    invoke-direct {p0, p1, p2}, Ljava/lang/Enum;-><init>(Ljava/lang/String;I)V

    return-void
.end method

.method public static valueOf(Ljava/lang/String;)Lcom/bianfeng/netlibsdk/Request$Priority;
    .locals 1

    .line 130
    const-class v0, Lcom/bianfeng/netlibsdk/Request$Priority;

    invoke-static {v0, p0}, Ljava/lang/Enum;->valueOf(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/Enum;

    move-result-object p0

    check-cast p0, Lcom/bianfeng/netlibsdk/Request$Priority;

    return-object p0
.end method

.method public static values()[Lcom/bianfeng/netlibsdk/Request$Priority;
    .locals 1

    .line 130
    sget-object v0, Lcom/bianfeng/netlibsdk/Request$Priority;->$VALUES:[Lcom/bianfeng/netlibsdk/Request$Priority;

    invoke-virtual {v0}, [Lcom/bianfeng/netlibsdk/Request$Priority;->clone()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, [Lcom/bianfeng/netlibsdk/Request$Priority;

    return-object v0
.end method
