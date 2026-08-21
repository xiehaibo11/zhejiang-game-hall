.class final enum Lcom/igexin/push/extension/distribution/basic/a/c;
.super Ljava/lang/Enum;


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Enum<",
        "Lcom/igexin/push/extension/distribution/basic/a/c;",
        ">;"
    }
.end annotation


# static fields
.field public static final enum a:Lcom/igexin/push/extension/distribution/basic/a/c;

.field public static final enum b:Lcom/igexin/push/extension/distribution/basic/a/c;

.field private static final synthetic d:[Lcom/igexin/push/extension/distribution/basic/a/c;


# instance fields
.field private c:I


# direct methods
.method static constructor <clinit>()V
    .locals 5

    new-instance v0, Lcom/igexin/push/extension/distribution/basic/a/c;

    const/4 v1, 0x0

    const/4 v2, 0x1

    const-string v3, "BIG_IMAGE"

    invoke-direct {v0, v3, v1, v2}, Lcom/igexin/push/extension/distribution/basic/a/c;-><init>(Ljava/lang/String;II)V

    sput-object v0, Lcom/igexin/push/extension/distribution/basic/a/c;->a:Lcom/igexin/push/extension/distribution/basic/a/c;

    new-instance v0, Lcom/igexin/push/extension/distribution/basic/a/c;

    const/4 v3, 0x2

    const-string v4, "LONG_TEXT"

    invoke-direct {v0, v4, v2, v3}, Lcom/igexin/push/extension/distribution/basic/a/c;-><init>(Ljava/lang/String;II)V

    sput-object v0, Lcom/igexin/push/extension/distribution/basic/a/c;->b:Lcom/igexin/push/extension/distribution/basic/a/c;

    new-array v3, v3, [Lcom/igexin/push/extension/distribution/basic/a/c;

    sget-object v4, Lcom/igexin/push/extension/distribution/basic/a/c;->a:Lcom/igexin/push/extension/distribution/basic/a/c;

    aput-object v4, v3, v1

    aput-object v0, v3, v2

    sput-object v3, Lcom/igexin/push/extension/distribution/basic/a/c;->d:[Lcom/igexin/push/extension/distribution/basic/a/c;

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

    iput p3, p0, Lcom/igexin/push/extension/distribution/basic/a/c;->c:I

    return-void
.end method


# virtual methods
.method public a()I
    .locals 1

    iget v0, p0, Lcom/igexin/push/extension/distribution/basic/a/c;->c:I

    return v0
.end method
