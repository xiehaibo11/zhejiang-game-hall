.class public final enum Lcom/sigmob/sdk/nativead/f;
.super Ljava/lang/Enum;


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Enum<",
        "Lcom/sigmob/sdk/nativead/f;",
        ">;"
    }
.end annotation


# static fields
.field public static final enum a:Lcom/sigmob/sdk/nativead/f;

.field public static final enum b:Lcom/sigmob/sdk/nativead/f;

.field public static final enum c:Lcom/sigmob/sdk/nativead/f;

.field private static final synthetic d:[Lcom/sigmob/sdk/nativead/f;


# direct methods
.method static constructor <clinit>()V
    .locals 6

    new-instance v0, Lcom/sigmob/sdk/nativead/f;

    const/4 v1, 0x0

    const-string v2, "PREVIEW"

    invoke-direct {v0, v2, v1}, Lcom/sigmob/sdk/nativead/f;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/sigmob/sdk/nativead/f;->a:Lcom/sigmob/sdk/nativead/f;

    new-instance v0, Lcom/sigmob/sdk/nativead/f;

    const/4 v2, 0x1

    const-string v3, "DETAIL_PAGE"

    invoke-direct {v0, v3, v2}, Lcom/sigmob/sdk/nativead/f;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/sigmob/sdk/nativead/f;->b:Lcom/sigmob/sdk/nativead/f;

    new-instance v0, Lcom/sigmob/sdk/nativead/f;

    const/4 v3, 0x2

    const-string v4, "DETAIL_PAGE_END"

    invoke-direct {v0, v4, v3}, Lcom/sigmob/sdk/nativead/f;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/sigmob/sdk/nativead/f;->c:Lcom/sigmob/sdk/nativead/f;

    const/4 v4, 0x3

    new-array v4, v4, [Lcom/sigmob/sdk/nativead/f;

    sget-object v5, Lcom/sigmob/sdk/nativead/f;->a:Lcom/sigmob/sdk/nativead/f;

    aput-object v5, v4, v1

    sget-object v1, Lcom/sigmob/sdk/nativead/f;->b:Lcom/sigmob/sdk/nativead/f;

    aput-object v1, v4, v2

    aput-object v0, v4, v3

    sput-object v4, Lcom/sigmob/sdk/nativead/f;->d:[Lcom/sigmob/sdk/nativead/f;

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

.method public static valueOf(Ljava/lang/String;)Lcom/sigmob/sdk/nativead/f;
    .locals 1

    const-class v0, Lcom/sigmob/sdk/nativead/f;

    invoke-static {v0, p0}, Ljava/lang/Enum;->valueOf(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/Enum;

    move-result-object p0

    check-cast p0, Lcom/sigmob/sdk/nativead/f;

    return-object p0
.end method

.method public static values()[Lcom/sigmob/sdk/nativead/f;
    .locals 1

    sget-object v0, Lcom/sigmob/sdk/nativead/f;->d:[Lcom/sigmob/sdk/nativead/f;

    invoke-virtual {v0}, [Lcom/sigmob/sdk/nativead/f;->clone()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, [Lcom/sigmob/sdk/nativead/f;

    return-object v0
.end method
