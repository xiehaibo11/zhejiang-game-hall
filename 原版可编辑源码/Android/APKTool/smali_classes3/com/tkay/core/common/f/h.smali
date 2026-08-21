.class public abstract Lcom/tkay/core/common/f/h;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/io/Serializable;


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "<T:",
        "Lcom/tkay/core/common/f/j;",
        ">",
        "Ljava/lang/Object;",
        "Ljava/io/Serializable;"
    }
.end annotation


# static fields
.field public static final c:I = 0x1

.field public static final d:I = 0x2

.field public static final e:I = 0x3

.field public static final f:I = 0x4

.field public static final g:I = 0xa

.field public static final w:I = 0x1

.field public static final x:I = 0x2


# instance fields
.field protected A:Ljava/lang/String;

.field protected B:I

.field protected C:Ljava/lang/String;

.field protected D:Ljava/lang/String;

.field protected E:Ljava/lang/String;

.field protected F:Ljava/lang/String;

.field protected G:Ljava/lang/String;

.field protected H:Ljava/lang/String;

.field protected I:Landroid/graphics/Bitmap;

.field protected J:Lcom/tkay/core/common/f/j;

.field protected K:Ljava/lang/String;

.field protected L:Ljava/lang/String;

.field protected M:I

.field protected N:Ljava/lang/String;

.field protected O:Ljava/lang/String;

.field protected P:Ljava/lang/String;

.field protected Q:Ljava/lang/String;

.field protected h:Ljava/lang/String;

.field protected i:Ljava/lang/String;

.field protected j:Ljava/lang/String;

.field protected k:Ljava/lang/String;

.field protected l:Ljava/lang/String;

.field protected m:Ljava/lang/String;

.field protected n:Ljava/lang/String;

.field protected o:Ljava/lang/String;

.field protected p:Ljava/lang/String;

.field protected q:Ljava/lang/String;

.field protected r:Ljava/lang/String;

.field protected s:Ljava/lang/String;

.field protected t:Ljava/lang/String;

.field protected u:Ljava/lang/String;

.field protected v:I

.field protected y:I

.field protected z:I


# direct methods
.method protected constructor <init>()V
    .locals 0

    .line 94
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private N()Ljava/lang/String;
    .locals 1

    .line 339
    iget-object v0, p0, Lcom/tkay/core/common/f/h;->A:Ljava/lang/String;

    return-object v0
.end method

.method private a()I
    .locals 1

    .line 123
    iget v0, p0, Lcom/tkay/core/common/f/h;->M:I

    return v0
.end method

.method private b()Ljava/lang/String;
    .locals 1

    .line 236
    iget-object v0, p0, Lcom/tkay/core/common/f/h;->m:Ljava/lang/String;

    return-object v0
.end method

.method private c()I
    .locals 1

    .line 331
    iget v0, p0, Lcom/tkay/core/common/f/h;->z:I

    return v0
.end method


# virtual methods
.method public final A()Ljava/lang/String;
    .locals 1

    .line 293
    iget-object v0, p0, Lcom/tkay/core/common/f/h;->t:Ljava/lang/String;

    return-object v0
.end method

.method public final A(Ljava/lang/String;)V
    .locals 0

    .line 370
    iput-object p1, p0, Lcom/tkay/core/common/f/h;->F:Ljava/lang/String;

    return-void
.end method

.method public final B()Ljava/lang/String;
    .locals 1

    .line 302
    iget-object v0, p0, Lcom/tkay/core/common/f/h;->u:Ljava/lang/String;

    return-object v0
.end method

.method public final B(Ljava/lang/String;)V
    .locals 0

    .line 378
    iput-object p1, p0, Lcom/tkay/core/common/f/h;->G:Ljava/lang/String;

    return-void
.end method

.method public final C()I
    .locals 1

    .line 311
    iget v0, p0, Lcom/tkay/core/common/f/h;->v:I

    return v0
.end method

.method public final C(Ljava/lang/String;)V
    .locals 0

    .line 408
    iput-object p1, p0, Lcom/tkay/core/common/f/h;->L:Ljava/lang/String;

    return-void
.end method

.method public final D()I
    .locals 1

    .line 319
    iget v0, p0, Lcom/tkay/core/common/f/h;->y:I

    return v0
.end method

.method public final D(Ljava/lang/String;)Z
    .locals 1

    .line 412
    iget-object v0, p0, Lcom/tkay/core/common/f/h;->q:Ljava/lang/String;

    invoke-static {v0, p1}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_0

    const/4 p1, 0x1

    return p1

    :cond_0
    const/4 p1, 0x0

    return p1
.end method

.method public final E()Z
    .locals 1

    .line 327
    iget-object v0, p0, Lcom/tkay/core/common/f/h;->q:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    const/4 v0, 0x1

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public final F()Ljava/lang/String;
    .locals 1

    .line 350
    iget-object v0, p0, Lcom/tkay/core/common/f/h;->D:Ljava/lang/String;

    return-object v0
.end method

.method public final G()Ljava/lang/String;
    .locals 1

    .line 358
    iget-object v0, p0, Lcom/tkay/core/common/f/h;->E:Ljava/lang/String;

    return-object v0
.end method

.method public final H()Ljava/lang/String;
    .locals 1

    .line 366
    iget-object v0, p0, Lcom/tkay/core/common/f/h;->F:Ljava/lang/String;

    return-object v0
.end method

.method public final I()Ljava/lang/String;
    .locals 1

    .line 374
    iget-object v0, p0, Lcom/tkay/core/common/f/h;->G:Ljava/lang/String;

    return-object v0
.end method

.method public final J()Landroid/graphics/Bitmap;
    .locals 1

    .line 382
    iget-object v0, p0, Lcom/tkay/core/common/f/h;->I:Landroid/graphics/Bitmap;

    return-object v0
.end method

.method public final K()Z
    .locals 1

    .line 392
    iget-object v0, p0, Lcom/tkay/core/common/f/h;->E:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/tkay/core/common/f/h;->D:Ljava/lang/String;

    .line 393
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/tkay/core/common/f/h;->F:Ljava/lang/String;

    .line 394
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/tkay/core/common/f/h;->G:Ljava/lang/String;

    .line 395
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    const/4 v0, 0x1

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public L()Z
    .locals 1

    const/4 v0, 0x0

    return v0
.end method

.method public final M()Ljava/lang/String;
    .locals 1

    .line 404
    iget-object v0, p0, Lcom/tkay/core/common/f/h;->L:Ljava/lang/String;

    return-object v0
.end method

.method public final a(Landroid/graphics/Bitmap;)V
    .locals 0

    .line 386
    iput-object p1, p0, Lcom/tkay/core/common/f/h;->I:Landroid/graphics/Bitmap;

    return-void
.end method

.method public final a(Lcom/tkay/core/common/f/j;)V
    .locals 0

    .line 163
    iput-object p1, p0, Lcom/tkay/core/common/f/h;->J:Lcom/tkay/core/common/f/j;

    return-void
.end method

.method public abstract b(Lcom/tkay/core/common/f/j;)Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(TT;)",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end method

.method public final b(I)V
    .locals 0

    .line 131
    iput p1, p0, Lcom/tkay/core/common/f/h;->M:I

    return-void
.end method

.method public final c(I)V
    .locals 0

    .line 184
    iput p1, p0, Lcom/tkay/core/common/f/h;->B:I

    return-void
.end method

.method public final c(Ljava/lang/String;)V
    .locals 0

    .line 111
    iput-object p1, p0, Lcom/tkay/core/common/f/h;->P:Ljava/lang/String;

    return-void
.end method

.method public abstract d()I
.end method

.method public final d(I)V
    .locals 0

    .line 315
    iput p1, p0, Lcom/tkay/core/common/f/h;->v:I

    return-void
.end method

.method public final d(Ljava/lang/String;)V
    .locals 0

    .line 119
    iput-object p1, p0, Lcom/tkay/core/common/f/h;->Q:Ljava/lang/String;

    return-void
.end method

.method public final e()Ljava/lang/String;
    .locals 1

    .line 107
    iget-object v0, p0, Lcom/tkay/core/common/f/h;->P:Ljava/lang/String;

    return-object v0
.end method

.method public final e(I)V
    .locals 0

    .line 323
    iput p1, p0, Lcom/tkay/core/common/f/h;->y:I

    return-void
.end method

.method public final e(Ljava/lang/String;)V
    .locals 0

    .line 139
    iput-object p1, p0, Lcom/tkay/core/common/f/h;->N:Ljava/lang/String;

    return-void
.end method

.method public final f()Ljava/lang/String;
    .locals 1

    .line 115
    iget-object v0, p0, Lcom/tkay/core/common/f/h;->Q:Ljava/lang/String;

    return-object v0
.end method

.method public final f(I)V
    .locals 0

    .line 335
    iput p1, p0, Lcom/tkay/core/common/f/h;->z:I

    return-void
.end method

.method public final f(Ljava/lang/String;)V
    .locals 0

    .line 147
    iput-object p1, p0, Lcom/tkay/core/common/f/h;->O:Ljava/lang/String;

    return-void
.end method

.method public final g(Ljava/lang/String;)V
    .locals 0

    .line 155
    iput-object p1, p0, Lcom/tkay/core/common/f/h;->K:Ljava/lang/String;

    return-void
.end method

.method public final g()Z
    .locals 2

    .line 127
    iget v0, p0, Lcom/tkay/core/common/f/h;->M:I

    const/4 v1, 0x1

    if-ne v0, v1, :cond_0

    return v1

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public final h()Ljava/lang/String;
    .locals 1

    .line 135
    iget-object v0, p0, Lcom/tkay/core/common/f/h;->N:Ljava/lang/String;

    return-object v0
.end method

.method public final h(Ljava/lang/String;)V
    .locals 0

    .line 171
    iput-object p1, p0, Lcom/tkay/core/common/f/h;->H:Ljava/lang/String;

    return-void
.end method

.method public final i()Ljava/lang/String;
    .locals 1

    .line 143
    iget-object v0, p0, Lcom/tkay/core/common/f/h;->O:Ljava/lang/String;

    return-object v0
.end method

.method public final i(Ljava/lang/String;)V
    .locals 0

    .line 192
    iput-object p1, p0, Lcom/tkay/core/common/f/h;->C:Ljava/lang/String;

    return-void
.end method

.method public final j()Ljava/lang/String;
    .locals 1

    .line 151
    iget-object v0, p0, Lcom/tkay/core/common/f/h;->K:Ljava/lang/String;

    return-object v0
.end method

.method public final j(Ljava/lang/String;)V
    .locals 0

    .line 200
    iput-object p1, p0, Lcom/tkay/core/common/f/h;->h:Ljava/lang/String;

    return-void
.end method

.method public final k()Lcom/tkay/core/common/f/j;
    .locals 1

    .line 159
    iget-object v0, p0, Lcom/tkay/core/common/f/h;->J:Lcom/tkay/core/common/f/j;

    return-object v0
.end method

.method public final k(Ljava/lang/String;)V
    .locals 0

    .line 208
    iput-object p1, p0, Lcom/tkay/core/common/f/h;->i:Ljava/lang/String;

    return-void
.end method

.method public final l()Ljava/lang/String;
    .locals 1

    .line 167
    iget-object v0, p0, Lcom/tkay/core/common/f/h;->H:Ljava/lang/String;

    return-object v0
.end method

.method public final l(Ljava/lang/String;)V
    .locals 0

    .line 216
    iput-object p1, p0, Lcom/tkay/core/common/f/h;->j:Ljava/lang/String;

    return-void
.end method

.method public abstract m()Ljava/lang/String;
.end method

.method public final m(Ljava/lang/String;)V
    .locals 0

    .line 224
    iput-object p1, p0, Lcom/tkay/core/common/f/h;->k:Ljava/lang/String;

    return-void
.end method

.method public final n()I
    .locals 1

    .line 180
    iget v0, p0, Lcom/tkay/core/common/f/h;->B:I

    return v0
.end method

.method public final n(Ljava/lang/String;)V
    .locals 0

    .line 232
    iput-object p1, p0, Lcom/tkay/core/common/f/h;->l:Ljava/lang/String;

    return-void
.end method

.method public final o()Ljava/lang/String;
    .locals 1

    .line 188
    iget-object v0, p0, Lcom/tkay/core/common/f/h;->C:Ljava/lang/String;

    return-object v0
.end method

.method public final o(Ljava/lang/String;)V
    .locals 0

    .line 240
    iput-object p1, p0, Lcom/tkay/core/common/f/h;->m:Ljava/lang/String;

    return-void
.end method

.method public final p()Ljava/lang/String;
    .locals 1

    .line 196
    iget-object v0, p0, Lcom/tkay/core/common/f/h;->h:Ljava/lang/String;

    return-object v0
.end method

.method public final p(Ljava/lang/String;)V
    .locals 0

    .line 248
    iput-object p1, p0, Lcom/tkay/core/common/f/h;->n:Ljava/lang/String;

    return-void
.end method

.method public final q()Ljava/lang/String;
    .locals 1

    .line 204
    iget-object v0, p0, Lcom/tkay/core/common/f/h;->i:Ljava/lang/String;

    return-object v0
.end method

.method public final q(Ljava/lang/String;)V
    .locals 0

    .line 256
    iput-object p1, p0, Lcom/tkay/core/common/f/h;->o:Ljava/lang/String;

    return-void
.end method

.method public final r()Ljava/lang/String;
    .locals 1

    .line 212
    iget-object v0, p0, Lcom/tkay/core/common/f/h;->j:Ljava/lang/String;

    return-object v0
.end method

.method public final r(Ljava/lang/String;)V
    .locals 0

    .line 264
    iput-object p1, p0, Lcom/tkay/core/common/f/h;->p:Ljava/lang/String;

    return-void
.end method

.method public final s()Ljava/lang/String;
    .locals 1

    .line 220
    iget-object v0, p0, Lcom/tkay/core/common/f/h;->k:Ljava/lang/String;

    return-object v0
.end method

.method public final s(Ljava/lang/String;)V
    .locals 0

    .line 272
    iput-object p1, p0, Lcom/tkay/core/common/f/h;->q:Ljava/lang/String;

    return-void
.end method

.method public final t()Ljava/lang/String;
    .locals 1

    .line 228
    iget-object v0, p0, Lcom/tkay/core/common/f/h;->l:Ljava/lang/String;

    return-object v0
.end method

.method public final t(Ljava/lang/String;)V
    .locals 0

    .line 281
    iput-object p1, p0, Lcom/tkay/core/common/f/h;->r:Ljava/lang/String;

    return-void
.end method

.method public final u()Ljava/lang/String;
    .locals 1

    .line 244
    iget-object v0, p0, Lcom/tkay/core/common/f/h;->n:Ljava/lang/String;

    return-object v0
.end method

.method public final u(Ljava/lang/String;)V
    .locals 0

    .line 289
    iput-object p1, p0, Lcom/tkay/core/common/f/h;->s:Ljava/lang/String;

    return-void
.end method

.method public final v()Ljava/lang/String;
    .locals 1

    .line 252
    iget-object v0, p0, Lcom/tkay/core/common/f/h;->o:Ljava/lang/String;

    return-object v0
.end method

.method public final v(Ljava/lang/String;)V
    .locals 0

    .line 297
    iput-object p1, p0, Lcom/tkay/core/common/f/h;->t:Ljava/lang/String;

    return-void
.end method

.method public final w()Ljava/lang/String;
    .locals 1

    .line 260
    iget-object v0, p0, Lcom/tkay/core/common/f/h;->p:Ljava/lang/String;

    return-object v0
.end method

.method public final w(Ljava/lang/String;)V
    .locals 0

    .line 306
    iput-object p1, p0, Lcom/tkay/core/common/f/h;->u:Ljava/lang/String;

    return-void
.end method

.method public final x()Ljava/lang/String;
    .locals 1

    .line 268
    iget-object v0, p0, Lcom/tkay/core/common/f/h;->q:Ljava/lang/String;

    return-object v0
.end method

.method public final x(Ljava/lang/String;)V
    .locals 0

    .line 343
    iput-object p1, p0, Lcom/tkay/core/common/f/h;->A:Ljava/lang/String;

    return-void
.end method

.method public final y()Ljava/lang/String;
    .locals 1

    .line 277
    iget-object v0, p0, Lcom/tkay/core/common/f/h;->r:Ljava/lang/String;

    return-object v0
.end method

.method public final y(Ljava/lang/String;)V
    .locals 0

    .line 354
    iput-object p1, p0, Lcom/tkay/core/common/f/h;->D:Ljava/lang/String;

    return-void
.end method

.method public final z()Ljava/lang/String;
    .locals 1

    .line 285
    iget-object v0, p0, Lcom/tkay/core/common/f/h;->s:Ljava/lang/String;

    return-object v0
.end method

.method public final z(Ljava/lang/String;)V
    .locals 0

    .line 362
    iput-object p1, p0, Lcom/tkay/core/common/f/h;->E:Ljava/lang/String;

    return-void
.end method
