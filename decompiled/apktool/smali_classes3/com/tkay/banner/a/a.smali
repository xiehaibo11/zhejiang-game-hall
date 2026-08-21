.class public Lcom/tkay/banner/a/a;
.super Lcom/tkay/core/common/f;


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/tkay/core/common/f<",
        "Lcom/tkay/banner/a/c;",
        ">;"
    }
.end annotation


# static fields
.field public static final a:Ljava/lang/String;


# direct methods
.method static constructor <clinit>()V
    .locals 2

    .line 29
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "Banner"

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    const-class v1, Lcom/tkay/banner/a/a;

    invoke-virtual {v1}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/tkay/banner/a/a;->a:Ljava/lang/String;

    return-void
.end method

.method private constructor <init>(Landroid/content/Context;Ljava/lang/String;)V
    .locals 0

    .line 33
    invoke-direct {p0, p1, p2}, Lcom/tkay/core/common/f;-><init>(Landroid/content/Context;Ljava/lang/String;)V

    return-void
.end method

.method public static a(Landroid/content/Context;Ljava/lang/String;)Lcom/tkay/banner/a/a;
    .locals 3

    .line 39
    invoke-static {}, Lcom/tkay/core/common/v;->a()Lcom/tkay/core/common/v;

    move-result-object v0

    const-string v1, "2"

    invoke-virtual {v0, p1, v1}, Lcom/tkay/core/common/v;->a(Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/core/common/f;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 40
    instance-of v2, v0, Lcom/tkay/banner/a/a;

    if-nez v2, :cond_1

    .line 41
    :cond_0
    new-instance v0, Lcom/tkay/banner/a/a;

    invoke-direct {v0, p0, p1}, Lcom/tkay/banner/a/a;-><init>(Landroid/content/Context;Ljava/lang/String;)V

    .line 42
    invoke-static {}, Lcom/tkay/core/common/v;->a()Lcom/tkay/core/common/v;

    move-result-object p0

    invoke-virtual {p0, p1, v1, v0}, Lcom/tkay/core/common/v;->a(Ljava/lang/String;Ljava/lang/String;Lcom/tkay/core/common/f;)V

    .line 44
    :cond_1
    check-cast v0, Lcom/tkay/banner/a/a;

    return-object v0
.end method

.method private static a(Lcom/tkay/banner/a/c;)Lcom/tkay/core/common/h;
    .locals 2

    .line 67
    new-instance v0, Lcom/tkay/banner/a/f;

    invoke-virtual {p0}, Lcom/tkay/banner/a/c;->a()Landroid/content/Context;

    move-result-object v1

    invoke-direct {v0, v1}, Lcom/tkay/banner/a/f;-><init>(Landroid/content/Context;)V

    .line 68
    iget p0, p0, Lcom/tkay/banner/a/c;->d:I

    invoke-virtual {v0, p0}, Lcom/tkay/banner/a/f;->a(I)V

    return-object v0
.end method


# virtual methods
.method public final synthetic a(Lcom/tkay/core/common/j;)Lcom/tkay/core/common/h;
    .locals 2

    .line 26
    check-cast p1, Lcom/tkay/banner/a/c;

    .line 1067
    new-instance v0, Lcom/tkay/banner/a/f;

    invoke-virtual {p1}, Lcom/tkay/banner/a/c;->a()Landroid/content/Context;

    move-result-object v1

    invoke-direct {v0, v1}, Lcom/tkay/banner/a/f;-><init>(Landroid/content/Context;)V

    .line 1068
    iget p1, p1, Lcom/tkay/banner/a/c;->d:I

    invoke-virtual {v0, p1}, Lcom/tkay/banner/a/f;->a(I)V

    return-object v0
.end method

.method protected final a()Ljava/lang/String;
    .locals 1

    const-string v0, "2"

    return-object v0
.end method

.method public final a(Landroid/content/Context;ILcom/tkay/core/common/b/a;Lcom/tkay/core/common/b/b;Ljava/util/Map;)V
    .locals 6
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/content/Context;",
            "I",
            "Lcom/tkay/core/common/b/a;",
            "Lcom/tkay/core/common/b/b;",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;)V"
        }
    .end annotation

    .line 54
    new-instance v4, Lcom/tkay/banner/a/c;

    invoke-direct {v4}, Lcom/tkay/banner/a/c;-><init>()V

    .line 55
    iput-object p4, v4, Lcom/tkay/banner/a/c;->e:Lcom/tkay/core/common/b/b;

    .line 56
    invoke-virtual {v4, p1}, Lcom/tkay/banner/a/c;->a(Landroid/content/Context;)V

    .line 58
    iput p2, v4, Lcom/tkay/banner/a/c;->d:I

    .line 59
    iput-object p5, v4, Lcom/tkay/banner/a/c;->g:Ljava/util/Map;

    .line 61
    iget-object v1, p0, Lcom/tkay/banner/a/a;->b:Landroid/content/Context;

    iget-object v3, p0, Lcom/tkay/banner/a/a;->c:Ljava/lang/String;

    const-string v2, "2"

    move-object v0, p0

    move-object v5, p3

    invoke-super/range {v0 .. v5}, Lcom/tkay/core/common/f;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Lcom/tkay/core/common/j;Lcom/tkay/core/common/b/a;)V

    return-void
.end method
