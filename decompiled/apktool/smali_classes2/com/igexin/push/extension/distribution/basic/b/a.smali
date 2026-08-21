.class public Lcom/igexin/push/extension/distribution/basic/b/a;
.super Lcom/igexin/push/core/bean/BaseAction;


# instance fields
.field private A:I

.field private B:I

.field private a:Ljava/lang/String;

.field private b:Ljava/lang/String;

.field private c:Z

.field private d:Z

.field private e:Z

.field private f:Ljava/lang/String;

.field private g:Ljava/lang/String;

.field private h:I

.field private i:Ljava/lang/String;

.field private j:Ljava/lang/String;

.field private k:I

.field private l:Ljava/lang/String;

.field private m:Ljava/lang/String;

.field private n:I

.field private o:I

.field private p:Z

.field private q:I

.field private r:Ljava/lang/String;

.field private s:Z

.field private t:Ljava/lang/String;

.field private u:Ljava/lang/String;

.field private v:I

.field private w:Ljava/lang/String;

.field private x:Ljava/lang/String;

.field private y:Z

.field private z:Z


# direct methods
.method public constructor <init>()V
    .locals 4

    invoke-direct {p0}, Lcom/igexin/push/core/bean/BaseAction;-><init>()V

    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/igexin/push/extension/distribution/basic/b/a;->c:Z

    iput-boolean v0, p0, Lcom/igexin/push/extension/distribution/basic/b/a;->d:Z

    iput-boolean v0, p0, Lcom/igexin/push/extension/distribution/basic/b/a;->e:Z

    const/4 v1, 0x0

    iput-object v1, p0, Lcom/igexin/push/extension/distribution/basic/b/a;->f:Ljava/lang/String;

    iput-object v1, p0, Lcom/igexin/push/extension/distribution/basic/b/a;->g:Ljava/lang/String;

    const/4 v2, 0x0

    iput v2, p0, Lcom/igexin/push/extension/distribution/basic/b/a;->h:I

    const-string v3, ""

    iput-object v3, p0, Lcom/igexin/push/extension/distribution/basic/b/a;->j:Ljava/lang/String;

    iput v2, p0, Lcom/igexin/push/extension/distribution/basic/b/a;->k:I

    const-string v3, "Default"

    iput-object v3, p0, Lcom/igexin/push/extension/distribution/basic/b/a;->l:Ljava/lang/String;

    iput-object v3, p0, Lcom/igexin/push/extension/distribution/basic/b/a;->m:Ljava/lang/String;

    const/4 v3, 0x3

    iput v3, p0, Lcom/igexin/push/extension/distribution/basic/b/a;->n:I

    iput v0, p0, Lcom/igexin/push/extension/distribution/basic/b/a;->q:I

    iput-object v1, p0, Lcom/igexin/push/extension/distribution/basic/b/a;->r:Ljava/lang/String;

    iput-boolean v2, p0, Lcom/igexin/push/extension/distribution/basic/b/a;->s:Z

    iput-object v1, p0, Lcom/igexin/push/extension/distribution/basic/b/a;->t:Ljava/lang/String;

    iput-object v1, p0, Lcom/igexin/push/extension/distribution/basic/b/a;->u:Ljava/lang/String;

    iput v2, p0, Lcom/igexin/push/extension/distribution/basic/b/a;->v:I

    iput-object v1, p0, Lcom/igexin/push/extension/distribution/basic/b/a;->w:Ljava/lang/String;

    iput-object v1, p0, Lcom/igexin/push/extension/distribution/basic/b/a;->x:Ljava/lang/String;

    iput-boolean v0, p0, Lcom/igexin/push/extension/distribution/basic/b/a;->y:Z

    iput-boolean v0, p0, Lcom/igexin/push/extension/distribution/basic/b/a;->z:Z

    iput v2, p0, Lcom/igexin/push/extension/distribution/basic/b/a;->A:I

    iput v2, p0, Lcom/igexin/push/extension/distribution/basic/b/a;->B:I

    return-void
.end method


# virtual methods
.method public A()I
    .locals 1

    iget v0, p0, Lcom/igexin/push/extension/distribution/basic/b/a;->k:I

    return v0
.end method

.method public B()Z
    .locals 1

    iget-boolean v0, p0, Lcom/igexin/push/extension/distribution/basic/b/a;->e:Z

    return v0
.end method

.method public a(I)V
    .locals 1

    const/4 v0, 0x4

    if-gt p1, v0, :cond_0

    if-gez p1, :cond_1

    :cond_0
    const/4 p1, 0x3

    :cond_1
    iput p1, p0, Lcom/igexin/push/extension/distribution/basic/b/a;->n:I

    return-void
.end method

.method public a(Ljava/lang/String;)V
    .locals 0

    iput-object p1, p0, Lcom/igexin/push/extension/distribution/basic/b/a;->l:Ljava/lang/String;

    return-void
.end method

.method public a(Z)V
    .locals 0

    iput-boolean p1, p0, Lcom/igexin/push/extension/distribution/basic/b/a;->p:Z

    return-void
.end method

.method public a()Z
    .locals 1

    iget-boolean v0, p0, Lcom/igexin/push/extension/distribution/basic/b/a;->p:Z

    return v0
.end method

.method public b()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/igexin/push/extension/distribution/basic/b/a;->l:Ljava/lang/String;

    return-object v0
.end method

.method public b(I)V
    .locals 0

    iput p1, p0, Lcom/igexin/push/extension/distribution/basic/b/a;->q:I

    return-void
.end method

.method public b(Ljava/lang/String;)V
    .locals 0

    iput-object p1, p0, Lcom/igexin/push/extension/distribution/basic/b/a;->m:Ljava/lang/String;

    return-void
.end method

.method public b(Z)V
    .locals 0

    iput-boolean p1, p0, Lcom/igexin/push/extension/distribution/basic/b/a;->s:Z

    return-void
.end method

.method public c()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/igexin/push/extension/distribution/basic/b/a;->m:Ljava/lang/String;

    return-object v0
.end method

.method public c(I)V
    .locals 0

    iput p1, p0, Lcom/igexin/push/extension/distribution/basic/b/a;->v:I

    return-void
.end method

.method public c(Ljava/lang/String;)V
    .locals 0

    iput-object p1, p0, Lcom/igexin/push/extension/distribution/basic/b/a;->r:Ljava/lang/String;

    return-void
.end method

.method public c(Z)V
    .locals 0

    iput-boolean p1, p0, Lcom/igexin/push/extension/distribution/basic/b/a;->z:Z

    return-void
.end method

.method public d()I
    .locals 1

    iget v0, p0, Lcom/igexin/push/extension/distribution/basic/b/a;->n:I

    return v0
.end method

.method public d(I)V
    .locals 0

    iput p1, p0, Lcom/igexin/push/extension/distribution/basic/b/a;->B:I

    return-void
.end method

.method public d(Ljava/lang/String;)V
    .locals 0

    iput-object p1, p0, Lcom/igexin/push/extension/distribution/basic/b/a;->u:Ljava/lang/String;

    return-void
.end method

.method public d(Z)V
    .locals 0

    iput-boolean p1, p0, Lcom/igexin/push/extension/distribution/basic/b/a;->y:Z

    return-void
.end method

.method public e()I
    .locals 1

    iget v0, p0, Lcom/igexin/push/extension/distribution/basic/b/a;->q:I

    return v0
.end method

.method public e(I)V
    .locals 0

    iput p1, p0, Lcom/igexin/push/extension/distribution/basic/b/a;->A:I

    return-void
.end method

.method public e(Ljava/lang/String;)V
    .locals 0

    iput-object p1, p0, Lcom/igexin/push/extension/distribution/basic/b/a;->x:Ljava/lang/String;

    return-void
.end method

.method public e(Z)V
    .locals 0

    iput-boolean p1, p0, Lcom/igexin/push/extension/distribution/basic/b/a;->c:Z

    return-void
.end method

.method public f()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/igexin/push/extension/distribution/basic/b/a;->r:Ljava/lang/String;

    return-object v0
.end method

.method public f(I)V
    .locals 0

    iput p1, p0, Lcom/igexin/push/extension/distribution/basic/b/a;->h:I

    return-void
.end method

.method public f(Ljava/lang/String;)V
    .locals 0

    iput-object p1, p0, Lcom/igexin/push/extension/distribution/basic/b/a;->t:Ljava/lang/String;

    return-void
.end method

.method public f(Z)V
    .locals 0

    iput-boolean p1, p0, Lcom/igexin/push/extension/distribution/basic/b/a;->d:Z

    return-void
.end method

.method public g(I)V
    .locals 0

    iput p1, p0, Lcom/igexin/push/extension/distribution/basic/b/a;->o:I

    return-void
.end method

.method public g(Ljava/lang/String;)V
    .locals 0

    iput-object p1, p0, Lcom/igexin/push/extension/distribution/basic/b/a;->a:Ljava/lang/String;

    return-void
.end method

.method public g(Z)V
    .locals 0

    iput-boolean p1, p0, Lcom/igexin/push/extension/distribution/basic/b/a;->e:Z

    return-void
.end method

.method public g()Z
    .locals 1

    iget-boolean v0, p0, Lcom/igexin/push/extension/distribution/basic/b/a;->s:Z

    return v0
.end method

.method public h()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/igexin/push/extension/distribution/basic/b/a;->u:Ljava/lang/String;

    return-object v0
.end method

.method public h(I)V
    .locals 0

    iput p1, p0, Lcom/igexin/push/extension/distribution/basic/b/a;->k:I

    return-void
.end method

.method public h(Ljava/lang/String;)V
    .locals 0

    iput-object p1, p0, Lcom/igexin/push/extension/distribution/basic/b/a;->b:Ljava/lang/String;

    return-void
.end method

.method public i()I
    .locals 1

    iget v0, p0, Lcom/igexin/push/extension/distribution/basic/b/a;->v:I

    return v0
.end method

.method public i(Ljava/lang/String;)V
    .locals 0

    iput-object p1, p0, Lcom/igexin/push/extension/distribution/basic/b/a;->f:Ljava/lang/String;

    return-void
.end method

.method public j()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/igexin/push/extension/distribution/basic/b/a;->x:Ljava/lang/String;

    return-object v0
.end method

.method public j(Ljava/lang/String;)V
    .locals 0

    iput-object p1, p0, Lcom/igexin/push/extension/distribution/basic/b/a;->g:Ljava/lang/String;

    return-void
.end method

.method public k(Ljava/lang/String;)V
    .locals 0

    iput-object p1, p0, Lcom/igexin/push/extension/distribution/basic/b/a;->w:Ljava/lang/String;

    return-void
.end method

.method public k()Z
    .locals 1

    iget-boolean v0, p0, Lcom/igexin/push/extension/distribution/basic/b/a;->z:Z

    return v0
.end method

.method public l()I
    .locals 1

    iget v0, p0, Lcom/igexin/push/extension/distribution/basic/b/a;->B:I

    return v0
.end method

.method public l(Ljava/lang/String;)V
    .locals 0

    iput-object p1, p0, Lcom/igexin/push/extension/distribution/basic/b/a;->i:Ljava/lang/String;

    return-void
.end method

.method public m()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/igexin/push/extension/distribution/basic/b/a;->t:Ljava/lang/String;

    return-object v0
.end method

.method public m(Ljava/lang/String;)V
    .locals 0

    iput-object p1, p0, Lcom/igexin/push/extension/distribution/basic/b/a;->j:Ljava/lang/String;

    return-void
.end method

.method public n()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/igexin/push/extension/distribution/basic/b/a;->a:Ljava/lang/String;

    return-object v0
.end method

.method public o()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/igexin/push/extension/distribution/basic/b/a;->b:Ljava/lang/String;

    return-object v0
.end method

.method public p()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/igexin/push/extension/distribution/basic/b/a;->f:Ljava/lang/String;

    return-object v0
.end method

.method public q()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/igexin/push/extension/distribution/basic/b/a;->g:Ljava/lang/String;

    return-object v0
.end method

.method public r()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/igexin/push/extension/distribution/basic/b/a;->w:Ljava/lang/String;

    return-object v0
.end method

.method public s()Z
    .locals 1

    iget-boolean v0, p0, Lcom/igexin/push/extension/distribution/basic/b/a;->y:Z

    return v0
.end method

.method public t()I
    .locals 1

    iget v0, p0, Lcom/igexin/push/extension/distribution/basic/b/a;->A:I

    return v0
.end method

.method public u()I
    .locals 1

    iget v0, p0, Lcom/igexin/push/extension/distribution/basic/b/a;->h:I

    return v0
.end method

.method public v()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/igexin/push/extension/distribution/basic/b/a;->i:Ljava/lang/String;

    return-object v0
.end method

.method public w()I
    .locals 1

    iget v0, p0, Lcom/igexin/push/extension/distribution/basic/b/a;->o:I

    return v0
.end method

.method public x()Z
    .locals 1

    iget-boolean v0, p0, Lcom/igexin/push/extension/distribution/basic/b/a;->c:Z

    return v0
.end method

.method public y()Z
    .locals 1

    iget-boolean v0, p0, Lcom/igexin/push/extension/distribution/basic/b/a;->d:Z

    return v0
.end method

.method public z()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/igexin/push/extension/distribution/basic/b/a;->j:Ljava/lang/String;

    return-object v0
.end method
