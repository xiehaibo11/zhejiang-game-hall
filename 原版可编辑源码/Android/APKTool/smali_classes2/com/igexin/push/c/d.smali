.class public final enum Lcom/igexin/push/c/d;
.super Ljava/lang/Enum;


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Enum<",
        "Lcom/igexin/push/c/d;",
        ">;"
    }
.end annotation


# static fields
.field public static final enum a:Lcom/igexin/push/c/d;

.field public static final enum b:Lcom/igexin/push/c/d;

.field public static final enum c:Lcom/igexin/push/c/d;

.field private static final synthetic e:[Lcom/igexin/push/c/d;


# instance fields
.field private d:I


# direct methods
.method static constructor <clinit>()V
    .locals 6

    new-instance v0, Lcom/igexin/push/c/d;

    const/4 v1, 0x0

    const-string v2, "NORMAL"

    invoke-direct {v0, v2, v1, v1}, Lcom/igexin/push/c/d;-><init>(Ljava/lang/String;II)V

    sput-object v0, Lcom/igexin/push/c/d;->a:Lcom/igexin/push/c/d;

    new-instance v0, Lcom/igexin/push/c/d;

    const/4 v2, 0x1

    const-string v3, "BACKUP"

    invoke-direct {v0, v3, v2, v2}, Lcom/igexin/push/c/d;-><init>(Ljava/lang/String;II)V

    sput-object v0, Lcom/igexin/push/c/d;->b:Lcom/igexin/push/c/d;

    new-instance v0, Lcom/igexin/push/c/d;

    const/4 v3, 0x2

    const-string v4, "TRY_NORMAL"

    invoke-direct {v0, v4, v3, v3}, Lcom/igexin/push/c/d;-><init>(Ljava/lang/String;II)V

    sput-object v0, Lcom/igexin/push/c/d;->c:Lcom/igexin/push/c/d;

    const/4 v4, 0x3

    new-array v4, v4, [Lcom/igexin/push/c/d;

    sget-object v5, Lcom/igexin/push/c/d;->a:Lcom/igexin/push/c/d;

    aput-object v5, v4, v1

    sget-object v1, Lcom/igexin/push/c/d;->b:Lcom/igexin/push/c/d;

    aput-object v1, v4, v2

    aput-object v0, v4, v3

    sput-object v4, Lcom/igexin/push/c/d;->e:[Lcom/igexin/push/c/d;

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

    const/4 p1, -0x1

    iput p1, p0, Lcom/igexin/push/c/d;->d:I

    iput p3, p0, Lcom/igexin/push/c/d;->d:I

    return-void
.end method

.method public static a(I)Lcom/igexin/push/c/d;
    .locals 5

    invoke-static {}, Lcom/igexin/push/c/d;->a()[Lcom/igexin/push/c/d;

    move-result-object v0

    array-length v1, v0

    const/4 v2, 0x0

    :goto_0
    if-ge v2, v1, :cond_1

    aget-object v3, v0, v2

    invoke-virtual {v3}, Lcom/igexin/push/c/d;->b()I

    move-result v4

    if-ne v4, p0, :cond_0

    return-object v3

    :cond_0
    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    :cond_1
    const/4 p0, 0x0

    return-object p0
.end method

.method public static a()[Lcom/igexin/push/c/d;
    .locals 1

    sget-object v0, Lcom/igexin/push/c/d;->e:[Lcom/igexin/push/c/d;

    invoke-virtual {v0}, [Lcom/igexin/push/c/d;->clone()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, [Lcom/igexin/push/c/d;

    return-object v0
.end method


# virtual methods
.method public b()I
    .locals 1

    iget v0, p0, Lcom/igexin/push/c/d;->d:I

    return v0
.end method
