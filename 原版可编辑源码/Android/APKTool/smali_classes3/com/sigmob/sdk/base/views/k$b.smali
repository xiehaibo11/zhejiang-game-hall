.class public final enum Lcom/sigmob/sdk/base/views/k$b;
.super Ljava/lang/Enum;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/sigmob/sdk/base/views/k;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x4019
    name = "b"
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Enum<",
        "Lcom/sigmob/sdk/base/views/k$b;",
        ">;"
    }
.end annotation


# static fields
.field public static final enum a:Lcom/sigmob/sdk/base/views/k$b;

.field public static final enum b:Lcom/sigmob/sdk/base/views/k$b;

.field public static final enum c:Lcom/sigmob/sdk/base/views/k$b;

.field public static final enum d:Lcom/sigmob/sdk/base/views/k$b;

.field public static final enum e:Lcom/sigmob/sdk/base/views/k$b;

.field private static final synthetic f:[Lcom/sigmob/sdk/base/views/k$b;


# direct methods
.method static constructor <clinit>()V
    .locals 8

    new-instance v0, Lcom/sigmob/sdk/base/views/k$b;

    const/4 v1, 0x0

    const-string v2, "STATIC_RESOURCE"

    invoke-direct {v0, v2, v1}, Lcom/sigmob/sdk/base/views/k$b;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/sigmob/sdk/base/views/k$b;->a:Lcom/sigmob/sdk/base/views/k$b;

    new-instance v0, Lcom/sigmob/sdk/base/views/k$b;

    const/4 v2, 0x1

    const-string v3, "HTML_RESOURCE"

    invoke-direct {v0, v3, v2}, Lcom/sigmob/sdk/base/views/k$b;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/sigmob/sdk/base/views/k$b;->b:Lcom/sigmob/sdk/base/views/k$b;

    new-instance v0, Lcom/sigmob/sdk/base/views/k$b;

    const/4 v3, 0x2

    const-string v4, "IFRAME_RESOURCE"

    invoke-direct {v0, v4, v3}, Lcom/sigmob/sdk/base/views/k$b;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/sigmob/sdk/base/views/k$b;->c:Lcom/sigmob/sdk/base/views/k$b;

    new-instance v0, Lcom/sigmob/sdk/base/views/k$b;

    const/4 v4, 0x3

    const-string v5, "NATIVE_RESOURCE"

    invoke-direct {v0, v5, v4}, Lcom/sigmob/sdk/base/views/k$b;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/sigmob/sdk/base/views/k$b;->d:Lcom/sigmob/sdk/base/views/k$b;

    new-instance v0, Lcom/sigmob/sdk/base/views/k$b;

    const/4 v5, 0x4

    const-string v6, "URL_RESOURCE"

    invoke-direct {v0, v6, v5}, Lcom/sigmob/sdk/base/views/k$b;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/sigmob/sdk/base/views/k$b;->e:Lcom/sigmob/sdk/base/views/k$b;

    const/4 v6, 0x5

    new-array v6, v6, [Lcom/sigmob/sdk/base/views/k$b;

    sget-object v7, Lcom/sigmob/sdk/base/views/k$b;->a:Lcom/sigmob/sdk/base/views/k$b;

    aput-object v7, v6, v1

    sget-object v1, Lcom/sigmob/sdk/base/views/k$b;->b:Lcom/sigmob/sdk/base/views/k$b;

    aput-object v1, v6, v2

    sget-object v1, Lcom/sigmob/sdk/base/views/k$b;->c:Lcom/sigmob/sdk/base/views/k$b;

    aput-object v1, v6, v3

    sget-object v1, Lcom/sigmob/sdk/base/views/k$b;->d:Lcom/sigmob/sdk/base/views/k$b;

    aput-object v1, v6, v4

    aput-object v0, v6, v5

    sput-object v6, Lcom/sigmob/sdk/base/views/k$b;->f:[Lcom/sigmob/sdk/base/views/k$b;

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

.method public static valueOf(Ljava/lang/String;)Lcom/sigmob/sdk/base/views/k$b;
    .locals 1

    const-class v0, Lcom/sigmob/sdk/base/views/k$b;

    invoke-static {v0, p0}, Ljava/lang/Enum;->valueOf(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/Enum;

    move-result-object p0

    check-cast p0, Lcom/sigmob/sdk/base/views/k$b;

    return-object p0
.end method

.method public static values()[Lcom/sigmob/sdk/base/views/k$b;
    .locals 1

    sget-object v0, Lcom/sigmob/sdk/base/views/k$b;->f:[Lcom/sigmob/sdk/base/views/k$b;

    invoke-virtual {v0}, [Lcom/sigmob/sdk/base/views/k$b;->clone()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, [Lcom/sigmob/sdk/base/views/k$b;

    return-object v0
.end method
