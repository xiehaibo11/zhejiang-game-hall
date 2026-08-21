.class public Lcom/igexin/push/core/bean/g;
.super Lcom/igexin/push/core/bean/BaseAction;


# instance fields
.field private a:Ljava/lang/String;

.field private b:Ljava/lang/String;

.field private c:Z

.field private d:Z

.field private e:Z

.field private f:Z

.field private g:Ljava/lang/String;

.field private h:Ljava/lang/String;

.field private i:Ljava/lang/String;

.field private j:Ljava/lang/String;

.field private k:Z

.field private l:Z

.field private m:I

.field private n:I

.field private o:I

.field private p:Z

.field private q:I

.field private r:Ljava/lang/String;

.field private s:Ljava/lang/String;

.field private t:I


# direct methods
.method public constructor <init>()V
    .locals 2

    invoke-direct {p0}, Lcom/igexin/push/core/bean/BaseAction;-><init>()V

    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/igexin/push/core/bean/g;->c:Z

    iput-boolean v0, p0, Lcom/igexin/push/core/bean/g;->d:Z

    iput-boolean v0, p0, Lcom/igexin/push/core/bean/g;->e:Z

    const-string v1, ""

    iput-object v1, p0, Lcom/igexin/push/core/bean/g;->j:Ljava/lang/String;

    iput-boolean v0, p0, Lcom/igexin/push/core/bean/g;->k:Z

    iput-boolean v0, p0, Lcom/igexin/push/core/bean/g;->l:Z

    const/4 v0, 0x0

    iput v0, p0, Lcom/igexin/push/core/bean/g;->m:I

    iput v0, p0, Lcom/igexin/push/core/bean/g;->n:I

    iput v0, p0, Lcom/igexin/push/core/bean/g;->q:I

    const-string v0, "Default"

    iput-object v0, p0, Lcom/igexin/push/core/bean/g;->r:Ljava/lang/String;

    iput-object v0, p0, Lcom/igexin/push/core/bean/g;->s:Ljava/lang/String;

    const/4 v0, 0x3

    iput v0, p0, Lcom/igexin/push/core/bean/g;->t:I

    return-void
.end method


# virtual methods
.method public a(I)V
    .locals 0

    iput p1, p0, Lcom/igexin/push/core/bean/g;->t:I

    return-void
.end method

.method public a(Ljava/lang/String;)V
    .locals 0

    iput-object p1, p0, Lcom/igexin/push/core/bean/g;->a:Ljava/lang/String;

    return-void
.end method

.method public a(Z)V
    .locals 0

    iput-boolean p1, p0, Lcom/igexin/push/core/bean/g;->p:Z

    return-void
.end method

.method public a()Z
    .locals 1

    iget-boolean v0, p0, Lcom/igexin/push/core/bean/g;->p:Z

    return v0
.end method

.method public b()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/igexin/push/core/bean/g;->a:Ljava/lang/String;

    return-object v0
.end method

.method public b(I)V
    .locals 0

    iput p1, p0, Lcom/igexin/push/core/bean/g;->o:I

    return-void
.end method

.method public b(Ljava/lang/String;)V
    .locals 0

    iput-object p1, p0, Lcom/igexin/push/core/bean/g;->b:Ljava/lang/String;

    return-void
.end method

.method public b(Z)V
    .locals 0

    iput-boolean p1, p0, Lcom/igexin/push/core/bean/g;->c:Z

    return-void
.end method

.method public c()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/igexin/push/core/bean/g;->b:Ljava/lang/String;

    return-object v0
.end method

.method public c(I)V
    .locals 0

    iput p1, p0, Lcom/igexin/push/core/bean/g;->q:I

    return-void
.end method

.method public c(Ljava/lang/String;)V
    .locals 0

    iput-object p1, p0, Lcom/igexin/push/core/bean/g;->g:Ljava/lang/String;

    return-void
.end method

.method public c(Z)V
    .locals 0

    iput-boolean p1, p0, Lcom/igexin/push/core/bean/g;->d:Z

    return-void
.end method

.method public d(Ljava/lang/String;)V
    .locals 0

    iput-object p1, p0, Lcom/igexin/push/core/bean/g;->h:Ljava/lang/String;

    return-void
.end method

.method public d(Z)V
    .locals 0

    iput-boolean p1, p0, Lcom/igexin/push/core/bean/g;->e:Z

    return-void
.end method

.method public d()Z
    .locals 1

    iget-boolean v0, p0, Lcom/igexin/push/core/bean/g;->c:Z

    return v0
.end method

.method public e(Ljava/lang/String;)V
    .locals 0

    iput-object p1, p0, Lcom/igexin/push/core/bean/g;->i:Ljava/lang/String;

    return-void
.end method

.method public e(Z)V
    .locals 0

    iput-boolean p1, p0, Lcom/igexin/push/core/bean/g;->f:Z

    return-void
.end method

.method public e()Z
    .locals 1

    iget-boolean v0, p0, Lcom/igexin/push/core/bean/g;->d:Z

    return v0
.end method

.method public f(Ljava/lang/String;)V
    .locals 0

    iput-object p1, p0, Lcom/igexin/push/core/bean/g;->r:Ljava/lang/String;

    return-void
.end method

.method public f()Z
    .locals 1

    iget-boolean v0, p0, Lcom/igexin/push/core/bean/g;->e:Z

    return v0
.end method

.method public g()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/igexin/push/core/bean/g;->g:Ljava/lang/String;

    return-object v0
.end method

.method public g(Ljava/lang/String;)V
    .locals 0

    iput-object p1, p0, Lcom/igexin/push/core/bean/g;->s:Ljava/lang/String;

    return-void
.end method

.method public h()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/igexin/push/core/bean/g;->h:Ljava/lang/String;

    return-object v0
.end method

.method public h(Ljava/lang/String;)V
    .locals 0

    iput-object p1, p0, Lcom/igexin/push/core/bean/g;->j:Ljava/lang/String;

    return-void
.end method

.method public i()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/igexin/push/core/bean/g;->i:Ljava/lang/String;

    return-object v0
.end method

.method public j()Z
    .locals 1

    iget-boolean v0, p0, Lcom/igexin/push/core/bean/g;->f:Z

    return v0
.end method

.method public k()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/igexin/push/core/bean/g;->r:Ljava/lang/String;

    return-object v0
.end method

.method public l()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/igexin/push/core/bean/g;->s:Ljava/lang/String;

    return-object v0
.end method

.method public m()I
    .locals 1

    iget v0, p0, Lcom/igexin/push/core/bean/g;->t:I

    return v0
.end method

.method public n()I
    .locals 1

    iget v0, p0, Lcom/igexin/push/core/bean/g;->o:I

    return v0
.end method

.method public o()I
    .locals 1

    iget v0, p0, Lcom/igexin/push/core/bean/g;->q:I

    return v0
.end method

.method public p()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/igexin/push/core/bean/g;->j:Ljava/lang/String;

    return-object v0
.end method
