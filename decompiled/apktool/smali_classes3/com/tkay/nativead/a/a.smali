.class public Lcom/tkay/nativead/a/a;
.super Lcom/tkay/core/common/f;


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/tkay/core/common/f<",
        "Lcom/tkay/nativead/a/d;",
        ">;"
    }
.end annotation


# static fields
.field public static final a:Ljava/lang/String;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 38
    const-class v0, Lcom/tkay/nativead/a/a;

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/tkay/nativead/a/a;->a:Ljava/lang/String;

    return-void
.end method

.method private constructor <init>(Landroid/content/Context;Ljava/lang/String;)V
    .locals 0

    .line 53
    invoke-direct {p0, p1, p2}, Lcom/tkay/core/common/f;-><init>(Landroid/content/Context;Ljava/lang/String;)V

    return-void
.end method

.method private static a(Lcom/tkay/nativead/a/d;)Lcom/tkay/core/common/h;
    .locals 2

    .line 95
    new-instance v0, Lcom/tkay/nativead/a/c;

    invoke-virtual {p0}, Lcom/tkay/nativead/a/d;->a()Landroid/content/Context;

    move-result-object v1

    invoke-direct {v0, v1}, Lcom/tkay/nativead/a/c;-><init>(Landroid/content/Context;)V

    .line 96
    iget p0, p0, Lcom/tkay/nativead/a/d;->d:I

    invoke-virtual {v0, p0}, Lcom/tkay/nativead/a/c;->a(I)V

    return-object v0
.end method

.method public static a(Landroid/content/Context;Ljava/lang/String;)Lcom/tkay/nativead/a/a;
    .locals 3

    .line 43
    invoke-static {}, Lcom/tkay/core/common/v;->a()Lcom/tkay/core/common/v;

    move-result-object v0

    const-string v1, "0"

    invoke-virtual {v0, p1, v1}, Lcom/tkay/core/common/v;->a(Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/core/common/f;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 44
    instance-of v2, v0, Lcom/tkay/nativead/a/a;

    if-nez v2, :cond_1

    .line 45
    :cond_0
    new-instance v0, Lcom/tkay/nativead/a/a;

    invoke-direct {v0, p0, p1}, Lcom/tkay/nativead/a/a;-><init>(Landroid/content/Context;Ljava/lang/String;)V

    .line 46
    invoke-static {}, Lcom/tkay/core/common/v;->a()Lcom/tkay/core/common/v;

    move-result-object p0

    invoke-virtual {p0, p1, v1, v0}, Lcom/tkay/core/common/v;->a(Ljava/lang/String;Ljava/lang/String;Lcom/tkay/core/common/f;)V

    .line 48
    :cond_1
    check-cast v0, Lcom/tkay/nativead/a/a;

    return-object v0
.end method


# virtual methods
.method public final a(Ljava/lang/String;Ljava/util/Map;)Lcom/tkay/core/common/f/a;
    .locals 5
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;)",
            "Lcom/tkay/core/common/f/a;"
        }
    .end annotation

    .line 59
    invoke-static {}, Lcom/tkay/core/common/a;->a()Lcom/tkay/core/common/a;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/nativead/a/a;->b:Landroid/content/Context;

    iget-object v2, p0, Lcom/tkay/nativead/a/a;->c:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lcom/tkay/core/common/a;->a(Landroid/content/Context;Ljava/lang/String;)Lcom/tkay/core/common/f/a;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 60
    invoke-virtual {v0}, Lcom/tkay/core/common/f/a;->f()Lcom/tkay/core/api/BaseAd;

    move-result-object v1

    instance-of v1, v1, Lcom/tkay/nativead/unitgroup/a;

    if-eqz v1, :cond_0

    invoke-virtual {v0}, Lcom/tkay/core/common/f/a;->e()Lcom/tkay/core/api/TYBaseAdAdapter;

    move-result-object v1

    instance-of v1, v1, Lcom/tkay/nativead/unitgroup/api/CustomNativeAdapter;

    if-eqz v1, :cond_0

    .line 61
    invoke-virtual {v0}, Lcom/tkay/core/common/f/a;->f()Lcom/tkay/core/api/BaseAd;

    move-result-object v1

    .line 62
    invoke-virtual {v0}, Lcom/tkay/core/common/f/a;->e()Lcom/tkay/core/api/TYBaseAdAdapter;

    move-result-object v2

    .line 63
    invoke-virtual {v1}, Lcom/tkay/core/api/BaseAd;->getDetail()Lcom/tkay/core/common/f/d;

    move-result-object v1

    .line 1406
    iput-object p1, v1, Lcom/tkay/core/common/f/d;->C:Ljava/lang/String;

    .line 66
    invoke-static {}, Lcom/tkay/core/common/a;->a()Lcom/tkay/core/common/a;

    move-result-object p1

    iget-object v3, p0, Lcom/tkay/nativead/a/a;->c:Ljava/lang/String;

    invoke-virtual {v1}, Lcom/tkay/core/common/f/d;->x()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {p1, v3, v4, v0}, Lcom/tkay/core/common/a;->a(Ljava/lang/String;Ljava/lang/String;Lcom/tkay/core/common/f/a;)V

    .line 67
    invoke-static {}, Lcom/tkay/core/common/a;->a()Lcom/tkay/core/common/a;

    iget-object p1, p0, Lcom/tkay/nativead/a/a;->c:Ljava/lang/String;

    invoke-virtual {v2}, Lcom/tkay/core/api/TYBaseAdAdapter;->getUnitGroupInfo()Lcom/tkay/core/common/f/aj;

    move-result-object v2

    invoke-static {p1, v2}, Lcom/tkay/core/common/a;->b(Ljava/lang/String;Lcom/tkay/core/common/f/aj;)V

    .line 69
    invoke-static {p2, v1}, Lcom/tkay/core/common/l/s;->a(Ljava/util/Map;Lcom/tkay/core/common/f/d;)V

    return-object v0

    :cond_0
    const/4 p1, 0x0

    return-object p1
.end method

.method public final synthetic a(Lcom/tkay/core/common/j;)Lcom/tkay/core/common/h;
    .locals 2

    .line 35
    check-cast p1, Lcom/tkay/nativead/a/d;

    .line 2095
    new-instance v0, Lcom/tkay/nativead/a/c;

    invoke-virtual {p1}, Lcom/tkay/nativead/a/d;->a()Landroid/content/Context;

    move-result-object v1

    invoke-direct {v0, v1}, Lcom/tkay/nativead/a/c;-><init>(Landroid/content/Context;)V

    .line 2096
    iget p1, p1, Lcom/tkay/nativead/a/d;->d:I

    invoke-virtual {v0, p1}, Lcom/tkay/nativead/a/c;->a(I)V

    return-object v0
.end method

.method protected final a()Ljava/lang/String;
    .locals 1

    const-string v0, "0"

    return-object v0
.end method

.method public final a(Landroid/content/Context;Lcom/tkay/core/common/b/a;Lcom/tkay/core/common/b/b;Ljava/util/Map;)V
    .locals 6
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/content/Context;",
            "Lcom/tkay/core/common/b/a;",
            "Lcom/tkay/core/common/b/b;",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;)V"
        }
    .end annotation

    .line 83
    new-instance v4, Lcom/tkay/nativead/a/d;

    invoke-direct {v4}, Lcom/tkay/nativead/a/d;-><init>()V

    .line 84
    invoke-virtual {v4, p1}, Lcom/tkay/nativead/a/d;->a(Landroid/content/Context;)V

    .line 85
    iput-object p3, v4, Lcom/tkay/nativead/a/d;->e:Lcom/tkay/core/common/b/b;

    const/4 p1, 0x0

    .line 86
    iput p1, v4, Lcom/tkay/nativead/a/d;->d:I

    .line 87
    iput-object p4, v4, Lcom/tkay/nativead/a/d;->g:Ljava/util/Map;

    .line 89
    iget-object v1, p0, Lcom/tkay/nativead/a/a;->b:Landroid/content/Context;

    iget-object v3, p0, Lcom/tkay/nativead/a/a;->c:Ljava/lang/String;

    const-string v2, "0"

    move-object v0, p0

    move-object v5, p2

    invoke-super/range {v0 .. v5}, Lcom/tkay/core/common/f;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Lcom/tkay/core/common/j;Lcom/tkay/core/common/b/a;)V

    return-void
.end method
