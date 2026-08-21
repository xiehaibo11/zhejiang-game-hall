.class public final Lcom/tkay/expressad/video/dynview/c;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/tkay/expressad/video/dynview/c$b;,
        Lcom/tkay/expressad/video/dynview/c$a;
    }
.end annotation


# instance fields
.field private a:Landroid/content/Context;

.field private b:Ljava/lang/String;

.field private c:I

.field private d:F

.field private e:F

.field private f:I

.field private g:I

.field private h:Landroid/view/View;

.field private i:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/tkay/expressad/foundation/d/c;",
            ">;"
        }
    .end annotation
.end field

.field private j:I

.field private k:Z

.field private l:Ljava/lang/String;

.field private m:I


# direct methods
.method private constructor <init>(Lcom/tkay/expressad/video/dynview/c$a;)V
    .locals 1

    .line 72
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 73
    invoke-static {p1}, Lcom/tkay/expressad/video/dynview/c$a;->a(Lcom/tkay/expressad/video/dynview/c$a;)F

    move-result v0

    iput v0, p0, Lcom/tkay/expressad/video/dynview/c;->e:F

    .line 74
    invoke-static {p1}, Lcom/tkay/expressad/video/dynview/c$a;->b(Lcom/tkay/expressad/video/dynview/c$a;)F

    move-result v0

    iput v0, p0, Lcom/tkay/expressad/video/dynview/c;->d:F

    .line 75
    invoke-static {p1}, Lcom/tkay/expressad/video/dynview/c$a;->c(Lcom/tkay/expressad/video/dynview/c$a;)I

    move-result v0

    iput v0, p0, Lcom/tkay/expressad/video/dynview/c;->f:I

    .line 76
    invoke-static {p1}, Lcom/tkay/expressad/video/dynview/c$a;->d(Lcom/tkay/expressad/video/dynview/c$a;)I

    move-result v0

    iput v0, p0, Lcom/tkay/expressad/video/dynview/c;->g:I

    .line 77
    invoke-static {p1}, Lcom/tkay/expressad/video/dynview/c$a;->e(Lcom/tkay/expressad/video/dynview/c$a;)Landroid/content/Context;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/expressad/video/dynview/c;->a:Landroid/content/Context;

    .line 78
    invoke-static {p1}, Lcom/tkay/expressad/video/dynview/c$a;->f(Lcom/tkay/expressad/video/dynview/c$a;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/expressad/video/dynview/c;->b:Ljava/lang/String;

    .line 79
    invoke-static {p1}, Lcom/tkay/expressad/video/dynview/c$a;->g(Lcom/tkay/expressad/video/dynview/c$a;)I

    move-result v0

    iput v0, p0, Lcom/tkay/expressad/video/dynview/c;->c:I

    .line 80
    invoke-static {p1}, Lcom/tkay/expressad/video/dynview/c$a;->h(Lcom/tkay/expressad/video/dynview/c$a;)Landroid/view/View;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/expressad/video/dynview/c;->h:Landroid/view/View;

    .line 81
    invoke-static {p1}, Lcom/tkay/expressad/video/dynview/c$a;->i(Lcom/tkay/expressad/video/dynview/c$a;)Ljava/util/List;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/expressad/video/dynview/c;->i:Ljava/util/List;

    .line 82
    invoke-static {p1}, Lcom/tkay/expressad/video/dynview/c$a;->j(Lcom/tkay/expressad/video/dynview/c$a;)I

    move-result v0

    iput v0, p0, Lcom/tkay/expressad/video/dynview/c;->j:I

    .line 83
    invoke-static {p1}, Lcom/tkay/expressad/video/dynview/c$a;->k(Lcom/tkay/expressad/video/dynview/c$a;)Z

    move-result p1

    iput-boolean p1, p0, Lcom/tkay/expressad/video/dynview/c;->k:Z

    return-void
.end method

.method synthetic constructor <init>(Lcom/tkay/expressad/video/dynview/c$a;B)V
    .locals 0

    .line 11
    invoke-direct {p0, p1}, Lcom/tkay/expressad/video/dynview/c;-><init>(Lcom/tkay/expressad/video/dynview/c$a;)V

    return-void
.end method

.method private static l()Lcom/tkay/expressad/video/dynview/c$a;
    .locals 1

    .line 192
    new-instance v0, Lcom/tkay/expressad/video/dynview/c$a;

    invoke-direct {v0}, Lcom/tkay/expressad/video/dynview/c$a;-><init>()V

    return-object v0
.end method


# virtual methods
.method public final a()Landroid/content/Context;
    .locals 1

    .line 29
    iget-object v0, p0, Lcom/tkay/expressad/video/dynview/c;->a:Landroid/content/Context;

    return-object v0
.end method

.method public final b()Ljava/lang/String;
    .locals 1

    .line 33
    iget-object v0, p0, Lcom/tkay/expressad/video/dynview/c;->b:Ljava/lang/String;

    return-object v0
.end method

.method public final c()F
    .locals 1

    .line 37
    iget v0, p0, Lcom/tkay/expressad/video/dynview/c;->d:F

    return v0
.end method

.method public final d()F
    .locals 1

    .line 41
    iget v0, p0, Lcom/tkay/expressad/video/dynview/c;->e:F

    return v0
.end method

.method public final e()I
    .locals 1

    .line 45
    iget v0, p0, Lcom/tkay/expressad/video/dynview/c;->f:I

    return v0
.end method

.method public final f()Landroid/view/View;
    .locals 1

    .line 49
    iget-object v0, p0, Lcom/tkay/expressad/video/dynview/c;->h:Landroid/view/View;

    return-object v0
.end method

.method public final g()Ljava/util/List;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/List<",
            "Lcom/tkay/expressad/foundation/d/c;",
            ">;"
        }
    .end annotation

    .line 53
    iget-object v0, p0, Lcom/tkay/expressad/video/dynview/c;->i:Ljava/util/List;

    return-object v0
.end method

.method public final h()I
    .locals 1

    .line 57
    iget v0, p0, Lcom/tkay/expressad/video/dynview/c;->c:I

    return v0
.end method

.method public final i()I
    .locals 1

    .line 61
    iget v0, p0, Lcom/tkay/expressad/video/dynview/c;->j:I

    return v0
.end method

.method public final j()I
    .locals 1

    .line 65
    iget v0, p0, Lcom/tkay/expressad/video/dynview/c;->g:I

    return v0
.end method

.method public final k()Z
    .locals 1

    .line 69
    iget-boolean v0, p0, Lcom/tkay/expressad/video/dynview/c;->k:Z

    return v0
.end method
