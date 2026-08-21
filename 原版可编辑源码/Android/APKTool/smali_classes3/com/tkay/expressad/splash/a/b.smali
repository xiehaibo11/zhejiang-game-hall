.class public Lcom/tkay/expressad/splash/a/b;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/tkay/expressad/splash/a/b$a;
    }
.end annotation


# instance fields
.field private a:Ljava/lang/String;

.field private b:Ljava/lang/String;

.field private c:Lcom/tkay/expressad/foundation/d/c;

.field private d:Ljava/lang/String;

.field private e:Z

.field private f:I

.field private g:I

.field private h:I

.field private i:I

.field private j:I

.field private k:I

.field private l:I

.field private m:I

.field private n:I


# direct methods
.method public constructor <init>(Lcom/tkay/expressad/splash/a/b$a;)V
    .locals 2

    .line 82
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x0

    .line 14
    iput v0, p0, Lcom/tkay/expressad/splash/a/b;->g:I

    const/4 v1, 0x1

    .line 15
    iput v1, p0, Lcom/tkay/expressad/splash/a/b;->h:I

    .line 16
    iput v0, p0, Lcom/tkay/expressad/splash/a/b;->i:I

    .line 18
    iput v0, p0, Lcom/tkay/expressad/splash/a/b;->j:I

    const/16 v0, 0xa

    .line 19
    iput v0, p0, Lcom/tkay/expressad/splash/a/b;->k:I

    const/4 v0, 0x5

    .line 20
    iput v0, p0, Lcom/tkay/expressad/splash/a/b;->l:I

    .line 22
    iput v1, p0, Lcom/tkay/expressad/splash/a/b;->m:I

    .line 83
    invoke-static {p1}, Lcom/tkay/expressad/splash/a/b$a;->a(Lcom/tkay/expressad/splash/a/b$a;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/expressad/splash/a/b;->a:Ljava/lang/String;

    .line 84
    invoke-static {p1}, Lcom/tkay/expressad/splash/a/b$a;->b(Lcom/tkay/expressad/splash/a/b$a;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/expressad/splash/a/b;->b:Ljava/lang/String;

    .line 85
    invoke-static {p1}, Lcom/tkay/expressad/splash/a/b$a;->c(Lcom/tkay/expressad/splash/a/b$a;)Lcom/tkay/expressad/foundation/d/c;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/expressad/splash/a/b;->c:Lcom/tkay/expressad/foundation/d/c;

    .line 86
    invoke-static {p1}, Lcom/tkay/expressad/splash/a/b$a;->d(Lcom/tkay/expressad/splash/a/b$a;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/expressad/splash/a/b;->d:Ljava/lang/String;

    .line 87
    invoke-static {p1}, Lcom/tkay/expressad/splash/a/b$a;->e(Lcom/tkay/expressad/splash/a/b$a;)Z

    move-result v0

    iput-boolean v0, p0, Lcom/tkay/expressad/splash/a/b;->e:Z

    .line 88
    invoke-static {p1}, Lcom/tkay/expressad/splash/a/b$a;->f(Lcom/tkay/expressad/splash/a/b$a;)I

    move-result v0

    iput v0, p0, Lcom/tkay/expressad/splash/a/b;->f:I

    .line 90
    invoke-static {p1}, Lcom/tkay/expressad/splash/a/b$a;->g(Lcom/tkay/expressad/splash/a/b$a;)I

    move-result v0

    iput v0, p0, Lcom/tkay/expressad/splash/a/b;->g:I

    .line 91
    invoke-static {p1}, Lcom/tkay/expressad/splash/a/b$a;->h(Lcom/tkay/expressad/splash/a/b$a;)I

    move-result v0

    iput v0, p0, Lcom/tkay/expressad/splash/a/b;->h:I

    .line 92
    invoke-static {p1}, Lcom/tkay/expressad/splash/a/b$a;->i(Lcom/tkay/expressad/splash/a/b$a;)I

    move-result v0

    iput v0, p0, Lcom/tkay/expressad/splash/a/b;->i:I

    .line 94
    invoke-static {p1}, Lcom/tkay/expressad/splash/a/b$a;->j(Lcom/tkay/expressad/splash/a/b$a;)I

    move-result v0

    iput v0, p0, Lcom/tkay/expressad/splash/a/b;->j:I

    .line 95
    invoke-static {p1}, Lcom/tkay/expressad/splash/a/b$a;->k(Lcom/tkay/expressad/splash/a/b$a;)I

    move-result v0

    iput v0, p0, Lcom/tkay/expressad/splash/a/b;->k:I

    .line 96
    invoke-static {p1}, Lcom/tkay/expressad/splash/a/b$a;->l(Lcom/tkay/expressad/splash/a/b$a;)I

    move-result v0

    iput v0, p0, Lcom/tkay/expressad/splash/a/b;->l:I

    .line 98
    invoke-static {p1}, Lcom/tkay/expressad/splash/a/b$a;->m(Lcom/tkay/expressad/splash/a/b$a;)I

    move-result v0

    iput v0, p0, Lcom/tkay/expressad/splash/a/b;->n:I

    .line 99
    invoke-static {p1}, Lcom/tkay/expressad/splash/a/b$a;->n(Lcom/tkay/expressad/splash/a/b$a;)I

    move-result p1

    iput p1, p0, Lcom/tkay/expressad/splash/a/b;->m:I

    return-void
.end method

.method private n()Ljava/lang/String;
    .locals 1

    .line 27
    iget-object v0, p0, Lcom/tkay/expressad/splash/a/b;->d:Ljava/lang/String;

    return-object v0
.end method


# virtual methods
.method public final a()Ljava/lang/String;
    .locals 1

    .line 31
    iget-object v0, p0, Lcom/tkay/expressad/splash/a/b;->a:Ljava/lang/String;

    return-object v0
.end method

.method public final b()Ljava/lang/String;
    .locals 1

    .line 35
    iget-object v0, p0, Lcom/tkay/expressad/splash/a/b;->b:Ljava/lang/String;

    return-object v0
.end method

.method public final c()Lcom/tkay/expressad/foundation/d/c;
    .locals 1

    .line 39
    iget-object v0, p0, Lcom/tkay/expressad/splash/a/b;->c:Lcom/tkay/expressad/foundation/d/c;

    return-object v0
.end method

.method public final d()Z
    .locals 1

    .line 43
    iget-boolean v0, p0, Lcom/tkay/expressad/splash/a/b;->e:Z

    return v0
.end method

.method public final e()I
    .locals 1

    .line 47
    iget v0, p0, Lcom/tkay/expressad/splash/a/b;->f:I

    return v0
.end method

.method public final f()I
    .locals 1

    .line 51
    iget v0, p0, Lcom/tkay/expressad/splash/a/b;->g:I

    return v0
.end method

.method public final g()I
    .locals 1

    .line 55
    iget v0, p0, Lcom/tkay/expressad/splash/a/b;->h:I

    return v0
.end method

.method public final h()I
    .locals 1

    .line 59
    iget v0, p0, Lcom/tkay/expressad/splash/a/b;->i:I

    return v0
.end method

.method public final i()I
    .locals 1

    .line 63
    iget v0, p0, Lcom/tkay/expressad/splash/a/b;->j:I

    return v0
.end method

.method public final j()I
    .locals 1

    .line 67
    iget v0, p0, Lcom/tkay/expressad/splash/a/b;->k:I

    return v0
.end method

.method public final k()I
    .locals 1

    .line 71
    iget v0, p0, Lcom/tkay/expressad/splash/a/b;->l:I

    return v0
.end method

.method public final l()I
    .locals 1

    .line 75
    iget v0, p0, Lcom/tkay/expressad/splash/a/b;->n:I

    return v0
.end method

.method public final m()I
    .locals 1

    .line 79
    iget v0, p0, Lcom/tkay/expressad/splash/a/b;->m:I

    return v0
.end method
