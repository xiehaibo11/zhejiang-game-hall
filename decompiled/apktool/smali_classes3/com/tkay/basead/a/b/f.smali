.class public Lcom/tkay/basead/a/b/f;
.super Ljava/lang/Object;


# instance fields
.field final a:Ljava/lang/String;

.field private b:Ljava/lang/String;

.field private c:Ljava/lang/String;

.field private d:Ljava/lang/String;

.field private e:I

.field private f:Lcom/tkay/core/common/f/h;

.field private g:Lcom/tkay/core/common/f/j;

.field private h:Lcom/tkay/core/common/res/a/a;


# direct methods
.method public constructor <init>(Ljava/lang/String;Lcom/tkay/core/common/f/h;Lcom/tkay/core/common/f/j;)V
    .locals 2

    .line 28
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 16
    const-class v0, Lcom/tkay/basead/a/b/f;

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/basead/a/b/f;->a:Ljava/lang/String;

    .line 29
    invoke-virtual {p2}, Lcom/tkay/core/common/f/h;->x()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/basead/a/b/f;->b:Ljava/lang/String;

    .line 30
    iput-object p2, p0, Lcom/tkay/basead/a/b/f;->f:Lcom/tkay/core/common/f/h;

    .line 31
    iput-object p3, p0, Lcom/tkay/basead/a/b/f;->g:Lcom/tkay/core/common/f/j;

    .line 32
    iput-object p1, p0, Lcom/tkay/basead/a/b/f;->c:Ljava/lang/String;

    .line 34
    invoke-virtual {p2}, Lcom/tkay/core/common/f/h;->p()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/basead/a/b/f;->d:Ljava/lang/String;

    .line 35
    invoke-virtual {p2}, Lcom/tkay/core/common/f/h;->d()I

    move-result p1

    iput p1, p0, Lcom/tkay/basead/a/b/f;->e:I

    .line 37
    invoke-static {}, Lcom/tkay/core/common/res/a/c;->a()Lcom/tkay/core/common/res/a/c;

    move-result-object p1

    iget-object p3, p0, Lcom/tkay/basead/a/b/f;->b:Ljava/lang/String;

    invoke-virtual {p1, p3}, Lcom/tkay/core/common/res/a/c;->a(Ljava/lang/String;)Lcom/tkay/core/common/res/a/a;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/basead/a/b/f;->h:Lcom/tkay/core/common/res/a/a;

    .line 38
    new-instance p3, Lcom/tkay/core/common/res/a/b;

    iget-object v0, p0, Lcom/tkay/basead/a/b/f;->g:Lcom/tkay/core/common/f/j;

    invoke-virtual {v0}, Lcom/tkay/core/common/f/j;->S()I

    move-result v0

    iget-object v1, p0, Lcom/tkay/basead/a/b/f;->g:Lcom/tkay/core/common/f/j;

    invoke-virtual {v1}, Lcom/tkay/core/common/f/j;->U()I

    move-result v1

    invoke-direct {p3, v0, v1}, Lcom/tkay/core/common/res/a/b;-><init>(II)V

    invoke-virtual {p1, p3}, Lcom/tkay/core/common/res/a/a;->a(Lcom/tkay/core/common/res/a/b;)V

    .line 39
    iget-object p1, p0, Lcom/tkay/basead/a/b/f;->h:Lcom/tkay/core/common/res/a/a;

    new-instance p3, Lcom/tkay/basead/a/b/f$1;

    invoke-direct {p3, p0}, Lcom/tkay/basead/a/b/f$1;-><init>(Lcom/tkay/basead/a/b/f;)V

    invoke-virtual {p1, p3}, Lcom/tkay/core/common/res/a/a;->a(Lcom/tkay/core/common/res/a/a$a;)V

    .line 54
    iget-object p1, p0, Lcom/tkay/basead/a/b/f;->h:Lcom/tkay/core/common/res/a/a;

    new-instance p3, Lcom/tkay/basead/a/b/f$2;

    invoke-direct {p3, p0, p2}, Lcom/tkay/basead/a/b/f$2;-><init>(Lcom/tkay/basead/a/b/f;Lcom/tkay/core/common/f/h;)V

    .line 1078
    iput-object p3, p1, Lcom/tkay/core/common/res/a/a;->k:Lcom/tkay/core/common/res/a/a$b;

    return-void
.end method

.method static synthetic a(Lcom/tkay/basead/a/b/f;)Lcom/tkay/core/common/f/j;
    .locals 0

    .line 15
    iget-object p0, p0, Lcom/tkay/basead/a/b/f;->g:Lcom/tkay/core/common/f/j;

    return-object p0
.end method

.method static synthetic b(Lcom/tkay/basead/a/b/f;)Ljava/lang/String;
    .locals 0

    .line 15
    iget-object p0, p0, Lcom/tkay/basead/a/b/f;->b:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic c(Lcom/tkay/basead/a/b/f;)Ljava/lang/String;
    .locals 0

    .line 15
    iget-object p0, p0, Lcom/tkay/basead/a/b/f;->c:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic d(Lcom/tkay/basead/a/b/f;)Ljava/lang/String;
    .locals 0

    .line 15
    iget-object p0, p0, Lcom/tkay/basead/a/b/f;->d:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic e(Lcom/tkay/basead/a/b/f;)I
    .locals 0

    .line 15
    iget p0, p0, Lcom/tkay/basead/a/b/f;->e:I

    return p0
.end method


# virtual methods
.method public final a()V
    .locals 2

    .line 75
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v1, p0, Lcom/tkay/basead/a/b/f;->d:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, ","

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/tkay/basead/a/b/f;->b:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, " startRequest"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 76
    iget-object v0, p0, Lcom/tkay/basead/a/b/f;->h:Lcom/tkay/core/common/res/a/a;

    invoke-virtual {v0}, Lcom/tkay/core/common/res/a/a;->e()V

    return-void
.end method

.method public final b()V
    .locals 3

    .line 80
    invoke-static {}, Lcom/tkay/core/common/a/j;->a()Lcom/tkay/core/common/a/j;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/basead/a/b/f;->b:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/a/j;->b(Ljava/lang/String;)I

    move-result v0

    .line 81
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v2, p0, Lcom/tkay/basead/a/b/f;->d:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, ","

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/tkay/basead/a/b/f;->b:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, " resumeRequest: readyRate:"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v2, ",cdRate:"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/tkay/basead/a/b/f;->g:Lcom/tkay/core/common/f/j;

    invoke-virtual {v2}, Lcom/tkay/core/common/f/j;->T()I

    move-result v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const/16 v1, 0x64

    if-ne v0, v1, :cond_0

    return-void

    .line 85
    :cond_0
    iget-object v0, p0, Lcom/tkay/basead/a/b/f;->h:Lcom/tkay/core/common/res/a/a;

    invoke-virtual {v0}, Lcom/tkay/core/common/res/a/a;->f()V

    return-void
.end method
