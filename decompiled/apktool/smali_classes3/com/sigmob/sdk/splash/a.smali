.class public final enum Lcom/sigmob/sdk/splash/a;
.super Ljava/lang/Enum;


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Enum<",
        "Lcom/sigmob/sdk/splash/a;",
        ">;"
    }
.end annotation


# static fields
.field public static final enum a:Lcom/sigmob/sdk/splash/a;

.field public static final enum b:Lcom/sigmob/sdk/splash/a;

.field public static final enum c:Lcom/sigmob/sdk/splash/a;

.field public static final enum d:Lcom/sigmob/sdk/splash/a;

.field public static final enum e:Lcom/sigmob/sdk/splash/a;

.field public static final enum f:Lcom/sigmob/sdk/splash/a;

.field private static final synthetic h:[Lcom/sigmob/sdk/splash/a;


# instance fields
.field private g:I


# direct methods
.method static constructor <clinit>()V
    .locals 9

    new-instance v0, Lcom/sigmob/sdk/splash/a;

    const/4 v1, 0x0

    const-string v2, "ImageTypeUnknow"

    invoke-direct {v0, v2, v1, v1}, Lcom/sigmob/sdk/splash/a;-><init>(Ljava/lang/String;II)V

    sput-object v0, Lcom/sigmob/sdk/splash/a;->a:Lcom/sigmob/sdk/splash/a;

    new-instance v0, Lcom/sigmob/sdk/splash/a;

    const/4 v2, 0x1

    const-string v3, "ImageTypeJPEG"

    invoke-direct {v0, v3, v2, v2}, Lcom/sigmob/sdk/splash/a;-><init>(Ljava/lang/String;II)V

    sput-object v0, Lcom/sigmob/sdk/splash/a;->b:Lcom/sigmob/sdk/splash/a;

    new-instance v0, Lcom/sigmob/sdk/splash/a;

    const/4 v3, 0x2

    const-string v4, "ImageTypePNG"

    invoke-direct {v0, v4, v3, v3}, Lcom/sigmob/sdk/splash/a;-><init>(Ljava/lang/String;II)V

    sput-object v0, Lcom/sigmob/sdk/splash/a;->c:Lcom/sigmob/sdk/splash/a;

    new-instance v0, Lcom/sigmob/sdk/splash/a;

    const/4 v4, 0x3

    const-string v5, "ImageTypeGIF"

    invoke-direct {v0, v5, v4, v4}, Lcom/sigmob/sdk/splash/a;-><init>(Ljava/lang/String;II)V

    sput-object v0, Lcom/sigmob/sdk/splash/a;->d:Lcom/sigmob/sdk/splash/a;

    new-instance v0, Lcom/sigmob/sdk/splash/a;

    const/4 v5, 0x4

    const-string v6, "SMImageTypeWEBP"

    invoke-direct {v0, v6, v5, v5}, Lcom/sigmob/sdk/splash/a;-><init>(Ljava/lang/String;II)V

    sput-object v0, Lcom/sigmob/sdk/splash/a;->e:Lcom/sigmob/sdk/splash/a;

    new-instance v0, Lcom/sigmob/sdk/splash/a;

    const/4 v6, 0x5

    const-string v7, "ImageTypeMP4"

    invoke-direct {v0, v7, v6, v6}, Lcom/sigmob/sdk/splash/a;-><init>(Ljava/lang/String;II)V

    sput-object v0, Lcom/sigmob/sdk/splash/a;->f:Lcom/sigmob/sdk/splash/a;

    const/4 v7, 0x6

    new-array v7, v7, [Lcom/sigmob/sdk/splash/a;

    sget-object v8, Lcom/sigmob/sdk/splash/a;->a:Lcom/sigmob/sdk/splash/a;

    aput-object v8, v7, v1

    sget-object v1, Lcom/sigmob/sdk/splash/a;->b:Lcom/sigmob/sdk/splash/a;

    aput-object v1, v7, v2

    sget-object v1, Lcom/sigmob/sdk/splash/a;->c:Lcom/sigmob/sdk/splash/a;

    aput-object v1, v7, v3

    sget-object v1, Lcom/sigmob/sdk/splash/a;->d:Lcom/sigmob/sdk/splash/a;

    aput-object v1, v7, v4

    sget-object v1, Lcom/sigmob/sdk/splash/a;->e:Lcom/sigmob/sdk/splash/a;

    aput-object v1, v7, v5

    aput-object v0, v7, v6

    sput-object v7, Lcom/sigmob/sdk/splash/a;->h:[Lcom/sigmob/sdk/splash/a;

    return-void
.end method

.method private constructor <init>(Ljava/lang/String;II)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(I)V"
        }
    .end annotation

    invoke-direct {p0, p1, p2}, Ljava/lang/Enum;-><init>(Ljava/lang/String;I)V

    iput p3, p0, Lcom/sigmob/sdk/splash/a;->g:I

    return-void
.end method

.method public static valueOf(Ljava/lang/String;)Lcom/sigmob/sdk/splash/a;
    .locals 1

    const-class v0, Lcom/sigmob/sdk/splash/a;

    invoke-static {v0, p0}, Ljava/lang/Enum;->valueOf(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/Enum;

    move-result-object p0

    check-cast p0, Lcom/sigmob/sdk/splash/a;

    return-object p0
.end method

.method public static values()[Lcom/sigmob/sdk/splash/a;
    .locals 1

    sget-object v0, Lcom/sigmob/sdk/splash/a;->h:[Lcom/sigmob/sdk/splash/a;

    invoke-virtual {v0}, [Lcom/sigmob/sdk/splash/a;->clone()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, [Lcom/sigmob/sdk/splash/a;

    return-object v0
.end method


# virtual methods
.method public a()I
    .locals 1

    iget v0, p0, Lcom/sigmob/sdk/splash/a;->g:I

    return v0
.end method
