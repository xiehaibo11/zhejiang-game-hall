.class final Lcom/tkay/core/common/k/c$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/core/common/k/c;->a(Lcom/tkay/core/common/f/d;ZIILjava/lang/String;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;ZLjava/lang/String;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/core/common/f/d;

.field final synthetic b:Z

.field final synthetic c:I

.field final synthetic d:I

.field final synthetic e:Ljava/lang/String;

.field final synthetic f:I

.field final synthetic g:Ljava/lang/String;

.field final synthetic h:Ljava/lang/String;

.field final synthetic i:Ljava/lang/String;

.field final synthetic j:Z

.field final synthetic k:Ljava/lang/String;


# direct methods
.method constructor <init>(Lcom/tkay/core/common/f/d;ZIILjava/lang/String;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;ZLjava/lang/String;)V
    .locals 0

    .line 252
    iput-object p1, p0, Lcom/tkay/core/common/k/c$1;->a:Lcom/tkay/core/common/f/d;

    iput-boolean p2, p0, Lcom/tkay/core/common/k/c$1;->b:Z

    iput p3, p0, Lcom/tkay/core/common/k/c$1;->c:I

    iput p4, p0, Lcom/tkay/core/common/k/c$1;->d:I

    iput-object p5, p0, Lcom/tkay/core/common/k/c$1;->e:Ljava/lang/String;

    iput p6, p0, Lcom/tkay/core/common/k/c$1;->f:I

    iput-object p7, p0, Lcom/tkay/core/common/k/c$1;->g:Ljava/lang/String;

    iput-object p8, p0, Lcom/tkay/core/common/k/c$1;->h:Ljava/lang/String;

    iput-object p9, p0, Lcom/tkay/core/common/k/c$1;->i:Ljava/lang/String;

    iput-boolean p10, p0, Lcom/tkay/core/common/k/c$1;->j:Z

    iput-object p11, p0, Lcom/tkay/core/common/k/c$1;->k:Ljava/lang/String;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 5

    .line 255
    new-instance v0, Lcom/tkay/core/common/f/g;

    iget-object v1, p0, Lcom/tkay/core/common/k/c$1;->a:Lcom/tkay/core/common/f/d;

    invoke-virtual {v1}, Lcom/tkay/core/common/f/d;->Y()Ljava/lang/String;

    move-result-object v1

    iget-object v2, p0, Lcom/tkay/core/common/k/c$1;->a:Lcom/tkay/core/common/f/d;

    invoke-virtual {v2}, Lcom/tkay/core/common/f/d;->H()I

    move-result v2

    invoke-static {v2}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v2

    invoke-direct {v0, v1, v2}, Lcom/tkay/core/common/f/g;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    const-string v1, "1004632"

    .line 256
    iput-object v1, v0, Lcom/tkay/core/common/f/g;->a:Ljava/lang/String;

    .line 257
    iget-object v1, p0, Lcom/tkay/core/common/k/c$1;->a:Lcom/tkay/core/common/f/d;

    invoke-virtual {v1}, Lcom/tkay/core/common/f/d;->X()Ljava/lang/String;

    move-result-object v1

    iput-object v1, v0, Lcom/tkay/core/common/f/g;->b:Ljava/lang/String;

    .line 258
    iget-object v1, p0, Lcom/tkay/core/common/k/c$1;->a:Lcom/tkay/core/common/f/d;

    invoke-virtual {v1}, Lcom/tkay/core/common/f/d;->W()Ljava/lang/String;

    move-result-object v1

    iput-object v1, v0, Lcom/tkay/core/common/f/g;->d:Ljava/lang/String;

    .line 261
    iget-object v1, p0, Lcom/tkay/core/common/k/c$1;->a:Lcom/tkay/core/common/f/d;

    invoke-virtual {v1}, Lcom/tkay/core/common/f/d;->I()I

    move-result v1

    invoke-static {v1}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v1

    iput-object v1, v0, Lcom/tkay/core/common/f/g;->g:Ljava/lang/String;

    .line 262
    iget-object v1, p0, Lcom/tkay/core/common/k/c$1;->a:Lcom/tkay/core/common/f/d;

    invoke-virtual {v1}, Lcom/tkay/core/common/f/d;->F()I

    move-result v1

    invoke-static {v1}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v1

    iput-object v1, v0, Lcom/tkay/core/common/f/g;->k:Ljava/lang/String;

    .line 263
    iget-object v1, p0, Lcom/tkay/core/common/k/c$1;->a:Lcom/tkay/core/common/f/d;

    invoke-virtual {v1}, Lcom/tkay/core/common/f/d;->U()I

    move-result v1

    invoke-static {v1}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v1

    iput-object v1, v0, Lcom/tkay/core/common/f/g;->l:Ljava/lang/String;

    .line 264
    iget-boolean v1, p0, Lcom/tkay/core/common/k/c$1;->b:Z

    const-string v2, "1"

    const-string v3, "0"

    if-eqz v1, :cond_0

    move-object v1, v2

    goto :goto_0

    :cond_0
    move-object v1, v3

    :goto_0
    iput-object v1, v0, Lcom/tkay/core/common/f/g;->m:Ljava/lang/String;

    .line 265
    iget v1, p0, Lcom/tkay/core/common/k/c$1;->c:I

    invoke-static {v1}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v1

    iput-object v1, v0, Lcom/tkay/core/common/f/g;->n:Ljava/lang/String;

    .line 266
    iget v1, p0, Lcom/tkay/core/common/k/c$1;->d:I

    invoke-static {v1}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v1

    iput-object v1, v0, Lcom/tkay/core/common/f/g;->o:Ljava/lang/String;

    .line 267
    iget-object v1, p0, Lcom/tkay/core/common/k/c$1;->e:Ljava/lang/String;

    iput-object v1, v0, Lcom/tkay/core/common/f/g;->p:Ljava/lang/String;

    .line 268
    iget v1, p0, Lcom/tkay/core/common/k/c$1;->f:I

    invoke-static {v1}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v1

    iput-object v1, v0, Lcom/tkay/core/common/f/g;->q:Ljava/lang/String;

    .line 269
    iget-object v1, p0, Lcom/tkay/core/common/k/c$1;->g:Ljava/lang/String;

    iput-object v1, v0, Lcom/tkay/core/common/f/g;->r:Ljava/lang/String;

    .line 270
    iget-object v1, p0, Lcom/tkay/core/common/k/c$1;->h:Ljava/lang/String;

    iput-object v1, v0, Lcom/tkay/core/common/f/g;->s:Ljava/lang/String;

    .line 271
    iget-object v1, p0, Lcom/tkay/core/common/k/c$1;->i:Ljava/lang/String;

    iput-object v1, v0, Lcom/tkay/core/common/f/g;->t:Ljava/lang/String;

    .line 274
    iget-object v1, p0, Lcom/tkay/core/common/k/c$1;->i:Ljava/lang/String;

    iget-object v4, p0, Lcom/tkay/core/common/k/c$1;->a:Lcom/tkay/core/common/f/d;

    invoke-virtual {v4}, Lcom/tkay/core/common/f/d;->X()Ljava/lang/String;

    move-result-object v4

    invoke-static {v1, v4}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_1

    .line 275
    iput-object v3, v0, Lcom/tkay/core/common/f/g;->u:Ljava/lang/String;

    goto :goto_1

    .line 277
    :cond_1
    iput-object v2, v0, Lcom/tkay/core/common/f/g;->u:Ljava/lang/String;

    .line 280
    :goto_1
    iget-boolean v1, p0, Lcom/tkay/core/common/k/c$1;->j:Z

    if-eqz v1, :cond_2

    .line 281
    iput-object v2, v0, Lcom/tkay/core/common/f/g;->v:Ljava/lang/String;

    goto :goto_2

    .line 283
    :cond_2
    iput-object v3, v0, Lcom/tkay/core/common/f/g;->v:Ljava/lang/String;

    .line 286
    :goto_2
    iget-object v1, p0, Lcom/tkay/core/common/k/c$1;->k:Ljava/lang/String;

    iput-object v1, v0, Lcom/tkay/core/common/f/g;->w:Ljava/lang/String;

    .line 288
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1}, Lcom/tkay/core/c/e;->a(Landroid/content/Context;)Lcom/tkay/core/c/e;

    move-result-object v1

    iget-object v2, p0, Lcom/tkay/core/common/k/c$1;->a:Lcom/tkay/core/common/f/d;

    invoke-virtual {v2}, Lcom/tkay/core/common/f/d;->W()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Lcom/tkay/core/c/e;->a(Ljava/lang/String;)Lcom/tkay/core/c/d;

    move-result-object v1

    if-eqz v1, :cond_3

    .line 289
    invoke-virtual {v1}, Lcom/tkay/core/c/d;->V()Ljava/lang/String;

    move-result-object v1

    goto :goto_3

    :cond_3
    const-string v1, ""

    :goto_3
    iput-object v1, v0, Lcom/tkay/core/common/f/g;->j:Ljava/lang/String;

    .line 291
    iget-object v1, p0, Lcom/tkay/core/common/k/c$1;->a:Lcom/tkay/core/common/f/d;

    invoke-virtual {v1}, Lcom/tkay/core/common/f/d;->Y()Ljava/lang/String;

    move-result-object v1

    iput-object v1, v0, Lcom/tkay/core/common/f/g;->A:Ljava/lang/String;

    .line 294
    iget-object v1, p0, Lcom/tkay/core/common/k/c$1;->a:Lcom/tkay/core/common/f/d;

    invoke-virtual {v1}, Lcom/tkay/core/common/f/d;->P()Ljava/lang/String;

    move-result-object v1

    iput-object v1, v0, Lcom/tkay/core/common/f/g;->C:Ljava/lang/String;

    .line 295
    iget-object v1, p0, Lcom/tkay/core/common/k/c$1;->a:Lcom/tkay/core/common/f/d;

    invoke-virtual {v1}, Lcom/tkay/core/common/f/d;->Q()Ljava/lang/String;

    move-result-object v1

    iput-object v1, v0, Lcom/tkay/core/common/f/g;->D:Ljava/lang/String;

    .line 297
    invoke-static {v0}, Lcom/tkay/core/common/k/c;->a(Lcom/tkay/core/common/f/g;)V

    return-void
.end method
