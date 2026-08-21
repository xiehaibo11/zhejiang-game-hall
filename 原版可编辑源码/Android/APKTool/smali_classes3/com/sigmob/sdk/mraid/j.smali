.class public final enum Lcom/sigmob/sdk/mraid/j;
.super Ljava/lang/Enum;


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Enum<",
        "Lcom/sigmob/sdk/mraid/j;",
        ">;"
    }
.end annotation


# static fields
.field public static final enum a:Lcom/sigmob/sdk/mraid/j;

.field public static final enum b:Lcom/sigmob/sdk/mraid/j;

.field public static final enum c:Lcom/sigmob/sdk/mraid/j;

.field private static final synthetic e:[Lcom/sigmob/sdk/mraid/j;


# instance fields
.field private final d:I


# direct methods
.method static constructor <clinit>()V
    .locals 6

    new-instance v0, Lcom/sigmob/sdk/mraid/j;

    const/4 v1, 0x1

    const/4 v2, 0x0

    const-string v3, "PORTRAIT"

    invoke-direct {v0, v3, v2, v1}, Lcom/sigmob/sdk/mraid/j;-><init>(Ljava/lang/String;II)V

    sput-object v0, Lcom/sigmob/sdk/mraid/j;->a:Lcom/sigmob/sdk/mraid/j;

    new-instance v0, Lcom/sigmob/sdk/mraid/j;

    const-string v3, "LANDSCAPE"

    invoke-direct {v0, v3, v1, v2}, Lcom/sigmob/sdk/mraid/j;-><init>(Ljava/lang/String;II)V

    sput-object v0, Lcom/sigmob/sdk/mraid/j;->b:Lcom/sigmob/sdk/mraid/j;

    new-instance v0, Lcom/sigmob/sdk/mraid/j;

    const/4 v3, 0x2

    const-string v4, "NONE"

    const/4 v5, -0x1

    invoke-direct {v0, v4, v3, v5}, Lcom/sigmob/sdk/mraid/j;-><init>(Ljava/lang/String;II)V

    sput-object v0, Lcom/sigmob/sdk/mraid/j;->c:Lcom/sigmob/sdk/mraid/j;

    const/4 v4, 0x3

    new-array v4, v4, [Lcom/sigmob/sdk/mraid/j;

    sget-object v5, Lcom/sigmob/sdk/mraid/j;->a:Lcom/sigmob/sdk/mraid/j;

    aput-object v5, v4, v2

    sget-object v2, Lcom/sigmob/sdk/mraid/j;->b:Lcom/sigmob/sdk/mraid/j;

    aput-object v2, v4, v1

    aput-object v0, v4, v3

    sput-object v4, Lcom/sigmob/sdk/mraid/j;->e:[Lcom/sigmob/sdk/mraid/j;

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

    iput p3, p0, Lcom/sigmob/sdk/mraid/j;->d:I

    return-void
.end method

.method public static valueOf(Ljava/lang/String;)Lcom/sigmob/sdk/mraid/j;
    .locals 1

    const-class v0, Lcom/sigmob/sdk/mraid/j;

    invoke-static {v0, p0}, Ljava/lang/Enum;->valueOf(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/Enum;

    move-result-object p0

    check-cast p0, Lcom/sigmob/sdk/mraid/j;

    return-object p0
.end method

.method public static values()[Lcom/sigmob/sdk/mraid/j;
    .locals 1

    sget-object v0, Lcom/sigmob/sdk/mraid/j;->e:[Lcom/sigmob/sdk/mraid/j;

    invoke-virtual {v0}, [Lcom/sigmob/sdk/mraid/j;->clone()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, [Lcom/sigmob/sdk/mraid/j;

    return-object v0
.end method


# virtual methods
.method public a()I
    .locals 1

    iget v0, p0, Lcom/sigmob/sdk/mraid/j;->d:I

    return v0
.end method
