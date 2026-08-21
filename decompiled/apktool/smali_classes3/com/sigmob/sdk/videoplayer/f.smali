.class public final enum Lcom/sigmob/sdk/videoplayer/f;
.super Ljava/lang/Enum;


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Enum<",
        "Lcom/sigmob/sdk/videoplayer/f;",
        ">;"
    }
.end annotation


# static fields
.field public static final enum a:Lcom/sigmob/sdk/videoplayer/f;

.field public static final enum b:Lcom/sigmob/sdk/videoplayer/f;

.field public static final enum c:Lcom/sigmob/sdk/videoplayer/f;

.field public static final enum d:Lcom/sigmob/sdk/videoplayer/f;

.field public static final enum e:Lcom/sigmob/sdk/videoplayer/f;

.field public static final enum f:Lcom/sigmob/sdk/videoplayer/f;

.field private static final synthetic g:[Lcom/sigmob/sdk/videoplayer/f;


# direct methods
.method static constructor <clinit>()V
    .locals 9

    new-instance v0, Lcom/sigmob/sdk/videoplayer/f;

    const/4 v1, 0x0

    const-string v2, "START"

    invoke-direct {v0, v2, v1}, Lcom/sigmob/sdk/videoplayer/f;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/sigmob/sdk/videoplayer/f;->a:Lcom/sigmob/sdk/videoplayer/f;

    new-instance v0, Lcom/sigmob/sdk/videoplayer/f;

    const/4 v2, 0x1

    const-string v3, "RETRY"

    invoke-direct {v0, v3, v2}, Lcom/sigmob/sdk/videoplayer/f;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/sigmob/sdk/videoplayer/f;->b:Lcom/sigmob/sdk/videoplayer/f;

    new-instance v0, Lcom/sigmob/sdk/videoplayer/f;

    const/4 v3, 0x2

    const-string v4, "FULLSCREEN"

    invoke-direct {v0, v4, v3}, Lcom/sigmob/sdk/videoplayer/f;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/sigmob/sdk/videoplayer/f;->c:Lcom/sigmob/sdk/videoplayer/f;

    new-instance v0, Lcom/sigmob/sdk/videoplayer/f;

    const/4 v4, 0x3

    const-string v5, "VOLUME"

    invoke-direct {v0, v5, v4}, Lcom/sigmob/sdk/videoplayer/f;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/sigmob/sdk/videoplayer/f;->d:Lcom/sigmob/sdk/videoplayer/f;

    new-instance v0, Lcom/sigmob/sdk/videoplayer/f;

    const/4 v5, 0x4

    const-string v6, "BIGRETRY"

    invoke-direct {v0, v6, v5}, Lcom/sigmob/sdk/videoplayer/f;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/sigmob/sdk/videoplayer/f;->e:Lcom/sigmob/sdk/videoplayer/f;

    new-instance v0, Lcom/sigmob/sdk/videoplayer/f;

    const/4 v6, 0x5

    const-string v7, "BACK"

    invoke-direct {v0, v7, v6}, Lcom/sigmob/sdk/videoplayer/f;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/sigmob/sdk/videoplayer/f;->f:Lcom/sigmob/sdk/videoplayer/f;

    const/4 v7, 0x6

    new-array v7, v7, [Lcom/sigmob/sdk/videoplayer/f;

    sget-object v8, Lcom/sigmob/sdk/videoplayer/f;->a:Lcom/sigmob/sdk/videoplayer/f;

    aput-object v8, v7, v1

    sget-object v1, Lcom/sigmob/sdk/videoplayer/f;->b:Lcom/sigmob/sdk/videoplayer/f;

    aput-object v1, v7, v2

    sget-object v1, Lcom/sigmob/sdk/videoplayer/f;->c:Lcom/sigmob/sdk/videoplayer/f;

    aput-object v1, v7, v3

    sget-object v1, Lcom/sigmob/sdk/videoplayer/f;->d:Lcom/sigmob/sdk/videoplayer/f;

    aput-object v1, v7, v4

    sget-object v1, Lcom/sigmob/sdk/videoplayer/f;->e:Lcom/sigmob/sdk/videoplayer/f;

    aput-object v1, v7, v5

    aput-object v0, v7, v6

    sput-object v7, Lcom/sigmob/sdk/videoplayer/f;->g:[Lcom/sigmob/sdk/videoplayer/f;

    return-void
.end method

.method private constructor <init>(Ljava/lang/String;I)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()V"
        }
    .end annotation

    invoke-direct {p0, p1, p2}, Ljava/lang/Enum;-><init>(Ljava/lang/String;I)V

    return-void
.end method

.method public static valueOf(Ljava/lang/String;)Lcom/sigmob/sdk/videoplayer/f;
    .locals 1

    const-class v0, Lcom/sigmob/sdk/videoplayer/f;

    invoke-static {v0, p0}, Ljava/lang/Enum;->valueOf(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/Enum;

    move-result-object p0

    check-cast p0, Lcom/sigmob/sdk/videoplayer/f;

    return-object p0
.end method

.method public static values()[Lcom/sigmob/sdk/videoplayer/f;
    .locals 1

    sget-object v0, Lcom/sigmob/sdk/videoplayer/f;->g:[Lcom/sigmob/sdk/videoplayer/f;

    invoke-virtual {v0}, [Lcom/sigmob/sdk/videoplayer/f;->clone()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, [Lcom/sigmob/sdk/videoplayer/f;

    return-object v0
.end method
